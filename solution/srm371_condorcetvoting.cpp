/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8240
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

class CondorcetVoting {
public:
    int winner(vector<string> votes);
};

int CondorcetVoting::winner(vector<string> votes) {
    int ret;
    return ret;
}


int test0() {
    vector<string> votes = {"acbd", "bacd", "bdca"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> votes = {"abc", "bca", "cab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> votes = {"cezdqcw"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> votes = {"abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "cbad", "cbad", "cbad", "cbad", "cbad", "dbca", "cbda", "cbda"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"a"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"z"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> votes = {"abcdefgijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> votes = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> votes = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> votes = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"cba", "acb", "bac"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> votes = {"cba", "cba", "cba", "cba", "acb", "acb", "acb", "acb", "acb", "bac", "bac", "bac", "bac", "bac", "bac"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> votes = {"jffpu", "jfkwa", "jfklp", "afkcz", "jfkcw", "jfkcm"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> votes = {"aurrhm", "oatsmh", "pqaohm", "nwoamh", "kxvzhm", "rkqymh"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> votes = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzza"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> votes = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> votes = {"jsubzkukrqhjhqqdpbaytzkfgoshggzlljcbdxsgxayzcrbhxg", "yzgbiwzxbkmjigcpoztgiefxhqisvmudnegqpieygziypswxhf", "hnowpwnufjkeuuxictfnofempxmnqqviefheeatjhzpdqdpmae", "bynoimfpojkgyigkyazmrebecwyjhnmlhrcaqqxjzdcjyvscps", "tjwxofdcoskeqmyrhmstcdwvkajdaxgjsssbveyntpnjdpmsbo", "nqbylitcksqtrhxxlasrltbgnstwlcjipvcrxoaathpxojaean", "zcqqelqmdzqhtcikgtycobegxxwegqqaatgogzfqustqqbclva", "chdniytjvahabfcndfghhkumsjilprmpxyukqepzamkmjcuzxi", "ykbwfrsfzuqxeuqavqzkzrcuasurdqhaopbyxerywghgtfvqvd", "rplhmepjofcktsqwaxvqmutytkgtrqpcqetvzvznhgpsvbbnwp", "iuvtacdawtyihpycsqehhqdnvtsofkgqpollzqeluhtiizlzxa", "ooprozhwpmbcvivikjqcexkidymtkcevythlsywmdclysfdymi", "ujejrfgacezngmejshqvbowhrefsvxmlsrwiuzjnzjfjpuheav", "dhqqqxvnvekchfyzvmuxmbqmmytnyoehzjzcayjesczzahsmcm", "txyjkqsycphvaqnyryqkccewmejeqrffwkocppuyoweplnagrq", "osptwgkoctwvroytlxsxxhezqgvxpswnuijhtbxuqnqjalzdwj", "owcymharpjznzdhlauxbtcqbbdyjaiobmvtkqdcrvkxzjltxym", "hatuxxprfibpuesneorhugehborupovovnvcfkprtcnplvmpgr", "bmdysrwektkqegylnggtqihbnlknkczjshwhcztvsnglejkfgl", "zfsqmiptdgrljpgzwoxukftszbtafzasqyitghotqclcduqxnh", "tkjnmdjuceaotsgbrkronpjgeslxcqcfhymmxhqccwvxgrawng", "mlgosmyazllpnxkjampymnnqbwwvxuwcmnojldvnqwryuelyjy", "dxkczpmaejkjwpdgdsrnhkslwifpwdorlpyspjfeewhslgsdhn", "pbpluxncsirdkpbhazoeetavmhmdrbdtfhihxgfturjmdlngvx", "gkqrjhgdrzxoxvkarsomjdjergbwlukmmkgpjcefnursllzqaa", "dorntlvxpkvyopzxjdxiniocvjxboujktdqfahjccvczdbiqmt", "dspfnmszucttyzyqqwswbakmhagaxherqohhgvbkbjugqdryyo", "dvtvyaadhljakeellepvvoglcmoxaqokoaqitzrgecdgpzyuzi", "fiyhmjhbrqgvaefliyrxcjldlvzkrlhecyzqsuhyhkrltekjpc", "ygvsjvinbhxfmljbtqeexjtdxvpfhkpksrruandbokfihcmrvi", "ezjrainnszmvtsxkvfmsiknevvherrbjqyfbjguuzinysvexnd", "urfjwuvvfpgcuzujnqzaihnzoibzchuxcpmvchczgqrulgtofy", "qbsyljhusdkrffscjbmdmlqjnvjyshswoikmlogndzptofcptq", "gfcigwoujszitiwhnlcmwgsopfleacapltonikjjnnpenzqcvw", "bhdskxmbysjjlbvylzkgirjwvlyxkanfzamzjjueyplyscclum", "cswvrayxigevhgkhidzliwytrswjrkqvjmjjmxkczwxjmblfjs", "tqbufwupijhvpjpjcrqiainvsnauhudpjzfylwuikzlbreylal", "uqmlydmsoymwaqhkfvzdvrvtrodlrmmevquzhdscveebhvvppr", "dsdtxtndequqrpnfnggbnstpaecfcwcaodemkukhfnquihzdlh", "jompurbibyltxilegqgfgwpjrswychegbcmefnkydnngatqmsl", "grydbxggwatnmpflvxsyqdvgfuzbzstibroxrhsexdkkalyaar", "owhetlxfqvgafukeiglajzbpxfezjiwuhgvbubpdzqgvopvwof", "juxojwviiwzejqfvspbgploqxtwigqiydglledmcywzgvyazih", "bexfnyhejrgmtdqrdoitvbhkydvrmjmshqeneohsqtipiqnusv", "gukncevslnzgvxzckevhylfnqjanzebugjevmywkzdnynzqqdx", "lqudlwucbhlabuanflclgjlugdxbmblkrhevlhaplkqlokuimj", "nzoqkxppyenbmjeiozrjqvqdjabiwufvsqsjgaznsqzputwurp", "xcvfssqchghbsnxayvhmuicfxeynopuuzqmbgqufzwidpjnqgt", "asmzmakkiiperxkdopkkqendwjgeirybcequtaymbswpamkymc", "mmvmhypzclvnkguzxcrfibzmrudziwbvenfgghmpxaxufedxjx"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> votes = {"abbcbbbaaccaaccbbacbbbaacbccbccacaaacaacaaacbccaac", "accbabcaacacbcccbbccbbcaccccccbbcbbcbaccbcbcacbcbc", "acacaaabccaaaccabbaaaacabaaabacacbaacbcccbccbcbacb", "acbcbabaabbcaababaacbabcacbaccabbaaacccbcabbbcacba", "cbbbacbbacccbbabbbcbaabaaaacaacbcbccbaaccbcaaccbcb", "cbacbbcbbcbcaaabccabcabbcbacaaabccabbcbacbbacbbaca", "cacaabccbbbaaacccacbbcacababbcaaabccbbacbbbccacbaa", "bccbbabaaaababcbabbbbcbcacbcbcbacccacacacacacacaab", "bccabcaabcabbccaaccbcabaaabbbcaabaaabbbbabbbaabaac", "accccbabaaaabcbacabbcbbacaacaaaacccbbbcacaccccaaac", "cccbcaababbaacaaabbbaabbccccacaacbacaacbbbaacccbbb", "bccccaccbcbbaaaaaaaaccbababcabaaccacbbabbbcabbaaca", "cbacacaabbccacaabbbbbbccabcbbaccacbcacacacbccbcbcc", "baabcabccaaaaccbaacaaccacccbcbbaaacacaccbcaacbbbba", "bccaaaabcbbcbbbbbcaabaacccbccbbcbabacaaccbccaababb", "cacbbbbcabbcbaabbccbaccbaacbbcbbbbcabababccabbbcab", "bccbcacbccaacacccccaacabacbacbbbcaabacacccbbbccaac", "aaaccbbbacacbaaaacacaabbaacccbcccbcabbccbcacabbacb", "bcabcbbacbacacbbaaccabcabcbbaabacacccbbbcabbbcaacb", "bacbbbbaccbaabbbbbcaccbbcbcabbbccbcacccbabbbcaaacc", "bababcacbacacacccccbbcacccbbcbccaccaacbbcacabcabba", "aaabaccbbcacaacbabccccabbbcbcccccccbaacbccbaacbbbc", "abacbaaaaaccacbbbaccbbbabaacbcbccacccabaaaacbaabbb", "cbbcacbaccabbbcaacbcbabbcabcbaccabcbbbcabcbcbaacca", "babbacaaacbbcbbbabbaabcbabcbbaacaacbbbaaaabbcabcca", "cbabaacabcccaabbbacccaccbacabbaacaaabcbcccbcbcccaa", "aabbbcbacabbcabcbcccbccaccbcacbaacabbbccaabaabcbba", "caccabcccabbaacbabbaaaccccccccaaccbcaccacaabacccba", "bbbcabcababaabacaccacabcbccacccbbbbcbbbaccabcabaab", "bbbcaababbbbababababcbbbbaaabbacaabcacbbccbcaaaaaa", "bcbacccaaaabbcbcabbbcababbcacaabbbbcbbacbaabcbaccb", "bbcaccaaccacbbaaccaaaabccbbacbcbacaacbacbccaaccbba", "abaaacbccbbabbcaccbaccccbaaacaccccababcbccccbabcca", "acccaccababababacbbaccbcabcaccbabaabacbaacaaacabca", "aaabababccabccbcbabcabcacbbcacbcbbbabcabacbcaacacb", "ccacbaabbcbaccaccbbabbabbabaacccabcaaccacacccbbcab", "bbaabcbabbbaacacabaabcbaaabacbccccaccaaaacbacabbbc", "abaaaccaacbbcacacbcbccbaaacbbcbacabbbccabbbccaaaac", "bbacbabbcacbbacccaccbcbcabbcbaacabbbbabbaaabaacacb", "cacbacbccbcbabacccacabcacacabbcabbccaacacbaaacaacb", "bacbbacbccccabcbabcbbcbacacaaabcbaccccaabaabbacbcb", "abcaaccccabccaaaaccbabccacbcaaaacaccaccccccaaaabaa", "bacabcbccbacccbaaaabcbbaabbabaabcabacccbcabacccbcc", "babaccbbcbcbacccabccbcccbaaaaacccabcbccbbbbcbabcbc", "cccbbaccbabbbbcbcbcbaaacbbcacbcaacacacccbcabccbcaa", "caacbcacbccaaaaacaaababbcccacbabaaabcaacaaababacba", "cccccaccabcaacababbacbcbabbcaacbacbabbbccbabcbabbb", "ccbcababcabcbcccaccccacabcbaaacaabccbbaabaccbaccab", "abbbcacaccabcbccbacabbbccaccaaaacccabbcbacbbccabcb", "bacabccabcbbcaacbcacabcbccacbcccbcbcaaaabbaabccabb"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> votes = {"h", "e", "l", "l", "o"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> votes = {"abc", "bca", "cab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> votes = {"abbcd"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> votes = {"abcd", "abcd", "abcd", "aedf", "abcd", "abcd", "cbad", "cbad", "cbad", "cbad", "cbad", "dbca", "cbda", "cbda"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "cbad", "cbad", "cbad", "cbad", "cbad", "dbca", "cbda", "cbda"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"lmnuqnbdifzlujqvnfjxxvkczfkzzjqnaqpohygjsjtakzrsos", "yqhquhkjcjyugtedogfurkxiyqufotiajmwhyilthmoevlwlrx", "pwpzhsvbfzvtvhwycfznmaomafsyvyrqpizteuoxgthfxsmxjr", "wpsursgwthhilgdhzfzaxadtklhyhqzfdimsrueecxkqkrudlm", "zgdtnhmivnnkclgarygydqdhltrsthidzyqazfnovktqcotchc", "olineiytymrjscyoeivdyhphljzhezohmiurcpblvwaajiqugt", "aoqmemjlhgoxprurtymkktdbnoxwttgeeqimlhcztctyphmeqd", "suyvkkjoplmzdcakpjvozimhxxqhduiqedlngwgoooupnedksd", "gpmhhdaqbsqrfpdrsykhbutsnuwjppgdeebjgsdyfoecqqnlem", "kimipecehlbtmbwnkdxymeclsshvkmywjxeshoihmlgvxiljvw", "llfpnjzywcpamevwtygfphifubttnwnphdbytwodclrjprseqw", "rdwsvyncgfrazzaodggxwwbtjqujrmcdpomjryledhufhwkhzk", "tnkytgjpmmgvxjcnjgzuhwqqsldzcsfojswrqcnbqyxaagibpv", "txdonpeashnrohuvogldxhsprngsoqdjfqtexyrwizzoeowaqe", "zdlmwafcozvqciewgkekfgrcyvzsahpszobrixwxkpiclqljtk", "vnbimpdkyebcwlfkffrlzzmkvmhnlcivwhwztzrbxjcrtuvtxf", "kidxhoafyesyvizvozsqorqmqlesixrnerzoowrvwpmibhhyff", "uvkoukdwjcvxqglschjagquehpnhkycpmjtgludhrbefjjfytk", "xlbnvmdwsyxhgsczhyjgdfgnwfpdtlkhpekhjncylcqmssyghw", "dvaeqjkzmhiydlxdjohnscghbtuswzumsqoykiidfwfxyaaaym", "oivfhjlrwyaxawgeurbrnberazsxtkaquehjfcewctbfjtpqdl", "jhehjobmarguqwsokldzscsfacxfzxfjqoverscjzbkmzdndos", "iyhtyavoxhtapyektuatprwskxzcznfdiuehuwymtxdrnklsmd", "uskvutkfiubzyblwmparmjdspxywxerftzlkoriebsupcpxcjw", "kuveerenlaitvycicyzalwuiuzteyctmuifefygaiaioiiedby", "wrgrtdxvdkocsaehfcilqjoevajnjttknrsprtkrlkjapymuzr", "phzlcepaytfaveopszrnkvnehrjstzflvyahorktkmgycouier", "tlpbjcsxqlgyglmvlyqxixipvwoqlnkaeqmarvxumkrnjcokvf", "ktqjdcugbidvbxrnsaqwxtbftqsnpavytodpjdpvyqxksuvzwz", "tjrwovttlnkznqdqiauapwkczxrxopeneuxflgbdwjmhjguzpe", "uddfeimozyfrqmfozissccrifwqbhxyehktusdgzxlaeykexqg", "qoevjtframuqgbdnrsmbxrvbtfglowffctujtzqwzggtlbhrop", "kwkbbwvnakwvvdycxczozqiworvpwkoqmqhcalyzvqnkcxekjq", "zvueswqknzpyvysdkhsoicmhczohefnaslxwxllxlewtzuwbsu", "vseneiqwhnezojkxhoryesugdhtjckqjdfgnrdoizpyfmdlqlw", "qiodcwfygkivbujfinzyhcejcjojonhgustqjfnecolocmfhpz", "xtgfpmuscrldurennlqkwhhyipqzevbyktbvtpwvttgecajylq", "vuizfsoayxziljzegblcatmvefqrzxwktndpbbzdrwlphlgdyw", "dofnzxqlxvkhdjyalhvvpaangodnlxhlsxshhtifxickobixbb", "duzvngqiaggcxfgrjmarwupaybnqgudbewkgwgtocblxjeccgq", "hbczibhqufqqxvllvmtzhfmbezplhqakbmmvafqyxjyexdsswb", "jiouymhlzcltjudobfuoiwubgeidpmvkhozhkducomlgltlvei", "nncaiknsugjqccasdxdazcrtvllkfvtezazzcsctlegenlltvk", "zdqowgoljpdsyqncsdjsdcxxyrghrwpqinxmridxpdpqunvkwx", "rykxtlxyppfmajfhqyudwtigbjtmqmdltcqzgcaiwswfyryhcw", "wiaruhiibujopgrqnpiugkdqtesojacqhnwdagnvxesfrfiefa", "abradqeelkpkecvpsdwelpdjmmbpdupzvtvjxydkdncugghonu", "cwegvfjzbdwkbevkgdwubtjvtoqothggtdrdolgjmfubzzpnhj", "aqwotzqblhmrfzfgykzmucwwpdyjvctvfamcgltmjtmrcjivhs", "ytnwmqqjvmohfyesqxdvrjgfvgymhlwdxlozmcqmvhtcexamey"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> votes = {"abcdef"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> votes = {"az", "ba"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> votes = {"aab", "aba", "aca", "caa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> votes = {"abbcbbbaaccaaccbbacbbbaacbccbccacaaacaacaaacbccaac", "accbabcaacacbcccbbccbbcaccccccbbcbbcbaccbcbcacbcbc", "acacaaabccaaaccabbaaaacabaaabacacbaacbcccbccbcbacb", "acbcbabaabbcaababaacbabcacbaccabbaaacccbcabbbcacba", "cbbbacbbacccbbabbbcbaabaaaacaacbcbccbaaccbcaaccbcb", "cbacbbcbbcbcaaabccabcabbcbacaaabccabbcbacbbacbbaca", "cacaabccbbbaaacccacbbcacababbcaaabccbbacbbbccacbaa", "bccbbabaaaababcbabbbbcbcacbcbcbacccacacacacacacaab", "bccabcaabcabbccaaccbcabaaabbbcaabaaabbbbabbbaabaac", "accccbabaaaabcbacabbcbbacaacaaaacccbbbcacaccccaaac", "cccbcaababbaacaaabbbaabbccccacaacbacaacbbbaacccbbb", "bccccaccbcbbaaaaaaaaccbababcabaaccacbbabbbcabbaaca", "cbacacaabbccacaabbbbbbccabcbbaccacbcacacacbccbcbcc", "baabcabccaaaaccbaacaaccacccbcbbaaacacaccbcaacbbbba", "bccaaaabcbbcbbbbbcaabaacccbccbbcbabacaaccbccaababb", "cacbbbbcabbcbaabbccbaccbaacbbcbbbbcabababccabbbcab", "bccbcacbccaacacccccaacabacbacbbbcaabacacccbbbccaac", "aaaccbbbacacbaaaacacaabbaacccbcccbcabbccbcacabbacb", "bcabcbbacbacacbbaaccabcabcbbaabacacccbbbcabbbcaacb", "bacbbbbaccbaabbbbbcaccbbcbcabbbccbcacccbabbbcaaacc", "bababcacbacacacccccbbcacccbbcbccaccaacbbcacabcabba", "aaabaccbbcacaacbabccccabbbcbcccccccbaacbccbaacbbbc", "abacbaaaaaccacbbbaccbbbabaacbcbccacccabaaaacbaabbb", "cbbcacbaccabbbcaacbcbabbcabcbaccabcbbbcabcbcbaacca", "babbacaaacbbcbbbabbaabcbabcbbaacaacbbbaaaabbcabcca", "cbabaacabcccaabbbacccaccbacabbaacaaabcbcccbcbcccaa", "aabbbcbacabbcabcbcccbccaccbcacbaacabbbccaabaabcbba", "caccabcccabbaacbabbaaaccccccccaaccbcaccacaabacccba", "bbbcabcababaabacaccacabcbccacccbbbbcbbbaccabcabaab", "bbbcaababbbbababababcbbbbaaabbacaabcacbbccbcaaaaaa", "bcbacccaaaabbcbcabbbcababbcacaabbbbcbbacbaabcbaccb", "bbcaccaaccacbbaaccaaaabccbbacbcbacaacbacbccaaccbba", "abaaacbccbbabbcaccbaccccbaaacaccccababcbccccbabcca", "acccaccababababacbbaccbcabcaccbabaabacbaacaaacabca", "aaabababccabccbcbabcabcacbbcacbcbbbabcabacbcaacacb", "ccacbaabbcbaccaccbbabbabbabaacccabcaaccacacccbbcab", "bbaabcbabbbaacacabaabcbaaabacbccccaccaaaacbacabbbc", "abaaaccaacbbcacacbcbccbaaacbbcbacabbbccabbbccaaaac", "bbacbabbcacbbacccaccbcbcabbcbaacabbbbabbaaabaacacb", "cacbacbccbcbabacccacabcacacabbcabbccaacacbaaacaacb", "bacbbacbccccabcbabcbbcbacacaaabcbaccccaabaabbacbcb", "abcaaccccabccaaaaccbabccacbcaaaacaccaccccccaaaabaa", "bacabcbccbacccbaaaabcbbaabbabaabcabacccbcabacccbcc", "babaccbbcbcbacccabccbcccbaaaaacccabcbccbbbbcbabcbc", "cccbbaccbabbbbcbcbcbaaacbbcacbcaacacacccbcabccbcaa", "caacbcacbccaaaaacaaababbcccacbabaaabcaacaaababacba", "cccccaccabcaacababbacbcbabbcaacbacbabbbccbabcbabbb", "ccbcababcabcbcccaccccacabcbaaacaabccbbaabaccbaccab", "abbbcacaccabcbccbacabbbccaccaaaacccabbcbacbbccabcb", "bacabccabcbbcaacbcacabcbccacbcccbcbcaaaabbaabccabb"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> votes = {"cezdqcw"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> votes = {"ab", "fa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> votes = {"az", "cb", "cb"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> votes = {"ab", "bc", "db"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"acbd", "bacd", "bdca"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"ab", "ab", "zc"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"ba", "ba", "bz"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> votes = {"az"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> votes = {"az", "ba", "ba"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> votes = {"a"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> votes = {"abc"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> votes = {"abcde"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> votes = {"ab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> votes = {"adz", "baz"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> votes = {"ab", "ab", "ab", "za"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> votes = {"az", "az"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> votes = {"ab", "ab", "za"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> votes = {"bac", "aac", "aba"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> votes = {"aba", "aba"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> votes = {"ae", "ba"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> votes = {"cezdqaw"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> votes = {"o"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> votes = {"ab", "ca"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> votes = {"drct", "drct", "drct"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> votes = {"bc", "fa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> votes = {"aa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> votes = {"abcdef", "abcdef", "fbcdea"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> votes = {"azb", "bab", "bab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
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
    vector<string> votes = {"zzzzzzzy", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz", "zzzzzzzz"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> votes = {"za", "ab", "ab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> votes = {"qwertya"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> votes = {"adbb", "adbb", "adbb", "edee", "edbb", "edbb"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> votes = {"abcz", "defa", "bcda"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> votes = {"baa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> votes = {"ecdc"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> votes = {"azd", "bad", "bad"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> votes = {"ce"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> votes = {"ac", "zc", "ac"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> votes = {"zb", "ab", "ab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> votes = {"abcdef", "abcdef", "zbcdea"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> votes = {"cab", "abc", "abc"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> votes = {"aaa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> votes = {"abc", "bca"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> votes = {"acbd"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> votes = {"ab", "ca", "ab"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> votes = {"acbd", "xayz", "bdca"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> votes = {"ace", "zoj"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> votes = {"abbe", "zabc", "zabc", "zabc", "zabc", "zabc", "acde", "acde", "acde", "acde", "acde", "acde", "acde"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> votes = {"acb", "bac"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> votes = {"ab", "ab", "zb"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> votes = {"ab", "aa", "aa", "aa"};
    CondorcetVoting* pObj = new CondorcetVoting();
    clock_t start = clock();
    int result = pObj->winner(votes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22629843&rd=10787&pm=8240
********************************************************************************
// I am a Red Coder  .....................  :)
 
#include<algorithm>
#include<numeric>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
 
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cassert>
 
#include<cmath>
#include<complex>
using namespace std;
 
#define FOR(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define REP(i,n) for(int i=0;i<(int)n;++i)
#define sz size()
#define pb push_back
#define all(a) a.begin(),a.end()
#define zero(m) memset(m,0,sizeof(m));
#define minus(m) memset(m,-1,sizeof(m));
#define iss istringstream
#define oss ostringstream
 
typedef vector<int> vi;
typedef vector<string> vs;
 
class CondorcetVoting {
public:
  int winner(vector <string> v)
  {
      int candidate=v[0].sz;
 
    REP(i,candidate)
    {
      int c=0;
      REP(j,candidate)
      {
        if(i==j) continue;
        int p1=0,p2=0;
        REP(k,v.sz)
        {
          if(v[k][i]<v[k][j]) p1++;
          if(v[k][i]>v[k][j]) p2++;
        }
        if(p1>p2) 
        c++;
      }
      if(c==candidate-1)
      return i;
    }
    return -1;
  }
};
 
 
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/