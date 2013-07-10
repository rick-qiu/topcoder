/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1914
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

class Animation {
public:
    vector<string> animate(int speed, string init);
};

vector<string> Animation::animate(int speed, string init) {
    vector<string> ret;
    return ret;
}


int test0() {
    int speed = 2;
    string init = "..R....";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..X....", "....X..", "......X", "......."};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int speed = 3;
    string init = "RR..LRL";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX..XXX", ".X.XX..", "X.....X", "......."};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int speed = 2;
    string init = "LRLR.LRLR";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX.XXXX", "X..X.X..X", ".X.X.X.X.", ".X.....X.", "........."};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int speed = 10;
    string init = "RLRLRLRLRL";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXX", ".........."};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int speed = 1;
    string init = "...";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..."};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int speed = 8;
    string init = "..........";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........."};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int speed = 1;
    string init = "RRRRRRRRRRRRRRRRRRRR";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXX", "..XXXXXXXXXXXXXXXXXX", "...XXXXXXXXXXXXXXXXX", "....XXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXX", "......XXXXXXXXXXXXXX", ".......XXXXXXXXXXXXX", "........XXXXXXXXXXXX", ".........XXXXXXXXXXX", "..........XXXXXXXXXX", "...........XXXXXXXXX", "............XXXXXXXX", ".............XXXXXXX", "..............XXXXXX", "...............XXXXX", "................XXXX", ".................XXX", "..................XX", "...................X", "...................."};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int speed = 2;
    string init = "LR.LR.LR.LR.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX.XX.XX.X", ".X.XX.XX.XX.X", "..X..X..X..X.", "X..X..XX..X..", ".X..X....X..X", "..X........X.", "X............", "............."};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int speed = 1;
    string init = "LR.LR.LR.LR.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX.XX.XX.X", "..X..X..X..X.", ".X.XX.XX.XX.X", "X..XX.XX.XX..", "..X..X..X..X.", ".X..X.XX.X..X", "X..X..XX..X..", "..X..X..X..X.", ".X..X....X..X", "X..X......X..", "..X........X.", ".X..........X", "X............", "............."};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int speed = 3;
    string init = "LR.LR.LR.LR.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX.XX.XX.X", "X..XX.XX.XX..", "X..X..XX..X..", "X..X......X..", "X............", "............."};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int speed = 4;
    string init = "LR.LR.LR.LR.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX.XX.XX.X", "..X..X..X..X.", ".X..X....X..X", "X............", "............."};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int speed = 5;
    string init = "LR.LR.LR.LR.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX.XX.XX.X", ".X..X.XX.X..X", "..X........X.", "............."};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int speed = 10;
    string init = "LR.LR.LR.LR.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX.XX.XX.X", "..X........X.", "............."};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int speed = 1;
    string init = "RRRLLL...";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXX...", ".XXXX....", ".XXXX....", "XXXXXX...", "XX..XXX..", "X....XXX.", "......XXX", ".......XX", "........X", "........."};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int speed = 2;
    string init = "RRRLLL...";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXX...", ".XXXX....", "XX..XXX..", "......XXX", "........X", "........."};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int speed = 2;
    string init = "..................................................";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................................."};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int speed = 1;
    string init = "................................................R.";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................................X.", ".................................................X", ".................................................."};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int speed = 3;
    string init = "LRRL.LR.LRR.R.LRRL.";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX.XX.XXX.X.XXXX.", "X.X.XX...X.XXXXX..X", "..X....XX..XX..XX.X", ".....X..X.XX...X..X", "..X..X.......XX...X", "..X.............XX.", "..................."};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int speed = 6;
    string init = "LRRL.LR.LRR.R.LRRL.";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX.XX.XXX.X.XXXX.", "..X....XX..XX..XX.X", "..X..X.......XX...X", "..................."};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int speed = 7;
    string init = "LRRL.LR.LRR.R.LRRL.";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX.XX.XXX.X.XXXX.", ".X.....XXXX..X..XX.", "X..X...........XX..", "..................."};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int speed = 1;
    string init = "LRRL.LR.LRR.R.LRRL.";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX.XX.XXX.X.XXXX.", "..XXX..X..XX.X..XX.", ".X.XX.X.X..XX.XX.XX", "X.X.XX...X.XXXXX..X", ".X..XXX...X..XX.X..", "X..X..XX.X.XX.XX.X.", "..X....XX..XX..XX.X", ".X.....XXXX..X..XX.", "X.....X..XX...X..XX", ".....X..X.XX...X..X", "....X..X...XX...X..", "...X..X.....XX...X.", "..X..X.......XX...X", ".X..X.........XX...", "X..X...........XX..", "..X.............XX.", ".X...............XX", "X.................X", "..................."};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int speed = 1;
    string init = "R.L";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X.X", ".X.", "X.X", "..."};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int speed = 1;
    string init = "LRRL.LR.LRR.R.LRRL.";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX.XX.XXX.X.XXXX.", "..XXX..X..XX.X..XX.", ".X.XX.X.X..XX.XX.XX", "X.X.XX...X.XXXXX..X", ".X..XXX...X..XX.X..", "X..X..XX.X.XX.XX.X.", "..X....XX..XX..XX.X", ".X.....XXXX..X..XX.", "X.....X..XX...X..XX", ".....X..X.XX...X..X", "....X..X...XX...X..", "...X..X.....XX...X.", "..X..X.......XX...X", ".X..X.........XX...", "X..X...........XX..", "..X.............XX.", ".X...............XX", "X.................X", "..................."};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int speed = 1;
    string init = "...";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..."};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int speed = 5;
    string init = "LR";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX", ".."};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int speed = 1;
    string init = "RRLL..RRLL";
    Animation* pObj = new Animation();
    clock_t start = clock();
    vector<string> result = pObj->animate(speed, init);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX..XXXX", ".XX....XX.", "XXXX..XXXX", "X..XXXX..X", "....XX....", "...XXXX...", "..XX..XX..", ".XX....XX.", "XX......XX", "X........X", ".........."};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4640&pm=1914
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
 
class Animation { 
  public: 
  vector <string> animate(int speed, string init) { 
    string left; 
    string right; 
    for( int i = 0; i < init.size(); i++ ) { 
      switch( init[ i ] ) { 
      case '.': 
        left += '.'; 
        right += '.'; 
        break; 
      case 'R': 
        left += '.'; 
        right += 'X'; 
        break; 
      case 'L': 
        left += 'X'; 
        right += '.'; 
        break; 
      } 
    } 
    vector< string > oot; 
    while( 1 ) { 
      string merg; 
      for( int i = 0; i < left.size(); i++ ) { 
        if( left[ i ] != '.' || right[ i ] != '.' ) 
          merg += 'X'; 
          else 
          merg += '.'; 
      }; 
      oot.push_back( merg ); 
      for( int i = 0; i < speed; i++ ) { 
        left.erase( left.begin() ); 
        left += '.'; 
        right.erase( right.end() - 1 ); 
        right = '.' + right; 
      }; 
      if( count( merg.begin(), merg.end(), 'X' ) == 0 ) 
        break; 
    } 
    return oot; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/