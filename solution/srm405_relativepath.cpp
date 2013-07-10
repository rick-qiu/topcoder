/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9760
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

class RelativePath {
public:
    string makeRelative(string path, string currentDir);
};

string RelativePath::makeRelative(string path, string currentDir) {
    string ret;
    return ret;
}


int test0() {
    string path = "/home/top/data/file";
    string currentDir = "/home/user/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../top/data/file";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string path = "/home/user/movies/title";
    string currentDir = "/home/user/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../movies/title";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string path = "/file";
    string currentDir = "/";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "file";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string path = "/a/b/a/b/a/b";
    string currentDir = "/a/b/a/a/b/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../b/a/b";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string path = "/root/root/root";
    string currentDir = "/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "root/root";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string path = "/home/user/file";
    string currentDir = "/home/user/files/me";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../file";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string path = "/home/user/file";
    string currentDir = "/home/user/fi";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../file";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string path = "/home/user/file";
    string currentDir = "/home/user/fil/test";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../file";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string path = "/z";
    string currentDir = "/";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string path = "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/z";
    string currentDir = "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/y";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../z";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string path = "/z/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/y";
    string currentDir = "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/y";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../../../../../../../../../../../../z/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/y";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string path = "/z/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x";
    string currentDir = "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/y";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../../../../../../../../../../../../z/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string path = "/dira/dirb";
    string currentDir = "/";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "dira/dirb";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string path = "/arbimucc/v/xze/w/wl";
    string currentDir = "/qr/b/wu/c/i/u/axxpj/mf/bgpsecnb/el/u/s/nmwpwv/dyf";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../arbimucc/v/xze/w/wl";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string path = "/sdebi/n/u/jsxegszx/z/u/rro/gfo/b/nb/jjj";
    string currentDir = "/sdebi/n/u/jsxegszx/z/u/rro/gfo/b/nb/jj";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../jjj";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string path = "/t/p/z/r/mfulih/f/eek/lsj/e/i/kh/qzm/uf/jxwv/q/fy";
    string currentDir = "/t/p/z/r/mfulih/f/eek/lsj/e/i/kh/qzm/uf/jxw";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../jxwv/q/fy";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string path = "/b/r/pg/t/ysy/bfm/fm/kl";
    string currentDir = "/b/r/pg/t/ysy/bfm/f";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../fm/kl";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string path = "/ckla/uaw/i/vy/rqlwfu/r/oqn/vfqy/w/y/zgu/w/zpduz/d";
    string currentDir = "/ckla/uaw/i/vy/rqlwfu/r/oqn/vfqy/w/y/zgu/w/zpduz";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string path = "/udjp/n/vj/zq/d/p/l/nqgi/kah/mwmmrz";
    string currentDir = "/udjp/n/vj/zq/d/p/l/n/nu/rwyk/x/zat";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../nqgi/kah/mwmmrz";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string path = "/z/aer/bfzg/pgk/nj/qpjyb/yy/f/n/i/xtz/x/gsn/q/i";
    string currentDir = "/z/aer/bfzg/pgk/nj/qpjyb/yy/f/n/i/xtz/x/gsk";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../gsn/q/i";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string path = "/c/afjj/r";
    string currentDir = "/c/afaios/xkipq/gu/xbx/it/gn/d/i/w/cbfm/yzmz/ey";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../afjj/r";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string path = "/txyy/xlj/fk/qbx/d/us/ivor/i/f/usi/x/bana/ygnwp/i";
    string currentDir = "/txyy/xlj/fk/qbx/d/us/ivor/i/f/usi/x/bana/ygnw";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ygnwp/i";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string path = "/nuk/k/kt/f/s";
    string currentDir = "/nuk/k/kt/f/sy/p/d/qazjqq/f/h/vu/v/o/k";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../s";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string path = "/b/a/a/a/b/a/b/b/a/a/b";
    string currentDir = "/b/a/a/a/b/b/a/a/a/a/a/b/a/a/a/a/b/b/a/a/a/b/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../../../../../../a/b/b/a/a/b";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string path = "/b/a/a/a/b/a";
    string currentDir = "/b/a/a/a/b/aa/b/b/b/a/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../a";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string path = "/b/b/b/a/a/a/b/b/a/a/b/b/b/b/a/b/a/a/b/a/a/b/a";
    string currentDir = "/b/b/b/a/a/a/b/b/a/a/b/b/b/b/a/b/a/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/a/b/a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string path = "/a/a/b/a/a/b/b/a/b/b/b/a/a/b";
    string currentDir = "/a/a/b/a/b/a/b/a/b/a/b/a/a/a/a/b/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../a/b/b/a/b/b/b/a/a/b";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string path = "/b/b/a/b/a/a/b/a/b/b/a/a/b/b/a/b/a/b/b/a/a/b/a/b/b";
    string currentDir = "/b/b/a/b/a/a/b/a/b/b/a/a/b/b/a/b/a/b/b/a/a/b/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string path = "/b/b/a/b/a/b";
    string currentDir = "/b/b/a/b/a/ba/a/b/a/b/a/b/a/a/b/b/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../b";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string path = "/b/b/b/a/b/a/b/b/b/a/b/a/a/b/b/a/b/b/b/b/a/a";
    string currentDir = "/b/b/b/a/b/a/b/b/b/a/b/a/a/b/b/a/b/b/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "b/a/a";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string path = "/a/a/a/a/b/a/b/a/b/b/b";
    string currentDir = "/a/a/a/a/b/a/b/a/b/b/ba/a/b/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../b";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string path = "/b/a/a/b/a/b/b/a/b/a/b/a";
    string currentDir = "/b/a/a/b/a/a/b/a/a/b/a/b/b/a/a/b/a/b/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../b/b/a/b/a/b/a";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string path = "/a/a/b/b/a";
    string currentDir = "/a/a/b/b/ab/b/a/b/b/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../a";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string path = "/b/bbb/aa/baa/b/baa/aba/abbbb/a/a";
    string currentDir = "/b/bbb/aa/baa/b/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../baa/aba/abbbb/a/a";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string path = "/b/a/ba/a/b/a/bb/b/b/b/aab/aa/aabab/a/bbbb";
    string currentDir = "/b/a/ba/a/b/a/bb/b/b/b/aab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "aa/aabab/a/bbbb";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string path = "/ba/aaa/ab/bab/a/b/a/aa/babba/aa/ba/a/b";
    string currentDir = "/ba/bb/b/b/bb/b/b/aba/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../aaa/ab/bab/a/b/a/aa/babba/aa/ba/a/b";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string path = "/ba/ba/aa/ab/ab/aa/ba/abb/b/a/b/aa/aab/a/b";
    string currentDir = "/ba/ba/aa/ab/ab/aa/ba/abb/b/a/b/aa/aab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/b";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string path = "/ab/baab/aa/ab/aaba/bbabb/b/abbb/b/b/b/aaa/a/a/bb";
    string currentDir = "/ab/baab/aa/ab/aaba/bbabb/b/abbb/b/b/b/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaa/a/a/bb";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string path = "/abaa/a/a/baaaaa/a/bb/bb/abaabb";
    string currentDir = "/abaa/a/a/baaaaa/a/bb/bb/ab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abaabb";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string path = "/bbba/a/ab/bb/ba";
    string currentDir = "/bbba/a/ab/bb/bab/b/aba";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../ba";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string path = "/b/aaa/aa";
    string currentDir = "/b/aaa/aaabb/a/ba/ab/b/bba/b/b/b/bb/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../aa";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string path = "/b/b/bb/ab/aa/aa/a/bbb/ab/ababb/ab/a/b";
    string currentDir = "/b/b/bb/ab/aa/aa/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "bbb/ab/ababb/ab/a/b";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string path = "/a/aba/b/ab/a/b/baab/a/b/a/baaab/ab/a/a/b/babb";
    string currentDir = "/a/aba/b/a/aa/a/a/ba";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../ab/a/b/baab/a/b/a/baaab/ab/a/a/b/babb";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string path = "/ccbebbbabdceeaaaaedebdceeabbebcdbaeebbbadaedcbbec";
    string currentDir = "/ccbebbbabdceeaaaaedebdceeabbebcdbaeebbbadae";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ccbebbbabdceeaaaaedebdceeabbebcdbaeebbbadaedcbbec";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string path = "/ababbbaabaaaaabbaabaabbabbbbabbbabababbababaa";
    string currentDir = "/ababbbaabaaaaabbaabaabbabbbbabbbabbaabababa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ababbbaabaaaaabbaabaabbabbbbabbbabababbababaa";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string path = "/babaaababbabbbbaababaabaaaabaababaaaabbabbba";
    string currentDir = "/babaaababbabbbbaababaabaaaabaababaaaabbabbbabaa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../babaaababbabbbbaababaabaaaabaababaaaabbabbba";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string path = "/efhaefahgiacgfgdehddidceiieaahaehcicfbdiac";
    string currentDir = "/efhaefahgiacgfgdehddidceiibfiiaedehacbghfhdhdahfb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../efhaefahgiacgfgdehddidceiieaahaehcicfbdiac";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string path = "/ebcdgcfgbebcgfbgegcbeedfa";
    string currentDir = "/ebcdgcfgbebcgfbgeg";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ebcdgcfgbebcgfbgegcbeedfa";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string path = "/gbgdbfdfdcdffcedaddegbbcef";
    string currentDir = "/gbgdbfdfdcdffcedaddegbbcecgabagc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../gbgdbfdfdcdffcedaddegbbcef";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string path = "/abbdbdbbcdebfeffadefeec";
    string currentDir = "/abbdaacadcceefd";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abbdbdbbcdebfeffadefeec";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string path = "/dbbcbadcabdabddccababcdcaccbdcadccdaabcacdbbdd";
    string currentDir = "/dbbcbadcabdabddccababcdcacc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../dbbcbadcabdabddccababcdcaccbdcadccdaabcacdbbdd";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string path = "/aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string currentDir = "/aaaaa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string path = "/jgfabjiebcceiejffihifabdfhj";
    string currentDir = "/jgfabjiebcceiejffihifabdfhjcejjfb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../jgfabjiebcceiejffihifabdfhj";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string path = "/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/aa/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../a";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/a/a";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/a";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/a/a/a/a/a/a/a/a/a";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string path = "/a/a/a/a";
    string currentDir = "/a/a/a/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../a";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../a";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string path = "/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../a";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string path = "/a/a/a/a/a/a/a/a/a/a/a/a/a";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a/a/aa/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../a";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string path = "/aa/aaaa/a/aaaaa/a/a";
    string currentDir = "/aa/aaaa/a/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaaa/a/a";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string path = "/aaaa/a/a/a/a/a/aaaa/aaa/aa/a/aaa/aaaaa/a/a/aaaa";
    string currentDir = "/aaaa/a/a/a/a/a/aaaa/aaa/aa/a/aaa/aaaaa/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/aaaa";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string path = "/a/aa/aaa/a/a/a/a/a/a/a/aaa/aaa/a/aa/aa";
    string currentDir = "/a/aa/aaa/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/a/a/aaa/aaa/a/aa/aa";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string path = "/a/a/aa/aaa/a/a/aaa/aa/a/aa/a/a/a/a";
    string currentDir = "/a/a/aa/aaa/a/a/aaa/aa/a/aa/a/a/aa/aa/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../a/a";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string path = "/aa/a/aa/a/a/a/aa";
    string currentDir = "/aa/a/a/aa/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../aa/a/a/a/aa";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string path = "/aa/a/aa/a/a/a/a/a/aa/aa/aa/a/a/a/aaaa/a/aaa";
    string currentDir = "/aa/a/aa/a/a/a/a/a/aa/aa/aa/a/a/a/aaa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaa/a/aaa";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string path = "/aaaa/a/a/aa/aaaaa/a";
    string currentDir = "/aaaa/a/a/a/aaaa/a/a/aaaa/a/a/aa/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../aa/aaaaa/a";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string path = "/a/a/a/aaaaaa/aaa/aaa/a/aaa/aaa/a/aaa/aaa/aa";
    string currentDir = "/a/a/a/aaaaaa/aaa/aaa/a/aaa/aaa/a/aaa/aaa/aaa/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../aa";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string path = "/a/aa/a/a/a/a/aaaaaaaaaaa/aa/aaaa/a";
    string currentDir = "/a/aa/a/a/a/a/aaaaaaaaaaa/aa/aa/a/a/aa/aaa/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../aaaa/a";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string path = "/a/a/a/a/a/aa/aaaaaa/aaa/a/aaa/aaaaaaa/a";
    string currentDir = "/a/a/a/a/a/aa/aaaaaa/aaa/a/aaa/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaaaaa/a";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string path = "/a/b/c";
    string currentDir = "/a/b/cc/d";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../c";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string path = "/a/b/c";
    string currentDir = "/a/b/cc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../c";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string path = "/hi/hello/how/u";
    string currentDir = "/hi/hello/how/are/you";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../u";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string path = "/rhs/room/root/rooz";
    string currentDir = "/rhs/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../room/root/rooz";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string path = "/a/b/c/sss/sss/sss/file";
    string currentDir = "/a/sss/file";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../b/c/sss/sss/sss/file";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string path = "/abcdef";
    string currentDir = "/abc/ef";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../abcdef";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string path = "/aaa/bb";
    string currentDir = "/aaa/bbbb/aaa/bbbb/aaa/bbbb/aaa/bbbb/aaa/bbbbbbbbb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../bb";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string path = "/home";
    string currentDir = "/ho";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../home";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string path = "/sdf/sdf";
    string currentDir = "/sdf/sdd";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../sdf";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string path = "/a";
    string currentDir = "/ab/c";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../a";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string path = "/adam";
    string currentDir = "/adams";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../adam";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string path = "/aaa/aaa/aaa/aaa";
    string currentDir = "/aaa/aaa/aaa/aaaaa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaa";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string path = "/home/user/pictures/others/she";
    string currentDir = "/others/she";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../home/user/pictures/others/she";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string path = "/ishan/abc";
    string currentDir = "/ishanc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ishan/abc";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string path = "/a/b/b/b/b/b/b/b/b/b/b";
    string currentDir = "/a/a/b/b/b/b/b/b/b/b/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../b/b/b/b/b/b/b/b/b/b";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string path = "/test/t/t/test";
    string currentDir = "/test/test/test/test/test";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../t/t/test";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string path = "/aa";
    string currentDir = "/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aa";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string path = "/rootabc/de";
    string currentDir = "/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../rootabc/de";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string path = "/aa/aaa/aaaa/aaaaac/aa";
    string currentDir = "/aa/aaa/aaaa/aaaaabcd";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaaac/aa";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string path = "/aaaaaaaaaa/bbbbbbb/ccccc";
    string currentDir = "/aaaaaaaa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaaaaaaaa/bbbbbbb/ccccc";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string path = "/r";
    string currentDir = "/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../r";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string path = "/aaa";
    string currentDir = "/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaa";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string path = "/abc/abc";
    string currentDir = "/abcd/abc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../abc/abc";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string path = "/abc/abc";
    string currentDir = "/abc/ab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abc";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string path = "/abc/ddef";
    string currentDir = "/abc/def";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ddef";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string path = "/ishan/abc";
    string currentDir = "/ishancc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ishan/abc";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string path = "/a/b/a/b";
    string currentDir = "/a/c/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../b/a/b";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string path = "/f";
    string currentDir = "/file";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../f";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string path = "/aa/bbb/cc";
    string currentDir = "/aa/bb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../bbb/cc";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string path = "/abcd/c";
    string currentDir = "/abafsf/f";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../abcd/c";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string path = "/dupaztrupa";
    string currentDir = "/dupazszkiel";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../dupaztrupa";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string path = "/a/b/c/d/e/a/b/c/e/f/g/h/i/j/k/r/p/q/s/z/d/q/f/z";
    string currentDir = "/a/b/c/d/e/a/b/c/e/f/g/h/d/o/p/q/a/z/r/l/f/v/b/n";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../i/j/k/r/p/q/s/z/d/q/f/z";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string path = "/home/file/user";
    string currentDir = "/home/fil";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../file/user";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string path = "/abcde";
    string currentDir = "/abefx";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abcde";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string path = "/a/b/a/b/a/b";
    string currentDir = "/b/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../a/b/a/b/a/b";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string path = "/rat/rct";
    string currentDir = "/rat/rbt";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../rct";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string path = "/aaa/qwe/rty";
    string currentDir = "/aaa/qzx/cvb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../qwe/rty";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string path = "/rootabc/root/root";
    string currentDir = "/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../rootabc/root/root";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string path = "/a/bcd/ef";
    string currentDir = "/a/bc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../bcd/ef";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string path = "/ab/cde/gfgf";
    string currentDir = "/ab/cgg/gfgfd/h";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../cde/gfgf";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string path = "/filefile";
    string currentDir = "/file";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../filefile";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string path = "/rootf/z";
    string currentDir = "/root/zxc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../rootf/z";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string path = "/home/top/data/file";
    string currentDir = "/home/topr/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../top/data/file";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string path = "/po/llp";
    string currentDir = "/po/llh/lp/pl";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../llp";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string path = "/a/b/c/d/e/f";
    string currentDir = "/";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "a/b/c/d/e/f";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string path = "/a/b/c/d/e/f/g/h/file";
    string currentDir = "/aaa/c/d/e/f/g/h";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../a/b/c/d/e/f/g/h/file";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string path = "/ab/a/ab/a/b/aab/a";
    string currentDir = "/ab/aab/b/aab/a/ab/a/ab/a/b/aab/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../a/ab/a/b/aab/a";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string path = "/rot";
    string currentDir = "/root/root/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../rot";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string path = "/abc/def/a";
    string currentDir = "/ab/def";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../abc/def/a";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string path = "/a/b/c/aaaaa/a/b/c";
    string currentDir = "/a/b/c/aaabb/a/b/c";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../aaaaa/a/b/c";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string path = "/home/a/b";
    string currentDir = "/hole/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../home/a/b";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string path = "/g/hi/hello";
    string currentDir = "/g/h";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../hi/hello";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string path = "/h/x";
    string currentDir = "/home/user/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../h/x";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string path = "/aa";
    string currentDir = "/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aa";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string path = "/a/bc/d";
    string currentDir = "/a/bd/c";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../bc/d";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string path = "/home/top/data/file";
    string currentDir = "/home/tuser/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../top/data/file";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string path = "/abc/abs";
    string currentDir = "/abc/ab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abs";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string path = "/su/zulo/file";
    string currentDir = "/su/zu";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../zulo/file";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string path = "/ab/a";
    string currentDir = "/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ab/a";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string path = "/a/aa/a";
    string currentDir = "/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../a/aa/a";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string path = "/aab";
    string currentDir = "/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aab";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string path = "/home/user/movies/title";
    string currentDir = "/home/uses/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../user/movies/title";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string path = "/home/home/file";
    string currentDir = "/home/hom";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../home/file";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string path = "/ab/ddg";
    string currentDir = "/ac/ddd";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../ab/ddg";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string path = "/home/cos";
    string currentDir = "/home/coe";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../cos";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string path = "/h";
    string currentDir = "/home/haha";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../h";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string path = "/ab/c";
    string currentDir = "/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ab/c";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string path = "/ab";
    string currentDir = "/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ab";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string path = "/foo/bar/baz";
    string currentDir = "/foo/ba";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../bar/baz";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string path = "/home/use/pictures";
    string currentDir = "/home/user/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../use/pictures";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string path = "/habcdcddddddddddddd";
    string currentDir = "/home/user/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../habcdcddddddddddddd";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string path = "/home/top/data/file";
    string currentDir = "/home/toser/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../top/data/file";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string path = "/root/root/root";
    string currentDir = "/roo";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../root/root/root";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string path = "/a/abc";
    string currentDir = "/a/ab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abc";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string path = "/a/bbb/a/b/a/b";
    string currentDir = "/a/b/a/a/b/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../bbb/a/b/a/b";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string path = "/file/a";
    string currentDir = "/fi";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../file/a";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string path = "/aaaaa";
    string currentDir = "/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../../../../../../../../../../../../../../../../../../../../aaaaa";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string path = "/roota";
    string currentDir = "/rootb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../roota";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string path = "/ahmed";
    string currentDir = "/ahme";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ahmed";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string path = "/aaaaaaaaaac";
    string currentDir = "/aaaaaaaaaab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaaaaaaaac";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string path = "/a/b/c/d/e/f/g/h/file";
    string currentDir = "/a/b/c/d/e/f/g/h";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "file";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string path = "/abc/def";
    string currentDir = "/ab/def";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../abc/def";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string path = "/rooting";
    string currentDir = "/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../rooting";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string path = "/rro/rro";
    string currentDir = "/rro/r";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../rro";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string path = "/aab/a";
    string currentDir = "/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aab/a";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string path = "/a/a/a/a/a";
    string currentDir = "/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../a/a/a/a/a";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string path = "/home/top/data";
    string currentDir = "/home/topper/datahouse";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../top/data";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string path = "/ab/cccdeh/gfgf";
    string currentDir = "/ab/cccgg/gfgfd/h";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../cccdeh/gfgf";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string path = "/hogea/file";
    string currentDir = "/hogeb";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../hogea/file";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string path = "/test/test";
    string currentDir = "/";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "test/test";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string path = "/aaaa";
    string currentDir = "/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaa";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string path = "/dir/aadir";
    string currentDir = "/dir/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aadir";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string path = "/a/b/ccc";
    string currentDir = "/a/b/cccc/ccc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../ccc";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string path = "/abc/a/a/abd";
    string currentDir = "/abc/a/a/abc";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abd";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string path = "/aaa";
    string currentDir = "/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaa";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string path = "/root/a/b/c";
    string currentDir = "/root/alpha/beta/gamma";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../a/b/c";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string path = "/b/a/b/a";
    string currentDir = "/a/b/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../b/a/b/a";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string path = "/home/user/picturesa";
    string currentDir = "/home/user/pictures";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../picturesa";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string path = "/abcz";
    string currentDir = "/abc/abc/home";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../abcz";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string path = "/rooter";
    string currentDir = "/root";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../rooter";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string path = "/ab/abc";
    string currentDir = "/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ab/abc";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string path = "/xxxx";
    string currentDir = "/xx";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../xxxx";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string path = "/roqqxx/bv";
    string currentDir = "/rovvxx/bv";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../roqqxx/bv";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string path = "/file";
    string currentDir = "/a/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../file";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string path = "/ro/ro";
    string currentDir = "/rp";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ro/ro";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string path = "/a/b/c/aaaaa/a/b/c";
    string currentDir = "/a/b/c/aaa/a/b/c";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../aaaaa/a/b/c";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string path = "/aa";
    string currentDir = "/ab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aa";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string path = "/abcz/abc";
    string currentDir = "/abczz/abc/home";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../abcz/abc";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string path = "/ab";
    string currentDir = "/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../ab";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string path = "/abc/abcc";
    string currentDir = "/abcd";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abc/abcc";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string path = "/a/b/cccc";
    string currentDir = "/a/b/c";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../cccc";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string path = "/aa/bb/cc";
    string currentDir = "/aaaa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aa/bb/cc";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string path = "/alma/alma/k";
    string currentDir = "/alma/alfa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../alma/k";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string path = "/cd/cd/dir/pin";
    string currentDir = "/cd/cd/din/pin";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../dir/pin";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string path = "/abcd";
    string currentDir = "/ab";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abcd";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string path = "/a/b/aaab/b/a/b";
    string currentDir = "/a/b/aaaa/a/b/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../../../../../aaab/b/a/b";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string path = "/file";
    string currentDir = "/test";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../file";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string path = "/a/b/abc";
    string currentDir = "/a/b/a";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../abc";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string path = "/a/bcd";
    string currentDir = "/a/b";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../bcd";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string path = "/a/a/aaaa";
    string currentDir = "/a/a/aa";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../aaaa";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string path = "/file/ro/ro";
    string currentDir = "/file/rp";
    RelativePath* pObj = new RelativePath();
    clock_t start = clock();
    string result = pObj->makeRelative(path, currentDir);
    clock_t end = clock();
    delete pObj;
    string expected = "../ro/ro";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22672082&rd=12177&pm=9760
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
vector <string> make(string s) 
{ 
       vector <string> a; int i; 
       a.push_back("/"); 
       string t = ""; 
       for (i = 1; i < s.size(); i++) 
       { 
           if (s[i] == '/') 
           { 
                    a.push_back(t); 
                    t = ""; 
           } else t = t + s[i]; 
            
       } 
       if (t.size() > 0) a.push_back(t); 
        
       return a; 
} 
class RelativePath 
{ public: 
string makeRelative(string s, string cur) 
{ 
       vector <string> a,b; int i,j,k,n,m; 
       a = make(s); 
       b = make(cur); 
        
 
        
 
       string ans = ""; 
              for ( i = 0; i < a.size(); i++) cout<<a[i] <<" "; cout<<endl; 
                     for ( i = 0; i < b.size(); i++) cout<<b[i] <<" "; cout<<endl; 
        
       i = j = 0; 
       while (i < a.size() && i < b.size() && a[i] == b[i]) i++; 
        
       j = b.size() ; 
        
       while (j > i) 
       { 
             j--; 
             ans = ans + "../"; 
       } 
        
       for (j = i; j < a.size(); j++)  
       { 
           ans = ans + a[j]; 
           ans = ans + "/"; 
       } 
        
       if (ans.size() > 1 && ans[ans.size() - 1] == '/') ans.erase(ans.size() -1 , 1); 
        
       return ans; 
} 
};

********************************************************************************
*******************************************************************************/