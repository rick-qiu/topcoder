/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1206
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

class Flags {
public:
    long numStripes(string numFlags, vector<string> forbidden);
};

long Flags::numStripes(string numFlags, vector<string> forbidden) {
    long ret;
    return ret;
}


int test0() {
    string numFlags = "10";
    vector<string> forbidden = {"0", "1 2", "1 2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string numFlags = "100";
    vector<string> forbidden = {"0", "1", "2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string numFlags = "93";
    vector<string> forbidden = {"0", "1", "2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string numFlags = "94";
    vector<string> forbidden = {"0", "1", "2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string numFlags = "100000000000000000";
    vector<string> forbidden = {"0", "1"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string numFlags = "100000000000000000";
    vector<string> forbidden = {"0", "1 2", "1 2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string numFlags = "10000000000000000";
    vector<string> forbidden = {"0 1", "0 1", "2 3 4", "2 3 4", "2 3 4"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string numFlags = "10000000000000000";
    vector<string> forbidden = {"0 5 6 7 8 9", "1", "2", "3", "4", "0 5", "0 6", "0 7", "0 8", "0 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string numFlags = "10000000000000000";
    vector<string> forbidden = {"0 1 2 3 4 5 6 7 8 9", "0 1 3 4 5 6 7 8 9", "0 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9", "0 1 2 3 4 5 6 7 8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 4999999999999996;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string numFlags = "14";
    vector<string> forbidden = {"0", "1 2", "1 2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string numFlags = "13";
    vector<string> forbidden = {"0", "1 2", "1 2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string numFlags = "21";
    vector<string> forbidden = {"0", "1 2", "1 2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string numFlags = "22";
    vector<string> forbidden = {"0", "1 2", "1 2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string numFlags = "41";
    vector<string> forbidden = {"0", "1 2", "1 2", "3"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string numFlags = "40";
    vector<string> forbidden = {"0", "1 2", "1 2", "3"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string numFlags = "5";
    vector<string> forbidden = {"0", "1", "2", "3", "4", "5"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string numFlags = "3";
    vector<string> forbidden = {"0", "1", "2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string numFlags = "4";
    vector<string> forbidden = {"0", "1", "2"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string numFlags = "7";
    vector<string> forbidden = {"0", "1", "2", "3", "4", "5"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string numFlags = "6";
    vector<string> forbidden = {"0", "1", "2", "3", "4", "5"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string numFlags = "10";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string numFlags = "11";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string numFlags = "82";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string numFlags = "83";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
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
    string numFlags = "100000000000000000";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string numFlags = "32899482551498534";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string numFlags = "32899482551498535";
    vector<string> forbidden = {"0 1", "0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string numFlags = "10000000000000000";
    vector<string> forbidden = {"0 2 3", "1 2 3", "0 1 2", "0 1 3"};
    Flags* pObj = new Flags();
    clock_t start = clock();
    long result = pObj->numStripes(numFlags, forbidden);
    clock_t end = clock();
    delete pObj;
    long expected = 2500000000000000;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287568&rd=4540&pm=1206
********************************************************************************
#include <vector> 
#include <sstream> 
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdlib> 
#include <queue> 
#include <set> 
#include <map> 
using namespace std; 
typedef long long ll; 
typedef vector<int> vi; typedef vector<vi> vvi; 
typedef vector<string> vs; typedef vector<vs> vvs; 
typedef istringstream iss; typedef ostringstream oss; 
#define pq priority_queue 
#define let(a,b) typeof(b) a(b) 
#define all(a) a.begin(),a.end() 
#define forall(a,b) for (let(a,b.begin());a!=b.end();a++) 
#define forrall(a,b) for (let(a,b.rbegin());a!=b.rend();a++) 
#define contain(a,b) (find(all(a),b)!=a.end()) 
 
class Flags{ 
public: 
long long numStripes(string numFlags, vector <string> forbidden) 
{ 
long long ans; 
ll numf=atoll(numFlags.c_str()); 
int data[20][20],n=forbidden.size(); 
memset(data,0,sizeof(data)); 
for (int i=0;i<forbidden.size();i++) 
{ 
    iss sin(forbidden[i]); 
    int t; 
    while (sin>>t) 
        data[i][t]=data[t][i]=1; 
} 
ll save[2010][20],total[2010]; 
total[1]=0; 
for (int i=0;i<n;i++) 
{ 
    save[1][i]=1; 
    total[1]+=save[1][i]; 
} 
numf-=total[1]; 
if (numf<=0) return 1; 
for (int i=2;i<=2000;i++) 
{ 
    total[i]=0; 
    for (int j=0;j<n;j++) 
    { 
        save[i][j]=0; 
        for (int k=0;k<n;k++) 
            if (!data[k][j]) save[i][j]+=save[i-1][k]; 
        total[i]+=save[i][j]; 
    } 
    numf-=total[i]; 
    if (numf<=0) return i; 
} 
return 2000+(numf+total[2000]-1)/total[2000]; 
} 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/