/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8152
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

class MorselikeCode {
public:
    string decrypt(vector<string> library, string message);
};

string MorselikeCode::decrypt(vector<string> library, string message) {
    string ret;
    return ret;
}


int test0() {
    vector<string> library = {"O ---", "S ..."};
    string message = "... --- ...";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "SOS";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> library = {"O ---"};
    string message = "... --- ...";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?O?";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> library = {"H -", "E .", "L --", "L ..", "O -."};
    string message = "- . -- .. -.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> library = {"H -.-.-.-.-.-.-.-.-.-.", "I .-.-.-.-.-.-.-.-.-.-", "K -.-.-.-.-.", "E .-.-.-.-.-"};
    string message = "-.-.-.-.-.-.-.-.-.-. .-.-.-.-.-.-.-.-.-.-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "HI";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> library = {"O ---", "S ...", "B -...", "T -", "R .-.", "E .", "N -.", "X -..-", "D -.."};
    string message = "-... --- ... - --- -. .-. . -.. ... --- -..-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "BOSTONREDSOX";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> library = {"B -...", "N -.", "H ....", "O --", "Z --..", "G ---", "I ..", "J .---"};
    string message = "--- -- -... .- -. .- -. .-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "GOB?N?N?";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> library = {"A ."};
    string message = "- - - - - - - - - - - - - - - - - - - - - - - - .-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????????????????????";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> library = {"A ."};
    string message = "- - - - - - - - - - - - - - - - - - - - - - . - .-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "??????????????????????A??";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> library = {"O ---", "S ...", "B -...", "T -", "R .-.", "E .", "N -.", "X -..-", "D -.."};
    string message = "-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> library = {"O ---", "S ...", "B -...", "T -", "R .-.", "E .", "N -.", "X -..-", "D -.."};
    string message = ".";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> library = {"A .....-----.....-----.....-----.....-----.....---", "B --", "C -"};
    string message = ".";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> library = {"N --.-----.", "S ....-.-.", "F .--.--", "X -.-", "V ...-.", "J ..-", "N .-.--...", "M .--.", "P -------", "M .---..", "I .", "A --", "Z .--.-.", "P ....---", "P .-.", "C --....", "U -.", "E ..-.---.-", "P ..", "I .......", "Y ---", "M .--.-.-.", "W -...--.--", "B .-.--.-", "X -..-.-.", "N -", "S -.-..-..", "K .-", "X ..-.", "Q ...-.--", "L ---.", "R ..-----.-", "W .---.", "P --.", "F ---.--..", "T ---...-..", "E -.-.--..", "Z .-..-.--.", "J ..-.--", "G -....", "O .--.--.-.", "M ....--"};
    string message = "...-.-- ..-. .......";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "QXI";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> library = {"X ...-.--.-", "Y -", "Z ..-.----.", "U .-..", "E ----..-..", "I .-.--.", "R ..-", "H ..-.-...-", "O ..------.", "X ---.", "N --", "R ---.-", "E -.--..", "M -.", "C .-", "I -..", "E .", "R ...-.", "T -.---", "U ....-----", "U ....-", "Z -.-", "R .--", "E -.-.-...-", "W .-.-.--", "Y .---.", "B ..", "D --.-", "X ....", "B --..-...", "R .-.-.--.", "L ...---.", "S ..-.-", "O -.--.", "Z ...--", "R ---.-.-.", "I --.", "G ...--.", "S .-.", "T ..-.-.", "N -.-.--.-", "A --..", "K ..-.-..--", "L ..----", "C ..--.--.", "B ..---.-..", "H .-.---"};
    string message = "--..-...";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> library = {"R -....", "X ...-..-..", "K ..--"};
    string message = "..";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> library = {"J ..---.-", "R -.-..--..", "H -.--....", "Y -.", "Q ..----", "U ..-.--...", "W .---", "F --...-", "H .", "U --", "B ..----.-", "W .--", "Z -.-..-", "U --.--", "F ..-", "D ...--", "B -.--.-", "J -......", "L -.-..", "C -.--", "S .-", "C -.....-", "T -.--..-", "Y ..---", "X .-...", "Y -.-.", "U ..---..", "E -..-", "F .---.-.-.", "O .---.-", "M --.", "Q .-.--.-", "Q ---...--.", "Z ---", "C .-.--..-.", "R ------", "M ......--", "X -.-.-.", "H .-..-.-", "J --...", "A -..----..", "G -----", "H --..", "D .....--", "F --.-.-...", "W --.---", "S -.---."};
    string message = "..---- -.....- .-.--..-. -.-.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "QCCY";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> library = {"M -", "D -..---", "M .---.", "K ---...-.", "Q -.----.--", "W --...-.", "I .", "U -.-..-..", "A -.", "M .-", "J -.--..", "T ..----.-.", "J --.-", "G .....-", "G .-.", "T ------.-", "L .-..----.", "U .-....", "D ----.--.-", "Y ---", "G .--......", "H -..-", "J .--", "Q ...--.", "C -...", "R .--.-", "I ...", "I -----.", "Y ..-", "R -.-.", "U .---...-", "B .---.-", "G .-.----.", "Q .-...", "F --.-.-..", "K --..-..-", "O ..--.--", "G ..--..", "N ..", "X .---"};
    string message = "... ...--. ----.... --...-. .- .....- .---.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IQ?WMGM";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> library = {"N --", "V ....-", "X ---..---", "S --..", "B ..-", "V --.-.", "J .--", "L -", "P -.-..-", "B -.", "M ..-....", "V ...", "G .", "R ..-.", "W -.-..-.--", "Q .-", "U --.", "M -.-.."};
    string message = "..-..--.- ....- ....- -- -.-..";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?VVNM";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> library = {"N .-.-", "U ..-.-", "D .--.--.", "X ..-.", "L .", "L ...--", "O .-.---..", "M -..-.-.", "N ....", "D -..--", "E -...", "I ---.-.", "M ---.----", "N .---.", "G .--..-.", "Q -.-..--.", "Q -.----", "H ---", "N ...-...", "X .-...", "Y ..---", "D .--.-", "J -.--.-", "H --...-", "C .-", "I .-.", "C ..-", "X ..."};
    string message = "..- .-.---.. -.--.- -.. -.--.- -..-.-. -- -..--";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "COJ?JM?D";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> library = {"F --", "R ..-", "I ..---.-", "C .--.-..", "M -...--.", "G ...-", "I .", "U -..-.--", "H -.", "X -...", "K .-.", "A ...-.-..", "U -..-", "D --...---", "L .-..", "X ...-...--", "Y ...---", "X .-...-..-", "O -...-", "A -.-", "Y .-.---", "D .....-..-", "N .---.-.", "A ..", "G .-..-.-.", "O ...-.--", "W -.-..-", "B -.--.-", "U -", "Y ..-.", "H --...", "N .-.--", "Z --.-.", "T .-...", "D -.-...--", "J ---.-", "O .----.", "A ....--", "U --..--..", "B ..-..", "L -..----", "Z -..-.", "Z --.-..--", "N -.-..", "X -..", "D --.----."};
    string message = ".-...-..- .. -..---- -..-.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "XALZ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> library = {"T ...-.-.", "L .-.", "K .-.--."};
    string message = ".-.--. .-. .-.--. .-.--. ...-.-. .-. ...-.-.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "KLKKTLT";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> library = {"N -", "U .--.-.", "R --..-", "P .--.-", "H .---.-.", "X ----..-", "S ...--", "A .--.", "Y .", "B ..-", "D ..-..-.", "W -..----.", "G .-.", "T -.-.-.", "H ...", "O ..", "U .--.--.-", "O ..-.--.", "B .-", "M ...-.-.-", "V .--...--", "R -.-", "X ....-..--", "C .-.--", "G ..---.-.", "X .--", "P -..", "X ----", "E -----.", "C --.-..--", "C -.---.---", "L ..--", "K -.---.--", "V .-..--", "P --.-.-...", "T .-.-", "N .---..-.", "A -.-.-.-.-", "X ..-..--", "C ...-..-", "E -.", "V ..--..-", "Z ...-", "W --."};
    string message = ".-.--";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> library = {"L .", "Y ..-..--", "E -.-..", "M -"};
    string message = ". ..-..--";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "LY";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> library = {"H ..-..-.", "I --.", "U .-", "L -.-", "X --.-.", "U ...-", "A ..----.", "F ---", "Q -.", "C -....-", "B .-...-..-", "D ......-..", "T -...--..", "B --...-.", "O ..", "Y -.--.--", "X .----...", "F .---", "T .-----.-.", "I ...--..", "M --...", "D .-.-...", "S ..-...-."};
    string message = "......-.. ---..-.-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "D?";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> library = {"P -.----.-", "V --", "I -.....", "I .-.-.", "Q -.-...-", "I ..------", "H -", "I ..", "C ...", "Z ....-.-", "T --."};
    string message = "....- ..- .....--- -. ... --. .-.-. .. ..---.---.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "????CTII?";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> library = {"Z .", "I --....-", "H -......", "W -.-..-", "I -.-----.", "R -....-.", "B .-.", "R -.-", "P ---..-", "O --..-", "W .--.-.", "O --..", "C ..-.--", "X .-...--", "K --.-.-.-.", "V .----..-", "M -...-...", "R ..---.", "E .........", "J -----..-", "I -.--.-..", "R ..", "D ..-"};
    string message = "--.-.-.-. -...-... .-.....--";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "KM?";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> library = {"O ..-..", "I .", "V ..-", "Y ---", "C -..-", "V -.-", "Q ..--", "S --.", "H -.--..-", "I -.-.", "R .-.-..---", "M -.-...-", "J -", "T -..--.", "X -..-.", "W .----...-", "Y --.--", "W .--..--.", "C .....-", "I -..", "Q .------.-", "M -...-.", "F -....", "H .-.", "N --"};
    string message = ".----...- -.- --.--. -.-.. -.... -..- --";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "WV??FCN";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> library = {"M -.....", "O ..---", "V -.-..", "H ---.---..", "S .--..", "E -", "Y .---", "A -..-.--", "X .--..-..", "X ..--.", "Y -.-.-", "S -.-.-....", "T .", "B .-..-..-"};
    string message = ".--..";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> library = {"N ---.-", "I --.", "L ..-..--.", "W -", "W .-----.", "S .-.---.-.", "X -.-.-.-.", "W ---.-..--", "S .-.----.", "E .."};
    string message = "-.... -";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?W";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> library = {"R .-..", "E .....-..", "O --.-", "X --.", "R .-.---", "V -..---", "D ..-.-", "W --.-..---", "F -..-.-.", "Y ---.----", "H ---", "Y -.--..--", "I ..-.-..-", "H ..-.---..", "T -....---.", "P -..-..-", "J .", "C ..-", "E .-.", "Z --.--", "K -", "B .-..-.--", "O .---.--.", "U ..", "Z .----.-.", "T .---.---", "Q ----", "C ---.", "Z ...-.....", "X .-..-..--", "Z -.", "V ...------", "B -----...", "W ...--....", "R ..--", "V -..-.", "L ....-..", "V .-", "E -.."};
    string message = "--.-- -..-..- .---.--- -....---. .-..--...-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "ZPTT?";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> library = {"Z --", "I .", "U --.", "E -..---.-", "A .-", "S .-.---", "J ..-", "G ---"};
    string message = "-.-..--..- ...-...- .-.-- ---- ---.-..- ..--.....";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "??????";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> library = {"M --.", "K -.---", "S -.", "V ..--", "D .-.", "B ...-", "A ..-"};
    string message = "-.---";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> library = {"B .-.", "P ---.-.--.", "Y .", "A -.-.---", "V ---", "P .-.....-.", "B --", "C ....-", "N -.------.", "O .-", "Z -", "J --.-.", "N -..---", "I ....", "Z ---.", "N .-..-", "T -.-----", "O ----.--", "Y ...--.", "D ----", "Z -..-.-.", "R ---.---.", "B --.--.", "Z -..----", "A --..", "D ..-...--", "P ..-.--.-", "X .--.-", "R ..-.-..", "L .---", "A ..---", "A .-...", "W .-.---", "K -.-", "S -.", "T -....-.--", "Z .-.--", "Y ---..", "P -...-.-", "Z -..", "A .-....-", "Q .-..----."};
    string message = "-.------. .--.- - -. ...--. ..-...-- ---- ..---";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "NXZSYDDA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> library = {"C -.", "F --..-.", "O -", "X .-", "H ........", "C -..--.--", "B ..-.....", "L ...", "F .-.", "N -..-..---", "V .--", "I -.---", "E -...--.", "M --", "O .--------", "Z -.-.-.--", "Y .---..", "Z ---..", "Q --.---..-", "N -..", "Z .----..--", "Q .-..-----", "I .......", "M .----.", "Z -----", "L ..-", "L .---.-...", "E ...---", "L -...-.-", "O --..---..", "D --....-", "X .--.-.", "D ---.", "A -----.-", "P .-.-..-..", "A -.-", "W -...", "M -.--"};
    string message = "--.---. --.---..- ----..... - .--";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?Q?OV";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> library = {"H .-", "Y ..-", "O .-..-.-", "I .-...", "R --", "V --.-.-", "F ---.", "K -.---.--", "P .-...-..", "N .", "W -.-", "E ..-..-", "L ..", "N -.---", "J ..---.-.", "E ..."};
    string message = "--.-.- ..-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "VY";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> library = {"M ---..", "B .", "A ..-.-.", "S -.-", "O -.....", "C -----.-", "D ---.....-", "W -.------.", "U ....", "I ..-.---.", "I ..-", "A ----", "Q -....-", "B -.-.", "X ....-.-"};
    string message = "-.-. .-..-..- -.....";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "B?O";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> library = {"K .....-", "J ---.-", "Y .--.-.-", "X ..-.....", "W -.--.-.--", "H .", "U .-.---", "P -...-", "O .-..-..-.", "O .........", "D ----..-.", "K .-.-", "L ---....-"};
    string message = ".-.- -- ----.-. .-..-..-. ----..-. -.--.-.--";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "K??ODW";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> library = {"N -....-.", "U ---..-", "R .--.", "T -.-.-..", "X .--.--...", "P -", "E .-", "I --.--.", "H ..", "F .---", "E ..--", "I .---..", "E --.", "S ..-..", "F .--", "H ---", "I -..", "I .-.", "U -.--", "F --.--.---", "T .-..--", "I .-..-", "K ..-..-", "N .-.-", "O .....-..."};
    string message = "..--- -.-- .....-... .-.-. -....-. .---.. --. .--.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?UO?NIER";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> library = {"T ...---.-.", "F .-", "K ..--.-", "L -", "L --.---.", "Z -.", "O .....-", "K ......", "Y .---", "N ..-", "O .--.-----", "K .", "U .--.-..", "F .--.", "V ..", "C -..-..-", "U -.--..-..", "D .----.", "V --.-..--", "G --..-.", "A .--", "J -.-.", "O .-.-.", "Y ...", "Q .--...", "C ...---"};
    string message = ".--.-.. -. .... -.... .--... -. .----. .--. -";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "UZ??QZDFL";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> library = {"S .-.-..--.", "B .", "Q -", "Q .--.-.", "Q --....-", "U -..--.-", "M --", "S -.......-", "Y ..---", "Y -...-..", "D .-.", "N -----.-", "G ..", "M ...-...", "B -.---.-", "D ---.", "M ..-..", "V --.---."};
    string message = "..-.--- --.-. -...-.. -- -. .-. ..--- --.--.- .";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "??YM?DY?B";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> library = {"A --", "B -.", "N ...-", "I --..", "F -.-.-."};
    string message = "-. -- -.-.-. -.-.-. --- --.. ...- .-..--.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "BAFF?IN?";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> library = {"O ---", "S ..."};
    string message = "... --- ...";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "SOS";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> library = {"B -...", "N -.", "H ....", "O --", "Z --..", "G ---", "I ..", "J .---"};
    string message = "--- -- -... .- -. .- -. .-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "GOB?N?N?";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> library = {"A --", "B -.", "N ...-", "I --..", "F -.-.-."};
    string message = "-. -- -.-.-. -.-.-. --- --.. ...- .-..--.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "BAFF?IN?";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> library = {"O ---"};
    string message = "... --- ...-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "?O?";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> library = {"L --", "E .", "H -", "L ..", "O -."};
    string message = "- . -- .. -.";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> library = {"O ---", "S ...", "B -...", "T -", "R .-.", "E .", "N -.", "X -..-", "D -.."};
    string message = "-... --- ... - --- -. .-. . -.. ... --- -..-";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "BOSTONREDSOX";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> library = {"A .", "A -"};
    string message = ". -";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> library = {"O ---"};
    string message = "--- ... ...";
    MorselikeCode* pObj = new MorselikeCode();
    clock_t start = clock();
    string result = pObj->decrypt(library, message);
    clock_t end = clock();
    delete pObj;
    string expected = "O??";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10419056&rd=10778&pm=8152
********************************************************************************
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <sstream>
 
using namespace std;
 
class MorselikeCode
{
public:
     string decrypt(vector <string> library, string message)
     {
          int i;
          map<string,string> dict;
          dict.clear();
          
          for(i=0;i<library.size();i++){
               dict.insert(make_pair( library[i].substr(library[i].find(" ")+1),library[i].substr(0,library[i].find(" ")) ));
          }
 
          std::map<string,string>::iterator pos;
          for (pos = dict.begin(); pos != dict.end(); ++pos) {
               cout<<pos->first<<""<<pos->second <<endl;
          }
 
          string res="",temp;
          stringstream ss(message);
          
          int b_pos;
          while(ss>>temp){          
               
               cout <<endl<<"-->" << temp<<endl;
               pos = dict.find(temp);
               if (pos != dict.end()){
                    res+=dict[temp];
               }
               else
                    res+="?";
          }
 
          cout << res.c_str();
          return res;
 
     }
};

********************************************************************************
*******************************************************************************/