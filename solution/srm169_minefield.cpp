/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1877
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

class MineField {
public:
    vector<string> getMineField(string mineLocations);
};

vector<string> MineField::getMineField(string mineLocations) {
    vector<string> ret;
    return ret;
}


int test0() {
    string mineLocations = "(0;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M20000000", "M30000000", "M30000000", "M30000000", "M20000000", "110000000", "000000000", "000000000", "000000000"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string mineLocations = "(0;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M1000001M", "110000011", "000000000", "000000000", "000000000", "000000000", "000000000", "110000011", "M1000001M"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string mineLocations = "(3;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000000000", "000000000", "012321000", "02MMM2000", "03M8M3000", "02MMM2111", "0124321M1", "0001M1111", "000111000"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string mineLocations = "";
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string mineLocations = "(6;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"110011100", "M1001M100", "110011100", "000111000", "0002M2000", "1114M4121", "M11MM3M2M", "112332121", "001M10000"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string mineLocations = "(0;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MM11M1000", "221111000", "000000000", "000000011", "00000001M", "000111011", "2322M2221", "MMM212MM1", "232101221"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string mineLocations = "(0;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1101MM21M", "M1124M211", "111M21100", "122210000", "M2M100000", "121100011", "00000001M", "111000011", "1M1000000"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string mineLocations = "(5;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M10000000", "110000000", "111000000", "2M1000000", "M32100000", "12M111211", "12111M2M1", "M21011211", "2M1000000"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string mineLocations = "(6;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01M100000", "121100000", "M22321000", "12MMM1000", "023421000", "01M100111", "0111001M1", "000001221", "000001M10"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string mineLocations = "(0;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1MM101110", "233212M10", "1M23M3121", "12M3M201M", "011211011", "000000000", "000000000", "001121100", "001M2M100"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string mineLocations = "(3;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000112M1", "00001M321", "000124M20", "0001M4M30", "000224M20", "0001M3220", "001222M10", "001M11121", "00111001M"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string mineLocations = "(2;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000000000", "000000111", "0000001M2", "00112122M", "001M2M111", "001132200", "00001M100", "000011211", "0000001M1"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string mineLocations = "(1;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0001M3M10", "11012M321", "M211112M1", "12M100111", "011111100", "00001M210", "000012M10", "000123210", "0001MM100"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string mineLocations = "(2;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000001M1", "000111111", "0002M3100", "0014MM100", "001MM3100", "001222110", "000001M10", "000001110", "000000000"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string mineLocations = "(7;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001M100", "000011100", "110000011", "M2221001M", "13MM10011", "02M420000", "012M11110", "001111M10", "000001110"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string mineLocations = "(7;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000000000", "000000000", "000000000", "000000000", "001110000", "113M20000", "2M5M52111", "2M4MMM11M", "112232111"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string mineLocations = "(4;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001M211", "0122212M1", "02MM21111", "02M6M2000", "023MM3100", "01M33M100", "011111100", "000000000", "000000000"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string mineLocations = "(4;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000000000", "012211232", "01MM12MMM", "123213M7M", "1M1002MM2", "111001221", "000000000", "000000000", "000000000"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string mineLocations = "(1;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0001M3321", "00013MMM3", "00003M8MM", "00002MMM3", "000012321", "000000000", "000000000", "000000000", "000000000"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string mineLocations = "(0;
    MineField* pObj = new MineField();
    clock_t start = clock();
    vector<string> result = pObj->getMineField(mineLocations);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M1000001M", "110000011", "000000000", "000000000", "000000000", "000000000", "000000000", "110000011", "M1000001M"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4650&pm=1877
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
 
using namespace std; 
 
vector< string > tokenize( string in, string kar ) { 
  string::iterator cp = in.begin(); 
  vector< string > oot; 
  while( cp != in.end() ) { 
    while( cp != in.end() && count( kar.begin(), kar.end(), *cp ) ) 
      cp++; 
    if( cp != in.end() ) 
      oot.push_back( string( cp, find_first_of( cp, in.end(), kar.begin(), kar.end() ) ) ); 
    cp = find_first_of( cp, in.end(), kar.begin(), kar.end() ); 
  }; 
  return oot; 
}; 
 
vector< int > sti( const vector< string > &foo ) { 
  int i; 
  vector< int > bar; 
  for( i = 0; i < foo.size(); i++ ) { 
    bar.push_back( atoi( foo[ i ].c_str() ) ); 
  } 
  return bar; 
}; 
 
class MineField { 
  public: 
  vector <string> getMineField(string mineLocations) { 
    vector< int > ml = sti( tokenize( mineLocations, "(,)" ) ); 
    vector< string > malk( 9, "000000000" ); 
    for( int i = 0; i < ml.size(); i += 2 ) { 
      swap( ml[ i ], ml[ i + 1 ] ); 
      malk[ ml[ i + 1 ] ][ ml[ i ] ] = 'M'; 
      for( int y = ml[ i + 1 ] - 1; y <= ml[ i + 1 ] + 1; y++ ) { 
        for( int x = ml[ i ] - 1; x <= ml[ i ] + 1; x++ ) { 
          if( x < 0 || y < 0 || x >= 9 || y >= 9 ) 
            continue; 
          if( malk[ y ][ x ] != 'M' ) 
            malk[ y ][ x ]++; 
        } 
      } 
    } 
    return malk; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/