/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3093
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

class PermissionTree {
public:
    vector<int> findHome(vector<string> folders, vector<string> users);
};

vector<int> PermissionTree::findHome(vector<string> folders, vector<string> users) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> folders = {"0 Admin", "0 Joe,Phil", "0 Joe"};
    vector<string> users = {"Admin", "Joe", "Phil"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> folders = {"0 Admin"};
    vector<string> users = {"Peter", "Paul", "Mary"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> folders = {"0 Admin", "2 John", "0 Peter,John", "0 Tim", "1 John"};
    vector<string> users = {"John"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> folders = {"0 Administrator", "0 Admin"};
    vector<string> users = {"Admin"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> folders = {"0 Admin", "0 Jeff", "1 Mark,Tim", "1 Tim,Jeff", "0 Dan", "4 Ed", "4 Tom", "4 Kyle,Ed", "0 Ben", "8 Rich", "8 Sam", "8 Tim"};
    vector<string> users = {"Jeff", "Ed", "Tim", "Steve"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 0, -1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> folders = {"0 Admin", "0 Bob,Joe,Bob", "0 Joe"};
    vector<string> users = {"Joe", "Bob"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> folders = {"0 Root", "00 Test", "001 A", "000 B", "00002 A,B,C"};
    vector<string> users = {"A", "B", "C"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> folders = {"0 Admin", "0 Bob,Joe,Bob", "0 Joe"};
    vector<string> users = {"Joe", "Bob"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> folders = {"0 Admin"};
    vector<string> users = {"Peter", "Paul", "Mary"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> folders = {"0 Admin", "0 Jeff", "1 Mark,Tim", "1 Tim,Jeff", "0 Dan", "4 Ed", "4 Tom", "4 Kyle,Ed", "0 Ben", "8 Rich", "8 Sam", "8 Tim"};
    vector<string> users = {"Jeff", "Ed", "Tim", "Steve"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 0, -1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> folders = {"0 Admin", "0 A", "0 AB", "0 B"};
    vector<string> users = {"A", "B"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> folders = {"0 Admin", "0 Joe,Phil", "0 Joe"};
    vector<string> users = {"Admin", "Joe", "Phil"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> folders = {"0 Admin", "8 b", "10 c", "10 e", "10 e", "9 e", "8 e", "8 e", "0 a", "0 a", "0 a", "4 c,d", "1 b,d", "4 d", "1 d", "4 d", "1 d", "3 d", "3 c,d", "3 c,d", "6 d", "6 d", "6 b,d"};
    vector<string> users = {"Admin", "a", "b", "c", "d"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 8, 10, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> folders = {"0 Adam", "0 Joe,Phil", "0 Joe", "0 Joe,Phil,Adam,Admin"};
    vector<string> users = {"Admin", "Joe", "Phil", "Adam"};
    PermissionTree* pObj = new PermissionTree();
    clock_t start = clock();
    vector<int> result = pObj->findHome(folders, users);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=303448&rd=5864&pm=3093
********************************************************************************
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <iostream>
#include <sstream>
 
using namespace std;
 
#define ll long long
#define debug(x) cout << #x << ": " << x << "\n";
 
#define max(x, y) x>?y
#define min(x, y) x<?y
 
#define pb(x)  push_back(x)
#define sz  size()
#define cstr  c_str()
 
#define FOR(i,end) for(int i=0; i<end; i++)
#define RFOR(i,begin) for(int i=(begin)-1; i>=0; i--)
#define FE(v,it) for(typeof(v.begin()) it=v.begin(); it != v.end(); it++)
#define PRINT(v) {cout<<"---\n"; FE(v,it){cout<<*it<<"\n";}}
 
#define FIND(v, x) (v.find(x) != v.end())
#define FINDS(s, c) (s.find(c) != string::npos)
#define SORT(v) sort(v.begin(), v.end())
#define SUBTO(s, c) (s.substr(0, s.find(c)))
#define SUBFROM(s, c) (s.substr(s.find(c)+1, s.sz))
 
const double eps=1E-10;
 
#define LETTER(c) (c>='a'&&c<='z' || c>='A'&&c<='Z')
#define DIGIT(c) (c>='0'&&c<='9')
#define NOTDIGIT(c) (!(c>='0'&&c<='9'))
 
#define SUM(v,sum) FOR(i, v.sz){sum+=v[i];}
#define PROD(v,prod) FOR(i, v.sz){prod*=v[i];}
#define MIN(v, min) FOR(i, v.sz){min=min<?v[i];}
#define MAX(v, max) FOR(i, v.sz){max=max>?v[i];}
 
//#define INF 2000000
 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class PermissionTree 
{
public:
  vector <int> findHome(vector <string> folders, vector <string> users);
  
 
};
int atoi(string s)
{
  int res;
  sscanf(s.c_str(),"%d",&res);  
  return res;
}
 
vector <string> split (string as, string delim=" ")
{  
  vector <string> res;
  string s="";
  for(int i=0; i<as.size(); i++)
  {    
    if(!FINDS(delim, as[i])) s+=as[i];
    else if(s!="") {res.push_back(s); s="";};
  }    
  if(s!="") res.push_back(s);
  
  return res;    
}
 
map <int, int> m;
 
int findparent(int x1, int x2)
{
  vector <int> st;
  while(x1!=0)
  {
    st.pb(x1);
    x1=m[x1];
  }
  
  while(x2!=0)
  {
    FOR(i, st.sz)
    {
      if(st[i]==x2) return x2;
    }
    
    x2=m[x2];
  }
  
  return 0;
}
 
vector <int> PermissionTree::findHome(vector <string> fold, vector <string> users)
{
  
 
map <string, int> mm;
FOR(i, fold.sz)
{
  vector <string> vs=split(fold[i]);
  int par=atoi(vs[0]);
  m[i]=par;
}
FOR(i, fold.sz)
{
  vector <string> vs=split(fold[i]);
  vector <string> names=split(vs[1], ",");
  
  FOR(j, names.sz)
  {
    if(!FIND(mm, names[j])) mm[names[j]]=i;
    else
    {
      mm[names[j]]=findparent(i, mm[names[j]]);
    }
    
  }
}
 
vector <int> res;
FOR(i, users.sz)
{
  if(!FIND(mm, users[i])) res.pb(-1);
  else
    res.pb(mm[users[i]]);
}
 
return res;
 
}//end
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/