/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10044
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

class Teaching {
public:
    int count(vector<string> words, int K);
};

int Teaching::count(vector<string> words, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"antarctica", "antahellotica", "antacartica"};
    int K = 6;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
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
    vector<string> words = {"antaxxxxxxxtica", "antarctica"};
    int K = 3;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"antabxjeoictica", "antacgappsktica", "antauayfybjtica", "antaortiulctica", "antadnjzwzmtica", "antaykddorltica", "antaiknauajtica", "antaejljsmytica", "antazqbttdjtica", "antaxjinuhvtica", "antakdmdvovtica", "antaocaimhptica", "antapcyxecztica", "antaooxdlyytica", "antadoqtckatica", "antarlzwxtftica", "antaigavwbltica", "antaclxyuhjtica", "antawzygbfetica", "antalxnuclktica", "antaguiczibtica", "antamgxgpyctica", "antasjlaqjntica", "antavizdwjdtica", "antalqeznrstica", "antajppuwdrtica", "antajrsmijztica", "antacafjtmmtica", "antazcbcllqtica", "antawyvwjoytica", "antacuyrzhltica", "antaannxdautica", "antasuhnjsqtica", "antambhtjpftica", "antadjvwjugtica", "antamgbhuaytica", "antafejrpfctica", "antafyyowhrtica", "antazcqbvjxtica", "antaftvflqjtica", "antaecmzhketica", "antasdbuqkttica", "antarrmqoyptica", "antafbmfegftica", "antaexdffiptica", "antadxhftebtica", "antattatcantica", "antagwegtigtica", "antamehquoqtica", "antanzowdfutica"};
    int K = 14;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"antabtica", "antaxtica", "antadtica", "antaetica", "antaftica", "antagtica", "antahtica", "antajtica", "antaktica"};
    int K = 8;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"antadkykntica", "antaykghtica", "antayytica", "antakftica", "antaobiwmuptica", "antaptghqgtica", "antajsotica", "antafnttica", "antabssvtica", "antafdhjqrptica", "antapbmtica", "antaltica", "antauhmgtica", "antaogtica", "antaeyxtica"};
    int K = 0;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"antaswttica", "antamtica", "antatica", "antalzftica", "antaxftica", "antabtica", "antalrtica", "antaldcvlwwtica", "antadabtica", "antahdptica", "antahvddvbtica", "antantica", "antakdtpqtica", "antakcxtyhtica", "antatftkcltica", "antauvtica", "antarouaytica", "antaadxrdjtica", "antaqedmtica", "antaecvldtica", "antaqnktica", "antasainvdjtica", "antanuahuktica", "antanwsfzatica", "antajtica", "antabptica", "antanftpuumtica", "antahtica", "antankivctica", "antahcfetica", "antaofitfqtica", "antaefrnhtica", "antauhzallktica", "antaxtntica", "antamowtrbotica", "antapwoytica", "antamyrtica", "antazystica"};
    int K = 1;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"antanmvfntica", "antagiattica", "antaqbmiktica", "antakltica", "antaacmotica", "antaegwpnmtica", "antaycqvmdhtica", "antaikamtica", "antagssvtica", "antagtggotica", "antatetica", "antartica", "antajdmztica", "antaezwavitica", "antazgwjtica", "antadehmtica", "antamjpqncttica", "antatltica", "antapjuesubtica", "antanpibtica", "antacyzremytica", "antahvtica", "antanhwlotica", "antaawlcxzwtica", "antazycztica", "antamdztica"};
    int K = 2;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"antawatica", "antactica", "antaihxsitica", "antattica", "antaxdtica", "antalhaoftica", "antabsyltica", "antagtnzstica", "antalvqtica", "antapdrafhqtica", "antaraptica", "antanctica", "antauhhpcgtica", "antagdtica", "antagvttica", "antapnotkftica", "antaxjwtica", "antazecaxnutica", "antaiuwwmstica", "antaglbovtica", "antafkspmftica", "antanmgftvdtica", "antaqozzpbtica", "antaqatica", "antayrfettica", "antaosreistica", "antaebitica", "antasymstica", "antawmntica", "antaxxtica", "antaittica"};
    int K = 3;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"antaclbsctbtica", "antayoitica", "antakxlftica", "antakbsqystica", "antaagomggtica", "antagslqzxtica", "antazutica", "antaisktica", "antaosilzitica", "antahsitica", "antaedqleuctica"};
    int K = 4;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"antagtica"};
    int K = 5;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"antamgjbtica", "antaszxbstica", "antagwkttica", "antajjtica", "antawmbgjtica", "antaxigtica", "antavnyotica", "antaaywgvjftica", "antawsztica", "antacvhvtica"};
    int K = 6;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"antazasobwitica"};
    int K = 7;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"antamblntica", "antadtahdtica", "antarkatica", "antaiboumtica", "antahqrxvytica", "antapzjripatica", "antaxzeywhbtica", "antazstnizetica", "antarmljtica", "antaxmiwisdtica", "antavgibqtica", "antarpegehdtica", "antawmjtica", "antaqapmqkbtica", "antawhdbwsktica", "antaabhasptica", "antaftica", "antagljhunstica", "antastica", "antarigdtica", "antaxtica", "antaleqkhjctica", "antatudmyitica", "antarsrzdjtica", "antaqtica", "antafjnctica", "antabbygqytica", "antaagfxqtica", "antacrsoulhtica", "antaueeztica", "antakpsqjetica", "antasivltica", "antaikdzrmtica", "antaknptica", "antasoatica", "antayqpcytica", "antavhmeftica", "antayurkfitica", "antaggjctica", "antaqrtica", "antaajmoitatica", "antafbztica", "antafytica", "antawtica", "antagrdmqtica", "antaqpcrnfytica"};
    int K = 8;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"antagitica", "antahilppbjtica", "antawrtwtica", "antanvtqtica", "antanakaytica", "antafqtica", "antacmvudtica", "antakbtica", "antaemtica", "antavnkenbetica", "antapxllbdltica", "antagnxstica", "antanxkgsctica", "antaxvqytica", "antaftikyctica", "antabfwtrmtica", "antaahhtica", "antauyfkgtica", "antasenkpxytica", "antayoqkdktica", "antacltica", "antalpurzbgtica", "antaodqzuzdtica", "antauxonbtica", "antamacdestica", "antajfortica", "antaycvbffrtica", "antasydetica", "antaeppyectica", "antacrsxkxtica", "antacwzadtica", "antajzbpvuxtica", "antaswjesetica", "antavgvvltica", "antaqmzsoimtica", "antajbugvtica", "antastatica", "antakyrmbdxtica", "antaoyatica", "antaejoctica", "antagdycprotica", "antadzqtica", "antaopnatica", "antaareztica", "antabvtica", "antabrjglgtica", "antaotica", "antanyptica", "antapetica"};
    int K = 9;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"antalatica", "antagdmfxthtica", "antadirkwaftica", "antavctica", "antarectica", "antaatfqatica", "antakmxyhtica", "antahmutica", "antakfetvtica", "antaoatica", "antarmpmtica", "antamwmtica", "antafvwhtica", "antamdvmetica", "antalzllitica", "antaxrepwmtica", "antatdplutica", "antayabmbivtica"};
    int K = 10;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"antarbhntica", "antaevcxdsitica", "antaaeekkwtica", "antarvoldxtica", "antadifletica", "antauxbtica", "antaitica", "antaptica", "antayeetjuutica", "antasxremtica", "antazkotica", "antaametica", "antambyweftica", "antawhtica", "antavgbjajtica", "antamymxktica", "antaoouagytica", "antajbgtzmtica", "antaplpotica", "antaxmostica", "antagwmlgfqtica"};
    int K = 11;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"antalbfqtica", "antazvivueytica", "antahcqyxytica", "antaklvtica", "antaljpfiitica", "antawlblwhjtica", "antabwpwitica", "antalastftica", "antaratfftica", "antawerotica", "antalxbitica", "antaptksdtica", "antaootica"};
    int K = 12;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"antawjlwhtica", "antanlxwkztica", "antaxttcsrxtica", "antagyyscphtica", "antabwpfsnttica", "antadyvwouktica", "antazpntica", "antarxzotica"};
    int K = 13;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"antanpfuxsttica", "antanxwtica", "antapdnzfgutica", "antadgtica", "antautica", "antaepwwzttica", "antaytica", "antabsoctica", "antanyfuktica", "antaemoootica", "antadtgtica", "antamqvotica", "antalnyzgtica", "antaiyvtsttica", "antajjzstica", "antaoquteutica", "antaavtjetica", "antalmctica", "antatgobruftica", "antaubquopftica", "antacktluetica", "antawylfsrtica", "antaekswxjtica", "antanbkvltica", "antalzcgltica", "antalvcbtica", "antantkhotica", "antauzzvqtica"};
    int K = 14;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"antatttica", "antavakotica", "antaaidvxeltica", "antaeycugtica", "antabkvrtica", "antaziiqyvtica", "antajpsevctica", "antawgibtica", "antahcpoetica", "antaxwkwztica", "antayillzttica", "antasrxqxgtica", "antazdygqatica", "antatqhfatica", "antaaainitica", "antasfgiktica", "antarmmhatica", "antazdutica", "antahkajqtica", "antaajakspvtica", "antawtyehtica", "antawwhotica", "antalykjetica", "antaoewyxhtica", "antaumzvlzbtica", "antazeqztica", "antazkesjnbtica", "antakatica", "antapbmtekmtica", "antamytica", "antagcntica", "antajvilrltica", "antaxeyadstica", "antaultica", "antallgcwktica", "antasitica", "antakedztica", "antacdwytica", "antamsshztica"};
    int K = 15;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"antaiydrdvwtica", "antatgxwjtica", "antacqvbtica", "antaiowtswtica", "antabhzcybtica", "antawtstica", "antahctica", "antazfwtica", "antaktjdtica", "antaqutica", "antarrrtica", "antaweiwtica", "antafuevtica", "antayldtica", "antalyqvhntica", "antautjafgytica", "antakrptica", "antaklqxmtica", "antaaeibptica", "antalwherxgtica", "antaotktica", "antayizoeftica", "antafzgctica", "antagarpznetica", "antaunfiamotica", "antatrejtica", "antaayolowqtica", "antaiwitica", "antalqovtica", "antarsxtica", "antaxlwetica"};
    int K = 16;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"antadvyzqtica", "antaxqmtica", "antatjlyfwqtica", "antadfyjvrtica", "antayouqeitica", "antaetica", "antaoqqzqtica", "antatxnlwgytica", "antafstvactica", "antacylirtica", "antavoutica", "antaezactica", "antaxqktica", "antajxwnctica", "antabbfjtica", "antagybkltica", "antaofoqctica", "antaifcputica", "antaskdtica"};
    int K = 17;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"antaxxwrebtica", "antazxfitica", "antafxqttica", "antaozimztica", "antarcfiqetica", "antaybstica", "antagjbtica", "antaxhowtica", "antaouzzpyytica", "antaxhnbldatica", "antafligstica", "antadelvjgctica", "antavnjfftica", "antaxagtica", "antaguiwqkjtica", "antanghnpustica", "antamctica", "antacevtica", "antazjvkcitica", "antadtica", "antahokwretica", "antaqliblftica", "antazscpaoktica", "antaxfefzstica", "antayckchsxtica", "antaqvtica", "antabygqeftica", "antakindtica", "antayjvjtica", "antagkhjujtica", "antaqlzvabtica", "antakencktica", "antafsnteitica", "antacdwntica", "antafrwchjvtica", "antahznutica", "antazmzutica", "antajdljbtica", "antagntica", "antayhxbdxtica", "antavdtica", "antaoyzvcrtica", "antamyynidftica"};
    int K = 18;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"antahftica", "antapajtica", "antalqztica", "antagfkrvdtica", "antaemstica", "antaoiaxuptica", "antalvwktica", "antakqzztica", "antavhoptica", "antajnkxvstica", "antatsaectica", "antaftqttica", "antaavtica", "antaroeuztica", "antazztica", "antaqfcptwhtica", "antavazltica", "antaekodayjtica", "antaicyyoatica", "antaxyatica", "antajwutica", "antagptica", "antaodpjxtica", "antazctica", "antasatica", "antavqzntica", "antayvlkytica", "antashndjwjtica", "antaibxtica", "antauettica", "antavnsirtica", "antalsiyhdztica", "antalldaotica", "antarlalutica", "antamcqtica", "antaqhgtica", "antaibytica", "antaokzwntqtica", "antalltytica", "antatwtica", "antafyztmxvtica", "antaokzktica", "antapiqtica", "antaeinefcutica", "antamotica", "antaqtjtica", "antawciyetica", "antapgybtica", "antaakfstica"};
    int K = 19;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"antayhiotica", "antamksgvtica", "antafqmnqtica", "antaxztica", "antaafeqtica"};
    int K = 20;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"antaucbqjuptica", "antayhtica", "antaxhtica", "antauxcmgvtica", "antaqnrotica", "antagtujntica", "antaynetica", "antalqpnjwttica", "antaoqtica", "antajivutica", "antakuktica", "antalrhygytica", "antagwwirtica", "antayceitica", "antacwlduztica", "antakpjtica", "antahhtytica", "antasecgovstica", "antamttica", "antapmhhrtica", "antaovvtica", "antartgftica", "antahcuktica", "antajbqeetica", "antaaotica", "antazazdgtica", "antaaopzfgftica", "antakajrgtica", "antahfiqtica", "antaqjywscftica", "antaktxzvbwtica", "antatsgwtica", "antardhtica", "antagfrecnjtica", "antachjhbtica", "antafshtica"};
    int K = 21;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"antazabtica", "antapzvtica", "antauaitritica", "antanvcfqtica", "antamijtica", "antaeertica", "antavyntica"};
    int K = 22;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"antaompstica", "antawxtica", "antaoptratica", "antacqatica", "antakzsydpgtica", "antasvyfrtica", "antatfstitica", "antaiprzvtica", "antahcspbtica", "antalgdauvqtica", "antaizzsddltica", "antaiwtica", "antatintica"};
    int K = 23;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"antayptica", "antazsmtica", "antapxgroyhtica", "antadhvsjnmtica", "antanphmtica", "antaezqdckbtica", "antamttplctica", "antazrktica", "antaiuvlvftica", "antahjebetica", "antaslatica", "antayrtica", "antacayjjtica", "antausutica", "antaprzaatica", "antagutica", "antacravyhtica", "antasrmqftica", "antarnrtica", "antamgamtica", "antamkjigbftica", "antaqelutica", "antajcjtica", "antapcygztica", "antahlbqtica", "antasiwtica", "antazyustica", "antaatsftmtica", "antazmtica", "antaosvlizjtica", "antackatica", "antasmitica", "antacarmyzrtica", "antanutica"};
    int K = 24;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"antaprshntica", "antahnyrhntica", "antaoaortica", "antaxwibgdbtica", "antapuctica", "antaixfotica", "antadmctica", "antaauqgmgtica", "antadtwgkftica", "antardstica", "antauwfmtica", "antaakkqmtica", "antaujtica", "antajwgxdbutica", "antacsdktica", "antaatica", "antaefmikitica", "antalgxsrmtica", "antavtica", "antahxictica", "antaeqstica", "antaaesytica", "antaorzweketica", "antajoajtica", "antasvtica", "antaymojvtica", "antatdutica", "antatiftica", "antavjtica", "antadjtica", "antadjndtica", "antajoqtica", "antayvjztica", "antasltzjbstica", "antaqgxitica", "antaceezncktica", "antaoszstica", "antaqfgfaftica", "antahktica", "antayhtjtica", "antaanyttica", "antathytica", "antatovjtica", "antaiktvetica", "antayzuistqtica", "antaouwpxjtica", "antaettica", "antaslkontica", "antasqstica", "antaqentica"};
    int K = 25;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"antawptica", "antaaaekcqtica", "antavrxtica", "antaortfxtica", "antadppdktica", "antahgqytica", "antarytica"};
    int K = 26;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"antaciaiadtica", "antaefotica", "antafcstica", "antaejqtica", "antaejtwehmtica", "antaalrgtica", "antarvnlfhtica", "antaftlvtica", "antaojdztica", "antapqhrtica", "antadjzvgxutica", "antaolpwltmtica", "antanypafcbtica", "antayotica", "antagulqqrftica", "antafqyecyitica", "antarxilktica", "antabiykqjtica", "antasyojsrtica", "antaycqtica", "antawkxtica", "antaamtrxltica", "antalvdqgptica", "antaltxmirttica", "antaekeflcqtica", "antanmjawztica"};
    int K = 0;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"antafetkmwvtica", "antawgztica", "antaemwtica", "antadujtica", "antarzameptica", "antajzrxvntica", "antabqjjtica", "antabckeneltica", "antahrtxtica", "antajbttica", "antaaxjstica", "antajbtihtica", "antatnuyrfntica", "antaeoexsktica", "antaygxdiyktica", "antaektica", "antamsqhktutica", "antaeyhjtica", "antavwzftica", "antascpqtica", "antasoqftica", "antaqjhswjtica", "antaehphrsotica", "antaerdatottica", "antavqclqptica", "antacmyiqstica", "antajvjrhrptica", "antaxnlwhostica", "antafsftica", "antalsbocjtica", "antazmbnnwtica", "antacbtica", "antajjxztica", "antaphwdmtica", "antabnhxwwtica", "antaubtica"};
    int K = 2;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"antabrtica", "antasrwpcptica", "antazfwvzftica", "antadptica", "antazzyekxtica", "antaivtica", "antakawdvhtica", "antadwosnxetica", "antauantica", "antazetica", "antayyxramctica", "antancvstica", "antahptica", "antaijdtica", "antabwtica"};
    int K = 3;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"antapbzeltica", "antafccnnhmtica", "antamrcrttica", "antaequlicutica", "antafmtica", "antaghjmecqtica", "antauzluvbtica", "antamywdnatica", "antadutica", "antaujpqptica", "antaikxtica", "antaxneukttica", "antaniutica", "antantoqtica", "antasowtica", "antaxhotica", "antahkrtica", "antakqrtica", "antanabitica", "antaueqquuqtica", "antaahttica", "antabqfnltica", "antaveheatica"};
    int K = 4;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"antasuyynntica", "antalsdumxgtica", "antafxkzotica", "antatsgtwwhtica", "antanszsstica", "antaipfjtica"};
    int K = 5;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"antakntica", "antadktica", "antajttica", "antanntica", "antagctica", "antagrtica", "antaubzjlsdtica", "antarljmkbtica", "antahpkltica", "antasgrtica", "antamxlqotica", "antalypshltica", "antaunojztica", "antafntica", "antaccdntica", "antaetcbwctica", "antaylptica", "antaiehtica", "antanqxtica", "antaukbtica", "antathhtica", "antagrfoctica", "antahtrtica", "antaobrnxttica", "antaalgpvktica", "antarvlaztica", "antahsgtica", "antacetica", "antamrheetica", "antavvtica"};
    int K = 6;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"antampttica", "antauxtica", "antaioyhtica", "antafxgrtica", "antaraibktica", "antaeiqeqtica", "antayqkgltica", "antagkmtica", "antavqoztica", "antawotica", "antaklaztica", "antakrdktica", "antadnptica", "antatlbqtica", "antaxcbutica", "antafagtdiltica", "antaukvzfyvtica", "antapeuntica", "antabodhtica", "antaknktica", "antaibupytica", "antaoaxtica", "antapmkottica", "antakyvjntica", "antaoqndokotica", "antareirtica", "antadmkhtica", "antaedahpotica", "antaqdtica", "antathhccotica"};
    int K = 7;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"antaqcjtica", "antayzmutica", "antakmbahnstica", "antatnwbzcvtica", "antalntica", "antauiwkozetica", "antanxtica", "antaevitica", "antasgpizvltica", "antawbtica", "antaacyntica", "antavztica", "antadqeroletica", "antaxfnupvtica", "antaucbtica", "antayzctica", "antawktica", "antahdtica", "antajwctica", "antablllwtica", "antajomitica", "antatblirtica", "antavhpiistica", "antanseifbtica", "antanwdtica", "antayqjhestica", "antaqbbptica", "antaptfgcyytica", "antaxcdwklytica", "antafvctica", "antafzcxnotica", "antahvittica", "antasgrpitica", "antaggmbtica", "antawbdojctica", "antaaktica", "antaekqistica", "antacnnsabutica", "antabglmquztica", "antamqxtica", "antanbtica", "antaewcyjetica", "antaastica", "antamliwbtica"};
    int K = 8;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"antalsztica", "antayjztica", "antaktxtica", "antaxvtica", "antasxdtwytica", "antawyhtica", "antalvahqktica", "antappjxfztica", "antailetica", "antazavvwbgtica", "antabrdidltica", "antajaefotica", "antacsktica", "antachltica", "antafbumotica", "antabbqantica", "antavqhtica", "antafoltica", "antabzlstica", "antagdfzcmrtica", "antaqzhtica", "antamalutootica", "antavklqtica", "antafwsctica", "antauftica", "antaijtica", "antaummetstica", "antaerghtica", "antazstica", "antalprtica", "antacssortica", "antaayzoltica", "antacwzrrrtica", "antahsmtqctica", "antacbwkrtptica", "antaqetica", "antadmutica"};
    int K = 9;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"antalgstbtica", "antakotica", "antahjzjtica", "antaoxyoyntica", "antahhsutica", "antaoimzqtica", "antaigtica", "antajstica", "antanasbtica", "antatkrwttica", "antattzebetica", "antaypdgntica", "antajbtica", "antayjgvtica", "antamanhhpmtica", "antabadtica", "antafsmmoixtica", "antaioovtica", "antawffxttica", "antapxoqqpwtica", "antafstica", "antabawcwqitica", "antaexkitica", "antadnghqbqtica", "antapmyavwltica", "antatsnngchtica", "antadnlglftica", "antaxpwatica", "antazubostica"};
    int K = 10;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"antaucfabdztica", "antafburilwtica", "antajlfjotica", "antavntica", "antayojzeatica", "antauntica", "antaadtica", "antazxahayytica", "antapfrtica", "antasctmmotica", "antamcertica", "antabikxtica", "antanlptica", "antafmztica", "antaecqwbqatica", "antaffqetica", "antacryhntica", "antauyraistica", "antapqwvantica", "antalwxcxgxtica", "antaxwxdklftica", "antatbgwsartica", "antawycfgxtica", "antajdlacdltica"};
    int K = 11;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"antazqhautica", "antakbmmytica", "antagwgheutica", "antauttica", "antalxtica"};
    int K = 12;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"antasvxjwtica", "antaxftzhtica", "antawhmohbftica", "antaqitica", "antainsiitica", "antawhhvzlxtica", "antaxuwxtmntica", "antagnbfwtica", "antavksyhbtica", "antahjzequtica", "antazqvxztica", "antawunuttica", "antalzuybtica", "antaggmetica", "antaltahqtica", "antakzbdkwtica", "antacktnsrmtica", "antavtkwftica", "antakmhnurttica", "antadvisztica", "antapchdeqgtica", "antauutica"};
    int K = 13;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"antatlznantica", "antaxnnvcmtica", "antansrvtica", "antalrzbgtica", "antaxltica", "antahjxhvtica", "antahcgiuptica", "antafctica", "antaqznhbwtica", "antahuttica", "antawwawyatica", "antatwktica", "antaddqtica", "antabfitica", "antacupfssatica", "antaygwittica", "antafmanhntica", "antatnwbvvtica", "antafdrznmtica", "antaagtica", "antababcqmgtica", "antagotica", "antaqaepwtdtica", "antamxjtduktica", "antalzphtica", "antaydxxoptica", "antamwmhdhtica", "antaymtica", "antaqxtica", "antaoohftica", "antafzipezbtica", "antaxcttica", "antahcbvlztica"};
    int K = 14;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"antaklsdtica", "antajroqkrtica", "antabfessjntica", "antayejkixtica", "antahfutica", "antabtvlazmtica", "antavxrztica", "antarrtftica", "antaqkhtica"};
    int K = 15;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"antadpfytica", "antamybzvgtica", "antaupectica", "antaelchjtica", "antaxrjcjtica", "antafitgtica", "antaddcstica", "antazwuytica", "antavknbucktica", "antavyptica", "antakctica", "antanrggbtica", "antainmqtica", "antanullieptica", "antaqttica", "antaqcmtica", "antaagkhxjetica", "antatntxkttica", "antarzlemfetica", "antahspoqtica", "antanbbljqytica", "antarlxftica", "antaduolccytica"};
    int K = 16;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"antaheynxtica", "antazednihqtica", "antatixayfitica", "antalbtica", "antaiiiqtica", "antaiasxxmntica", "antagopuvtica", "antabxsqtica", "antayitica", "antaekkqmvtica", "antaxytica", "antavetica", "antafsfhtica", "antaamrhuyftica", "antaoegtica", "antakwgqxndtica", "antaeegtica"};
    int K = 17;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"antaezzqurtica", "antavhskgdhtica", "antacatica", "antacxletica", "antarsqeutica", "antakttica", "antavjkxttica", "antavlwktica", "antarfhoettica", "antafwkqtica", "antafvuxaootica", "antaiarxtica", "antaljrlkatica", "antardsfcmtica", "antatxtica", "antanfrtica", "antastwnetica", "antadhivtica", "antaajtica", "antajlaotica", "antanehptica"};
    int K = 18;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"antakbsroktica", "antavmylbmtica"};
    int K = 19;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"antauavktica", "antaggltica", "antageihtica", "antawitica", "antaclmetica", "antatlqnytica", "antawucftica", "antamlgttica", "antatgvqtica", "antaviptica", "antacikldojtica", "antaqxzyabtica", "antagxtica", "antaqtztica", "antaipetica", "antanatica", "antanainlgjtica", "antafltica", "antalytica"};
    int K = 20;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"antafhvlvytica", "antayciitica", "antacjmgtica", "antaewcoxzntica", "antaxvycfnttica", "antaglyxethtica", "antaljctica", "antatctica", "antaeriswdtica", "antaxftiojtica", "antaxynoeztica", "antajystica", "antaxmkyjmtica", "antalxbktica", "antasptntjdtica", "antallftqtica", "antafqchotxtica", "antanhbqtica", "antayfgvtica", "antahrrtica", "antaqrvetica", "antaezimutica", "antarcllmnltica", "antaftftica", "antasehhtica", "antaavtatica", "antapjtica", "antabyhhtica", "antaxqdktica", "antaksotrvntica", "antaljxztgutica", "antasrtica"};
    int K = 21;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"antameqtica", "antazyvktica", "antaefsgfgtica", "antawuxhvtica", "antastitica", "antarpcqbetica", "antawdmtglttica", "antanzvtica", "antazxxrtica", "antacbnpvbttica", "antauxktica", "antawxcytica", "antalqqakmetica", "antamamtica", "antapzbrkentica", "antavrweugxtica", "antauedbtica", "antawgblagtica", "antasitfbetica", "antaewfnetica", "antalbzslbqtica", "antasktica", "antaxhtlyhtica", "antaomjhdtica", "antatdwmehwtica"};
    int K = 22;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"antalrdsdqdtica", "antamnqwhuptica", "antaacvvztica", "antauncqatica", "antaqyoezwitica", "antagxvfwftica", "antailxtica", "antalpctica", "antasgwiwmtica", "antatkammmvtica", "antaidcldzqtica", "antaslftica", "antayzontica", "antavbfittica", "antaxnqbzwutica", "antaagjqdytica", "antakdnktica", "antaanxakntica", "antawjfhtica", "antayptqmutica", "antahwbatica", "antadjeltica", "antafetica", "antalfddkgztica", "antanunthtica", "antaoyitrtica", "antanmvqhtztica", "antagcotica", "antaphcttica", "antavzkrlpntica"};
    int K = 23;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"antahgvhadqtica", "antanwlqrtica", "antatctsccatica", "antasyuyhztica", "antaixaqptica", "antabnipqectica", "antabvoxwetica", "antaixkztica", "antaoetica", "antabjbctica", "antagrqacvtica", "antasltica", "antaxjsxtica", "antatfjzhyttica", "antaivztica", "antayksstica", "antazfuntica", "antavvoxtica", "antajdauetica", "antaxkusoetica", "antazybtica", "antafmfedtica", "antabchayhztica", "antaywypotica", "antagbsctica", "antanmxmfrctica", "antajkltcbtica", "antatuctica"};
    int K = 24;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"antavwqscotica", "antawyxgastica", "antaaziljitica", "antaddlbuitica", "antapnodxjtica", "antarrtica", "antajvotica"};
    int K = 25;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"antahztica", "antagdvkxtica", "antaopbthtica", "antadevffmtica", "antagxsttica", "antapereqktica", "antaljglaqtica", "antaxntica", "antainmtica", "antawklektgtica", "antatodstica", "antajoojnyetica", "antaplwndrmtica", "antawmgtica", "antaoqmhtica", "antasoktica", "antazdvitpptica", "antaibyeoztica", "antabzvtica", "antaipfniltica", "antaxgrewytica", "antanihjjtica", "antayvvsktica", "antakutica", "antadrwgytica"};
    int K = 26;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"antazszbtica"};
    int K = 11;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"antaatica", "antabtica", "antactica", "antadtica", "antaetica", "antaftica", "antagtica", "antahtica", "antaitica", "antajtica", "antaktica", "antaltica", "antamtica", "antantica", "antaotica", "antaptica", "antaqtica", "antartica", "antastica", "antattica", "antautica", "antavtica", "antawtica", "antaxtica", "antaytica", "antaztica", "antaaaaatica", "antabbbbtica", "antacccctica", "antaddddtica", "antaeeeetica", "antafffftica", "antaggggtica", "antahhhhtica", "antaiiiitica", "antajjjjtica", "antakkkktica", "antalllltica", "antammmmtica", "antannnntica", "antaooootica", "antapppptica", "antaqqqqtica", "antarrrrtica", "antasssstica", "antatttttica", "antauuuutica", "antavvvvtica", "antawwwwtica", "antaxxxxtica"};
    int K = 14;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"antarstica", "antatica", "antarsetica"};
    int K = 9;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"antaaoeuolitica", "antawusevrmtica", "antahacjdeytica", "antalcaajnotica", "antappeqlibtica", "antaptumhvstica", "antaxxndlfvtica", "antaftvyypjtica", "antaghvajcqtica", "antabawggortica", "antausmfslltica", "antaxscojsptica", "antaojdfkumtica", "antaysieqmbtica", "antarmdxdwrtica", "antahkbyrdvtica", "antauoeeuldtica", "antamskgorstica", "antasldjuamtica", "antaqkcxxnitica", "antaljvhlgytica", "antahsoetujtica", "antamwayobntica", "antaevpqevdtica", "antacshxhidtica", "antasurpsgdtica", "antaabuvfcntica", "antaaclsrnbtica", "antakfrhkfotica", "antanpemyrxtica", "antaeieylyctica", "antapckxbwhtica", "antaftkfppltica", "antalopvupstica", "antaojesnwgtica", "antaeproimctica", "antaspprudotica", "antavwpsbqytica", "antahohecvvtica", "antasdibbqutica", "antanlkhlmdtica", "antaishuxvstica", "antahxdbtnptica", "antaxbvqicmtica", "antafhwnqcmtica", "antajmtmjrntica", "antapjarcpvtica", "antamsmjtnitica", "antaxpejdsxtica", "antapaibpdvtica"};
    int K = 15;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"antamnqrsuvtica", "antamnqrsuwtica", "antamnqrsuxtica", "antamnqrsvutica", "antamnqrsvwtica", "antamnqrsvxtica", "antamnqrswutica", "antamnqrswvtica", "antamnqrswxtica", "antamnqrsxutica", "antamnqrsxvtica", "antamnqrsxwtica", "antamnqrusvtica", "antamnqruswtica", "antamnqrusxtica", "antamnqruvstica", "antamnqruvwtica", "antamnqruvxtica", "antamnqruwstica", "antamnqruwvtica", "antamnqruwxtica", "antamnqruxstica", "antamnqruxvtica", "antamnqruxwtica", "antamnqrvsutica", "antamnqrvswtica", "antamnqrvsxtica", "antamnqrvustica", "antamnqrvuwtica", "antamnqrvuxtica", "antamnqrvwstica", "antamnqrvwutica", "antamnqrvwxtica", "antamnqrvxstica", "antamnqrvxutica", "antamnqrvxwtica", "antamnqrwsutica", "antamnqrwsvtica", "antamnqrwsxtica", "antamnqrwustica", "antamnqrwuvtica", "antamnqrwuxtica", "antamnqrwvstica", "antamnqrwvutica", "antamnqrwvxtica", "antamnqrwxstica", "antamnqrwxutica", "antamnqrwxvtica", "antamnqrxsutica", "antamnqrxsvtica"};
    int K = 26;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"antaytica", "antaqtica", "antartica", "antautica", "antaotica", "antaptica"};
    int K = 4;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"antaqqqjevtica", "antamqotica", "antaiegtica", "antatica", "antaptica", "antaotica", "antawseitica", "antacvehtica", "antahqtica", "antahrtica", "antatqsgitica", "antaeusdtica", "antabjwctica", "antaxjqtica", "antadpevxftica", "antajmsltica", "antaykkthtica", "antahptica", "antaowtica", "antadhoiktica", "antaudprtica", "antaaotica", "antafrkdkktica", "antaosttuftica", "antasbutica", "antaaegwytica", "antaumjwytica", "antatbpdwtica", "antawejftica", "antanltica", "antajjentotica", "antartica", "antagaeqtica", "antanezthtica", "antavtica", "antatestica", "antafvtica", "antasmtica", "antaggntica", "antaorqtica", "antabtica", "antaftica", "antaiyytica", "antadwutica", "antaqptica", "antahrdbltica", "antahtcmatica", "antaqcdtica", "antaxqpytica", "antamzafptica"};
    int K = 9;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"antatica"};
    int K = 5;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"antadefghjktica", "antaefghjkltica", "antafghjklmtica", "antaghjklmntica", "antahjklmnotica", "antajklmnoptica", "antaklmnopqtica", "antalmnopqrtica", "antalnopqrstica", "antanopqrsutica", "antaopqrsuvtica", "antapqrsuvwtica", "antaqrsuvwxtica", "antarsuvwxytica", "antasuvwxyztica", "antaabaaaatica", "antabcxxyddtica", "antaabcaaatica", "antaabxxyyytica", "antadddddhtica", "antattttytica", "antaxxxxxxxtica", "antaaaaaaaatica", "antabbbbbbbtica", "antaccccccctica", "antadddddddtica", "antaeeeeeeetica", "antaffffffftica", "antagggggggtica", "antahhhhhhhtica", "antajjjjjjjtica", "antakkkkkkktica", "antallllllltica", "antammmmmmmtica", "antannnnnnntica", "antaoooooootica"};
    int K = 15;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"antafswfasftica", "antaihdueuutica", "antadfsdfdstica", "antaasdadsatica", "antasdadasdtica", "antaasdaewetica", "antaasasdgrtica", "antaghkuoiutica", "antafghfhfhtica", "antasacasdctica", "antauuyioyutica", "antambfghdftica"};
    int K = 9;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"antarrrrrrrtica", "antasssssstica", "antaxytica", "antayxtica", "antaxxytica", "antayyxtica"};
    int K = 7;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"antabedtica", "antadbetica", "antadebtica", "antaebdtica", "antaedbtica", "antajkmltica", "antajlkmtica", "antajlmktica", "antajmkltica", "antajmlktica", "antakjlmtica", "antakjmltica", "antakljmtica", "antaklmjtica", "antakmjltica", "antakmljtica", "antaljkmtica", "antaljmktica"};
    int K = 9;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"antamptica", "antamqtica", "antamstica", "antabtica"};
    int K = 6;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"antaaaaatica", "antaacvbgttica", "antaazxcvbbtica", "antabbbbtica", "antadcklptica", "antadghnijftica", "antaedferggtica", "antaedfrtggtica", "antaerfyhgtica", "antaergbkiltica", "antaergftica", "antaertghxctica", "antaertyyyytica", "antagfddfgtica", "antahaheheutica", "antahnzwrtica", "antaihnjurtica", "antaijnhbfvtica", "antaikjnmbvtica", "antajmklccctica", "antajnmkhgctica", "antanhmjtica", "antanmntica", "antaokrtytica", "antaolkmzxxtica", "antaoooooootica", "antaprthywntica", "antaqaswdertica", "antaqwasxxjtica", "antaqwertyutica", "antarfghythtica", "antatgbnhtica", "antanhjtica", "antatyhytica", "antarfttica", "antaumutica", "antauiovcxtica", "antaujiklohtica", "antaujikuwstica", "antaujuiklqtica", "antaujuikltica", "antaxcvbntica", "antaxcvfbbbtica", "antaxmlkottica", "antayhndmdctica", "antayhujnsctica"};
    int K = 17;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"antabxdtica", "antaextica", "antaedtica", "antaetica", "antafgtica", "antaegtica", "antahtica", "antajhtica", "antajktica"};
    int K = 10;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"antaaaaaaaatica"};
    int K = 5;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"antabmnoptica", "antammnxxxtica", "antadmmonntica", "antafjkdnsmtica", "antadaknmftica", "antazqtica", "antamndewsftica", "antamnkdlsatica", "antamopedentica"};
    int K = 13;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"antabmnoptica", "antammnxxxtica", "antadmmonntica", "antafjkdnsmtica", "antadaknmftica", "antazqtica", "antamndewsftica", "antamnkdlsatica", "antamopedentica"};
    int K = 25;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"antaaxxxxxxtica", "antabxxxxxxtica", "antacxxxxxxtica", "antadxxxxxxtica", "antaexxxxxxtica", "antafxxxxxxtica", "antagxxxxxxtica", "antahxxxxxxtica", "antaixxxxxxtica", "antajxxxxxxtica", "antakxxxxxxtica", "antalxxxxxxtica", "antamxxxxxxtica", "antanxxxxxxtica", "antaoxxxxxxtica", "antapxxxxxxtica", "antaqxxxxxxtica", "antarxxxxxxtica", "antasxxxxxxtica", "antatxxxxxxtica", "antauxxxxxxtica", "antavxxxxxxtica", "antawxxxxxxtica", "antaxxxxxxxtica", "antayxxxxxxtica", "antazxxxxxxtica", "antaztica", "antazztica", "antazzztica", "antazzzztica", "antazzzzztica", "antazzzzzztica", "antazzzzzzztica"};
    int K = 6;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"antaovcacatica", "antakbenitica", "antajiogjptica", "antahripnntica", "antaipbeotica", "antaewmgtica", "antavgwbtica", "antanginorbtica", "antabnbnrotica", "antalvwfotica", "antanveouoetica", "antavpwwtica", "antavwprtica", "antagpibjtica", "antaaengtica", "antanjietica", "antainentica", "antaiptica", "antattnetica"};
    int K = 13;
    Teaching* pObj = new Teaching();
    clock_t start = clock();
    int result = pObj->count(words, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22648908&rd=13518&pm=10044
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <sstream> 
#include <set> 
#include <map> 
#include <cmath> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
#include <iostream> 
 
using namespace std; 
 
#define FOR(i, n) for (int i = 0; i <(n); i++) 
#define CLR(a, b) memset((a), (b), sizeof(a)) 
#define MIN(a, b) ((a) < (b) ? (a) : (b)) 
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
#define ALL(x) x.begin(), x.end() 
#define LL long long 
#define PB push_back 
#define MP make_pair 
#define SQR(x) ((x) * (x)) 
#define ABS(x) ((x) < 0 ? -(x) : (x)) 
#define VI vector <int> 
#define VS vector <string> 
#define SS stringstream 
 
bool can[26]; 
vector<string> w; 
 
char getC(char x){ 
  int p = 0; 
  for(char c='a'; c<='z'; c++){ 
    if(c=='a'||c=='n'||c=='t'||c=='i'||c=='c') continue; 
    p++; 
    if(x==c) return 'a'+p-1; 
  } 
} 
 
bool canread(int i){ 
  FOR(j, w[i].length()) 
    if(!can[w[i][j]-'a']) return false; 
  return true; 
} 
 
class Teaching { 
  public: 
  int count(vector <string> W, int K) { 
    if(K<5) return 0; 
    int ans = 0; 
    K-=5; 
     
    FOR(i, W.size()){ 
      string s = ""; 
      FOR(j, W[i].length()){ 
        char c = W[i][j]; 
        if(c=='a'||c=='n'||c=='t'||c=='i'||c=='c') continue; 
        s += getC(c); 
      } 
      w.PB(s); 
    } 
     
    FOR(x, (1<<21)){ 
      int i = x; 
      int c = 0, j = -1; 
      CLR(can, false); 
      while(i>0){ 
        j++; 
        can[j] = false; 
        if(i%2==1){ 
          c++; 
          can[j] = true;           
        } 
        i/=2; 
      } 
      if(c!=K) continue; 
      int t = 0; 
      FOR(i, w.size()){ 
        if(canread(i)) t++; 
      } 
      ans = max(ans, t);       
    }   
     
    return ans;     
     
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/