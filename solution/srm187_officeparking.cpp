/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2400
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

class OfficeParking {
public:
    int spacesUsed(vector<string> events);
};

int OfficeParking::spacesUsed(vector<string> events) {
    int ret;
    return ret;
}


int test0() {
    vector<string> events = {"Alice arrives", "bob arrives", "Alice departs", "Charles arrives", "bob departs", "Charles departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> events = {"AdminBrett arrives", "lbackstrom arrives", "AdminBrett departs", "mike arrives", "TheFaxman arrives", "AdminBrett arrives", "lbackstrom departs", "dok arrives", "AdminBrett departs", "gt arrives", "AdminBrett arrives", "lbackstrom arrives", "AdminBrett departs", "jhughes arrives", "jhughes departs", "TheFaxman departs", "MaryJoe arrives", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> events = {"SnapDragon arrives", "tomek arrives", "JohnDethridge arrives", "ZorbaTHut arrives", "snewman arrives", "reid arrives", "NGBronson arrives", "Yarin arrives", "bstanescu arrives", "mathijs arrives", "radeye arrives", "bladerunner arrives", "dgarthur arrives", "venco arrives", "dmwright arrives", "WishingBone arrives", "Eryx arrives", "antimatter arrives", "ChristopherH arrives", "lars arrives", "biggnate arrives", "JanKuipers arrives", "dary arrives", "haha arrives", "grotmol arrives", "XuChuan arrives", "Ryan arrives", "LunaticFrindge arrives", "Wasteland arrives", "RunningWild arrives", "hampster arrives", "RalphFurmaniak arrives", "kyky arrives", "qubits arrives", "Rustyoldman arrives", "turuthok arrives", "Vulpecular arrives", "Eeyore arrives", "wackes arrives", "Ishan arrives", "dimkadimon arrives", "dplass arrives", "Olorin arrives", "TangentZ arrives", "NeverMore arrives", "Pops arrives", "srowan arrives", "tjq arrives", "vorthys arrives", "schveiguy arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> events = {"AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> events = {"snapdragon arrives", "SnapDragon arrives", "AdminBrett arrives", "AdminBrett departs", "SnapDragon departs", "snapdragon departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> events = {"a arrives", "b arrives", "c arrives", "d arrives", "e arrives", "aa arrives", "ab arrives", "ac arrives", "ad arrives", "ae arrives", "ba arrives", "bb arrives", "bc arrives", "bd arrives", "be arrives", "ca arrives", "cb arrives", "cc arrives", "cd arrives", "ce arrives", "da arrives", "db arrives", "dc arrives", "dd arrives", "de arrives", "ea arrives", "eb arrives", "ec arrives", "ed arrives", "ee arrives", "fa arrives", "fb arrives", "fc arrives", "fd arrives", "fe arrives", "ga arrives", "gb arrives", "gc arrives", "gd arrives", "ge arrives", "ha arrives", "hb arrives", "hc arrives", "hd arrives", "he arrives", "ia arrives", "ib arrives", "ic arrives", "id arrives", "ie arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> events = {"departs arrives", "arrives arrives", "arrives departs", "departs departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> events = {"arrives arrives", "arrives departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> events = {"departs arrives", "departs departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> events = {"snapdragon arrives", "tomek arrives", "snapdragon departs", "tomek departs", "snapdragon arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> events = {"Ukraine arrives", "Ukraine departs", "Ukraine arrives", "bladerunner arrives", "Ukraine departs", "TAG arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> events = {"a arrives", "aa arrives", "aaa arrives", "aa departs", "aaaa arrives", "baa arrives", "aaa departs", "baa departs", "caaaa arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> events = {"a arrives", "aa arrives", "a departs", "a arrives", "aaa arrives", "a departs", "a arrives", "baa arrives", "a departs", "a arrives", "caa arrives", "a departs", "a arrives", "daa arrives", "a departs", "a arrives", "daaf arrives", "a departs", "a arrives", "eaa arrives", "a departs", "a arrives", "faa arrives", "a departs", "a arrives", "gaa arrives", "a departs", "a arrives", "haa arrives", "a departs", "a arrives", "iaa arrives", "a departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> events = {"a arrives", "b arrives", "c arrives", "b departs", "aa arrives", "ba arrives", "ca arrives", "ba departs", "ab arrives", "bb arrives", "cb arrives", "bb departs", "ac arrives", "bc arrives", "cc arrives", "bc departs", "ad arrives", "bd arrives", "cd arrives", "bd departs", "ae arrives", "be arrives", "ce arrives", "be departs", "af arrives", "bf arrives", "cf arrives", "bf departs", "ag arrives", "bg arrives", "cg arrives", "bg departs", "ah arrives", "bh arrives", "ch arrives", "bh departs", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz arrives", "anotherguywithareallyreallyreallylongname arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> events = {};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> events = {"a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs", "a arrives", "b arrives", "c arrives", "a departs", "b departs", "c departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> events = {"arrives arrives", "arrives departs", "departs arrives", "departs departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> events = {"AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives", "AdminBrett departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
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
    vector<string> events = {"AdminBrett arrives", "lbackstrom arrives", "AdminBrett departs", "mike arrives", "TheFaxman arrives", "AdminBrett arrives", "lbackstrom departs", "dok arrives", "AdminBrett departs", "gt arrives", "AdminBrett arrives", "lbackstrom arrives", "AdminBrett departs", "jhughes arrives", "jhughes departs", "TheFaxman departs", "MaryJoe arrives", "AdminBrett arrives", "AdminBrett departs", "AdminBrett arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> events = {"Alice arrives", "bob arrives", "Alice departs", "Charles arrives", "bob departs", "Charles departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> events = {"departs arrives", "arrives arrives", "arrives departs", "departs departs", "someone arrives", "someone departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> events = {};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> events = {"john arrives", "wendy arrives", "empty arrives", "sarah arrives", "empty departs", "jesse arrives", "tom arrives", "empty arrives", "john departs", "wendy departs", "sarah departs", "jesse departs", "tom departs", "empty departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> events = {"abcdarrives arrives", "abcdarrives departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> events = {"arrives arrives", "arrives departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> events = {"k arrives", "arrives arrives", "arrives departs", "t arrives"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> events = {"departs arrives", "arrives arrives", "arrives departs", "departs departs"};
    OfficeParking* pObj = new OfficeParking();
    clock_t start = clock();
    int result = pObj->spacesUsed(events);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8366216&rd=4755&pm=2400
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <iterator>
#include <functional>
using namespace std;
 
///////////////////////////////////////////////////////////* Utility Code *///////////////////////////////////////////////////////////////////////////////////////
 
vector<string> tokenize(string &phrase, const string delims=" ")
{
  vector<string> tokens;
    string ret="";
    int count=0;
    string::size_type beg, end;
    beg=phrase.find_first_not_of(delims);
    while(beg != string::npos)
    {
    tokens.push_back("");
        end=phrase.find_first_of(delims, beg);
     if(end==string::npos)
           end=phrase.length();
       for(int i=beg; i<static_cast<int>(end); ++i)
        {
           tokens[count]+=phrase[i];
        ret+=phrase[i];
        }
        ret+=' ';
      beg=phrase.find_first_not_of(delims, end);
       count++;
    }  
    phrase=ret;
    return tokens;
}
 
string tokenize_string(string &phrase,const string delims) 
 { 
     for(int i=0;i<phrase.size();++i) 
     if(phrase.substr(i,delims.length())==delims) 
          { 
                    phrase.replace(i,delims.length(), ""); 
                    i+=delims.length()-1; 
       } 
        return phrase; 
 }
 
////////////////////////////////////////////////////////* Program Code *//////////////////////////////////////////////////////////////////////////////////
class OfficeParking {
  public:
  int spacesUsed(vector <string> events) {
    vector<string> event;
    int ret=0;
    int a=0;
    for(int i=0;i<events.size();i++)
    {
      event = tokenize(events[i]);
      if(event[1]=="arrives")
        a++;
      if(event[1]=="departs")
        a--;
      if(a>ret)
        ret=a;
    }
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/