/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3037
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

class Thesaurus {
public:
    vector<string> edit(vector<string> entry);
};

vector<string> Thesaurus::edit(vector<string> entry) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> entry = {"ape monkey wrench", "wrench twist strain"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ape monkey wrench", "strain twist wrench"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> entry = {"ape monkey wrench", "wrench twist strain", "monkey twist frugue"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ape monkey wrench", "frugue monkey twist", "strain twist wrench"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> entry = {"ape monkey wrench", "wrench twist strain", "monkey twist frugue strain"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ape frugue monkey strain twist wrench"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> entry = {"a"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> entry = {"c b a", "a b c", "c d", "d e", "e d b"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b c", "b d e", "c d"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> entry = {"point run score", "point dot", "cut run tear score", "cut valley", "cute pretty"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cut point run score tear", "cut valley", "cute pretty", "dot point"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> entry = {"a b c", "d e f", "g h i", "b g c e f"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b c d e f g", "g h i"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> entry = {"d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g", "d o u g"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d g o u"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> entry = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "a z", "b c bob", "tom x k", "a z"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b bob c d e f g h i j k l m n o p q r s t tom u v w x y", "a z"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> entry = {"asdladkljfhafakjhfdsakadslksdakfadslkhdah a", "afdsakjfhdsafsakasddsf"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a asdladkljfhafakjhfdsakadslksdakfadslkhdah", "afdsakjfhdsafsakasddsf"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> entry = {"a b x", "h z x", "k l m", "h a t", "x t a"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b h t x z", "k l m"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> entry = {"a aa aaa aaaa", "aaaaa aaa a", "aa aaaaaa"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a aa aaa aaaa aaaaa", "aa aaaaaa"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> entry = {"abc cba bac", "abc cab acb"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc acb cab", "abc bac cba"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> entry = {"bob tom joe cal", "tom tim eve jed", "jed dj jd bob"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bob cal joe tom", "bob dj jd jed", "eve jed tim tom"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> entry = {"all every many lots", "lots parcels estates grounds", "grounds"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"all every lots many", "estates grounds lots parcels", "grounds"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> entry = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "z aa bb cc dd ee ff gg hh ii jj kk ll mm nn oo at", "z pp qq rr ss tt uu vv ww xx yy zz aa tr rt op po", "this is a test whee hehehehehehehehhehehehheheheh", "test abcdefghijklmnopqrstuvwxyz x z ppppppppppppp", "hehehhehehehehehhehehhehehhhhheheh mpmpmpmpmpmpmp", "tt rrrrrrrrrrrrrrrrrrrr sssssssssssssss ssssssssss", "lllllll llllllll llllllllz lllllllll pppppppppppp", "aa nn dd a b test mmmmmmmmmmmmmmmmmmmmmmmmmm yyyyy", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz zzzzzzz", "a d c o p m n r e at oo test rrrrrrrrrr rrrrrrrrr", "yyyyyyyyyyyyyyyyy yyyyyyyyyyyyyy yyyyyyy yyy y at", "ab ba ca ac tj jt lm ml no on er re qw wq tr rt yu", "uy cv vc zx xz sa as ks sk md dm pz zp cp at test", "xp px pc cp gt tg yh hy jy yj ki ik po lm nb bn", "vb bv xe ex bbbbbbbbbbbbbb nnnnnnnnnnnn oooooooooo", "slkfjsl lskfjdlsk oitporit aslkfjsldk ncnsjlkfs aa", "tirutoi reoiuksldf slkdjfls calskdfj slkdfj eeeeee", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "yyyy mmmm wwww llll eeee qqqq aaaa vvvv cccc rrrrr", "la al mc cm zx xm mx re tr yr ur ir or pr fd df gh", "ffffffffff nnnnnnnn ooooooooo kkkkkkkkk jjjjjjjjjj", "wwwwweeeeeeeee ewwwwwwwweweweewew eeeeeeeeeee aaaa", "aa b c d e f g h i j k l m n o p q r ss u v w x y", "bbbbbbbbbbbbbbbbb vvvvvvvvvvvvvvv eeeeeeeee aaaaaa", "z aa bb cc dd ee ff gg hh ii jj kk ll mm nn zz at", "c cc qq rr ss tt uu vv ww xx yy w aa tr rt op po", "qwerty qwertp qwertyy qwertya qwertyb qwertyn mmmk", "hhhhhhhhhhhhhhh hhhhhhhhhhhhhhhhhhhhhhhh fffffffff", "f ff gg cc dd ee re ta hh ii jj kk ll mm lk ok at", "y uu gg jh dd nv re ta hh hj yy kk ll mm lk ok at", "q qq jn oc dd ee co ta hh ii jj kk ll nj lk ok b", "z hg gh cc cx ee ff iy hh ii jj kk ll mm yi lj at", "t ty bb yw dd yt ff rr hh hy yh df fd as sa oo at", "ppppppppppppppppppppwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "mnmnmnmnmnm nmnmnmnmnmnm nnnmnmnmnmnm mnmnmmmmnmn", "z b a e p o l mm ee tt fffg gg hj jh lk kl mmmmm", "pppp rere erer u z c v j k l m w r q d f g test", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa z", "gggggggg uuuuuuuuuuuuuuu pppppppp rrrrrrrrrrrrrrr", "slfk slkd xzmc pewir skdf alskd hdfkj whekj sd ds", "ds n m k pp rr tt ss zz xx aa ww qq qqqq ffff lklk", "pipopppipo lskjflks rueyreu wtewyet w s a z f d h", "pw wp re er tr rt yg gy br rb vd dv sc cs as sa qa", "aq mz zm yu hg bf dv sm ls kd sv cu yhf sgd ldf t", "m n o p q r s t u v w x y z aa bb cc dd ee ff gg h", "gg hh ii jj kk ll tt uu vv ww xx yy zz aa ki ik", "po lm nb d e f g h i j k l m n o p q r s t u v w a", "px pc cp gt tg yh hy jy yj ki d e f g h i v w x y", "ab ba ca ac tj jt lm ml no on er re qw wq tr rt yy"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a aa ab abcdefghijklmnopqrstuvwxyz ac al aq as at b ba bb bf bn br c ca cc cm co cp cs cu cv cx d dd df dm ds dv e ee er erer f fd ff ffff fffg g gg gh gt gy h hehehehehehehehhehehehheheheh hg hh hj hy i ii ik ir is iy j jh jj jn jt jy k kd ki kk kl ks l la ldf lj lk lklk ll lm ls lskjflks m mc md ml mm mmmmm mmmmmmmmmmmmmmmmmmmmmmmmmm mx mz n nb nj nn no nv o oc ok on oo op or p pc pipopppipo po pp pppp ppppppppppppp pr pw px pz q qa qq qqqq qw r rb re rere rr rrrrrrrrr rrrrrrrrrr rt rueyreu s sa sc sgd sk sm ss sv t ta test tg this tj tr tt ty u ur uu uy v vc vd vv w whee wp wq wtewyet ww x xm xp xx xz y yg yh yhf yi yj yr yt yu yw yy yyy yyyyy yyyyyyy yyyyyyyyyyyyyy yyyyyyyyyyyyyyyyy z zm zp zx zz", "aa aslkfjsldk lskfjdlsk ncnsjlkfs oitporit slkfjsl", "aaaa cccc eeee llll mmmm qqqq rrrrr vvvv wwww yyyy", "aaaa eeeeeeeeeee ewwwwwwwweweweewew wwwwweeeeeeeee", "aaaaaa bbbbbbbbbbbbbbbbb eeeeeeeee vvvvvvvvvvvvvvv", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa z", "alskd ds hdfkj pewir sd skdf slfk slkd whekj xzmc", "bbbbbbbbbbbbbb bv ex nnnnnnnnnnnn oooooooooo vb xe", "calskdfj eeeeee reoiuksldf slkdfj slkdjfls tirutoi", "fffffffff hhhhhhhhhhhhhhh hhhhhhhhhhhhhhhhhhhhhhhh", "ffffffffff jjjjjjjjjj kkkkkkkkk nnnnnnnn ooooooooo", "gggggggg pppppppp rrrrrrrrrrrrrrr uuuuuuuuuuuuuuu", "hehehhehehehehehhehehhehehhhhheheh mpmpmpmpmpmpmp", "lllllll llllllll lllllllll llllllllz pppppppppppp", "mmmk qwertp qwerty qwertya qwertyb qwertyn qwertyy", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mnmnmmmmnmn mnmnmnmnmnm nmnmnmnmnmnm nnnmnmnmnmnm", "ppppppppppppppppppppwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "rrrrrrrrrrrrrrrrrrrr ssssssssss sssssssssssssss tt", "zzzzzzz zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> entry = {"ape monkey wrench", "wrench twist strain", "monkey twist frugue strain"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ape frugue monkey strain twist wrench"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> entry = {"a b", "b c", "c d", "d a", "aa", "aaa", "da"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b", "a d", "aa", "aaa", "b c", "c d", "da"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> entry = {"a aa aaa", "a aaa", "aa aaa", "a aa aaaa", "aaaa", "a"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "a aa aaa aaaa", "aaaa"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> entry = {"a", "a"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "a"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> entry = {"abc def ghi", "abc def", "abc efg hui"};
    Thesaurus* pObj = new Thesaurus();
    clock_t start = clock();
    vector<string> result = pObj->edit(entry);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc def ghi", "abc efg hui"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8527113&rd=5861&pm=3037
********************************************************************************
#include <algorithm> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <limits> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
#define VAR(i,e) __typeof(e) i = (e) 
#define FOREACH(i,___C) for (VAR(i, (___C).begin()); i != (___C).end(); ++i) 
 
#define ALL(___C) (___C).begin(), (___C).end() 
#define UNIQUE(v) v.erase(unique(ALL(v)), v.end()) 
 
/* LIBRARY */ 
 
/* DEF START SUM */ 
template<typename ___C> 
int SUM(const ___C & c){ 
        return accumulate(ALL(c), 0); 
} 
/* DEF END SUM */ 
 
/* DEF START MIN */ 
template<typename ___C> 
int MIN(const ___C & c){ 
        return *min_element(ALL(c)); 
} 
/* DEF END MIN */ 
 
 
/* DEF START MAX */ 
template<typename ___C> 
int MAX(const ___C & c){ 
        return *max_element(ALL(c)); 
} 
/* DEF END MAX */ 
 
/* DEF START DEBUG */ 
template <typename ___C> 
void DEBUG(const ___C & c, const string & beg = "", const string & delim = " "){ 
        cout << beg; 
        FOREACH(it, c)cout << *it << delim; 
        cout << endl; 
} 
/* DEF END DEBUG */ 
 
#define ISL(x) ((x >= 'a' && x <= 'z') || (x >= 'A' &&x <= 'Z')) 
#define FOR(a,b,c) for(int a = b; a < c; ++a) 
#define FORI(p, x) for(int i = p; i < x; ++i) 
#define FORJ(p, x) for(int j = p; j < x; ++j) 
#define FORK(p, x) for(int k = p; k < x; ++k) 
#define FORL(p, x) for(int l = p; l < x; ++l) 
#define PB push_back 
#define MP make_pair 
#define X first 
#define Y second 
#define S size() 
 
#define C cout 
#define LL long long 
#define ISS istringstream 
#define OSS ostringstream 
#define VI vector<int> 
#define VVI vector<vector<int> > 
#define VS vector<string> 
#define VD vector<double> 
#define VVD vector<vector<double> > 
#define VVS vector<vector<string> > 
#define SI set<int> 
#define SS set<string> 
#define SVI set<vector<int> > 
#define SVD set<vector<double> > 
#define SVS set<vector<string> > 
 
#define INF numeric_limits<int>::max() 
#define MINF numeric_limits<int>::min() 
 
/* DEF START MAP */ 
#define MAP(CONTAINER, CTYPE, NAME, SOURCE, FUN) \ 
CONTAINER<CTYPE> NAME;\ 
{\ 
        vector<CTYPE> ___map_tmp_helper;\ 
        FOREACH(___it, SOURCE){\ 
                ___map_tmp_helper.push_back(FUN);\ 
        }\ 
        NAME = CONTAINER<CTYPE>(ALL(___map_tmp_helper));\ 
} 
/* DEF END MAP */ 
 
/* DEF START REMAP */ 
#define REMAP(NAME, SOURCE, FUN) \ 
{\ 
        typedef __typeof(NAME) ___NAME_TYPE;\ 
        vector<___NAME_TYPE::value_type> ___map_tmp_helper;\ 
        FOREACH(___it, SOURCE){\ 
                ___map_tmp_helper.push_back(FUN);\ 
        }\ 
        NAME = __typeof(NAME)(ALL(___map_tmp_helper));\ 
} 
/* DEF END REMAP */ 
 
/* DEF START CAST */ 
template<typename ___T1, typename ___T2> 
___T1 CAST(___T2 t2){ 
        OSS oss; 
        oss << t2; 
        ISS iss(oss.str()); 
        ___T1 t1; 
        iss >> t1; 
        return t1; 
} 
/* DEF END CAST */ 
 
/* DEF START CAST */ 
template<typename ___C1, typename ___C2, typename ___T1, typename ___T2> 
___C1 CAST(___C2 c2, ___T1 (* fun) (___T2)){ 
        ___C1 c1; 
        transform(ALL(c2), back_inserter(c1), fun); 
        return c1; 
} 
/* DEF END CAST */ 
 
/* DEF START tokenize */ 
VS tokenize(string s, string delim = " "){ 
        VS vs; 
        if(s.S == 0)return vs; 
        int beg = 0; 
        while(true){ 
                int end = s.find(delim, beg); 
                vs.PB(s.substr(beg, end - beg)); 
                if(end == string::npos)return vs; 
                beg = end + 1; 
        } 
} 
/* DEF END tokenize */ 
 
/* DEF START gcd */ 
template<typename ___T> 
___T gcd(___T t1, ___T t2){ 
        while(t2 > 0){ 
                ___T t = t2; 
                t2 = t1 % t2; 
                t1 = t; 
        } 
        return t1; 
} 
/* DEF END gcd */ 
 
/* MAIN CODE */ 
 
 
class Thesaurus{ 
public: 
 
bool match(const set<string> & s1, const set<string> & s2){ 
  set<string> s; 
  FOREACH(it, s1)if(s2.find(*it) != s2.end())s.insert(*it); 
  return (s.S > 1); 
} 
 
void unify(set<string> & s1, set<string> & s2){ 
  FOREACH(it, s2) 
    s1.insert(*it); 
  s2 = set<string>(); 
} 
 
vector <string> edit(vector <string> entry){ 
  vector<set<string> > vss; 
  FOREACH(it, entry){ 
    VS vs = tokenize(*it); 
    vss.PB(set<string>(vs.begin(), vs.end())); 
  } 
 
  bool progress = true; 
 
  while(progress){ 
    progress = false; 
    FORI(0, vss.S){ 
      FORJ(0, vss.S){ 
        if(i == j)continue; 
        if(match(vss[i], vss[j])){ 
          unify(vss[i], vss[j]); 
          progress = true; 
          break; 
        } 
      } 
      if(progress)break; 
    } 
  } 
  sort(ALL(vss)); 
  VS res; 
  FOREACH(it, vss){ 
    if(it -> empty())continue; 
    OSS oss; 
    bool space = false; 
    FOREACH(jt, *it){ 
      if(space)oss << ' '; 
      space = true; 
      oss << *jt; 
    } 
    res.PB(oss.str()); 
  } 
  return res; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/