/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4613
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

class ChatTranscript {
public:
    int howMany(vector<string> transcript, string name);
};

int ChatTranscript::howMany(vector<string> transcript, string name) {
    int ret;
    return ret;
}


int test0() {
    vector<string> transcript = {"Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Bob: This is a long", "sentence that takes 2 lines.", "Tim: Yes it is.", "Bob : I am not Bob.", "Frank: No you aren't!", " Bob: Neither am I."};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> transcript = {"Crazy1010: !@LK%#L%K @#L%K @#L%K@#L%K2kl53k2", "Bob: You are crazy.", "Crazy1010 Yup #@LK%$L!K%LK%!K% !K afmas,"};
    string name = "Crazy1010";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> transcript = {"A:A:A:A:A:A:A:A:A", "b:b:b:b:b:b:b:b:b"};
    string name = "B";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> transcript = {"A:A:A:A:A:A:A:A:A"};
    string name = "A";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> transcript = {"B"};
    string name = "B";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {":"};
    string name = "B";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:", "0:"};
    string name = "0";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> transcript = {"0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:"};
    string name = "4";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> transcript = {"0:", "1%:", "2:", "3:", "4&:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4:", "0:", "1:", "2:", "3:", "4&:"};
    string name = "4";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> transcript = {"44444444444444444444444444444444444444444444444444"};
    string name = "44444444444444444444444444444444444444444444444444";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"4444444444444444444444444444444444444444444444444:"};
    string name = "44444444444444444444444444444444444444444444444444";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"4444444444444444444444444444444444444444444444444:"};
    string name = "4444444444444444444444444444444444444444444444444";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> transcript = {" B: Blah"};
    string name = "B";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> transcript = {"asbdb2347824araasdf:#$d)@J$@)#IJ)@(rafdsraIJ$#@#$N", "asbdb2347824araasdf:#$d)@J$@)#IJ)@(rafdsraIJ$#@#$N", "asbdb2347824araasdf:#$d)@J$@)#IJ)@(rafdsraIJ$#@#$N", "asdfasldfjasljkfdasfadsfasdf:sadfkjjlasdfjsaldkfas", "ajhdf234jkl2j34lj asflkj flaksjdf ;laskjdf a;sdfk ", "kajf lsjdf lsadjgf lasdffj lasdjgf lasdjgf aslkdjf", "asd09fu0asiao234ka4l;kj2lkj4a34a242kj4lkj44jlk4ja4", "&F09*&N(_*$#&N@)$IUM)@(*#U$@$:$@)#(MI@)#$(I@#$@$# ", "&M(*@#&$@#$#$$::$$$@::@#$:@#$:@#$:L@L$@#%L@:%L:%@#", "@#%LO@#:%L@PZQL%:LRF:ASLF:ASDLF", "A", "a", "A:", "a:"};
    string name = "a";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> transcript = {"asbdb2347824araasdf:#$d)@J$@)#IJ)@(rafdsraIJ$#@#$N", "asbdb2347824araasdf:#$d)@J$@)#IJ)@(rafdsraIJ$#@#$N", "asbdb2347824araasdf:#$d)@J$@)#IJ)@(rafdsraIJ$#@#$N", "asdfasldfjasljkfdasfadsfasdf:sadfkjjlasdfjsaldkfas", "ajhdf234jkl2j34lj asflkj flaksjdf ;laskjdf a;sdfk ", "kajf lsjdf lsadjgf lasdffj lasdjgf lasdjgf aslkdjf", "asd09fu0asiao234ka4l;kj2lkj4a34a242kj4lkj44jlk4ja4", "&F09*&N(_*$#&N@)$IUM)@(*#U$@$:$@)#(MI@)#$(I@#$@$# ", "&M(*@#&$@#$#$$::$$$@::@#$:@#$:@#$:L@L$@#%L@:%L:%@#", "@#%LO@#:%L@PZQL%:LRF:ASLF:ASDLF", "A", "a", "A:", "a:"};
    string name = "asbdb2347824araasdf";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"44444", ":"};
    string name = "44444";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> transcript = {"Robert: Wow", "rObErT: Wow", "RoberT: Wow", "Robert: Wow", "robert: Wow", "ROBERT: WOW"};
    string name = "Robert";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> transcript = {"Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "FrankStophattingWALTERWALTERROCHABBBBBBBBBBBBBBBB";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> transcript = {"G", "G", "G", "G"};
    string name = "Bobster";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> transcript = {"asd"};
    string name = "asd";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "Bob00000000000000000000000000000000000";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Bob: This is a long", "sentence that takes 2 lines.", "Tim: Yes it is.", "Bob : I am not Bob.", "Frank: No you aren't!", " Bob: Neither am I.", ""BOB:""};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> transcript = {":Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"a"};
    string name = "bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> transcript = {"B", "B", "B", "B"};
    string name = "Bobster";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> transcript = {"mostafathycom:ss"};
    string name = "com";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!", "Bob"};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> transcript = {"Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "BoB";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> transcript = {"bob:"};
    string name = "bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> transcript = {"boba:iuy", "bob:kkk"};
    string name = "bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> transcript = {"nnnnik:papa"};
    string name = "nik";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"aaaobob:"};
    string name = "bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Bob: Hello Tim.", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Hal", "Lindy"};
    string name = "Hal";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
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
    vector<string> transcript = {"Bob: kita", "Bob"};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> transcript = {"name"};
    string name = "name";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> transcript = {"Bob: Hello Tim.", "Tim: Hello Bob.", "Bob: How are ya Tim?", "Frank: Stop chatting!"};
    string name = "Bob";
    ChatTranscript* pObj = new ChatTranscript();
    clock_t start = clock();
    int result = pObj->howMany(transcript, name);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8367036&rd=7224&pm=4613
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
 
using namespace std;
 
class ChatTranscript {
  public:
  int howMany(vector <string> transcript, string name) {
    name += ":";
    int size = name.length();
    int total(0);    
    for ( int i = 0; i < transcript.size(); ++i )
    {
      if ( transcript[i].substr(0,size) == name ) { ++total; continue; }
    }
    
    return total;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/