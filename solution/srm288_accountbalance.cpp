/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6036
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

class AccountBalance {
public:
    int processTransactions(int startingBalance, vector<string> transactions);
};

int AccountBalance::processTransactions(int startingBalance, vector<string> transactions) {
    int ret;
    return ret;
}


int test0() {
    int startingBalance = 100;
    vector<string> transactions = {"C 1000", "D 500", "D 350"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int startingBalance = 100;
    vector<string> transactions = {};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int startingBalance = 100;
    vector<string> transactions = {"D 50", "D 20", "D 40"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int startingBalance = 53874;
    vector<string> transactions = {"D 1234", "C 987", "D 2345", "C 654", "D 6789", "D 34567"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 10580;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int startingBalance = 1000000;
    vector<string> transactions = {"C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000", "C 1000000"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 51000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int startingBalance = 81479;
    vector<string> transactions = {"C 623807", "C 689185", "C 146970", "D 591500", "D 12438", "D 82366", "C 745173", "C 511453", "C 117209", "C 452064", "C 913275", "D 591761", "C 946421", "D 872986", "D 323642", "D 883692", "C 961501", "D 497964", "D 351760", "D 766643", "D 576999", "C 57954", "D 576244", "D 448131", "D 660591", "C 362039", "D 278832", "D 463803", "D 33078", "D 797427", "C 944387"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1256940;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int startingBalance = 44267;
    vector<string> transactions = {"C 968385", "D 829448", "D 760896", "D 280896", "D 693563", "D 501560", "C 119474", "C 294233", "C 888789"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -751215;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int startingBalance = 376344;
    vector<string> transactions = {"D 114359", "D 65581", "C 187362", "D 830510", "D 42914", "C 271208", "C 675708", "D 964887", "D 905628", "C 915511", "C 393379", "D 694433", "C 906113", "C 831009", "C 833050", "C 453230", "C 951108", "C 178345", "D 440522", "D 253485", "C 150476", "D 946290", "C 114721", "C 185531", "D 317205", "C 451738", "D 707697", "C 917823", "D 467409", "C 839708", "C 524626", "D 196945", "C 320326", "D 583346", "C 823809", "C 347603", "D 798320", "C 983920", "C 316673", "D 772630", "D 526878", "C 670825", "D 667766", "D 452981", "D 334614", "D 101581", "D 994767"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1439398;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int startingBalance = 798645;
    vector<string> transactions = {"C 753266", "D 61833", "D 368474", "D 394114", "C 517697", "D 165349", "C 312814", "C 7434", "C 65897", "D 354024", "C 304838", "D 581157", "C 38977", "D 397878", "C 274721", "D 486866", "D 781176", "C 395056", "C 105765", "C 674267", "D 839858", "C 271826"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 90474;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int startingBalance = 831112;
    vector<string> transactions = {"C 171193", "C 465511", "C 282584", "C 650162", "D 583600", "C 111748"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1928710;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int startingBalance = 404488;
    vector<string> transactions = {"D 395741", "D 595571", "C 935307", "D 364266", "D 66933", "D 469313", "C 296052", "C 84603", "C 812665", "C 545157", "D 256971", "C 237756", "D 734987", "D 741561", "C 84177", "D 218744", "D 389075", "C 55107", "C 746909", "C 750712", "D 283229", "C 60502", "C 417529", "D 384928", "C 378875", "D 410577"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 497943;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int startingBalance = 358465;
    vector<string> transactions = {"D 789", "C 590565", "D 336290", "C 487515", "C 305813", "D 285973", "C 146723", "C 747231", "C 335644", "C 785901", "D 729083", "D 735539", "D 954053", "C 864274", "D 48701", "C 140428", "C 352933", "D 248144", "C 649036", "C 853010", "C 552305", "D 117686", "D 151668", "D 467524", "D 900313", "D 606200", "D 756306", "C 781333", "C 573226", "D 300113", "C 740781", "C 294925", "D 75439", "D 738975", "D 961049", "C 711914", "C 739471", "D 915463", "D 351194", "C 439038", "D 225968", "C 775376", "D 423422", "D 86160", "C 23698", "D 717641", "D 768065", "D 966268", "C 949556"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 331135;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int startingBalance = 737866;
    vector<string> transactions = {"C 553581", "C 595476", "C 648561", "C 710554"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3246038;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int startingBalance = 461828;
    vector<string> transactions = {"D 193022"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 268806;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int startingBalance = 768574;
    vector<string> transactions = {"D 324679", "D 11681", "C 181270", "C 86718"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 700202;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int startingBalance = 773156;
    vector<string> transactions = {"D 411805", "D 685707", "D 756534", "C 345394", "D 707879", "C 34946", "D 60825"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1469254;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int startingBalance = 914312;
    vector<string> transactions = {"C 458986", "D 260727", "C 285237", "C 285359", "C 802332", "C 597913", "D 543538", "D 622766", "D 953250", "C 984491", "D 277623", "D 523481", "C 705196", "C 561575", "D 757513", "D 417681", "D 929752", "C 173403", "C 581350", "D 688666", "C 76626", "D 867339", "D 175406", "C 172862", "D 673650", "C 393871", "D 294074"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -991953;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int startingBalance = 960170;
    vector<string> transactions = {"D 826780", "C 706612", "D 519874", "C 392216", "C 720098", "D 462300", "D 763451", "D 565850", "C 115813", "C 520799", "D 763573", "D 829648", "D 854255", "C 445097", "D 587136", "D 785662", "D 353881", "D 1307", "C 129160", "D 489065", "C 111275", "D 658667", "C 612787", "C 948161", "C 201142", "C 89541", "C 89289", "D 624374", "D 776315", "D 669418", "D 938060", "C 932255", "D 567750"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -5062951;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int startingBalance = 371807;
    vector<string> transactions = {"C 366619", "C 739479", "D 384531", "C 293755", "D 910610", "C 866849", "D 613863", "C 104817", "D 933804", "D 588289", "C 721080", "D 598085", "D 128095", "C 130850", "D 749637", "C 164671", "D 13502", "D 174708", "C 821117", "D 898814", "C 438170", "C 353164", "C 635228", "D 97877", "D 78368", "D 752643", "D 969800", "C 762348", "C 938491", "C 412697", "D 180791", "C 95841", "D 851059", "C 826000", "D 702284", "C 5093", "D 976715", "C 438355", "D 546484", "D 599969", "C 304230", "C 148687", "C 803725", "C 693456", "C 150499", "D 809046", "C 142463", "D 301668", "D 660539"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1791690;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int startingBalance = 316341;
    vector<string> transactions = {"D 309280", "C 143843", "C 307497", "C 153674", "D 628884", "D 142345", "D 392642", "D 807670", "D 504105", "C 922660", "D 545367", "D 351147", "D 915903", "D 313404", "C 223194", "C 901779", "D 923357", "C 846314", "C 211765", "C 530370", "D 163676", "C 256253", "C 124852", "D 760843", "C 352191", "D 981210", "D 904348", "D 70249", "D 782360", "C 662298", "D 320272", "D 388766", "C 825764", "C 643755", "D 470770", "C 599692"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -2654356;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int startingBalance = 310528;
    vector<string> transactions = {"D 472945", "C 282111", "C 39455", "C 629231", "C 400356", "C 8689", "C 997604", "D 23084", "D 879601", "C 733024", "C 216816", "C 297750", "D 67418", "D 865761", "C 392892", "C 715437", "D 323670", "D 645669", "D 674756", "C 616477", "D 711347", "D 639642"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 336477;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int startingBalance = 191045;
    vector<string> transactions = {"D 919326", "C 496561", "C 242700", "D 417181", "C 620567", "D 648551", "C 177988", "C 941218"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 685021;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int startingBalance = 821106;
    vector<string> transactions = {"C 339679", "D 996775", "C 697997", "C 595178", "D 445434", "C 578456", "C 602070", "D 752336", "D 44430", "C 630550", "D 21111", "C 75464", "C 918404", "D 188702", "D 275922"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2534194;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int startingBalance = 959574;
    vector<string> transactions = {"C 52220", "C 116681", "D 140428", "C 846583", "C 133867", "C 606382", "C 341680", "C 803363", "C 54457", "D 677824", "C 59855", "C 943691", "C 408228", "D 679152", "C 428252", "C 467274", "D 992545", "C 786635", "C 33298", "C 651944", "C 307895", "D 504668", "C 414543"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 5421805;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int startingBalance = 601327;
    vector<string> transactions = {"D 57892", "C 165771", "D 564663", "C 506498", "C 649273", "D 430588", "D 429459", "C 622672", "D 691903", "C 787888", "D 407857", "C 292510", "D 498769", "C 54567", "D 851908", "C 684471", "C 585985", "C 875642"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1893565;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int startingBalance = 186656;
    vector<string> transactions = {"D 45135", "C 172789", "C 224260", "C 310794", "C 199212", "C 681544", "D 901690", "D 295356", "D 49531", "C 237739", "D 37326", "D 685024", "C 77051", "D 169987", "C 588688", "D 97473", "D 840853", "C 510026", "C 841419", "D 103505", "C 478144", "D 492719", "D 909291", "D 727044", "D 204257", "D 56055", "C 234197", "D 945143"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1817870;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int startingBalance = 562263;
    vector<string> transactions = {"C 341147", "D 86157", "D 187975", "D 174900", "D 192233", "D 63315", "C 838843", "C 740719", "C 656676", "C 591941", "D 734172", "D 37938", "D 484966", "C 426429", "C 663513", "D 172513", "D 630714", "D 149299", "D 869541", "C 328527", "C 750660", "D 671196", "C 548058", "D 268187", "D 704667", "D 730889", "D 347989", "D 831824", "C 55723", "D 395272", "C 871385", "D 437896", "C 569941", "C 559366", "C 173422", "D 582985", "D 716559", "D 446314", "D 262400", "C 341797", "C 167941"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -991550;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int startingBalance = 387275;
    vector<string> transactions = {"D 599746", "C 867165", "D 299575", "D 921977", "C 600010"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 33152;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int startingBalance = 400395;
    vector<string> transactions = {"C 690075", "D 97606", "C 130867", "D 219522", "C 621178", "C 169918", "D 13120", "C 242800", "D 577748", "C 502682", "C 520692", "D 425212", "C 747774", "C 787793", "D 880636", "D 810214", "D 522368", "D 545271", "C 773127", "D 519390", "C 995768", "D 623259", "D 831466", "C 252446", "C 465339", "C 698027", "D 142078", "D 787213", "C 931568", "D 773971", "D 744514", "C 479650", "D 598068", "D 683609", "D 131451", "C 763838", "C 371579", "C 587586", "C 748689", "C 651984", "C 361962", "D 474671", "D 495153", "D 234420", "D 382207"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1382570;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int startingBalance = 223480;
    vector<string> transactions = {"C 222894", "C 179603", "C 448427", "D 293871", "D 237089", "C 234116", "C 279860", "D 844149", "C 796038", "D 722664", "D 798869", "D 613864", "C 611167", "C 48081", "C 630943", "D 232410", "D 347027", "C 191324", "D 604694", "C 157306", "D 121292", "C 211473", "D 251862", "C 174198", "D 4765", "C 745737", "C 307309", "D 896855", "C 521371", "C 509448", "D 209024", "D 267171", "D 148161"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -100992;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int startingBalance = 93833;
    vector<string> transactions = {"D 598120", "D 55166", "D 815310", "C 977161", "C 818835", "D 358984", "C 406119", "D 2453", "D 418532", "C 104895", "D 257015", "D 899770", "C 647701", "D 547294", "D 657547", "C 275068", "C 959953", "D 768699", "C 350392", "C 812429", "D 512028", "C 179756", "D 31350", "C 774062", "C 663789", "C 19234", "D 849347", "D 500297", "D 478223", "C 854028", "C 906435", "D 909591", "D 221445", "D 79157", "C 757788", "D 998527", "C 862692", "C 417765", "D 911708", "D 341813"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -330441;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int startingBalance = 111144;
    vector<string> transactions = {"C 421122", "C 329620", "D 592278", "C 231842", "D 968623", "C 926075", "C 980882", "C 913845", "D 767788", "D 68749", "C 816706", "C 402077", "D 854260", "D 78442", "C 986956", "D 681401", "C 91809", "C 729081", "D 456965", "D 439806", "D 672330", "D 747717", "C 770191", "D 568403", "D 615843", "D 314524", "D 548214", "D 661433", "D 270491"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1595917;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int startingBalance = 178381;
    vector<string> transactions = {"C 990742", "C 516257", "D 812545", "C 78983", "D 375607", "C 633365", "C 746398", "D 402611", "C 558767", "D 716370", "D 404571", "C 526364", "C 474302", "C 172009", "D 447708", "D 396043", "C 634421", "C 610147", "C 364579", "D 410573", "C 629455", "C 343771", "D 972078", "C 922006", "C 627860", "D 888994", "C 915224", "D 735518"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3360413;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int startingBalance = 949438;
    vector<string> transactions = {"C 465056", "C 167162", "C 609408", "D 199242", "D 494319", "D 529162", "C 755103", "D 499757", "D 102272", "C 130618", "C 337154", "C 258722", "D 617527", "D 929050", "D 973236", "D 35219", "C 71824", "C 210102", "C 234151", "D 966456", "D 700025", "D 87544", "C 143823", "D 267764", "C 440118", "D 3270", "C 679304", "C 732601", "C 433218", "C 227300", "D 270769", "D 232548", "C 523562", "D 357779", "C 301520", "C 217312", "C 758513", "D 820975", "C 607982", "C 214726", "D 888561", "D 371284", "C 979706", "C 330747"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1432411;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int startingBalance = 78911;
    vector<string> transactions = {"D 591224", "C 659367", "D 749456", "D 351521", "D 391442", "D 842767", "C 233061", "C 201036", "C 510705", "D 178830", "C 621894", "C 978849", "D 15908", "D 269609", "D 334411", "D 451075", "D 802072", "D 170279", "D 867195", "C 86951", "D 92341", "D 889140", "D 294953", "C 558841", "C 937983", "C 887618", "D 770516", "D 242233", "D 718394", "C 580265", "C 24843", "D 715740", "D 641094", "C 834755", "D 867014", "D 261101", "C 241726", "C 471890", "C 684237", "C 363179", "D 884061", "C 765596", "C 941844", "C 209962"};
    AccountBalance* pObj = new AccountBalance();
    clock_t start = clock();
    int result = pObj->processTransactions(startingBalance, transactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1518863;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20721845&rd=9809&pm=6036
********************************************************************************
//by <<<Gaisan Dmitrii>>> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <memory.h> 
#include <ctype.h> 
 
using namespace std; 
 
#define REP( i, n ) for( typeof( n ) i = 0; i < ( n ); i++ ) 
#define FOR( i, m, n ) for( typeof( n ) i = ( m ); i < ( n ); i++ ) 
#define FORD( i, n, m ) for( int i = ( n ); i >= m; i-- ) 
#define CLR( x ) memset( ( x ), 0, sizeof( x ) ) 
#define All( v ) (v.begin(), v.end()) 
 
class AccountBalance { 
  public: 
      int processTransactions( int res, vector <string> trans ) { 
    int sz = trans.size(); 
     
        REP( i, sz ){ 
        stringstream stm( trans[ i ] ); 
        char c; 
        int flag, cur; 
         
          stm >> c; stm >> cur; 
          if( c == 'C' ) 
            flag = 1; 
          else 
            flag = -1; 
          cur *= flag; 
          res += cur; 
       } 
      return ( res ); 
      } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/