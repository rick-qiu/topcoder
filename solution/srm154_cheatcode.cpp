/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1779
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

class CheatCode {
public:
    vector<int> matches(string keyPresses, vector<string> codes);
};

vector<int> CheatCode::matches(string keyPresses, vector<string> codes) {
    vector<int> ret;
    return ret;
}


int test0() {
    string keyPresses = "UUDDLRRLLRBASS";
    vector<string> codes = {"UUDDLRLRBA", "UUDUDLRLRABABSS", "DDUURLRLAB", "UUDDLRLRBASS", "UDLRRLLRBASS"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string keyPresses = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> codes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string keyPresses = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> codes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string keyPresses = "AAAAAAAAAAAAAAAAAAAAAAAAAABCBABCBABCBABCBABCBABCBA";
    vector<string> codes = {"ABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABCBABCBABCBABCBABCBA", "AAAAAAAAAAAAAAAAAAAAAAAAAABCBABCBABCBABCBABCBABCBA", "AABBCCBBAABBCCBBAABBCCBBAABBCCBBAABBCCBBAABBCCBBAA"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string keyPresses = "GOOD";
    vector<string> codes = {"GOD", "GODMODE", "GIMME"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string keyPresses = "IDDQDDTSFHHALL";
    vector<string> codes = {"FHHALL", "FHSHH", "IDBEHOLDA", "IDBEHOLDI", "IDBEHOLDL", "IDBEHOLDR", "IDBEHOLDS", "IDBEHOLDV", "IDCHOPPERS", "IDCLEV", "IDCLIP", "IDDQD", "IDDT", "IDFA", "IDKFA", "IDMYPOS", "IDMUS"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string keyPresses = "IDDQDDTSFHHALL";
    vector<string> codes = {"IDBEHOLDA", "IDBEHOLDI", "IDBEHOLDL", "IDBEHOLDR", "IDBEHOLDS", "IDBEHOLDV", "IDCHOPPERS", "IDCLEV", "IDDQD", "IDDT", "IDKFA", "IDMYPOS", "IDMUS", "IDSPISPOPD"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string keyPresses = "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYY";
    vector<string> codes = {"ABCDE", "BCDEF", "CDEFG", "DEFGH", "EFGHI", "FGHIJ", "GHIJK", "HIJKL", "IJKLM", "JKLMN", "KLMNO", "LMNOP", "MNOPQ", "NOPQR", "OPQRS", "PQRST", "QRSTU", "RSTUV", "STUVW", "TUVWX", "UVWXY", "VWXYZ", "WXYZA", "XYZAB", "YZABC", "ZABCD"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string keyPresses = "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ";
    vector<string> codes = {"ABCACBACBCACABCBAZAZAZ", "ABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAZ", "ABBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCACBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBACCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCBCAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAACCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCABBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCBAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAZAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZAZ", "ABBCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBCCCACBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCACBBBACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBACCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBACCCBCAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCBCAACCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAACCCABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCABBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCABBCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBCBAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCBAAZAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAZAZZAAZ", "AABBBCCCCACBBBBAACCCCBCAAACCCCAABBBCCBAAAZAZZAZ", "ABBCCCACBBBAACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBCCCACBBBACCCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCACBBBACCCBCAAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBACCCBCAACCCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBACCCBCAACCCAABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCBCAACCCABBBCCBAAAZAAZZZAAZ", "AABBBCCCCACBBBBAACCCCBCAACCCABBCCBAAAZAAZZZAAZ"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string keyPresses = "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSJ";
    vector<string> codes = {"LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSS", "LAKJDGSJKGLSDKHFKDFHDGHSDKKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDHHSDKKSJDHFHJGKDKLSLSLJKASSJ", "AKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSJ", "LAJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKHHSJ", "LAKDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDFHJGKDKLSLSLJKAHS", "KJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDHHSDKKSJDHFHJGKDKLLSLJKAHS", "LAKGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGJKGLSDKHFKDFHDGHHDKKSJDHFHJGKDKLSLSLJKAHS", "LAKJDGJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHGHHSDKKSJDHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSL", "LAKJDGSJKGLSDKHFDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLJKAHSJ", "LAKJDGSJKGLSDHFKDFHDGHHSDKKSJDHFHJGKDKLSLSJKAHS", "KGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSL", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDGHHSDKSJHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDGHHSDKSJHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJKDKLSLSLJKAHSJ", "LKJDGSJKGLSDKHFKDFHDGHHSDKKJDHFHJGKDKLSLSLJKAHS", "AKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDKLSLSLJKAHS", "LAJDGSJKGLSDKHFKDFHDGHHSDKKSJDFHJGKDKLSLSLKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFGKDKLSLSLJKAHSJ", "LKJDGSJKLSDKHFKDFHDGHHSDKSJDHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHHJGKDKLSLSLJKAHSJ", "AKJDGSJKGLSDKFKDFHDGHHSSJDHFJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJDHFJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSJHFHJGKDKLSLSLJKAHSJ", "LAKJDSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKSDHFHJGKDKLSLSLJKAHSJ", "LAKJDSJKGLSDKHFKDFHDGHHSDKKSJDHFHJGKDLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSDKKJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDHHSDKKSJDHFHJGKDKLSLSLJKAHS", "LAKDGSJKGLSDKHFKDFHDGHHSDKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSDKHFKDFHDGHHSDKSJDHFHJGKDKLSLSLJKAS", "KJDGSJKGLSDKHFKDFHDGHSDKKSJDHFHJGKDKLSLSLJKAH", "LAKJDGSJKGLSDKHFKDFHDGHHDKKSJDHFHJGKDKLSLSLJKAHS", "LAKDGSJKGLSDKFHDGHHSDKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJKGLSKHFKDFHDHHSDKKSJDHFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHSKKSJDHFHJGKDKLSLSLJKAHSJ", "LAKJDGSJGLSDKHFKDFHDGHHSDKKSJDFHJGKDKLSLSLJKAHS", "LAKJDGSJKGLSDKHFKDFHDGHHDKKSJDHFHJGKDKLSLSLJKAHSJ"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 7, 13, 17, 27, 43};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string keyPresses = "";
    vector<string> codes = {"UUJHBMAPZIEGHKEEYGMIKHTJVNLEAUCWOODPCFEBNKJWUNBUTP", "CDYYOWNAANWFJKTPZVUFYKSHGOUJJNZNTXNHTBJWQFBAPWRQRN", "YRXQYGEUPPJOFCOUKJVTFMBGOQCFJVSHMSZMYDGNVQECUUWEDU", "AJGDRWVWBERVLGNMUNQDBNVHRPBNWEHYPPBJLWFOBYMOGBBBPT", "ESIBZZQCMMIWKYNLJBIORLODZVHCYWVEQDFPCVTRKBPWBCIKDS", "YVFPAGMHJKFEQVKXMOUFFEHWBIZLTCFTXKKAQWHBINIYISVVGS", "AOWJKZSJMNOTINFTNYPVZAKHYSBWPIOSYMBKOVWCKKWTZBMNZD", "KBDWKEQMCGWSAUEBGUZCXJOTCQWQDYWPZZNJFDXHJTZJPGNWAM", "AXXPSCFPSKPOBOQOZXRXFDSGOIODEPREOPVJRCALOPAPFSFEPZ", "DWCWDSGRWKINQZEOIVQIHHZJYEDEKUDORHMWBSPXEANWZRKJPD", "TYKSJIYMMIGRYZAKVCELBILQFMIRVZUQXEIINGUBQCVPCVBXZG", "KDQXTXJDPGEJWBQGLDOFGFKBWMZXLADYDWVZTHEINJUMMKUYPJ", "FVQPXMDYJPYPNELKDERJPHSLTFVNFKYKFOAECDCOUBDJHQUKWN", "TNUOYNTTBAFBKNQMRSQWIMZLWGDSSCFLPABOPWJSWPUHCKTVEL", "RPYSCWYGQQIVEXXFNNCXHYOBHSNBPUOJJMBLKATAQBYWBXCQMG", "PUEDVMXLPPHDYQSZDEZXFSYFOBCSSPYHJFNGRMTIBALZQFBWKC", "TRUTWLVYFPPEWAJLHCYCMBDXBVFCRPEKIBEEOBETQUZOWKADOA", "GADLAGGFIAWPKESQKIROBJKDYHNAMECUEFFEMMLWOJNYNHRXPK", "OTUYWUHLWURYOWFUCTIQSWZFWPNNMEAAXUBVOIJKCAKTWRNBLX", "RDVSKTHZJWEJWDDZZTIKFMKRFJIUMTTFYOXJIFKRBQCZUFZVAJ", "FFVRWDAGXMCRRAHRLRYYKBOMCITBFTMMAKEYNGFMVHFOJPFXGD", "VTGJFJUBMZWZMXLQXYWCMRLSGXHNUPTPIZAQIUTVUPWIMHAKHY", "OTSCNAZWNTMGKWGKOQHHNBXJLLSLVZJMTBOIBPFRIRXUPFGEYN", "LLQKXBWPMTPYFKBVSFKZWUSVOIDVOBIZOBMLCIBRBSPJCSEWXR", "WVLQTCYWZMZJONKABNKCENWVWYPDWPUUKHLDJLBIYAUOQEQTRA", "VXNTUMTKRPZNMLUXRGISQIVKYNPOGIODGEWAQPKHGLUSXQROYC", "IPKDZJSQXYZOBHSZHKOURVFNNCFFSEHBTTEUEXNEXMSBVMACWP", "WPMEEZGJGBNPCILIFPHSVFGNGBBGFXXCOJISLQCTRRLTCWCHNJ", "ZJQHYWKAFPZCROMZGZQKSJCDDEZHNPSOYJVYHFYMUAROOFPUEH", "FWRJAWPBDCQVQQGNPOSPCOPVEFAUAEDHDWSDSHGXJZVBPDOGTI", "YWWPRBXUXXYCGBBYGVHPTSOQTFTHONPOLNFEQCYNBZSHATHJOQ", "AJIOZBVVKJKZZXNFBDHCTJBNSDGCMWSMGBCHEAEPLOQLNDQPJZ", "TEKURDXZHMVZADCFNHFRWQIMBVSTMDTFJFBCIZBPNYRNETSRCZ", "KYQSNRQHNEKIKVNNXYOYPBYGRCCLVELGFBYSUQBHVNPHIFUFDJ", "FSMDBDIDPDHALMBMGVCHFXUWECBBJGMOZYUCCCFRHMTTBWFHTH", "RYHLVNQYOZFAQGBKIDMNWVBPOENTMGDFFKQCZIAOKFQANTMVWA", "KUVOLKSYFGFILMSEOSMQIYYAYLUMHSMRNIHYSAZXGEIUQCYEWM", "UGLSHLGDYNVMGKUOLOQKOWOWSGYQMVFGDSBKDHPDWNQEXMSKBI", "UPHKNBQNSCKZLOROYWXQCVDSZCEUNHEJWNULPMZJPJICXBSYXP", "QZMTTLVAHKHOUGBORQCQBTCJVBMPBKERLSKFGIFNSMBOSDCMVF", "EXAGIWKVLLHSDSMPZSZEGUTJINOLZKSEJSMTQYOEKVYPQKGPDG", "ULAPUICJVEVPKGKWZCVOIHLIYBTETYMNLMEHXGSUMNMWTYVVCS", "JLZWTXAOBTOOIBCMJBUDYHRMDMKAHOSSZRPVQPLUICKSDOEOQY", "SQHLCNZONJCGBEZSBQJMMTQWLWKRKCQESZRWMRKACNIFTHYUZJ", "ILFZJSVUKHYAORBFPOYAQAPYGIHGCJPMWWLGPICZQABGTCLJQM", "LIMAGSKQYOZQAVOMDDWFCOIFUBIIKAUVJGXRBHHBVITYEIKJLG", "PQVXVRADZNGTKRCIIDRQGPAANGIZQVHFLEEJWGOVTURELTOUYH", "MEWOELVOKLKSSXYYGUEVSYRLEDGUZEBNKABRLYFYJRQBRQZXLE", "UFEOQKTYESCHHMHKDVJLTUELWVBXVOBRVHFNRYLXSPHBCQOHLX", "UGTZRPUVNRLQJHAOURPIRHXYJBOXJCWDIPECHBZUSKMBTMSOGH"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string keyPresses = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA";
    vector<string> codes = {"A", "BA", "ABA", "AABA", "AAABA", "AAAABA", "AAAAABA", "AAAAAABA", "AAAAAAABA", "AAAAAAAABA", "AAAAAAAAABA", "AAAAAAAAAABA", "AAAAAAAAAAABA", "AAAAAAAAAAAABA", "AAAAAAAAAAAAABA", "AAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string keyPresses = "AAABBBAAACCCBBBCCCDDDBBBDDDEEECCCEEEAAAFFFBBBEEEFF";
    vector<string> codes = {"AB", "BA", "AC", "CB", "BC", "CD", "DB", "BD", "DE", "EC", "CE", "EA", "AF", "FB", "BE", "EF", "ABBBA", "BAAAB", "ACCCB", "CBBBCCCDD", "CBBBCCCDDDE", "CDDDBBBD", "ECCCEEEAAFBEF"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 21, 22};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string keyPresses = "BCCEACDABDAEAABCECBBDCDDBDCBBABCCBDADCAECAEDDCACBD";
    vector<string> codes = {"AEAEE", "DEBAB", "BDDEE", "CBCBB", "EDEDB", "ECDDD", "CECCD", "EDCAD", "DEDEA", "DBBCC", "EBCDB", "BEDED", "BBEBB", "EAEBC", "ECBCD", "DCEEA", "DEDCE", "ADEDD", "EABDB", "CCDBA", "ACEEC", "CCEDC", "BDDAB", "ECEAA", "EECBE", "DDDDC", "BEBCD", "DAADA", "EBECD", "CCABE", "BBEDC", "AECEC", "BCDDE", "BBBEB", "CDDDD", "BACCD", "BDBCD", "DAEDE", "CEDAC", "CEBEA", "CDAAB", "ACDCB", "BBBDA", "EDABD", "BDAEA", "CEBDA", "BBDCD", "BCCBC", "DEAEE", "ABADC"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 46};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string keyPresses = "HIFGHGIIHIJHHFFFHHFFJGIHGFGGGFJJJHHIIHGFGIHFIFFFHG";
    vector<string> codes = {"HIHGF", "IGIGF", "JIGIF", "IIFHF", "IFIHG", "GHGJJ", "JGHIH", "FIGIF", "IJFJJ", "FJIHG", "IFHII", "FGFIF", "HIJGG", "GGHJH", "HHGJG", "GJHGI", "GGJFJ", "JFHJF", "FIIJF", "HHIGH", "HIJGJ", "IHIHF", "IIGHI", "FGFJI", "GJIGF", "IFIJG", "FGGGH", "FGGFJ", "IJJJG", "FGFFG", "FIHIH", "IJHGI", "GIGHJ", "GFIJF", "HIJGH", "IIJFJ", "HFJJI", "GJHGH", "HHFJG", "HHGFG", "HJJIH", "JIGFI", "FHFGI", "JFIIG", "FIIIH", "GFGIH", "HFGJF", "IFJJF", "JGHFI", "FJIFJ"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 27, 38, 45};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string keyPresses = "LLNMNOLKLNLNOLNOMKMKKMOOLNOLOMMMNMKNLNOONKNMMNOLNL";
    vector<string> codes = {"LKKMK", "LNOOO", "LLMKL", "OKMMO", "MLKMK", "OKOKL", "MNLML", "LKOLK", "KONML", "OLMOL", "LLOLK", "OKKLM", "LNLKL", "MLNNO", "NNOOL", "KKOOO", "MLMLM", "MNKKO", "MNONN", "MMMLM", "NLLMK", "OKNKO", "ONMOL", "MNLMN", "KLOKM", "MMLLK", "OKMKO", "OLOML", "LOLKN", "KMNLL", "MMNLO", "MKNNM", "OMMLO", "NMKNK", "OLLKL", "LKLOM", "MLLKO", "MMMKL", "LLKKO", "KNMMN", "OLLKO", "KLOLM", "NNLLL", "KNNOL", "LKMOK", "OLLLN", "OKKLM", "OLKKM", "MLKNM", "NLLOM"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string keyPresses = "RTTTRRRSQQRSRQQTPQTRQPQRRRRRRRTRRPQQRPTSSTSPPPRRSQ";
    vector<string> codes = {"RTSSQ", "PPSPT", "RTQQT", "TRTQT", "TPSSP", "PPRPS", "QRRQP", "PTRPT", "QRPPQ", "QTSPS", "RPSRP", "PPPPP", "SQRRT", "RRSTR", "TRQQR", "RSTSP", "RRRRP", "RRPTR", "PRPTT", "PSSPT", "PRQRS", "QQSPT", "QTRSQ", "TSPTR", "SQRSR", "SPPRQ", "TRPPQ", "PSSTS", "RPTQP", "PPPQT", "SQRPQ", "TPRTR", "PSRPQ", "SPTSQ", "PSSTT", "TRPTP", "QTQQQ", "TPRQR", "TSRSP", "PTSPR", "TRRSS", "RTPTP", "RPPPQ", "QPTPQ", "QRRPP", "RQTPS", "TPPSP", "SPTQQ", "TSRQT", "PPQTP"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string keyPresses = "VXUVUUWYYYWXYXYWXXWUUXWVVYVXUXUVVUWYXVUYVYWWUYYXWX";
    vector<string> codes = {"XWVVV", "UWWUW", "WUVVW", "UUUYW", "WUWYW", "WXYWW", "WUUVX", "XVWWV", "WUXXV", "UXXXW", "WUYVV", "YUWUW", "YWUVU", "UYXXW", "VUYYX", "UWXUU", "XWWYY", "XXYWX", "YWXYX", "UYUVY", "YWYXY", "YUVUW", "XUYUY", "UUUWU", "UVWXW", "WVXYW", "XXYYX", "UYUVV", "WVVYX", "UYYWV", "YXWXX", "YWYXW", "VXWXW", "XXXXW", "YXXUW", "WXVXU", "XYXWY", "WYVXY", "UWYUW", "VXWUX", "YVVUY", "XYWWW", "YWXUY", "WYUUY", "VVVUX", "XYVVV", "VWWXW", "VVVUU", "UWWXY", "YWXYX"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 49};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string keyPresses = "ZXYXYYYZYZXXXZXZYXYXZZZXXZZYYYXZXYZYXYYYYYYYYZYXYX";
    vector<string> codes = {"YXXXX", "XXXZZ", "XZYXZ", "YYZXX", "YZZXY", "ZYZZX", "XXYYZ", "XZZXY", "ZXYZX", "XYXYY", "YXYYY", "ZXZZX", "XXYZZ", "XZYXZ", "ZXYYX", "YXYZY", "XXZYZ", "XZZYZ", "XYZZX", "ZZXXY", "YXYZY", "YYYZY", "XXZZX", "ZYXXZ", "ZXYYX", "XYYXY", "ZYZXX", "YZXYZ", "YYYYZ", "ZYXZZ", "XYZYX", "YYYZZ", "XYYZZ", "XYZXZ", "ZZZXX", "YXZZZ", "YXXZY", "YXYZX", "XXZZX", "ZZZYZ", "YXYXZ", "XZZZZ", "XYZYX", "YXYZX", "YXZXZ", "ZZXYY", "ZXZZY", "ZZZZY", "YXXYY", "YXZZX"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9, 10, 13, 15, 20, 21, 26, 28, 30, 34, 35, 40, 42, 44, 46, 49};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string keyPresses = "ZZYYZXYZXYZYXZZZXZZYZZZYYYZYZZZZXYZXZXXZYZYYXXYZZZ";
    vector<string> codes = {"ZZXXY", "ZZYZZ", "YYYYY", "XYZXY", "ZYZZZ", "YYYZY", "ZYYZY", "ZYYXY", "ZYXYX", "YYYYY", "XYZYX", "YXYZX", "ZXZZY", "ZYXYZ", "ZZZXZ", "YXYZY", "XYXXZ", "ZZXXY", "ZZZXX", "YZYYZ", "YZYZZ", "YYYZY", "XXXYY", "XXYXY", "ZZXZZ", "YYZZZ", "ZZXZZ", "YYYYZ", "ZYYXY", "XYXZZ", "YYYYY", "YYYYZ", "ZZZYZ", "YXZYY", "YYZXX", "ZZYYX", "YXZZY", "ZXXYY", "YYYZZ", "YYZYX", "YZXYX", "ZYZZY", "XYZZZ", "YZYZZ", "YZXZZ", "ZZYXZ", "YYZYX", "ZZZZZ", "YZZXZ", "ZYYYZ"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 10, 12, 13, 14, 19, 20, 21, 24, 26, 28, 32, 41, 42, 43, 49};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string keyPresses = "DRDWDODWWWWDWWWWDROOWRWDWOROOWRWROOODWODWORWRRWOWO";
    vector<string> codes = {"RWWDW", "WWRRO", "RWOWO", "ROWRR", "DRWRR", "RWDDO", "WROWO", "OOODD", "RODDO", "WRROW", "OWDOR", "ODDWR", "WOWOO", "ODRRR", "OWWWW", "OORWR", "ROROR", "ODOWD", "DWWWO", "ROWWW", "DRWDR", "WWDRW", "OOOWR", "DOOWO", "OWOOW", "RDODW", "ORRRO", "WROWO", "RORDO", "WDRRD", "DDDWW", "DDWOR", "WRWRW", "ORDRR", "WWWRW", "ORDWW", "RDDRW", "WODWR", "OWOOR", "ORWWW", "DWODR", "OWOWW", "ORWOW", "WORDO", "WWOOO", "DDDDD", "DRWWO", "RORDO", "ROWRR", "WRDRO"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string keyPresses = "OOORRRDRRODDDDDWDRRRRORDWWODDRWWDOROWOWRRDOORWRORW";
    vector<string> codes = {"WORD", "WORO", "OODO", "ORRW", "WROW", "WWDO", "OORD", "RWDO", "OODO", "RRRD", "DOWO", "DDOD", "ORDR", "RRDW", "DODO", "RDDD", "WRWR", "WRRW", "DROR", "ORRD", "WOOD", "WWDD", "RROW", "OWDO", "RDWD", "ORDW", "WWRR", "RWOR", "RROR", "RWOW", "DRWW", "RDRO", "RRWD", "WDDW", "DRRO", "RDDW", "OORW", "OWWW", "ROOO", "WDRD", "ORRO", "OROW", "WWOR", "DWDO", "OOOD", "OODW", "RWOD", "DDRW", "OWOR", "RDRR"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 7, 9, 12, 18, 19, 25, 28, 30, 31, 34, 36, 41, 47, 49};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string keyPresses = "OOAOUIEOUAEUEIEIUIYUEIYYEAYIYEYAUOOAYIUOEOYAOEIEOI";
    vector<string> codes = {"OIUA", "IOYY", "UUUE", "OAYU", "EUYY", "AAIY", "AAAA", "YEAE", "IOEI", "UAEI", "OUUU", "UEIY", "YYUO", "OYEE", "OYIA", "EAYE", "OEEI", "YAIA", "UAUO", "EYIY", "UYAA", "IEEO", "EEOA", "IOEY", "IIYE", "IIIE", "AUIA", "OUYA", "EOAO", "YEAA", "EIAO", "YYAY", "EAAE", "IAAA", "OIAA", "EOAI", "EUUA", "UUAY", "AUAO", "OAIU", "AEOA", "YUEI", "AEOY", "YEIA", "UUUI", "IUYE", "IYUO", "YYEU", "AIUY", "AOAE"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 41};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string keyPresses = "AIAAAAOIEAIIIAEOOAEEOIOUIAOUUEIUAIEOUAAEAIAUUOIIUU";
    vector<string> codes = {"EUEU", "EAUU", "IAIE", "EOOO", "EUOO", "IOAI", "IEEE", "OIAU", "OOAU", "EAEA", "AOEI", "OEAE", "AAUO", "AEIU", "IAAO", "UOUO", "EAUU", "IAUI", "EAEE", "OOOU", "OUUO", "OOIA", "EAAI", "OIIE", "UIEE", "UIAI", "AIUO", "IUUE", "OOEE", "UUUA", "UEIU", "OAAI", "UOAA", "EEOE", "AIEI", "EEAE", "EIAA", "OUIU", "IIOE", "UAAO", "UEOI", "UOAU", "AEOO", "IUIU", "EIEE", "OUAA", "OAOI", "AEIU", "UAEO", "EEUE"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 30, 42, 45};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string keyPresses = "WTTEETQYTYETEYRYTWREYQYRQEQRQQWYTYWTWWRRTYEQERRTTW";
    vector<string> codes = {"YTYE", "YYTY", "WTYE", "RWYR", "RTEQ", "WWRW", "YTTR", "QWTY", "RWWQ", "WQRQ", "ERQT", "EYWT", "RRTE", "EQTE", "EEYE", "WWET", "EWEW", "YQYE", "WYQW", "TWYY", "ETER", "ETYT", "TEQQ", "RQER", "EYRW", "YEWQ", "QWWT", "QWEW", "RETR", "QWWT", "RYET", "QYWQ", "EEYW", "YWYR", "QQYY", "YWQQ", "WERY", "RTEQ", "ETEQ", "WRTR", "TREW", "TWTR", "QREY", "RQQT", "ERER", "QTWQ", "QRQE", "TTRE", "YQRE", "WWYY"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string keyPresses = "EWRQTERQTYEWWEYTWERTERWYQTQRQYWWQTYRYEWRYREWTWYRRQ";
    vector<string> codes = {"WRW", "QEE", "YER", "RQT", "TTQ", "EWR", "TQQ", "EEQ", "RTW", "QWE", "TEY", "QEY", "EYQ", "RRQ", "WYT", "YWT", "RTE", "WQT", "EWE", "WYR", "TRR", "RRQ", "RRR", "RQT", "WYT", "RYR", "WQW", "EWY", "QWQ", "RRY", "TWW", "EET", "QYE", "RQQ", "EWQ", "TYR", "WTR", "WQE", "QWE", "WEY", "TQT", "YQQ", "EQT", "TET", "EEQ", "EQY", "RYW", "TQE", "WWW", "RQR"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 13, 16, 17, 18, 19, 21, 23, 25, 35, 39};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string keyPresses = "RRPTDOTERDPDTDROEETCERCRCPPECTECDOOPPRTRCTCOCTPODP";
    vector<string> codes = {"PPR", "ERC", "EPO", "PPR", "CET", "DTO", "OET", "DCP", "ERT", "TED", "OTD", "TDD", "CTR", "PTR", "TCD", "EEP", "RRT", "EOD", "TRO", "EET", "CDE", "TDT", "PRO", "ORO", "ORC", "CER", "RPR", "DTE", "REE", "ODO", "REE", "PCT", "CRR", "DED", "EDC", "ROR", "REP", "CPP", "OPR", "DCO", "ETR", "OPP", "PCR", "RTE", "CDP", "ECO", "DTR", "RCP", "TCD", "RTE"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 19, 25, 37, 38, 41, 47};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string keyPresses = "RERETRTCEOTCPROCCPDDECODRPCPDERCOEPOCTCORODPTCCOEE";
    vector<string> codes = {"RCOT", "TTPO", "TTDT", "OECO", "EROO", "TRPP", "RTEP", "PCEO", "EROC", "DPEE", "PTCO", "RRCD", "RDCD", "OCTT", "CETE", "TEDC", "DRRT", "OPCO", "CRPT", "ECPD", "OEPT", "OTOP", "CORC", "TCDP", "TDTR", "RCET", "TOTR", "PPOO", "EOPD", "OCTE", "PDRP", "TPCO", "ROTC", "ERPC", "EPPE", "CPTO", "CPDC", "EDRT", "RCOR", "EPED", "CDRR", "OOCD", "OCPD", "EPDP", "DOCP", "CPOP", "ETOD", "PTRE", "PEEC", "DRTR"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 42};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string keyPresses = "EMEMDTEETEIBMETMTTBTEEDIDIEEIEEEDMITEEDTMETEBMEEEM";
    vector<string> codes = {"IMIB", "BIIE", "IEBE", "BEIT", "IMDI", "EMTT", "EEEM", "DMTI", "EEID", "TETM", "TDED", "ETMT", "BMBE", "TEBD", "DEMD", "IBEI", "EDEB", "EBET", "BMME", "BEIM", "EIID", "MMIM", "IBBB", "BMII", "BEME", "EIBB", "BTEM", "IITT", "EEMM", "IBEE", "EDEE", "MEET", "BDBB", "EEMI", "IITD", "EEME", "MIID", "IMDT", "MEMT", "EDEE", "IMEE", "EIME", "DETE", "EBDI", "DIMI", "TBEE", "EETB", "EBBT", "MIID", "DBID"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 11};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string keyPresses = "TIIHHHITBITTTDBIIHHTTBITDTDTIDHDDTBTHHITDDTTIITITB";
    vector<string> codes = {"HHIHDB", "DHIIII", "TIIBIH", "ITIIDH", "HBBTIH", "DTBBHD", "HTTTHD", "DHTTHD", "BDDTIH", "DBDHBB", "BIBTHD", "TIBBTI", "BTTBTH", "HDTBTH", "DDIITH", "BIDTTI", "HTHIIB", "BIDBTD", "TDDHBH", "IHHHDI", "DBBDDI", "IHHHTT", "IBIBTH", "DTTDIB", "TBIITB", "BTHTTH", "TTIHBI", "HTHBTH", "ITDIDI", "TBTDHT", "BIHDID", "TDDDTH", "BDBDHI", "IDIBIT", "TDBTII", "ITBTHT", "DBBDII", "HHBTID", "DHDDII", "DIBBIT", "TBIBDT", "IIIHDB", "HHHDHD", "TITTBI", "TBBITT", "TTTDID", "TBIDTI", "IHHDTI", "IHHIID", "BDHDBH"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string keyPresses = "LOLOLLLLOOLLOLLLOOLLOLOLOLOOLLOLOOOLLLLOOLOOOOOLLO";
    vector<string> codes = {"LLOLLL", "LOOLLL", "OOLLOL", "LLOLLL", "OOOLLO", "OLOLLL", "LLOOOO", "LLOLLL", "LOLOOO", "OLLLLL", "OOOOOO", "OOLLLO", "LLOOLO", "OLLLOO", "OLOOLO", "LLLOOO", "LLLLLO", "OLOLOL", "LOLLOL", "LLLOOO", "OOOOLL", "OOLOOL", "LOOLOL", "LOOLLL", "LLLOOL", "LLOOLL", "OOOOLL", "OOOLOO", "OOLLOL", "OLLOOL", "OOLOLL", "OOOLLL", "LOOLLL", "OOOOOL", "LLLLLO", "LOLOLL", "OOOOOO", "OLOLLO", "LOLOLO", "OLLLOL", "OOOLLL", "LLOLOO", "OLOLLO", "OLLOOL", "OLOOLL", "OLOLLL", "LLLLLO", "OLOLLO", "OLOOOL", "OLLLOO"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7, 8, 11, 12, 13, 14, 17, 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 37, 38, 39, 40, 41, 42, 43, 44, 45, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string keyPresses = "TEENEIEEEINNITEINTTTNEIEEIEEIENETEETNTIEEIEINTTNNN";
    vector<string> codes = {"TITIEE", "EINIII", "NTENIE", "EEENEE", "TEETII", "INEEIT", "TNETIN", "NIEEIN", "TNETNT", "ITIINE", "TIEINN", "EENEII", "EIETIN", "TEITII", "NENTNN", "ITTNNT", "NEINTE", "ITNNNI", "IEITIT", "EIIEEI", "NNNTNN", "NNETNT", "ITNITN", "EEENIN", "TITNNI", "INTITT", "IEEIIE", "ETIEEN", "ETEETI", "EITIIT", "ETEINI", "EINTTI", "TIEENE", "ENIEEN", "NTITNT", "NENENN", "IETITN", "ENTTET", "IETETI", "ETNNNN", "TNETNE", "EITITN", "IINENN", "TIENNI", "TEETEE", "TIEINE", "NENTNE", "EINEIN", "EETTET", "EITTEI"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string keyPresses = "TEENEIEEEINNITEINTTTNEIEEIEEIENETEETNTIEEIEINTTNNN";
    vector<string> codes = {"EIINNI", "NEITII", "NNNITN", "TNTNIE", "NETIIN", "INIENI", "NNITTT", "EETNNI", "NTITET", "TEINNT", "NTETIE", "EINNET", "EEIIET", "TENETE", "INTTNE", "ININTT", "ETEETE", "TITEEI", "IINTIT", "ITTNIT", "ETENTI", "TIEIIT", "NEETTT", "ENNNTI", "TEEIEN", "ETTTTN", "NNTETE", "ITTIIN", "ENNENT", "NETNNI", "NENETT", "ETEIII", "NEETNN", "EEIEEI", "TENNEN", "INNIET", "NTNENI", "NNNEEN", "NTNIIE", "TETEET", "EITETI", "ITEIIE", "EINEIE", "NIINTT", "ENTIEI", "EETITI", "TNETII", "INTINE", "NNNINT", "NEETNT"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 33};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string keyPresses = "BABABAD";
    vector<string> codes = {"BABAD"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string keyPresses = "ABABABC";
    vector<string> codes = {"ABABC"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string keyPresses = "UAUAAAA";
    vector<string> codes = {"UAAA"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string keyPresses = "XAAAAAAY";
    vector<string> codes = {"XAY"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string keyPresses = "AB";
    vector<string> codes = {"AABB"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string keyPresses = "AAA";
    vector<string> codes = {"A"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string keyPresses = "XXX";
    vector<string> codes = {"XXXXX", "XXXX", "XXX", "XX", "X"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string keyPresses = "XAXAAY";
    vector<string> codes = {"XAY"};
    CheatCode* pObj = new CheatCode();
    clock_t start = clock();
    vector<int> result = pObj->matches(keyPresses, codes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4575&pm=1779
********************************************************************************
#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
 
template<class T> inline int size(const T &c) { return c.size(); }
 
typedef long long LL;
 
typedef vector<int> VI;
typedef vector<string> VS;
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1, "%d", x);
  return buf1;
}
 
 
bool m(string a,string b) {
  if(size(b)==0) return true;
  int na = size(a);
  FOR(st,0,na) {
    int p = st;
    REP(q,size(b)) {
 bbb: ;
      if(p>=na) goto eee;
      if(b[q]==a[p]) ++p;
      else if(p>st && a[p]==a[p-1]) { ++p; goto bbb; }
      else goto eee;
    }
    return true;
eee:;
  }
  return false;
}
 
struct CheatCode {
 
  // MAIN
  vector <int> matches(string keyPresses, vector <string> codes) {
    VI res;
    REP(i,size(codes)) {
      if(m(keyPresses, codes[i])) res.push_back(i);
    }
    return res;
  }
 
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/