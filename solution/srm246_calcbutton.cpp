/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4472
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

class CalcButton {
public:
    string getDigits(vector<string> sequence);
};

string CalcButton::getDigits(vector<string> sequence) {
    string ret;
    return ret;
}


int test0() {
    vector<string> sequence = {"100002000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> sequence = {"777777777"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "777";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> sequence = {"6503", "210"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "032";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> sequence = {"0993034", "6", "4137", "45959935", "25939", "93993", "0", "9358333"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "993";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> sequence = {"142475555", "008", "8763", "698589", "74", "4697753", "5706650897", "1", "767152", "626182814", "32721590", "8071031799", "7", "54513471", "843074", "00429", "37800", "5271807", "954937180", "0646", "70304395", "957", "6", "76"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "718";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> sequence = {"979619", "625354249", "240446289", "6370", "202804595", "754009", "682", "3", "71", "8127411008", "8173284", "173", "790377", "293890", "720", "426217564"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "173";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> sequence = {"615", "8560874", "582900353", "7068456159", "79475", "15822347", "9401", "354869", "668174", "6", "542668", "81", "936030", "273", "5483779315", "5668139", "51", "02724", "8241185", "43", "676466353", "18580", "4090454", "373348", "2161", "750"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "668";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> sequence = {"05", "3", "88", "013", "98240", "0874296", "726080", "2576464", "790543", "946243", "0", "804852508", "2663884", "7031004903", "2", "4", "122044", "4764739544", "19", "4", "23", "890483", "319203420", "91065", "7305640", "83292", "062549038", "886783", "97628788"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "388";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> sequence = {"60", "9301425", "21621", "36", "2958712879", "1781851795", "50427", "041633", "682910", "671448", "801928", "377354", "47995228", "47", "195153970", "572", "11", "2307", "32", "175860096", "926", "56", "88265", "24507", "042253164", "63368238", "4802560", "1249", "29915627", "170", "038126", "81886884"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "042";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> sequence = {"1", "186336", "959572", "2031930", "5955862094", "04871600", "404784492", "0183", "0", "531", "81431", "70070393", "03389", "78386074", "88875", "22", "9694", "62", "3370", "831", "243288", "206662", "5", "138121", "335739795", "296", "64305", "8206693", "3037261", "503257029", "61296", "6", "38695751", "41", "11", "411523431"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "296";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> sequence = {"716586767", "3795", "4", "4924", "376482943", "992", "3786", "9683089", "491132767", "845", "56490436", "3886", "395732", "2563", "4281", "96", "914947460", "618", "345", "4527", "9617", "952580883", "1345477", "4", "91", "8737979", "955117654", "159961323", "50", "818747762", "426", "220511", "8", "0636406009", "93523177", "15", "57326697", "4", "31065504"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "132";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> sequence = {"342238889", "43250131", "51486", "21703431", "8444", "9660838596", "34037", "693564", "7995", "3536467", "757", "238945454", "973", "5", "7055", "73731371", "1456", "7", "697488237", "1067", "9", "174770", "400", "5553567248", "95571543", "73300652", "5566590", "18970", "667", "5", "973705", "03501980", "77", "459048", "2", "781", "2932294", "7555783", "32", "9315169", "668365490", "63857558"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "557";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> sequence = {"79785120", "15", "630", "4826690", "58641074", "84", "31936376", "611", "48694206", "2", "64710", "3248", "2", "46799", "9726", "72204", "557798701", "51880", "691", "248671", "9198357983", "45449664", "006", "97400148", "1559", "407452", "5", "3443", "1902", "8", "9027835129", "2894479", "424176", "75", "42472484", "5555636032", "87630", "02196914", "947879299", "0", "0355754430", "562", "673632", "67603", "738", "394"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "248";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> sequence = {"52489", "518476", "268", "610051", "4636761281", "34", "80", "372874", "8", "7224", "6", "489917608", "7971", "284530422", "371319", "278447094", "64", "3439419", "64", "7322716", "536107492", "03916", "0022768", "38103", "708865427", "76464", "09887", "3002935", "27077", "6496", "63", "4024878", "668598644", "7839", "310077", "3076036", "61", "975"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "464";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> sequence = {"003031300", "300", "0", "1201121", "032301111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "003";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> sequence = {"211121", "33", "01102301", "22", "3331133", "13", "12"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "133";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> sequence = {"30233", "0", "3022102212", "03311"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "022";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> sequence = {"333", "0033303", "10", "033311132", "0", "02", "131", "1103", "0103302213", "23200"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "033";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> sequence = {"0102112300", "3212", "012332103", "320231", "31321311", "33323", "00120010"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "321";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> sequence = {"10", "1101", "00110", "01111001", "0", "000", "001110"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> sequence = {"000", "00010000", "111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> sequence = {"0", "001", "1100", "001100", "10011", "11", "110111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> sequence = {"11", "011111", "0101110", "0", "0101", "100", "1001101", "0", "011", "010101"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "101";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> sequence = {"110001011", "11001", "001101011", "00010", "0011001", "10100000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> sequence = {"000000000000000", "000000000000000000000000000", "000000000000000000000000000000000000000000000000", "00000000000000000000000000000", "00000", "000000000000000000000000000000000000", "000000", "00000000000000000000000000000", "00000000000000000000000000000000", "00000", "0000000", "00000000000000000000", "000000000000000000000000000000000000000000", "00000000000000000000000000", "0000000000000000000000000000000", "00000000000000000000000000000000", "000000", "00000000000000000000000000000000000000000", "0000000000000000", "0000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000", "000000", "00000000000000000000000000000000000000000000000", "000000000000000000000000000000000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> sequence = {"0000011111111011100110001111100111011", "0111110101001010010000100110110", "110011011111100100101000110011000", "0", "1111001011010011001110111", "00110010111001100000010111010001001", "0101011010011001101110100", "01100011", "101100100111", "1", "1110100010", "011010111100011110100", "0100101011101111110100100100111010000111", "101111", "101100010000000011101", "00111101100101110001001011101011111110001001", "11110110000010010100111011011011111001000001000", "1010110000110111100001001010000111011111", "10100101001001001111", "1000111011110000001101011", "101111011011101001101111011101000100011010100", "1100000010101011110100011"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> sequence = {"1111100111111011", "11", "0100001101011000101001011101111110110101100110", "10010101", "11111101001000010001100101100010101111001001", "10010", "01100010001101110111001001", "0000101101010011001000000000010011110001", "00110110011000100011001010", "11", "110100011111011", "001010101100111100011011010000101010", "00110001000001011100001100110111100001101", "001", "11010000001010111", "110001111111110100110011110100001000001", "001111100000111110000010000011101", "1100100110010111011000000000110", "11100101001000", "10110100101010000100010100", "1001100100111110100101101100011101010111", "001110011110000101000111101", "01", "1011001010111101", "01110101011000010001000011", "001001010101001001100011101011011010011", "00011011000", "011110110000010101001"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> sequence = {"100011011100001", "10101011100010101", "010101010", "011111110000001010110", "1111000", "0011100", "0110001000110111000111100010000111000100110110011", "1111100000001", "10110110110010101000100", "0010", "01011", "00000110111", "1111", "010111001001", "11110110100111000001110101001110000111010001", "111011100000000000101111101", "01", "1", "101", "0011011110101101001111001010001001010010011011100", "0000001011", "111100100111110101001101110111", "000111011000011001110001", "000101011001101001011001001011000010000", "00001101101101010000011100101110111000", "011010011100101111001010011111100100100101", "01100100001010001000011111", "010111000110011101", "01111011001110110111010100110110001000101110100", "011111100000111101010101100011001", "101000111", "1010101110011"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> sequence = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> sequence = {"00111101100100101110100111100111101100000110110010", "10110001100110010010011100010111010100100000010110", "01001100110100010111101011001001001101000010101111", "01111000111100000000100100100000100010011000010111", "11100111001010000100010110000011010001010100000111", "00000010110111011100011110110010110110010011111111", "01010110100110011101000110101001110011101011010111", "01111001000110101100101101011000000111110111100100", "01111010110010001010111110111111001110111001000100", "00001000111111010100101111101100010011011000110100", "10101000110001000010110101111010000010011111001000", "00111111001101101000101110001001101010101001110001", "11001011011101000001010101100111001110100101110100", "10011100111110111000010101000010011110111011101111", "00100100100000101010110011010011110100100110100101", "01011111100100010101101000000111000110010110011100", "01001111011010110001111100001001111001111111011100", "00101100100110011001000111000101000111111101101011", "00101000000110110111101101110011111100000111000010", "01010000000011110101010010111101111100100110100110", "11111001010101000101100111101101101111100110011010", "11010010110000111000101100001011111011111110000000", "11111011101011110000111001001000011101011001110110", "11001100100110000011110011100111100111000011001100", "11011101111101110010011101001111000101110001011000", "11011010001111010011101001000100000111100010111010", "00101001111111111111010100110010010011001000101010", "00000100110001010010000110000101001110100101110010", "10000011110011010110001110110110100111111000111111", "00110100110000100011001111001000110001001011000100", "00100010011001001000001001001101010010100111010010", "01111111111100111010010000010110001111010101101111", "11010111010010100110111001011010000001101011100111", "10101001000111011011011000010101110001101101001110", "00000101010011100011001010111110110100101000100100", "10111101001010011000110000001000000101100001001000", "11101010011111101110001101101111110000010000000000", "01110011000110011101101101010111101101100001110100", "01111100100001001011010000110010111001111001000111", "00100011111101101101000110000110011001110111110100", "11101000001111100001011001010110000110100000001001", "01100000001100001110101110000100000001010000001000", "11011000101000011000001010011110011100101101000101", "11001000011001011010000010100000101010100010111100", "01001111111100011110101010010011100010101001000010", "00110101011011110010101000011010101000000100010100", "11101111011110001111011111011100100001001110010110", "11011110100011001100111001001100010101101111110011", "00100111010101011011110011011110001011000100101111", "11100101100110001111100110001101101110111011111100"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> sequence = {"00110001100110010111010011111111001110111001110010", "00111000001010010000010000011111100110101110100111", "10000011111100111011011001000011010011011111111101", "10000100000110101000100110001111010100010110000101", "10101110010000010000010001101001100001101011000110", "10001111011110001110110110111111100010100001001000", "01011010010100010010011110110000101101000100011000", "00000010111101111110101101100110111111000000110000", "01111111100111101110011011011011110111110100110110", "11011110101010011000110111001010111000001000110001", "00010001010000011110110000011010011001001000100010", "00010110011111001111010010000011000001100000100010", "00010101110010101111110101100100101011000010100111", "10001010000100011101111101110010000111100001000000", "11010000110010110011000101111010001111011010010000", "01100001000110101110010010000001110011010111000100", "01100010011001100001100010011010001101110011110100", "10111001010110101110100011111101110000000110111010", "11010000101000010101111010010101001100011010111010", "11011101110111100010110110000100011100010101001111", "11000011100100001101110001010111111111101100100001", "10111111111110101110110110001010010010000001110010", "00000100100000000010101010010001100011010001111001", "00011000011111000011001110110000000111111101100001", "00000001111111110100001110101000101111101101110000", "10111010100011000110100111101110010111000111000001", "00010101101111010000111010100000110111010010011110", "00001001000110111010110001011010001011100001000101", "01100011101000100001011101110111010001101100000111", "11010001111000101111110111110010001101110110101010", "10000111110100000100000011111010010000001011111001", "10100010111001000001011110010101111111010100001010", "01001011001111110010001011100101000110111111101001", "01000111010100001011101110110110100111111111010000", "11011010100000011110111101110001111010011100110111", "00011110111000110001001110101011111001001111001110", "00001001011110100011110001100011000010011011001001", "00001101100101011010100000010010001110110011100101", "10001101100010101011111011100000111110111100010100", "01001000110001010111000101111011110010010110010001", "10110010001111111100111111101100001110100010010000", "00011001011001011000110011011111101101100101001101", "10010100001110010110011001101011000001011010101011", "11001111110100111000011100001000110100001001000001", "00011010101111010100111010101011001011110011001010", "00011110010110010010000011111110001100001011101101", "10110000001010110011101110001000101100000011111011", "01001000110000101110001101010100111101101000101001", "10110101101111110110101110111011001101111011100010", "01100010110010100100001001001111000000011001110100"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> sequence = {"00011111110110010010001101000000111111010100100001", "00100011000110011100101010111110010110111110010000", "11011100011011010001011010000101110110100100010100", "00100011001011001110011010010101000010010110011111", "01010000111100100001000000110111001101100000010100", "10001000000010010110110011000000111010100001001110", "10110100110010011101101100001101110101000010001111", "10000011111100101100111100100001000010010110101111", "11100011101101111001101000011010000111011111111001", "01011110100101101111001101011001111000100110101011", "00111000011000010000010101011001011100010111001011", "00001111111000011011000010010101001011000000101011", "11001010110110001011010110001000101000000011001000", "10110101101001100111110110101011101011010101111010", "11011011000111001000010001000000001110001111101101", "01010011101000011000101101110001010000010100100101", "00011101111011101001010000110001101101110100000100", "10011100010101110101101011101100111111001000000010", "10111010000111011110111111000110001001111000010100", "11111100100101001110111011010010011100010110001001", "11100011111110010110101000110110000011100101011000", "10110011010111110011111101110000101010011110110011", "11001101101010010001000000011101110101100010100001", "00000101101000001111001101011001001101101100011001", "10011001010010011001001101001110001001010111100011", "01011011001101111000000100111000101011000010001111", "00010101011001111111000111011001111111110101100110", "01010010101011010001000110011101100100000011010001", "10101000000010010000110001101111010010111011101110", "00100111001011000100101111010100110110011111000011", "10100101000010000101000001011100111001010010100000", "10011000110111111101001110101011000001001110001110", "11111111100100111111110000001110111110000010101001", "11110001111000000100001001011011111110001110110000", "00110101100011000011110011010001011101100011100100", "00111011110000010110111010101100100110101001001101", "00000110110110100101110110100110011111010111100111", "01110101111111111001101000000111111001101011010000", "01001000100101011100000011011001011010001001000100", "00011010101111111110000001101011101001101010011100", "11111100011100011100101001110100000011110000011001", "01010000001101110010000110000010010111110111000010", "10110001001010011001100011110100110101111101011000", "11010110100011111011111000001111100001100000001011", "00101000110110000010111001001110001101010111100011", "11110110100101101101001111110001011010111110101010", "01100100000110011011011011110010101001011111000011", "10001000110010100101111011011110010010010110101010", "01110100011101110000001001111000101000111001101010", "01100000100011110101011001111001000110011010101000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> sequence = {"01010001010111010011101001100001111000011000001011", "10110001010110010100111100100010011000000100011100", "00110101001010001100110101110011011001010100010110", "01101010110111010000001100111000100010001111101101", "11011100110100000110101101000000111010110100101001", "10000010110001010101110011011001001010011001110100", "01101010011100101100010110000011110101101011000011", "10110101011110100000011110010001110100011001110001", "10000100100010111011011101000000110000110100110001", "11010000111011011101110101111001110101110110101111", "10101001000011001111001001110111111010011110100011", "00000000011001011011000011110000011111000011001000", "11011110000010001101100011000011110101110011100011", "11101111001100000001001001000110000001111010000011", "00111111101111101010000011000001010000111101011001", "00001001000000000010101001001010011010101100110100", "10101100100010001001110011001100011000000100000111", "11111110110011001000000010001100110101011101111111", "11101100000100101000111001100111000010000111101000", "00101111001110101101011111101110110000000100100010", "01011110110000100000000111110101000100111010011111", "01000100101011110011001011110110110011001110101000", "01100000110110100000011111010001110111111001011001", "11100010101000101100100101010010101111001001000010", "10010111110100110110001010010010000010011111101111", "01111010100101000101111001000100010011000110100110", "11010111101111001001100010011001010001011100101100", "11011100110010101011111100001001011010011110001111", "11110111111001001011111101111101100110010001010100", "01111110011110101011001101000101100101011010101010", "11101100011100010111010010010010000101100101001110", "00001000011111111001101110000011101101111100110011", "00100010101011101001001111101111000110001101010000", "01100101110111000100101001010110110001101101011011", "11111001111110111111010000110101100010100101110111", "11101101011001101100101011111111010010000100011001", "01100010101111001001010010101100010001101110111001", "00110000101101010011001000000000010011110001100110", "11001100010001100101011101101000111110111001010101", "10011110001101101000010101000011000100000101110000", "11001101111000011010001011010000001010111011000111", "11111101001100111101000010000010001111100000111110", "00001000001110101100100110010111011000000000110111", "10010100100011011010010101000010001010011001100100", "11111010010110110001110101011100011100111100001010", "00111101101110110010101111011011101010110000100010", "00011000100101010100100110001110101101101001100001", "10110000011110110000010101001111001101010101001101", "10101011101010011111001000010100111011101010000000", "10100001111000110110110001000101101111100111000101"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> sequence = {"42404402040033031130010221124313104410424122030400", "00130200331141431224324101220101224143201020412144", "01214312210344320112422420320422404400020332140221", "03333434000334000330241222410244012201032420304344", "34431010441442032242440232423042323124431232042032", "40423203233031104332122430330443031440404143430031", "42301403344204033021302214114201021341132020113323", "00200222033433243442124301010201044002401001202403", "12204221302000301144020410442444222304340031200000", "01201411130233403142444434330304021024123300202244", "33124310211322202344214142333402034113140401423202", "11120034042044043241233123134111024241203300113431", "42343412314011232032402043433130004321210130214004", "32241322432032201223431044002432140034444311312243", "43102132034443013242040300102320303242400300200141", "20303143003400404302230340124102001412221231401440", "20202411211011140332004332030134020410313330342112", "13033302230300014303021243343221304331003204233022", "11414132112004112344040000412400314044014423111400", "22134304421410010443243032211341113010020300410441", "14134322300442031340424424333243220420203303130244", "13004130444121341141344423230111203401031344431440", "21230214431120123321011442121440010144140121110442", "13142210241401012440131343341322010433023120243024", "03442114031432003433241320132334010344044412402242", "13003231424210420412044141413440443004112202103312", "01313422100031022023443401021303411101131410241014", "04103323122443121434333444331304434222421224213230", "42124114120210142344001233323122014401331202420423", "23114130141004103334234430004142002301034241414121", "34133220412431110321021032431343110104333021001010", "42021143432110100403120201332433143000310314203234", "43302343402220010233134002230001024141140032030203", "24131044222114114201421010443430140340243021021132", "02334334214420340232402041332233122102210004300304", "14133310323403113423330312321434111443342331141304", "30400324042221333004114100211324034414044412244413", "23112203010114220223010021203224402210042042212230", "00210331444120444200002004423432323310200133340010", "21122432243324333030424343021104114040121313231344", "01232423132032310230422012013023214121110112413014", "13244242414243320001403404004344232144111034133102", "14313102111412140422103320132221400414434421111142", "13041424440430424234101224112414331011111030314144", "33320042412240424310414412443423341302120024224221", "31201311222323000202210111102043330334233140033004", "44412432313242323014123042444034312131000004324040", "01020131211334021133233232420113022041024214422103", "41441300003321423100201100423414022142201303114310", "00141214044213103130030121101021030203110200300203"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "010";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> sequence = {"40040441331244021123332100034212433131101234044324", "10002222123031313330142140140132022143201431344312", "30033423411403204140113203114311202310322144102122", "33233110413433420322313311034004344133212443301001", "23113310332434243011224211010234444221002003131020", "02110424011431324041144210401400402023202432211131", "11213040132413301002002113432234433410442032223012", "14020302240302242410240322343143001422440000300213", "44323430203104011031412011324433412442433343212201", "13344304200021342301110124032233114242423432122022", "31024003100342140122003044041001014312033440422443", "32302240121041342120443211224211443321104213440440", "13030434034221431321404444202331044320033043130332", "01024041403334022441301430122130441421041202004104", "34130413443132121230123400012010424102144033304034", "04023031403114033133332144302421412212224103330430", "34022102120001311401340043012324341203422410200214", "14432322320300203401111201320321022402104310214423", "10134131011420401002144114130124330413213220114302", "11432144002304440013414034043140330204340323102112", "42204330032013011240041313121414111200422224442431", "00430403232040331400211130440041011433333100230040", "04134034142002313120014411022034341032304432121330", "10404131214101211102224424431443421300143303222413", "23300033334142210220041213240324004340434324043431", "10324310124231313142213240323033400203140413404210", "03314120131434421341023430403300430101401400420033", "34244130011021000042041201204120111143140402033204", "04243114012124101332142440033043143431442231443421", "12431022122131121212334104411030001304330342143223", "10442224420230440224114132201140414131443210011132", "33100042342122220342321403423433034343241020303212", "14344314130240101420110410343120222003334344332432", "20204124333323214031000342201342110442113133312342", "10014423024404440033134241011231234241300014144233", "42244120002202311442043421040403344043132213100233", "30144214113412111003202012412444300440103444013122", "21131232323414102124100301021202312022341131120143", "02300303030240413141434103242000043303323213004332", "23213434110110232123303010304130411142443221334112", "02414013213434422331212334432403424011231200440120", "32124023031320434022421111221032433431222324323420", "11143021223114104031002433123434243031430044111220", "22010444403212010120310314410230443112323030314302", "30213110002310003142340003304033023301121010342323", "01314022012410432003342343232012011444410133240443", "11143142032121011120223423133333240001410441433013", "34211301021022411010002200432023401412334324404301", "20443142100430414202342102001033103421034141432113", "03224310103031231112100122333013243342443203121340"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "342";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> sequence = {"33404123003102404130443331132424020244022133134312", "21031213134200200241001223242343210111201200213314", "41320044021114041024333423402044422403300241010231", "31031304132040001040121300222424423020304143133243", "30113330111023243132104220112342402234214211121011", "40214331010421414214322012433300202413022241131242", "13440041234204101301241030041341233131402022204222", "12342302012342403203430231442103401414102331233103", "11312141214410022442433110311312311344010014401221", "23314041100121103311031024231430443223233100140340", "12323414411132201244441311022114243131044441314322", "10200123043244021124314412204024121142010124042140", "41414301001201214403411231403300411133032432130211", "23201420220421404300110404043124302143212242204100", "10410431313401002421104210410311324400110034023441", "14344121120433301014243344232013021200100333323121", "02203440133023134104320304344140443442213422304320", "40321243204401101111422320042021130310343401141012", "10142143013102214212300422013323110330014302133401", "43110111041300322314200013210221214432042331344342", "04340002114000141342440314322430114222403333343213", "23120142021404220014324040034432431443111030113242", "11331112013403122312241031031312243031000340304243", "30324200200433134230021034134013230103201140444123", "00340312211103323443440134413432104441211302040013", "43440024212323321242222042220041402101213324014424", "30433413141423102011244114441002231443002032431422", "43344113300314133111324201240232322240240121340424", "22003043034312142241001024040323042413012040403341", "40042213034300013023302434422013204341211204324023", "31230104332443033000401230101203021034343301244401", "44332343120033110400104042042221024313303001442420", "22122440444333444000332234333343200212410234021200", "21342213413323030132410401430323442014323112424020", "14234424214333344342441441102304042332302431033200", "04040400334214230141113133234314440422114024203423", "24044430324243440343000130123323013003012313423242", "31403401404332032410110204242414024132321131200042", "34243303303402334002123242434140323122324033104443", "23031143223421033220423224211411402431420413030031", "10321413231433304444003433242013144324302101411303", "01304140223030231324432301220233010440122143214030", "01431231303100210010030324434114222324201134341432", "01241210412303142140223012324200000210144310114043", "00333231134202143222132403101232334243120241321342", "40131121404041312211002321211022120414312102220444", "31411243330021320434314241214023141203044301200411", "44220402330430223312440440314421043243421040040432", "03202444013313423334221030044232011420043143404310", "43433414303102011141213103214011430134211312230223"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "324";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> sequence = {"44320022100024341012131421022302402130112233100202", "21213300203312130331420034432433334202141334041433", "33041203313410140413034313140410233242101023042013", "42433302312120331021000201000401334014134210222404", "40242223214011404404004314432220210030340414133240", "42144044133011240220201024132433442432134133242340", "40113333004111130023204120242233332214301244132102", "33303433032141142414030124322221023004222204010140", "00300023342311331410141432204142023312143221313220", "03044200031411310212122332311312021333403223202203", "21310144142310331034010333313143443341111142322230", "22003134300310340302024002321420224114213221434333", "02040220031430023300032221110221220314034134424313", "33310200134344231313000100044003100123044013401421", "14141044022303200014031104303344232321132204433003", "42302104033310140411324234331002041243032123214422", "33403340103420101314301202340143033413444220143034", "00344301401112320304131030324234121304401314411400", "23232021342020223012211040123202103333434000002442", "21212434441232041041410032424313112132124112302104", "10002213340401113022133220011111422431204133433341", "23442204244202432220142043114333143124144133114420", "00233124012313302111301334023204340110423433122022", "31234121404012314400224344404144310112430012344222", "11201122302210341214324324242323441104213101131030", "23320330344011300424104104131214133223031241311432", "31013400213421220244142142300012100121413000224233", "03400310311023031120142400421240400120414022331232", "20234301410044404111310011011104344124024141302110", "41422333141300122441131033333043240332042333414010", "22443130144141030443223431210304204111232403334320", "00444101430423204004314230023013023410302130234240", "24431240002130324230042011332140213120411403200102", "01202220041322244202122423234012320123330033140032", "24144413222410211313144430213030302230024420330214", "22414240242124103314221140243232131200423401201212", "24233243223431000240022024044004200140424204212032", "02040144442312423223423343003120404304433213312101", "23432432110412010042000312111244000241204132000242", "43014011034144233033312444202102433223344114233242", "42210424144022234111233440220302121221241024224120", "34330143133120203014401242434302313024423023223431", "10101313024340030000120214432430432024342321231011", "21440310403404103423434200111101141224432402433431", "03331022421114103120420023303443442440331124412441", "30304331433203004240402333302203123330104304410113", "23330042311113230332110001410324213014144414030302", "30124420432422222104420321143441134413114244203034", "43331200104321011144131034404434243032112133032223", "42304212421322220343324143030042141003000140313420"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "423";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> sequence = {"64142037201507672993079977993176758020078890160217", "52235083918224922285531676826450737900979016354589", "99371257187348622225843264146941973493066012206464", "81197341852643425792520799314308054270303353803928", "36157521569320512471183236888110466019635658408407", "35510788099501571936014974871350289218986856970076", "29658720947835718414236820763487897799234639033864", "36326166708242308559993651374715747414034702616135", "32276667000564376069767649767303671374117964788718", "08104734478584494995805691481589150019405214365919", "35406414872590962339744471775577435355940742585177", "17077397239625346584276905402395553867717452165140", "37214201699829256598761278325132154627318843019121", "46162940186447253069654657146084982427551351584730", "79902840515877471937685326770434289612929794960164", "91595071398601160233298180000790090353655524256456", "94038387365980851859076594391731106153399833395749", "68803547491640125261239367199932198703784934356434", "98339315992120586061422910216510801010911102960789", "06163853408560059079963154696215228476358783807300", "18684000840168151568011467963106316685244916850707", "19057692027999741932856361633447519800978392946803", "85096202972207444407257368463540912557948865961864", "34712780460874383550598403153393958908558677370708", "00544208560875931020829719360004188222751272358252", "01342309958754206620263167191883414490263569385683", "83416400748036140116655641045193925283495857642957", "07056919406193461759088812786275776578795219649238", "15734334937098949748265882322823924274412961272236", "65902079189815013410253280039051466829731879028001", "83490677370095418165270457637658167594329483373322", "38882921289934795836786666069270802517166073815451", "68618601837491539807936663419095264034122403386904", "65911404381853494939244209252858784283596864070573", "03904746058563409147511866842592409871901800184988", "58620559107118402959106534823791713293605100249053", "22823788220261421011431777657232145842985623494186", "93574463298268637667965517221409656078359134791014", "20902088495542216285409389199504961258478843621383", "77319299688544314736380188664820346856360514186819", "83399989988675774824083466232201045600185962931262", "77625556833229928763421183648333670084973463169432", "07739887311652078569876892427448752139202101687337", "14588502088961020061065760980217192517799244040867", "88475001158240091828900756488054701583219495996152", "05427768754294486441925329079362590059173180661729", "08123380356809668331005381806598097771941206765358", "99033896702707562932636043439254233306009805507388", "67488489293549794278384465734268961903099610542876", "86822161947941140414537740820386081872619321337597"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "719";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> sequence = {"61608016967810741713826585704011592796700983721881", "40622020989673320983404220883536420575398922259441", "50945963737557152198336398821165758864043879883330", "17558097280753391038147979820817386162782936102385", "15878334665357388794298117025135079556406143799490", "43719471470402341441631590847887159013219601311563", "21500606700692067345737294059744407123397748127673", "87192581064021334007037421700460904887903400274940", "79395876204803401974130685938295455467737296514794", "46784640778367480688647561025930369740751161737747", "76251851244524150692963478030674815904331434519323", "59129062361775248044687328597847560499426625663234", "28551457885085454234211749641936944032881966904408", "67542660159747274783574577060747788617208751718296", "43429767426719024980493908680805958515808408784507", "68735883743516745714346920305525901974119981410291", "10343038225772735473828710785421982697153168200247", "19205472839147814819373720642039653022015515732335", "72664769891090375949828933324187032794897753328177", "35844624574999513844138098894071999610128762543891", "64239573277284947413382769951382105110986772562855", "60908040345778230297753006308377637169745708746454", "68990420114005184225402656883304729346156525407809", "87129950566999577965533472240801319300188470889097", "79736173361688136843027353072039617521396024997863", "71768787556264030707452360276462955196747920665814", "36437280626736091309732942496780444783478766548171", "81598324300291090327222179919446968494380802562010", "25913841567853608336804392578259558281425941780483", "34329796723908041825128058391844165808142270092233", "64484621849257228078396938702403519076643168183599", "39061075549965870010482263582526214233002331110433", "95830822425486746844917539776663148644056014839636", "88034544442018097955848536510364758712567471816338", "81634033813949809740338246128998204131099682129542", "11736463321755054458861629617235896608240567253722", "78184633115492169065171184856322023833079359968611", "07265333993003310947050777041525051323457738759642", "27671405381310235246581493368112081839954928705107", "84935740757270003804274384910290498504148820315637", "94206174453282389475315528303184465352758791763373", "65705838505547289270854642033070269806035398053265", "84068703477284262772423965422926446754145858861569", "58171175040253312473625751208093220733351484530045", "33318515543364925103781239351164431653280174012359", "88585953939522372587880163159789706719360165865298", "90890000720838506202209269060786277198909627770422", "29714863063435267064905011796807166777375018319882", "47052762095154951630989398794527192531068955880644", "34685612501113249491144908397679749789950871484463"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "457";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> sequence = {"90234738380228141417453914867529604259671389320653", "40231076701595861359343728765997127903329590645242", "99791036047767250424779863329715488291875226742979", "65921766488450464959450373961288960482385080357062", "27883299921446239175022172340831386077643107970696", "62311358851422836649819815141780266731021165271730", "98684803477880332699930643748501251326559136154136", "35914811786038768095929385704295699387635332995825", "41534582265476525841102434786639519861084443754419", "46214873190712196172547921172007908748286604750435", "64515916015550231339401843434687929329349085571790", "37546081680385872508058340065753451784322001784806", "31103798835560992329685545642462818939615300720087", "63569553476086437887855567431692868599879181561091", "46706639396031947361234034083676588525634929258926", "24025473963610417630451679630689563498473916349633", "53283861863740248172850112202498554583275475804803", "49609393119793067844883205814689224735265101281384", "73802669399325738334783661854153092657971991887401", "18049661077145974145972685666541573837505614096044", "15493896504236082163322758456344908471165934463822", "77653784904707640554206213481763791124045485620450", "35196400564016486498342807086402579494553439604115", "01594070992351150243935090241439178476782897151237", "01640967867144994438658773669150277735625803919530", "86889842687307867462412501248176414694335239244320", "16181593794508787199474679279997246525141601332515", "40621764949524533968520127950507017546570126872642", "95278363374245493489797454875033977124495200825893", "62635122875763984874979969751451858614481657703158", "33922955771995384354730935803011428674898501956216", "07797479342873285879410885279164035138424759939897", "04184983788003849899272948036101855108904303223634", "79152550520572978806321645719746786317217934559707", "30601836251976609677004415822416391205240739117389", "69532744608779987027783987817146551525122794269419", "66467879870238933450367277617281294980059229001213", "01012575034703444958015230318283722442603680739049", "64019020422027701173392047004777916550540293984763", "75873545660461309951689061853516149343675172937006", "57906226777081213208184392913054455715381447604318", "24730407925212682283312334002624926395485207095927", "64346968267082543109206248575135375949234039752157", "52292494386344793028482533938018516641732178607830", "47898188875707760115775794611867739069444610599578", "16206658671672368003245644136844394249792024800794", "44167648321178565606545585271456875028702329206290", "47488661827175034613292996367553704458060389959156", "71815569993831499732849363780536556891816985967221", "94119073663050502470702984272577981076775186673569"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "329";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> sequence = {"30699551402615529124967663830236794810562688990413", "20570022740215284735450336825158625343179179810943", "39516327167278367847993236917653128347908871480538", "15405255589255360567562867104658824622787245573858", "11797264206516181549748226755669984685810363440684", "01715265262362629956197110432672041779641409832106", "75067799865166779942224160537681006547511646952799", "93436013499073974985521247806702294756368066828891", "32474189126168431725863181544063385356130429893124", "74736214529487730638458391321254717545641370983405", "40651751776495594147966108818971101436650856452179", "15993909887006206069339041423561613148030406787607", "64535051977254221686129432744907559747459735225978", "89794426793013710691024439712646727249362601216885", "46960602266433877752787390406415947322762620814413", "81606173216634270366367128064915248021057141385894", "06916704329715861871765423728364056762677764399279", "50303206590067439150284699094368164428205799758204", "75340871676648000919570369202308073819372047335543", "92422688889172425227693354329312177867702567738228", "55539896154258495726373554132395911963145285372707", "93296137264836739113869627792141854180474360771677", "94395569945919690631095965091780401455969442934433", "26966301218693525312247725223078035654296132334267", "35835561464819679116078386387263816839724891713995", "09831805808541866228562053148587060192733670894054", "08733896764070265869195507242172859369891253247951", "07075492775866166437998486191668298598672160983362", "66720796892427489643481537984807475147585571140212", "99140357906437826536821908202189751621822915544773", "19150360433753122612002223783729649260033147438040", "63423055135069410947368429687611864135836065867150", "02619063842733860736520268596720553562840505707442", "79008577431828831739886654998227713914975418111885", "88987937400116310604881785617056351392194716995197", "27336017292582981998898923914847104474023810262005", "33840114546086816744536448297330457857006908165983", "86969099365771278757280693586928694572670505829758", "99655515284704977009181681919114554471036648964358", "77611359251839606916003811607645999292384593680596", "12989146703871145161155246743014666058915182544441", "75942273557998905195898125101285552901835225008697", "52912143849579106457287638537366303215116322554064", "36424530340445172391428037897925523720803751853506", "64680754218059314048768158971571065466925146376517", "45820552501791463628402326133832293769114071936201", "29327194123527894080079900393296271771884239645857", "64042267680523899271682189969506361140737751390731", "13669457909289837063527246868667990031774148945707", "54843623815867845489080968868565244582409311751594"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "799";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> sequence = {"97670906026429109365209543778454117925503572079227", "10426015792934279775316272839782890498850506450335", "29265762597977780507262996002138261652862083209836", "10381411886560530195976752478697292374962453856320", "18514005827483885491407143587075099634244572269689", "70510059154222607374353432217286835436374909582430", "90544969030647681529611027016898684940814244018825", "19799236953917514643043155132943666742824821553631", "77653793139723570778594580957810294034423855252386", "03896789390517180666389110706457196368459561139263", "05260452309484629692940660699987498978850979287147", "51778546522427464987278762360206665194752294091888", "22340745042725269055135818067166385262105511537445", "82927272567396456500784388575537674878525582405466", "49432566305080510313062814903836159448523632854347", "01266175519524002810309328933386484097926203582478", "62598399622731904076884137684188330138011491517402", "80201218358198956492907668346584988036314862687165", "77117193270195645209199776972720315622849532345809", "57820431165684349718157620844486245291375493832747", "49040138931341055210493130434528898618506780174779", "08504022212773139100182177176705809101912991528011", "10990628796811106216686365497267305283679289241079", "66601440870486354950170169428247532870313691780616", "71034851548749111281858297391184706124169785548128", "46105040382607779510781714023784175090619590314471", "78110391872106538190469060921594564027117530246839", "13252361053622952456763484393878529471964599694624", "05347870026000150077137663020468501031626282513841", "52041817490756982069746537214344355673882758986300", "92137009230268996256888438966846770145103297984582", "87896833702895370062116594782419547846361817324959", "21406203486108166608053716393970059509627016873268", "71275480601727582531935883075262750115375542296262", "97339003117452929390623915918012308366318511862741", "42628578032318529526648049583660634131987151080487", "10727724767467793423008685618350051982143845575946", "95583636836548126339300419138311257709901274799656", "61659437318997700033671151293196036141018378056799", "69409095957107208000553258181207490890343477164644", "58895310252799119659626664082134875654962483336519", "95819788519349710700844596309369514107647952981730", "10775882303634739103952310841615078563287807036580", "06978187348626055338142533256884646737374318107099", "95930782070833774290744285383977769149643399637774", "92352062065790254059102578118264570709990007027183", "46864369715107484777749463437726255443958749318361", "79169541187621420755581056824116438811207384451651", "70287162594426635384354215660807595420782320077099", "43992604227223532457127950450689649165026659819633"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "107";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> sequence = {"12121221212112112112112112112112112121212121212121", "22122122122122121211211211212121212121211211211212", "12121121121121212212121121121121212121121121212121", "12112112112112112112121221212121212121212121212112", "12121211212122122121211212121211212121212122122122", "12121121121121212121212121212121121212121121121121", "12112112112121212112112121221212112112121212112112", "11212121211212121211212121212121211212121211211211", "21121212212121121121121212121121121121121212121212", "12112112112121212112121212112121212112112112112121", "21211212122122121212121212122122121211211211212122", "12121212121121121121212212212212212121121121121121", "12112121221212121212121221212112112112121221212112", "11211211211212121211212121211212121212122121211212", "12121121212121121212121121212121212121212212121121", "21221212112121212112112112112112112112121221221212", "12122122121211211212121212121211211211211212121211", "21121212121212212121212212212121212121121212121121", "12112112112112112112121212121221221221221221212112", "11211211211211211212121212121212121211211212121211", "21121212212121212212212121212212121121121121121121", "12112121212112112112121212121221212121221212112112", "11212122121212122121212121211212121211212122121212", "12121212121212212212121121121121121121212121121121", "21212121212112112112112112112121212121212121212112", "11211211211211211211212122121212122122121211212121", "21212121121121121212212121121121121121121121121121", "12112112112112112121212112121212112121212121221212", "12121212121211211211211211211212121212121211211211", "21121121121121212121121121212212121121212212121121", "12112112121221221212112112112112112112121212121212", "12121212121211211211211211211211211211211211211211", "21121212212121121121121212212121121121121121212212", "21212112112121212112121221212112112112112112121221", "21211211211211211211211211212122121211211212121212", "12212121212121212212121121212212212121212121212121", "21212112112121221212112112112121221221212112112112", "11212122121211211211211212122121211212121211212121", "21121121121121121212121212121121121212212121121212", "21212121212112121212121212112112112112121212112112", "11211211211211212121211212122121211211211211212121", "21121212212212121121212212121212121121121212121212", "12112121212121212112112112112121212112112112112112", "12121211211211211211212121211212121211211211211211", "21212212121212212121212212212212121212121121121121", "12112112112112112112121221212112112112112121221221", "21211212121211211211211212122122121212122122121211", "21121212121121121121121121121121121121212212212121", "12121212121221212112121212121212121221221221212112", "12122121212121211212121212121212121212121212121212"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "121";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> sequence = {"23112323123123112323112323112312323112312323112312", "31232311232312311232311232311231231232311231232311", "23123231231231231123123231123123123123123123123123", "12323112312312312312312312312312312323112323123112", "31231231231231231231231232312311232311232311232311", "23123231231123123123123123123123123123231123231123", "12312312323112323112312312312312312323112323123112", "31231231232311231231231232311231231231232311231232", "31231231123231231231123123231231123231123231231123", "12312312323112312312312312323123112312312312323112", "31231231231231232311231231232311231231232311232311", "23231123123123123123123231123123123231123123123123", "12312312312323112312323123112312312323112312312323", "12311231231231232311232311231231231231232311231231", "23123231231123123123123231123231231231123123123123", "12312323112312312312323112323112323112323123112312", "32311231231232311232311231231231231232311231231231", "23123231123123123123123123123123231123231231123123", "12312323123123123112312312323123112323123112323123", "12312312312311232312311231231231231231231231231231", "23231123123231231231123123231123123231231123123123", "23112323112312323112323123123123112312312323123112", "31232311232311231232311231231231231231231231231231", "23123231123123123123231123231123231123123123123123", "12312323112312312323112312312323112323112312312312", "31231231231232312311231232311231232311231231231231", "23231231231231123231123123231231123123123123123123", "12323112312323112312312312312323112312323112323112", "32311232311231231231231232312311232311231232311231", "23231231123231123231123231123231123231123123231123", "12312312312323112323112312312312312323112323123112", "32311232311231232311231231231231232311231231231231", "23123123231123231231123123231231231231231123123123", "12312312323112312323123112312312312312312312312312", "31231232312311232311231231232311231231231232312311", "23231231231123123123231231123123231123231231123123", "12312323112323123112312323123112312312312312323112", "32311232311231231231232311232311231231231231231232", "31123231123123123231231123231231123231123231123123", "12312312312312312323112312312312312312312323123123", "11232312311231231232311231232312312311231232312311", "23123123123123123231123123231123123123123123123231", "12323123123112323123123112312312312312323123123123", "11231231231232311231232311231232311231231231232312", "31123123231231231123231231123231123123123123123231", "23112312323112312312312312312323112312312312312312", "31232311232311231231231231231231232311231232311232", "31231231123231231231123123231123123123231123231123", "12312312312323112312312312312312312323112312312312", "32312311231232311231231232311232311232311231232312"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "231";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> sequence = {"12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121273673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "736";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> sequence = {"12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212127367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "367";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> sequence = {"12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212127367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "121";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> sequence = {"02121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212121212121212121212121212121212", "12121212121212121212127367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673", "67367367367367367367367367367367367367367367367367", "36736736736736736736736736736736736736736736736736", "73673673673673673673673673673673673673673673673673"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "212";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> sequence = {"62757797899895889778867478587869979597589659887968", "98479996983991890986586387657985993893693499558529", "92894976783862875956957697099469294766549826885784", "68777685684954774873787494467739871981963686449379", "48669178298095269667367939539744593584891972781770", "89279259439458078087288188827049624908682860791683", "77179074575574649149227729676096409716940883348844", "70726756715724608509239604854845605835924834725816", "72385596175388068059158256668108405554618702851950", "82402951853639118616353466482376340713841942973455", "63375452344481590690474372193284383603933905373361", "55077528329209307619903647141842814804544362913573", "81146374264626625718037008309415655350663182153081", "34327406706453254303427202552735404355174176434145", "03562282075164166127620606217305251392656132630190", "27129319218316531524241245128018126023521070505703", "35151433247323216009007313652080262366016117226105", "42225338006510912056420133040310614750244252231701", "71042144015411233121371191022125041003822901400441", "31162999869978868994650103224314230632046879698968", "88786697778987666864995992787279939918970988397696", "76859858894983785695867943982948849739619819479848", "77597974890975783587538857928826784595395297197298", "09293779359444966776728706836742684296289265895002", "11150874694051101220058559258275663941963763854955", "75840852824665764838717823692290791996593891673865", "68203020990691574924945726934933384675564547807546", "55486095635774771880490558067089368184760573662076", "15960844752770365455509647339206461680863644634803", "93000113093158179042850781567149177228417512831485", "19327458306642185379571276264009427154256062590833", "61873741862724356147436248169033750373544525707734", "71623901765048281424415161730713633518329108056227", "31721660723460443821902951710914621740900732802861", "07006533266139137119541651552631822088138106004705", "43453602553532150534305911641355104643334113319129", "23834423704372513045652420407440630825402451403800", "08115235205111812601921450035061125016034018015300", "52253117012325213422414102702612122628978997969667", "87999459989876896596878895988779857869967948431240", "41202313163247200105022301323302110322210020303101", "43201144892995697784868675939908947748499279769497", "57762785957955942964888669538938655676739829839747", "90986498083875588469078379378287493549548736688277", "73385683592691993656647817589061891573825917809737", "66196395096169845763885872971981928368555476575658", "54392586369337455746772861735847529527646818834806", "92393496077187076095832920356446665428267449057167", "27179185396294473470991088159726602914652384481684", "27438079219419708715637705904741761390375195184367"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "029";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> sequence = {"38889789678798987297499699988269799589469399777869", "65877959868863878477588557976776980796849848993676", "83985994858567935695781753975686199197198389538665", "47928549669474867478846893853685765973964805960667", "18834952982963951487666875949373794595488744837741", "86537618526476369295075438366299259347575592682860", "99097289249709565773844943393294279189169088096284", "58645746750691591790771473572772382751930818705274", "56466445558437267078028819216815820873447065635517", "85156177085094465566167309058139276056048419554534", "82481637429145464913804903940933652871651183583283", "38119615703890180174390680899814626634364353378304", "72562736326335425803701608623752452360290461371724", "34170444327153590092391280640831941642823518229207", "31842622782571352553166074076214922810552252057324", "63171270067209896898877888589796999782181293154027", "22424710911733404307219106254144063054413620403508", "29967641550361410711431401108008400702332261253025", "12601902650042313203460312345053250142176958498577", "98489079765995977766973663868624112002221521311611", "33310451303061033013420600323212405041223005102012", "11150244220210001516269379949915886784794839929758", "79575786928656947637759866846884585657398729838358", "28955918529639749528816677488368595039666255809808", "94572792773787891990874664756837287555665374780768", "27675395494673596586496095679393882491654855790652", "78198263670880696284497266078339268719703764633705", "94487075084083281892526718738762754745905834730971", "68159228314805744690964861961863523943917914655445", "64294074274371771563484182336911941935712854640993", "65068048219238518136442608606614721889305629519538", "43825934924169817850734624616324810107247094280363", "19108535604714902933812645362355160258140620903514", "17525702822900921760190447725617404931830643613802", "71373345455244327311622651732621674145157615509329", "20801720543534344415317008207701610912913164115425", "30070672375118005335055323603898698958899969978599", "59857988688387957788589777998424034124225045223152", "06121440521510431251354006050261142307117106308112", "72270421390184794993839878968908768749796697597396", "77051204130325410595596578679746004021033304684947", "87738848929919829567629818668289483791501566385695", "38279079377696197649359399469366784500302459097031", "33202321220011322433101340102211002014301234203943", "86591685568179288729446565587586397196096374748194", "58548648737635766658409903686287047605745575707754", "98095467278367564726917539189109419926806736545618", "71767428466178264636457138076535804642964069259243", "55293381694246271882583563195286086149625733906166", "24542771594078089328349137815814852761393157253690"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "036";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> sequence = {"23878677687997589885848884999588977983998994876645", "78877756796699638969626895698559769599285653986949", "87598479579198298079794767496486568688665951493883", "84594685296846662991774564954945874857719908941967", "85909939614369068087359658547871385379078918937558", "64397394467097294354657633835757088267650960981974", "75448927619366349269258277274168339528905916518806", "52497844913929352517924837783628706724639158176472", "88187259236069337608347737447361850863637262373368", "16356320851668247057464607707625738284386275381593", "16914697186161561782390393484297028148095074093295", "36428604812630734624557119555667513654378058049007", "52655062229228226125621940821820921750474345027811", "70432803717157230660560344072214712731721620631840", "60291070367167321554540551920548252720714534264044", "51183081335832701902600841742793024433266106137009", "42553331421305325351541160181045234315035521290422", "71090173091135052046115303243041800403301644424144", "13132242353191283114123233402542022501512400641522", "01341050001223108021038010051014011211102399786898", "99968779769987897778757995788798499498286784896698", "57729929837737855889458909883847759908917965980466", "77688809938864948597395947928939866686587389276763", "75653975845958622783488467902031200279559697943936", "85854974954861991895693764874782696297284476657461", "78188177419706839645762882944935931684292682755681", "96097176567545661856418608853709509349248416744816", "92592175345465472770482582464752474387266238695365", "57369428066078077183646805919813940967257519529163", "67194690760691583581571366446339235708639148337933", "85083003067356308761650651748028109229615903906029", "32951663822408436267071193037455156256058038319209", "41542642740742555273354170090561491272373437146270", "57228716406346035540544451840450507910307504904400", "72162452621913724963535283271070261285147125435131", "72062073118703282363180800852511732532443218113326", "01901820538129006434220814421550221420433150361055", "30523340341265201380171512263225015313441024241413", "09115213500510423470160047304025222323140101431230", "03330124302396798899898698499588599979969917797884", "88821211611453360411203108298796896497697785894478", "97295982868838877687587678780892794874777569659568", "65783792975596397370985795771881681994981565567537", "84469468479099285648935495586763682781895486658557", "54766772685289074966953863891952690880594746683993", "98079381473484395191873943761320021061961597459148", "36936708536465666329906913911100011983593770582494", "58467485457629417916925926738727744905743654647529", "34728861782197077357366428049248097175900864194296", "08719338509409238337407860950561660764482020962543"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "008";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> sequence = {"27687698999477998897890956869549865997916896798759", "83697729969489449688795976684975797458939848596699", "53965594649388846963666397279089856929829737886828", "95785487866586198197194577764839937962961877844867", "71891964676574794390645952950960873592885853738607", "75567587499277466783584291190593656627872249139319", "33951924653892588385186375259039238455573915917934", "95808807826817707368037158376098069049076734780575", "47638251748247564709706616743870864094267028435717", "81693294941914926643671456527536445355815534881328", "71623562563447446286269126354542857614346832452830", "99185265058239408550751651461730840792180473274271", "34504513773181471176243740685083423632622800818827", "33362093523705511293065463372810090199025704424048", "41660672325541481164204330381213802440292063175036", "05334182290054007417031500613532343208018316304136", "15443072425060272641282195522610910621710820524809", "22270034056030140321561278999798988978887669867969", "96589572161184725431252070172033225314441107123313", "02601157869759948909959739908967768797799859587588", "68946046949919749709719929688495678783350160002305", "02231035151241521221051042142201311410102113383943", "69664785865987488186685596458530040153467287189174", "77579539517947693963877717829828577848468646549609", "84486392792893892498379376764398096198194593558337", "81695569259188327745755547916716847466377384565744", "94165680590582552976557299368386292390772546487269", "04934756447375388566742950933830944627617528618736", "60880843826754827507607906537139727345069159268176", "35940920200120952740860381553576288238545363492177", "08367339304813540780751954455166614615814851852580", "68248348039138047129427247066260192271064196246335", "84182291491284266521642362524344417329018318111632", "82190374152620870573563616067014720631562373062281", "26503605437046042802931910850520731707235154144336", "51091193244241372245131621454218404405333257028350", "82056027008107118013640172134314308009007435234204", "32613051425127969689996490264995997687989679789888", "58594897949748788668839877869938532330250161240600", "40353125307034123226303215389299860787677698098493", "68676697598384889589479353799452256117150410550061", "03313203015113340050242223104596658758654927529819", "85714022001221210115765785694089197399289397199179", "15977957496595678437837469518908736926675790990202", "11411102300028874764777566646847559259309728727639", "46715881882963773807923953906932834950954864855842", "97082772581770931120100318707744826833880884655685", "07535918286825466366294396267238718619615554580583", "64565367454455274308635510922641835771690557543656", "38627370617519375048447816735824634832920542782085"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "028";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> sequence = {"84977978998799288985875489768777589397968699649975", "78729868873876974989598396788866792969885795774696", "53984862973958819994880892793786593863794962583883", "77859728745766932896689467764771798189195599359459", "54584791495385492641878468500884487193493376753737", "24646507634817807735829126663890990870845586096356", "95674855743676572692575961834661756655564294278369", "16842843835733947628673645196079075295188283290494", "47816940980484194167074751734547408565449109705809", "43922991852770952683355463917722853664803619219827", "61591184073146209248304461456814259208009059069039", "01900782563086139950560570326718643755338460468054", "24902725528025433623826515851292393151482270453472", "07018068247155093091571627444261191380156164067275", "06624206581535166083197127137147307117217004702936", "52435038135405513633163688999697602632525318215417", "41521656262181281141251150171082037422144034237061", "05305106063176987968669676897978587799896030644508", "10421330160028236014040050410723523334434012313432", "73224522609881986997599588878982867957985685496675", "69565984886849389558939907949838847883977843003532", "44143124132052011131031161210220010130234110006225", "02112043980876786499489479359596577764694576089084", "29647658638655973774859464875841950972981790963583", "69059295486289136448379288297473852787396276683547", "71885574383321223033782736626872870682654650861892", "70953952941783232845857573495177339373567708519619", "18506934840202409936809447497077279193387190670072", "49437176376175384449174666456605822275424825818745", "40816564367168148076259143534282394255238159308215", "78129926723755604903741692570555446744536531726916", "61673291580392347525431860663443093199125636235507", "50572184924639119407047229048108805614999897146247", "03801830780632742720902922322853725350461551622250", "26336074065180423631600910920731562060357150361071", "37016135283145266524403434181170280064138243340459", "00834601979889969957886978688775153351345532602711", "51005450025204052217122080245127785799758959669847", "10432402333061241422611820325147968901730305116400", "44105015411131302021921630412813909949569279719875", "48679321415213312642053001031062114014426293765906", "96764759928983783693986686586469584497795598297665", "77768489654773964098078948880872694399367729629478", "79448767845974468386286389348587827816908929919737", "92675687498110132011200033231187167359416664945885", "40860859549609723012123870946727753970671891780952", "98567088438538288339537575582685275077484655763938", "41950840667418619905648358555660553682102242196176", "91481924930790492287383194027461881822626634661681", "49165347627075177046366257349073158391574572295162"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "027";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> sequence = {"33443123242204213332034004322234131440303132330221", "42014343011044423040212102441202001240103211224141", "01342433100334224442023113002344324330411404412423", "33142143402230341404313203212134302413323120410332", "22000301311130020144031004012324001122114111010210", "42444014133123342344341441122313021433303331142132", "24323200044242041201134042221104301314020240304001", "24100230003102203431344422434204433212103242403430", "32340241441010431413223341113300200412440143201211", "22210302203123042321421301140033311010212023100013", "13233442443431240403422432413412340001032143322133", "04043030242320420314210411131144011211013012014021", "22300334004410222002023100244442141424343140344124", "20432342313240134144044333213012232220320230331112", "00413121233040210310422114300102241133324302011000", "30344433141014003342244144040103223304134031300423", "41232312142133321114102302124202411320301432002013", "11204343101222100110442402204023442330342214322244", "43403243313414044131421334312321000430412202420120", "30212111301440104241022300200114110132311240003344", "34324304414240244420021114401404031034234112413400", "43303332331431133433302300301020421410321012231232", "24220313202213100013041212011104424404144432224340", "14221240034413141204233134114020332143121334200241", "01324211303234430122011231031102320210010433324442", "43432144030222300040234202014314004041412410430331", "33021113411421024220340311231204232240132002233001", "03230122213044131011003044244402342334434111212241", "33120223144143034030240433323214103343204213443104", "01400032422211420313220021243332013111301210204123", "00044413421440341001011043242442224040132340241122", "02123033041213143023313014232103223124343114140042", "03102211332200300201204442413243443134144042334023", "42244124034323031232142011010001430400223104330041", "03012133141114013020003202122113112033344434044210", "01101024234330424313034134222331231041420332040324", "41114021242102412224014322004302321410311201213144", "00300132301000202211011333322244423434143340443134", "24323310413304220430344123124200402410330031440002", "02301421403240122132121022320302111101304443441141", "43343244041311201134241243034113001004231223403331", "32332142123202302131410431002040240003224221031144", "20301401211022201013344343324424141200112431430444", "13013330331311104320410310233403411342142343312132", "31230240042242022321140402030032220014401002122101", "20111244342340440233322313302243241441043042422000", "21403114314134421232041222112130040013210003230142", "02010240120341103343424324101113104041444403030441", "13331422344203401412114300423302312320433230310221", "32244313413112020110333210130124214021222002400324"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "324";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> sequence = {"10443431134023423324440043034133042404114414224124", "32013231401410334420310002421214333130221312040322", "30030102112321011101222001431444344032442433423300", "13313231241422420201114041343203401020441232223411", "20024023042141031131040043033321220221302100301211", "03212440334323444230134000443422424041320233311441", "02031214204332411130421000123221314014120101104022", "31330034143104430211220024341333222433142423404320", "30334223304204144421403230300401034400313124024410", "23241101412000134310021231143020122130111321121022", "20234333032434412443142402420430442312143232241440", "04212302220141130034223310413410334012021332101002", "00011221140403132030131110334443304441422442401434", "21440024303403004310404202041333140221343234124111", "41021131322332423201123110130120321001000312200334", "44343202302440341442333133031013424332404412124114", "20430234014002223214311323000402030410322421301221", "23120104222001112102110422034033443324342022241314", "10120044424404023432232312214414124233140032103043", "10240143031341330213113011421230013204111002010134", "44342340433343103413232430421121432224223332133131", "13012414420141203303202314240312302204402441140104", "10210002003004000112212111043032333440443433141003", "04223420332431340312424113300040143222442102204142", "32144412311202400114023012110103413201310444020021", "22130233443424333241232343032134014423133012034111", "43102441400314214130403311322240420432002021030041", "00010131211124223022122011044433340414244234403314", "32431140231343412421410304004224132232301441113123", "32043034203100013300321302121101200222102401034333", "44312201123414342304300411422140424321020242124420", "33100233240322231133031444014120134003010402044101", "11224130220211044334424414440300121313232000340402", "43043141343242240112412333231213033132120234103204", "23021434200223222102010133014004110012203103343231", "13142111444333044234414300042434024403241302223322", "42214212400301411401232100111023031131331043122034", "12021121320020410134201040414404034443433241342442", "34024313231420320430421214321334103031242240123223", "31140002221131021004412010141122020033302301110444", "32423422334344213000132304144133222440040424112013", "41220340200243314204313114030321240121430031232021", "03330102310014101130221110202414442243342420141314", "03443010323043432400023412232220303134042143104013", "02213200332120410044114231133001110123331244021020", "31211224433324234424044403421340003341441043223304", "20220413023201412430321431422121133114013230120040", "21010300241100111231023040442343443342224244401432", "43430341313400042041410133314024112233000123130214", "21240332321320322104312010310020030114412113110332"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "033";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> sequence = {"43344234314321244414043422333242410421411341232220", "44304130243403411224004022114401420331032023003031", "21021311101330120100200113231344433031442033421032", "34302024414133321230432431042410004401403013002143", "31322311201101023334022400343444312422211423200012", "20412131442214243033234120242313240402330441041432", "24111340421312122321110040342032043440031014013001", "02201123021030124413311414443244043314304424234013", "42224313343412302000223203330023114004214202410301", "22010141323321240200031211131001120403222104110213", "03444301114314043304403413423222142243234023032441", "12400022311313320310334302024100424213211040130030", "41220442001021012123312014443421414404142040140042", "43143330344134104323340324422423202402030022103331", "32223434443114123100131200311124110230211301212201", "14423403024414321332400004402022310104301230332322", "43342011241221401422204242120032031333001034102331", "21002134344321110131411304132342324422424040444033", "22211441233433303414104203200241331100314312430434", "02230132140142102131300113432431030201012023141121", "22040041234433342404231341430340312442241023301204", "13103220140242033232144400022302021331114212112210", "43341130441320011100300040134442343233303401014431", "43043422214204244141133132421024044032223203321140", "02241243344312004021311231031300013430202301041003", "04243420122044422244130341440432333024230001110141", "14212143223403314023240030103211332004013124123110", "41011221002031022012120213224434441430332044234242", "23343331413412202411140431330420311232434021210410", "32130222142113101240301023120013230034324400401100", "02014412433443130340240311121110442142342241400430", "42040144404134113141020233122203302132103003231000", "22320120011434424221230133322134320423340443331440", "32341322424301013303321431244121034203004003113041", "42112020114014110434443343131024023101000223021232", "41032342333220012224442204414402321004304211134040", "30314132432002143302401313312424112230034121301202", "22123111020334410414201400114324400004430424343140", "22423411444223302403313214211340101412413032210434", "20341010030122041020013320212011213123110310343330", "02302323442404044134204222312243222020033340304013", "23004143031402210001443101114232444002131331124113", "01024214120123321211104343203243034440442331422134", "13204333403321414313042004002443224123014013114411", "13302220300121124210410234240212231202011003103232", "42233124443034044032144241434234411400010142043104", "21323224012314134103320222121023041220300402433433", "02003113334234341432010021120431313011101312244300", "04242013404014221333222323302310413243314403444123", "03344211304443210311241022020301200240011101003243"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "243";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> sequence = {"41324440242042144141243233313344222004104434234113", "43304032103143121310224014241114043030232033221123", "11012230034002120100011301322242302024440221443441", "41343330142404213143241231304420342233232103340043", "00204104012431220234140320013311443334421110212141", "34342303043024101003104440112014204221202340400021", "32332000412431402034114324413010223211312101123103", "30322240300133111003130304443433442424411220123404", "32431322412420213120423201041440240332301430040032", "14212210023141034102233302000121133114011013422203", "10444233440042230024343330414431240143241302201231", "34122141113314244132021000321211404034023234200131", "12043010110203322242134244004443344223103144111420", "40421430304323434021310414124312014032423330232003", "41000130300240123011212224102031332101033113221101", "30044342412022034403244423404304003341401041322402", "43320210014321420421343131411144142232333123030124", "24423102311133020002220110314311211410341110212214", "44344124334321340402401403242241313031201323330440", "04301232223421042041332002022033100300011221133144", "34323023441212142134043341410101400420310243120013", "24422321240122423332041130403424143032220114330211", "03341313440231123003010022104443432244412020442223", "24202034243000431421440410423303014111234002201023", "13021323040310320013321211011401240241441311331221", "00333424433224304341114223432324230214312221344044", "42034033300030314123313200410402311310321120421001", "40002414010220110124044424433440042243013040343212", "14123423144134014202043102402303242131301331112033", "32022232330212411434103122010113221104121003000200", "12424340013442334133144411132343330440342142040430", "03033220324431301231024104224023021312114321031122", "12022320140111010002004141341242220443424442033440", "42343020241133314324021441022243322323032014213132", "12330130043122104140114121110120023112444134030400", "31001034430440342133404332230331234341132122203242", "41040202114423143131121401422432320004201302333012", "04141203102400300221034032343242442304044434402401", "11000101333413422043012241144104142140042011021003", "10332223314143123200221321211243300010144433432313", "02023442240440233322321434124244131134010221331421", "23030430330210131324311140320423121130141104100342", "01203103002413342414341220200400011232444304333022", "24010420331441034421411124220440414233234312223113", "40032131013221201402111443202434324333230110234030", "31300200404304442300121000134403413214314124213303", "13122441140042410322310401422121000233420222012320", "03311302402030102112041442243344434323133122024023", "41340333223241242441101114040043041003214143142030", "34211204230144013111031022132012101130212330002001"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "144";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> sequence = {"43424443304310234404423242103430240213403322413331", "20132311432041243411100422020321420003131410122113", "03014010400223344144244432433343001121230422240044", "01441241431413322213001000340434234114033013410402", "42122323131030311321120414203201214331230220020233", "34044413313442440302102423144324124023234304310110", "20411130142243420123004011202131214104210132223321", "22111034423303200311400100022033431420323422310413", "40444010222133313031121443322043042122403411432111", "32430131244120241033004003021002001414023024244434", "42123201243343143242340003332144134141011030404403", "20424010412303422031323102322330112022411402130043", "31113301420121013122110014434212444134044013341131", "43222430431302000242041412033110402200323332410303", "12344240023202132100423000114221403431010201222312", "11244434403342310322424010420441114421414332410040", "03134041213234133301422232024321131402212302331101", "30011120002012203430304344422443243341404402102411", "24240042342040333114314410343022322203231041340141", "21421021330433202334230312300301221201002000110131", "30432111324310444303120421422213403412323434420333", "02441440402242411433220041311331301400300201320212", "23141032112101240110233044404301000144344134314223", "34234022432122201040341240041411140113324244214333", "13103221303111231204200232300013203024102110033404", "24342020233323244403442341441143224210121241044313", "02230301343000434133040240033140142213110200214123", "10103121001204144433402442421132011122203212430343", "21344043111041204032410033143044131031234230220231", "33233004223221420001401141132010122240021020301304", "24333414343132342112144432212333030024232404420433", "12231041344031411422203211332014012441202004003340", "21301311210344430224102304422332441011100010413431", "43402414042432341214403022043423222420201411333120", "34443213033013200401023003103221002114212400011231", "10122422304333131244142343132412144240041310404212", "32044014022130231430342032103111334030033013411410", "00243424304423323133433301110122010211200134443143", "20204141144101403322244042233100241303412420323004", "32402321421323400311123320220110200010401222113121", "20302103223134442342224204214343340333004312430341", "41321232412024022012210401031441014244331140440030", "41133242302344342432333430130020011100044404143102", "11213133142240241303302311441134014124421310034104", "20434441400012202032221424230132123200210223403040", "43343120111010313332044034112113422442024323311401", "43033022321123040231443444324130121410412400421203", "22103001110102131000201322200312242144244044114303", "41231423403233431243330023014013420331332400434320", "40213212113104100302413042223242433443110314142210"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "142";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> sequence = {"20120022102021220101112110012220200001101002221201", "02101211120002102221220202211212220011002111210201", "01100012010221210120211100111220002010222021002000", "12221120111011212002111012122202210200100010002201", "12110120210200202122212111022011200010122210001221", "21111202102011010022021102220100012002020111212210", "12221210220021100111200010121222010002101120222110", "20221210020122200011120102110101110212210002220012", "02021112122200012011002002210221121210102111202010", "12220111001200021222020001110100022112102202010211", "12011012221210011022212002021112101220222120001001", "21020112202110002002101022201000122120111101211211", "02212021010011122000202222002112120110001020122101", "22022212111120021001102020101200002220211221001022", "12122011101211200102101100201222101110002220212001", "02022011121101000200122211120212102201222121120001", "00210201110120002122022112100102000222211101102122", "02012000100210112111222121010012022011020002021022", "01222120001112111010012102010111202110002221220212", "20002221120110200121000211122202212101001201011020", "01021220221011121110020120002221210001110211202012", "20201010211200222100012202222011101212210212111010", "02000112010222122021011211100120020002212112012220", "21000102022011012221211102002100011200010121201111", "02021122202210022210100211220111020001202002121010", "00122011022112020022201011110212112221001012120201", "22210220002121112022200101100012212110112010002002", "10221222012021111020221011212100010021122201012001", "11020222101220002011212010012220001021110221202100", "02021121011020122211100101120022000221210211121220", "20101100120210200022212011110100121122022212100001", "22201020021110112022122200201000121021110112000102", "21002112220120202001110121220102221011002112022121", "11120122200020011021000212101012212110010222011202", "00022202100012212011121110202200201010122212111201", "10010210202122000222111210110001202200201222120210", "10222011211000121112212002021021011100010222002012", "02001000011101012122112220110021210221112020012221", "11201102121010022011202221012110001021220020000210", "20120222022111220011001010212122210002012022200111", "01211122110201011212000210022202100010120111102012", "11221210221222020021112000110022010120200100011121", "01021221101201110222122021121002020100002112001110", "12220221020002121110222212011210122010011021002212", "20001012020012112221201110222021000202221112122010", "10200120210002211210110122010020011102121120222102", "12200020100011110120222112120021121000102011012201", "22221200111211020220002101002022210211120122022010", "00111012122211200200010021011102221212201202021102", "10010111212112012210220002022212220010002011012102"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "002";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> sequence = {"00220120011212211102021010000222021110200121221002", "22120112112202001010210111000222201202011212210211", "00012000101212011101022200202112210010020000111012", "20120221211122221021202011211102101002200202122210", "01211022000112010111222101020220120002111000212122", "02221110012001121010201012000221220110020211210202", "22201111000101210211221200122010002221200202110112", "10222001201020211101122121000111222002102022121101", "00021201211110202220120011221000101021202221112201", "10020000121012102011220021202211101000200110102122", "22111210012012022011122101002200002110202121211222", "21012020011022010012201011100210222121120002021000", "11102212201012111200202222122001210001120102110122", "21111020220100210112020002121200010110020222112201", "21022111222012102120200010022212101110120211220011", "10002010222122001000211201210202001110101100001220", "21022212111201220221210111201002110200201200111222", "20211010002212102121120122200011101022100112020221", "22000201211102100101222120222011121010200211000211", "00112120200022102111220101212222001110002022101201", "02221110210100112200012120201222101112110212022010", "02000220212012100010200110122211120022211102101121", "22020100012120100021011220022111020222210001101021", "12002012122022111121021200010002022201101220211001", "22121011201020012220211121201020002210011101202221", "02002112122010001110122221200211101000201121022020", "11222001012021210002211022021211122210200012010111", "00201200011221211102101002202001222212111202201101", "00002102202122210012002010112111021022112120012220", "10110002021112022121001110201012200002112102010122", "21202220011100222021221010001120002012110212201200", "11102221002021121010220200012211120100201110101212", "00011211102220210002212222121020012202112010022120", "21101112220001020121011100102212202012000210112111", "00012222002212021121002010111021201211222020010000", "22102221101111220200121021201100222122010120001001", "12111012020210222011221210211010020002022102111101", "00011201222002022001100021212210102111210120112222", "02000120100221211020212000111022201221112100202101", "02201200111222110100001022212121112020110021012200", "11101221202201021121000200110022221012201020000211", "12120220200102121100221011222212012111001112202101", "20002010222122020121102101112001000122102112020002", "20101110001212220020222102121120111010010211210122", "20221201100200011112120002012220211022100010122211", "21002201110102120010202211002012120210112220002220", "00122121002111202011101022212202102001000120111211", "01120212110022000020122210102212220120210200101112", "11100011010222012211212020021002220200102121000211", "12011012212012111222000101100221020222120201111210"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "002";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> sequence = {"02010221200211210001101220222212102111002001220112", "02021010122211121201100022000102201221010020211110", "22200112011212210002000120211101020212121002221122", "01200111010201211102101122202212000100020212221022", "20110002001012112002220212111122100012010110212210", "22202002111201212022010110010200022211210122201100", "11110100020001221202112102002220120212112210001102", "21210102111220201200211010001112022221210110020012", "20102220000111010021122121020120212020022111122201", "21022000101100011221110021020222201200101002012120", "21221011211020222000212210010211121201222101110000", "10220120200222112122020111012110210020001011202221", "11010212100012002201122202012111001112002101020212", "21211022210120001002122011120002022210121110220112", "21200010021122202012100102011011112022200001021002", "01221101001212110212000222021011221202011122200221", "11012100010220021211201222102022122201110001012020", "00102111210021201101020222002211222100121110112101", "02000212011001220222122010210002001110120201112110", "00222000101211202122102022200010212011101210022111", "22201221021211002022000101120100122210111202002111", "02212121100020102101200111220222102021220121112000", "02222001001101100021221112020101210201200222021021", "21122101110001020222001000201101221201211221200220", "21110222020100011210122212111200210220210100011020", "01011112110021221201202000222111022201121000122021", "22101020021100120101112100012020002222110112201020", "22201110102121200012111221002121112200120222100020", "10110212102201122111010020001202221122021011100201", "20001021211000101122221210220020120220122121112021", "00200111022202010122211120000110210020101012120011", "21222021110002210221220200211001012011210222120121", "00001021112200202002220212011010211121000122210110", "11110202221122000100201212022102111010001121200222", "01220200122210021120101102121210002202012001022211", "12220210110001211122120102002000211011110221000121", "22202101120102202012211011200212111222022210001001", "21201020021221110110121020111200001002220220120200", "21112101001102122110121201112222100020220001022201", "21202112210200100022002021222111011120110010121022", "02000102111011201210002221222020101100012210212112", "00202212220111210211012002221200100001112202111002", "01210211010111221002022201022000120201002121200122", "21020111211012120002101022111001122202021122101212", "00022201001102220212211112101102000012010022200112", "21020212111010021120120200022210220122021212010111", "00012112221002000111010220100210200012221120201110", "12122211202121022002022200011101002122112011001210", "22201012111221020000110100212022212020021112201210", "00101102220120020210221220101112111001122212020002"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "002";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> sequence = {"11212221022020120002110010111202212111011122200120", "10210002022201102001211000210102122120022020122211", "12101001122021201211020000221011110010210001120101", "21102002222022122201211122120011100202101012011212", "20200010002110222102221220021010012020111211102022", "20120000112212101002110202221112001012122011121002", "12011021101222100001002202002021112120012221011201", "02201011021000012122211102022002122202211201112101", "00200120001212211010002102220111212202001012022211", "10201120210002221210200021110100112201222120220100", "20012101110211121020212012211010000220011102001120", "22212101222010021110121122201110210001000202212000", "22200121122102011120212020101100211022101012200121", "22220212112000221020100111222120211102011012100022", "00102221000211212200120101110111222100012020212111", "02201020002221220201200011210021121200021010202220", "11100101221122212102200012011010020211120220020100", "01222110111121021222121022002021100012010112220020", "10120211100011212022102122012102211002000111101012", "22121120020220100011222021021022211101212001002011", "12220121200002021001102211221010102021110022200121", "20112020110001012200212111201022102000022202101221", "21100111021121201222020022100101112022220000100212", "21011102012111212001102220211012210020100022202011", "12212112000122200210102210012010110211110202121122", "21202000112100022010122121102101111202220020100122", "21201022021100020011121012110110221222000021001202", "01010011221022202111020002012120212100101112000222", "01221102200012120201112211002101022211122012001121", "21010002102020101222211100021202200112212102200202", "11100120101100010121112221022020110111200212021102", "22100020010222012221212020111210000122002112010102", "00220210001101211102212222100212202012112000111222", "00010111022121002111202010121011002220102001202122", "11222120220000121002010110211102021011122112120022", "01211100102101000011022202002012221200121220210002", "22112011112120211010222001221000201120021211101012", "22100111020100022022020122212101021120001120020210", "00121222011102211211101012221202100011212200221020", "10110211120200010022012022210211001222011101020021", "21012221201000011121122020022022212111011201200210", "20200100022201221210211100111202200001011010021210", "20122211100220212012112221020001011222011012000221", "21112020010011021022010002021012221110121210222002", "01001122120211121222102201012020002111001122121110", "12022010200011000210222002021221121010001111021012", "01002001122220221211201221110202121000120101122200", "22000111022212101201002110202122210001211120101120", "02202021210222110122000201112010001022000111012212", "11222210021001110202202012112002121200001010122202"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> sequence = {"21012220201121110022120010212210120220000211020100", "11212222002102211121101000120111020222100120021220", "20112122021110101210002221200010201112210220121101", "12002120202222100010020122001112111010212221000102", "20020121110112021221110002202102001212011222000211", "01001020120222101121210002220122111200010111021110", "20201221210100112022000212222112011020210001210102", "20021112212120201200111010022200020222011211012210", "21202221110001012102010021220001112022112102122001", "10002012221010222021112100200010120110222122021111", "20110020001012100020212221110102201120012110020212", "00010112221022012111122212012101100220212110200010", "11220120010221002111121222101100002022202010211100", "12002220212000112210121222110201002022000111201012", "10211000101220111212002221020210021120101102000121", "22202210211122022120111012112001002020122200022210", "01021212111011020112022000210001221222211101020111", "20002202101212112201001102221000202120012210102201", "00200011121101202102010021111011202221220001211122", "20200210121201100102212010121100001112222102200210", "20200222011211101001202122100020222121110120010212", "20112111202011012221022000100021222022112001110100", "02102012122112021001211102010112220022000221021201", "00110121202022200002102012221112111001101020210122", "12120111222002211202220100121021222000201011100010", "01200221121011102111210202122010002221011020001202", "21222021121100201200101110201200021001121220221211", "12010122220000110022101021020212211101201000220200", "11121222210002202012001021121222011101200202112102", "21221101112021000100102220110121200020111210122202", "00021110221001002122112120122020001022210110022201", "02001211120211011110002221010212200012011212202021", "11200221020121000110101211200110002221220201021222", "21000202111200121102201011112221010220011000201202", "12122211210120220111020002112221201001210220010111", "00020212220100221011202000121102102221201112202001", "00021101210021220201012111102221200112202111020120", "00222101001121122000011010210020221201211122210120", "01110022202121020101121202111020100022200122122210", "00220010121102011202122111200001210110222020100212", "02000122201112102111010022102112220111001212020002", "21112122210101201021220200110002220102022100111200", "02110121121022120122021222210011101020002202002112", "01211001011110121202000102100022011222120122111022", "20021000101121112101222120200211000102201122101202", "00212102220100011100012120202002201021122122221011", "02202000211121011100100211201222121022010120200011", "00120111211101020002122022212022210121110200021220", "10011210211101221120222011001002000221210211202000", "11101022201222122021011200201212111000102221010021"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "002";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> sequence = {"0"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> sequence = {"00"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> sequence = {"9"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> sequence = {"99"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> sequence = {"999"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "999";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> sequence = {"1"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> sequence = {"0993034", "6", "4137", "45959935", "25939", "93993", "0", "9358333"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "993";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> sequence = {"000001110111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> sequence = {"71"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> sequence = {"12"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> sequence = {"93"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> sequence = {"12377777123"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> sequence = {"5555", "921921"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "921";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> sequence = {"9", "8", "7", "6", "5", "4", "3", "2", "1"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "321";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> sequence = {"01"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> sequence = {"00000123123"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> sequence = {"93939"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "393";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> sequence = {"21212"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "121";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> sequence = {"111111234234234"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "234";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> sequence = {"123"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> sequence = {"777777777001001001"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "001";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> sequence = {"11111234234"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "234";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> sequence = {"4"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> sequence = {"5"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> sequence = {"1", "1"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> sequence = {"0"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> sequence = {"12121345345"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "345";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> sequence = {"77777123123"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> sequence = {"0000953953"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "953";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> sequence = {"1110000011100000111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> sequence = {"00000653653"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "653";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> sequence = {"3434343227227"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "227";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> sequence = {"777777012012"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "012";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> sequence = {"55211111552"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "552";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> sequence = {"6503", "210"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "032";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> sequence = {"777777123123123"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> sequence = {"00"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> sequence = {"111122222"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> sequence = {"7296969499111", "9380783", "5133456830203", "876864801325092847270436", "0550597888754956", "006707469279114392", "12158448731642072743277311059673951", "57771871831977151693", "610280833", "767871516544970077700949", "212638519933473311", "6718789138"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "718";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> sequence = {"9"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> sequence = {"30303"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "030";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> sequence = {"30239015"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "015";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> sequence = {"123456456"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "456";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> sequence = {"344"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "344";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> sequence = {"66"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> sequence = {"234234234012012012000000000011011011"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> sequence = {"40159", "004087580194980071797397777426152939451023"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "004";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> sequence = {"45"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> sequence = {"9999000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> sequence = {"77777791779"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "777";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> sequence = {"111222111000000111000111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> sequence = {"876"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "876";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> sequence = {"2121212121212121212333433353336"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "212";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> sequence = {"00000011101110011100111000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> sequence = {"1", "2", "5", "4", "0"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "125";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> sequence = {"0000099911999"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "999";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> sequence = {"54545454545", "000100020003000"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> sequence = {"9999999999"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "999";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> sequence = {"1231231231231234567456745674567"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> sequence = {"112323"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "112";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> sequence = {"00", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534541", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543", "5345345435534534543553453454355345345435534534543"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "345";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> sequence = {"3"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "000";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> sequence = {"101010101"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "010";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> sequence = {"00001110111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> sequence = {"31298833260655129880027895452000561549", "274927942827432416811011616702879287333", "02067527645546547355452706228553041428552285", "01435781718012000", "480553258405562205808226", "3402616942578196567157742526204092", "849", "490573535845079358697699470974643337384218876", "0915674973740027572005475", "74742232358", "240966653099448227125", "132174753286236361354752366119572", "17754898941556924059073451247", "7649783847527854977878", "5669522182398638783016471668867692056963729303", "9003", "020297230978129897725157782755201", "8272315710957930044776283606248516733", "869242978145812904068367211290421137017", "074925", "0090349004993060411884800", "0384558074585887305887320817922153767932410", "1803835599523919772749217295983", "78", "0396398839626117267568742406274195", "60104947726253408356", "794911815", "01625", "87160629354785687856488027300425954563531", "4549948", "8327608393231379277", "51919414598869722268948416608069487867339673845428", "58903434", "48095", "465153947348380897485490872985941461846201", "79951172945839697788469458", "507093915285269864060638543024564150583611677", "56661674216", "8378426078103296129789", "32780364815401009510638432419472603", "81394097935097436028501474540209004", "3278383", "8751626631756766605392696856324094485331301", "0366852769307263285842"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "285";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> sequence = {"1110101"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "010";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> sequence = {"11100000111"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> sequence = {"777770123456789770"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "770";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> sequence = {"10000100"};
    CalcButton* pObj = new CalcButton();
    clock_t start = clock();
    string result = pObj->getDigits(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=7221&pm=4472
********************************************************************************
// another fine solution by misof
#include <algorithm>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define REP(i,n) for(typeof(n) i=0;i<(n);++i)
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
class CalcButton {
public:
  string getDigits(vector <string> sequence) {
    string S;
    REP(i,sequence.size()) S += sequence[i];
    
    int best = -1;
    string res("000");
    REP(i,10) REP(j,10) REP(k,10) {
      char s1 = char(i+'0');
      char s2 = char(j+'0');
      char s3 = char(k+'0');
      int pocet = 0;
      int kde=0;
      while (kde+2 < S.size()) {
        if (S[kde]==s1 && S[kde+1]==s2 && S[kde+2]==s3) { pocet++; kde+=3; } else kde++;
      }
      if (pocet>best) { best=pocet; res=s1; res+=s2; res+=s3; }
    }
    
    return res;
  }
 
 
};
// Unused code automatically removed, but the UCR still sucks
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/