/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1874
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

class DirectoryTree {
public:
    vector<string> display(vector<string> files);
};

vector<string> DirectoryTree::display(vector<string> files) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> files = {"/usr/lib/libc", "/usr/bin/find", "/home/schveiguy/bashrc", "/usr/bin/bash", "/usr/local/bin/ssh"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-home", "| +-schveiguy", "| +-bashrc", "+-usr", " +-bin", " | +-bash", " | +-find", " +-lib", " | +-libc", " +-local", " +-bin", " +-ssh"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> files = {"/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/x/y", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/w/y", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/v/x", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/u/w", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/t/v", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/s/u", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/r/t", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/q/s", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/p/r", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/o/q", "/a/b/c/d/e/f/g/h/i/j/k/l/m/n/p", "/a/b/c/d/e/f/g/h/i/j/k/l/m/o", "/a/b/c/d/e/f/g/h/i/j/k/l/n", "/a/b/c/d/e/f/g/h/i/j/k/m", "/a/b/c/d/e/f/g/h/i/j/l", "/a/b/c/d/e/f/g/h/i/k", "/a/b/c/d/e/f/g/h/j", "/a/b/c/d/e/f/g/i", "/a/b/c/d/e/f/h", "/a/b/c/d/e/g", "/a/b/c/d/f", "/a/b/c/e", "/a/b/d", "/a/c", "/b"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-b", "| | +-c", "| | | +-d", "| | | | +-e", "| | | | | +-f", "| | | | | | +-g", "| | | | | | | +-h", "| | | | | | | | +-i", "| | | | | | | | | +-j", "| | | | | | | | | | +-k", "| | | | | | | | | | | +-l", "| | | | | | | | | | | | +-m", "| | | | | | | | | | | | | +-n", "| | | | | | | | | | | | | | +-o", "| | | | | | | | | | | | | | | +-p", "| | | | | | | | | | | | | | | | +-q", "| | | | | | | | | | | | | | | | | +-r", "| | | | | | | | | | | | | | | | | | +-s", "| | | | | | | | | | | | | | | | | | | +-t", "| | | | | | | | | | | | | | | | | | | | +-u", "| | | | | | | | | | | | | | | | | | | | | +-v", "| | | | | | | | | | | | | | | | | | | | | | +-w", "| | | | | | | | | | | | | | | | | | | | | | | +-x", "| | | | | | | | | | | | | | | | | | | | | | | | +-y", "| | | | | | | | | | | | | | | | | | | | | | | +-y", "| | | | | | | | | | | | | | | | | | | | | | +-x", "| | | | | | | | | | | | | | | | | | | | | +-w", "| | | | | | | | | | | | | | | | | | | | +-v", "| | | | | | | | | | | | | | | | | | | +-u", "| | | | | | | | | | | | | | | | | | +-t", "| | | | | | | | | | | | | | | | | +-s", "| | | | | | | | | | | | | | | | +-r", "| | | | | | | | | | | | | | | +-q", "| | | | | | | | | | | | | | +-p", "| | | | | | | | | | | | | +-o", "| | | | | | | | | | | | +-n", "| | | | | | | | | | | +-m", "| | | | | | | | | | +-l", "| | | | | | | | | +-k", "| | | | | | | | +-j", "| | | | | | | +-i", "| | | | | | +-h", "| | | | | +-g", "| | | | +-f", "| | | +-e", "| | +-d", "| +-c", "+-b"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> files = {"/dir/dir/file", "/dir/file", "/file", "/dir/sharedname/dir", "/dir/dir/sharedname"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-dir", "| +-dir", "| | +-file", "| | +-sharedname", "| +-file", "| +-sharedname", "| +-dir", "+-file"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> files = {"/a/a/a/a/a/a/a", "/a/b/a/a/a/a/a", "/a/a/a/a/b/a/a"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", " +-a", " | +-a", " | +-a", " | +-a", " | | +-a", " | | +-a", " | +-b", " | +-a", " | +-a", " +-b", " +-a", " +-a", " +-a", " +-a", " +-a"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> files = {"/a/a/a/a/a/a/a/a/a/a", "/a/a/a/a/a/a/a/a/a/b", "/a/a/a/a/a/a/a/a/b/a", "/a/a/a/a/a/a/a/b/a/a", "/a/a/a/a/a/a/b/a/a/a", "/a/a/a/a/a/b/a/a/a/a", "/a/a/a/a/b/a/a/a/a/a", "/a/a/a/b/a/a/a/a/a/a", "/a/a/b/a/a/a/a/a/a/a", "/a/b/a/a/a/a/a/a/a/a", "/b/a/a/a/a/a/a/a/a/a"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-a", "| | +-a", "| | | +-a", "| | | | +-a", "| | | | | +-a", "| | | | | | +-a", "| | | | | | | +-a", "| | | | | | | | +-a", "| | | | | | | | | +-a", "| | | | | | | | | +-b", "| | | | | | | | +-b", "| | | | | | | | +-a", "| | | | | | | +-b", "| | | | | | | +-a", "| | | | | | | +-a", "| | | | | | +-b", "| | | | | | +-a", "| | | | | | +-a", "| | | | | | +-a", "| | | | | +-b", "| | | | | +-a", "| | | | | +-a", "| | | | | +-a", "| | | | | +-a", "| | | | +-b", "| | | | +-a", "| | | | +-a", "| | | | +-a", "| | | | +-a", "| | | | +-a", "| | | +-b", "| | | +-a", "| | | +-a", "| | | +-a", "| | | +-a", "| | | +-a", "| | | +-a", "| | +-b", "| | +-a", "| | +-a", "| | +-a", "| | +-a", "| | +-a", "| | +-a", "| | +-a", "| +-b", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "+-b", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> files = {"/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a", "/b/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a", "/c/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a", "/d/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "+-b", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "+-c", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "| +-a", "+-d", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a", " +-a"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> files = {"/a", "/aaa", "/ab", "/aa/ab", "/aa/aa"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "+-aa", "| +-aa", "| +-ab", "+-aaa", "+-ab"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> files = {"/blhaf/bpiyaysdmnkhdrhwkzjajsod", "/blhaf/gqhqejbvoftrpgpfifkgerjiwezwk", "/blhaf/ofpuguepnfzpyba", "/blhaf/ogeip", "/blhaf/prskfhnlarjrivloydrlkvuhksyuhhr", "/blhaf/reyuek", "/blhaf/riwcyvqrcbqncdpjvpnalbvorbxlngkjm", "/blhaf/yagdopekgylmmecnd", "/cdwijezekmdizru", "/ec/cenumgbbotogdanncafgrltdvleb", "/ec/dvpm/anlsyspjmyrpwxqjvyprmuyq", "/ec/lusrsjxnwmmjlxisk", "/ec/trmlvbjqfpltqopyeqlmqmpzcqih", "/ezeuinslgxvysdtzksdmqndl", "/fkjquiaeanycrqwehiqbcfnop", "/kg/npkl/wymacik", "/kg/spm/dtvjaicgs", "/kg/whoh/npgleavvhplz", "/kg/whoh/suljrntdihufb", "/kg/whoh/xryiaahjvnspoxonxxqibznmj", "/rbhef/cqoexacqa", "/rbhef/iytu/rlh/pgoexdigwlwsxkjcmhnzcckb", "/rbhef/spvwhcjrinonehzhvrorrogmwapwcdiucap", "/rp/cy/tzc/wd/o/tmx/rdsesqduzfidpmkh", "/rp/cy/uggimarlrflsoisfxfiiaxtwcevmvbwnqmunzyb", "/rp/imml/tt/umzcvb", "/rp/otxcv/jywqcscsjkrgezrlcmdpjmrljelekpjeotis", "/rp/wklasjmoypribmczpwtgmpatwrplebb", "/rp/wqxbjucnwnwfhypyymxvchsmyoexuvvpmhmcaqxt", "/rxyd/bwia/lopmmeszwhibzfopzskmzvgungbufxwfytd", "/rxyd/bwia/qxvsrymmqkovlfichbrevurotgkoq", "/rxyd/e/d/lstzodsduyoescmoah", "/rxyd/e/d/scbcd/rrdobzznzaowoefmnsruqhwnasaoomg", "/rxyd/e/lzn/qwxdphgoxffrwnbhhnuhcpgvchfml", "/rxyd/e/vc/acaukhrmcqntsxspoid", "/rxyd/sxyzzywqlpwolcyztcgjqleubprcqn", "/rxyd/ylqai/ruiigfyxboycatrvxhgievxtdzqyuoaxq", "/rxyd/ylqai/ssujaxzitafhewreziiholsanveufllsrup", "/rxyd/ylqai/wragixxzwuwmmxqfxpslumkapnewcriuo", "/wihoznxbelpt"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-blhaf", "| +-bpiyaysdmnkhdrhwkzjajsod", "| +-gqhqejbvoftrpgpfifkgerjiwezwk", "| +-ofpuguepnfzpyba", "| +-ogeip", "| +-prskfhnlarjrivloydrlkvuhksyuhhr", "| +-reyuek", "| +-riwcyvqrcbqncdpjvpnalbvorbxlngkjm", "| +-yagdopekgylmmecnd", "+-cdwijezekmdizru", "+-ec", "| +-cenumgbbotogdanncafgrltdvleb", "| +-dvpm", "| | +-anlsyspjmyrpwxqjvyprmuyq", "| +-lusrsjxnwmmjlxisk", "| +-trmlvbjqfpltqopyeqlmqmpzcqih", "+-ezeuinslgxvysdtzksdmqndl", "+-fkjquiaeanycrqwehiqbcfnop", "+-kg", "| +-npkl", "| | +-wymacik", "| +-spm", "| | +-dtvjaicgs", "| +-whoh", "| +-npgleavvhplz", "| +-suljrntdihufb", "| +-xryiaahjvnspoxonxxqibznmj", "+-rbhef", "| +-cqoexacqa", "| +-iytu", "| | +-rlh", "| | +-pgoexdigwlwsxkjcmhnzcckb", "| +-spvwhcjrinonehzhvrorrogmwapwcdiucap", "+-rp", "| +-cy", "| | +-tzc", "| | | +-wd", "| | | +-o", "| | | +-tmx", "| | | +-rdsesqduzfidpmkh", "| | +-uggimarlrflsoisfxfiiaxtwcevmvbwnqmunzyb", "| +-imml", "| | +-tt", "| | +-umzcvb", "| +-otxcv", "| | +-jywqcscsjkrgezrlcmdpjmrljelekpjeotis", "| +-wklasjmoypribmczpwtgmpatwrplebb", "| +-wqxbjucnwnwfhypyymxvchsmyoexuvvpmhmcaqxt", "+-rxyd", "| +-bwia", "| | +-lopmmeszwhibzfopzskmzvgungbufxwfytd", "| | +-qxvsrymmqkovlfichbrevurotgkoq", "| +-e", "| | +-d", "| | | +-lstzodsduyoescmoah", "| | | +-scbcd", "| | | +-rrdobzznzaowoefmnsruqhwnasaoomg", "| | +-lzn", "| | | +-qwxdphgoxffrwnbhhnuhcpgvchfml", "| | +-vc", "| | +-acaukhrmcqntsxspoid", "| +-sxyzzywqlpwolcyztcgjqleubprcqn", "| +-ylqai", "| +-ruiigfyxboycatrvxhgievxtdzqyuoaxq", "| +-ssujaxzitafhewreziiholsanveufllsrup", "| +-wragixxzwuwmmxqfxpslumkapnewcriuo", "+-wihoznxbelpt"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> files = {"/a/cqhgowxbyswufhkeolsktnyrcprkrwvllzmj", "/a/qwtdfzbjdjqyfuksjvct", "/a/upbjgeqtkxlmukorywvcqlanbitfottvyfhbbpobekfdjxj", "/a/zswahowbx", "/b/jg/tmrgw/jbr/awodwmwofrrigcimtxmhrjdtng", "/b/jg/wqixizrwxrmbwuriqpfkier", "/b/rl/yq/vpamehiwcchxxyfpwdsrwv", "/bmpbjqmhrd", "/bpi/ktmazuhpoumvchhepsefswp", "/bpi/nlqcqdqikiefzc", "/bpi/scswb/o/wos/jgjaojwlyowpnyc", "/bpi/vekl/idkx/bowkyyegafhkcgnjp", "/esizwgyciprinwydxspnffjhn", "/ey/apzxstcrezwsganlswwguojekrgamtrdkrzuqtblqiavg", "/ey/fjfk/bc/ia/zlyyreujwpoqjodrfjno", "/ey/fjfk/marmdopexwvjcm", "/ey/ha/xnzghpbbjphgyxvhf", "/ey/ha/ybwbrj", "/ey/tsbgxnhrgurijolhwncrzf", "/ey/vtzhpflmeblutjqlkfadhshlfic", "/fk", "/myfma/d/xubklzemibwepwdmyrmt", "/myfma/eepzfeorgopbnckg", "/myfma/wwwo/du/bch/bymeoofihznrfw", "/myfma/wwwo/flwaanmjkhxkl", "/myfma/wwwo/pfjgtznjoqamspmu", "/qikk/ai/sbtymeztquwqwctqftunmkdystmuypiifqeemnguf", "/qikk/utnic/inanosrinnpuv", "/uekevkzg", "/ujgdaoqjgjxmurdmckmxsxvmeqrynvegqjllrkvhuukgyxcn", "/xqvoygazskqiwonkfchdffqaypz", "/yahxzsfhlqvwexzlkccbmovpkldd"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-cqhgowxbyswufhkeolsktnyrcprkrwvllzmj", "| +-qwtdfzbjdjqyfuksjvct", "| +-upbjgeqtkxlmukorywvcqlanbitfottvyfhbbpobekfdjxj", "| +-zswahowbx", "+-b", "| +-jg", "| | +-tmrgw", "| | | +-jbr", "| | | +-awodwmwofrrigcimtxmhrjdtng", "| | +-wqixizrwxrmbwuriqpfkier", "| +-rl", "| +-yq", "| +-vpamehiwcchxxyfpwdsrwv", "+-bmpbjqmhrd", "+-bpi", "| +-ktmazuhpoumvchhepsefswp", "| +-nlqcqdqikiefzc", "| +-scswb", "| | +-o", "| | +-wos", "| | +-jgjaojwlyowpnyc", "| +-vekl", "| +-idkx", "| +-bowkyyegafhkcgnjp", "+-esizwgyciprinwydxspnffjhn", "+-ey", "| +-apzxstcrezwsganlswwguojekrgamtrdkrzuqtblqiavg", "| +-fjfk", "| | +-bc", "| | | +-ia", "| | | +-zlyyreujwpoqjodrfjno", "| | +-marmdopexwvjcm", "| +-ha", "| | +-xnzghpbbjphgyxvhf", "| | +-ybwbrj", "| +-tsbgxnhrgurijolhwncrzf", "| +-vtzhpflmeblutjqlkfadhshlfic", "+-fk", "+-myfma", "| +-d", "| | +-xubklzemibwepwdmyrmt", "| +-eepzfeorgopbnckg", "| +-wwwo", "| +-du", "| | +-bch", "| | +-bymeoofihznrfw", "| +-flwaanmjkhxkl", "| +-pfjgtznjoqamspmu", "+-qikk", "| +-ai", "| | +-sbtymeztquwqwctqftunmkdystmuypiifqeemnguf", "| +-utnic", "| +-inanosrinnpuv", "+-uekevkzg", "+-ujgdaoqjgjxmurdmckmxsxvmeqrynvegqjllrkvhuukgyxcn", "+-xqvoygazskqiwonkfchdffqaypz", "+-yahxzsfhlqvwexzlkccbmovpkldd"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> files = {"/cjrnyprgnjfqfpauoxtsdhwddezbecitw", "/falt/esj", "/falt/k/alykh", "/falt/qm/nwmaxrzneskzavhbalkukkfncwoxlyn", "/falt/t", "/falt/utqqfjshunjujavbzvr", "/h/bwti/bhiqw/nvrlm/gcdlenayoeyo", "/h/bwti/fb/dwmtwqxaeeddkkxlvjikoosw", "/h/etjrceegrdajqndhetxnjl", "/h/frqjf/nfm/q", "/i/cc/xok/w/bwbx", "/i/nbern/t", "/i/nbern/ucme", "/i/nbern/vo", "/i/plbxzxewppuqhhmmlqdapndehnfhvqoa", "/i/uow/ik/eu", "/i/uow/ru/dvifbtcoh", "/iaywr", "/iha/ennaphfvcuq", "/iha/kkb/czrz/pn/var/faoliesslxmbjasaeigbkzaaynkwg", "/iha/kkb/guhiyllnmldszockpk", "/iha/kkb/lrtxvxxhs", "/iha/kkb/wrlkqigoxavgbdjpyqrbfbfqkcdiaygti", "/iha/nsaegsbccofkyowycgbhuzukmo", "/iha/tagqepvczni", "/jvnlitwpxvmwsdwytodkmxbzthbz", "/kusqxjzvmklvodcyhgpegdnqlfj", "/lfyzmkthtpmojjmagwfbkpmmmxggrsfhn", "/qxsfg/sanib/vxsihcbfdeypfnehjofdh", "/qxsfg/wnhccrichpoozchylhzbiasgilkpoz", "/rqjthhmprffvzfstdgocgohpuzqgxjktwsmtyknotsqvzg", "/tqxq", "/yq/glvqwtixcepdrvwyynmrqzzczitmctlnaqkic", "/yq/ilcwewrjeueckswksmmhxweueckdtlzkxtn", "/yq/kv/rsk/gs/zgqvt", "/yq/wj/ivh/kjynjmfklqqamoubfglbvpvviooctgyamz", "/zgmiucwsmujhrq", "/zwbh/ojoburyamutprvtylkxskrfqhidqrwaf", "/zwbh/ovke/bygrkjkcjggnufbhestkxhfwdqpnsahwir", "/zwbh/ovke/hdwp/plm/nw", "/zwbh/ovke/ssgikyywagounljeqykgjx", "/zwbh/ypjdo/tpqgumbjwnwlbrbexqrixhfoyqro"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-cjrnyprgnjfqfpauoxtsdhwddezbecitw", "+-falt", "| +-esj", "| +-k", "| | +-alykh", "| +-qm", "| | +-nwmaxrzneskzavhbalkukkfncwoxlyn", "| +-t", "| +-utqqfjshunjujavbzvr", "+-h", "| +-bwti", "| | +-bhiqw", "| | | +-nvrlm", "| | | +-gcdlenayoeyo", "| | +-fb", "| | +-dwmtwqxaeeddkkxlvjikoosw", "| +-etjrceegrdajqndhetxnjl", "| +-frqjf", "| +-nfm", "| +-q", "+-i", "| +-cc", "| | +-xok", "| | +-w", "| | +-bwbx", "| +-nbern", "| | +-t", "| | +-ucme", "| | +-vo", "| +-plbxzxewppuqhhmmlqdapndehnfhvqoa", "| +-uow", "| +-ik", "| | +-eu", "| +-ru", "| +-dvifbtcoh", "+-iaywr", "+-iha", "| +-ennaphfvcuq", "| +-kkb", "| | +-czrz", "| | | +-pn", "| | | +-var", "| | | +-faoliesslxmbjasaeigbkzaaynkwg", "| | +-guhiyllnmldszockpk", "| | +-lrtxvxxhs", "| | +-wrlkqigoxavgbdjpyqrbfbfqkcdiaygti", "| +-nsaegsbccofkyowycgbhuzukmo", "| +-tagqepvczni", "+-jvnlitwpxvmwsdwytodkmxbzthbz", "+-kusqxjzvmklvodcyhgpegdnqlfj", "+-lfyzmkthtpmojjmagwfbkpmmmxggrsfhn", "+-qxsfg", "| +-sanib", "| | +-vxsihcbfdeypfnehjofdh", "| +-wnhccrichpoozchylhzbiasgilkpoz", "+-rqjthhmprffvzfstdgocgohpuzqgxjktwsmtyknotsqvzg", "+-tqxq", "+-yq", "| +-glvqwtixcepdrvwyynmrqzzczitmctlnaqkic", "| +-ilcwewrjeueckswksmmhxweueckdtlzkxtn", "| +-kv", "| | +-rsk", "| | +-gs", "| | +-zgqvt", "| +-wj", "| +-ivh", "| +-kjynjmfklqqamoubfglbvpvviooctgyamz", "+-zgmiucwsmujhrq", "+-zwbh", " +-ojoburyamutprvtylkxskrfqhidqrwaf", " +-ovke", " | +-bygrkjkcjggnufbhestkxhfwdqpnsahwir", " | +-hdwp", " | | +-plm", " | | +-nw", " | +-ssgikyywagounljeqykgjx", " +-ypjdo", " +-tpqgumbjwnwlbrbexqrixhfoyqro"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> files = {"/ewuec/fpjk/jmcukpgugjdag", "/ewuec/kko/mqtgqkemnusdymfwyxhdhqalx", "/ewuec/kko/nhemmtortjzlpkwqpqn", "/ewuec/ogmz/jg/xrzygpqggxveggajeb", "/ewuec/ogmz/sutogdksfornpygbfrdzhevbysdtz", "/ewuec/vfrngpdgphvbuawswpppmkmzvhgl", "/hvkdp/hwgp/aurti/uuatqrswj", "/hvkdp/hwgp/iyq/vgijtbcxh", "/hvkdp/hwgp/t/ywazuhxcus", "/hvkdp/pftbxigyooglatrayysxnzyvcwb", "/hvkdp/xr/phlgj/vvu/ymhi/ijmdqml", "/ikr/cuvj/h/g", "/ikr/mf/fvjndzvsnkwcbfxsdopzi", "/ikr/mf/stpcewslsturtfvfhleva", "/j/ehmhsgcfbqzegvlxnninbifnvxulotr", "/j/mxkdgnekjyciycjpixljp", "/j/uvfet", "/j/xbsomycvvpwjrnrnkqfcntnmhmthrdyfno", "/lxw", "/mw/f/jp/unlvcfiherp", "/mw/f/xv/smox/w", "/mw/urtw/cyskaqzzhsquyqvafofxbdmaeomdn", "/oxeq/ft/eguv/yyfik/iktpedbuivmsflmvsqjnhlaciyz", "/oxeq/qixbrntqtpkwessnnvhgewundbtsnoxxrpadngqo", "/oxeq/ruu/exw/gb", "/t/lfm/issx", "/t/olwei", "/t/zpwk/cuogmfmjkkiiqzxvfywiadigivqtckl", "/t/zpwk/hgt", "/t/zpwk/iigjwborgrtwzsoddspe", "/t/zpwk/lsnymsqynzaenpz", "/t/zpwk/nezygcfgszwawhnpnqidrvvxbuubycaktjzzmgm", "/vmoc/ac/krdrrarqluullkdppbkzcqtpnfctlmgvwgjj", "/vmoc/ac/ymxxfqnxunbgotnmthegouezzepcueqvpcr", "/vmoc/iiqtqdqxraxaaoxhcxrfugerwwvjunrezpdqbpse", "/vmoc/rznyd/fzjpe", "/vmoc/rznyd/kahvyipotzqgzav", "/wc/fjykb/z/gvtgklhmov", "/wc/fjykb/z/igss", "/wc/oi/iv/ommuauphcldvlqjwffeoevsmknjgbwf", "/wc/wsbmhukjnosmfvkfdhnxjaj"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-ewuec", "| +-fpjk", "| | +-jmcukpgugjdag", "| +-kko", "| | +-mqtgqkemnusdymfwyxhdhqalx", "| | +-nhemmtortjzlpkwqpqn", "| +-ogmz", "| | +-jg", "| | | +-xrzygpqggxveggajeb", "| | +-sutogdksfornpygbfrdzhevbysdtz", "| +-vfrngpdgphvbuawswpppmkmzvhgl", "+-hvkdp", "| +-hwgp", "| | +-aurti", "| | | +-uuatqrswj", "| | +-iyq", "| | | +-vgijtbcxh", "| | +-t", "| | +-ywazuhxcus", "| +-pftbxigyooglatrayysxnzyvcwb", "| +-xr", "| +-phlgj", "| +-vvu", "| +-ymhi", "| +-ijmdqml", "+-ikr", "| +-cuvj", "| | +-h", "| | +-g", "| +-mf", "| +-fvjndzvsnkwcbfxsdopzi", "| +-stpcewslsturtfvfhleva", "+-j", "| +-ehmhsgcfbqzegvlxnninbifnvxulotr", "| +-mxkdgnekjyciycjpixljp", "| +-uvfet", "| +-xbsomycvvpwjrnrnkqfcntnmhmthrdyfno", "+-lxw", "+-mw", "| +-f", "| | +-jp", "| | | +-unlvcfiherp", "| | +-xv", "| | +-smox", "| | +-w", "| +-urtw", "| +-cyskaqzzhsquyqvafofxbdmaeomdn", "+-oxeq", "| +-ft", "| | +-eguv", "| | +-yyfik", "| | +-iktpedbuivmsflmvsqjnhlaciyz", "| +-qixbrntqtpkwessnnvhgewundbtsnoxxrpadngqo", "| +-ruu", "| +-exw", "| +-gb", "+-t", "| +-lfm", "| | +-issx", "| +-olwei", "| +-zpwk", "| +-cuogmfmjkkiiqzxvfywiadigivqtckl", "| +-hgt", "| +-iigjwborgrtwzsoddspe", "| +-lsnymsqynzaenpz", "| +-nezygcfgszwawhnpnqidrvvxbuubycaktjzzmgm", "+-vmoc", "| +-ac", "| | +-krdrrarqluullkdppbkzcqtpnfctlmgvwgjj", "| | +-ymxxfqnxunbgotnmthegouezzepcueqvpcr", "| +-iiqtqdqxraxaaoxhcxrfugerwwvjunrezpdqbpse", "| +-rznyd", "| +-fzjpe", "| +-kahvyipotzqgzav", "+-wc", " +-fjykb", " | +-z", " | +-gvtgklhmov", " | +-igss", " +-oi", " | +-iv", " | +-ommuauphcldvlqjwffeoevsmknjgbwf", " +-wsbmhukjnosmfvkfdhnxjaj"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> files = {"/aooyrxpgodfh", "/bspwe/cajffrjkmlgpxq", "/bspwe/cgdghaceoblrxruayuho", "/bspwe/ikwxr/hpqdvnboehnajrjgsubksnwxm", "/bspwe/ikwxr/yjtaihsidgyhygplhlku", "/bspwe/ikwxr/zsvfjprtooami", "/bspwe/jkg/hwliucckkvblfutwv", "/bspwe/jkg/kaclzoopsja", "/bspwe/jkg/ofxfqdkvxweozztpkro", "/bspwe/jkg/rohoqdfvxmqeq", "/bspwe/kbhrqqwq", "/bspwe/ulwiuk", "/ehkda/azgxtvxblrom", "/ehkda/hhxrvsoo", "/ehkda/jldwzhcdhfejtslvxsjxwrraqoatapkzol", "/ehkda/lam/ixwumjtjqeyljzzveoqpm", "/ehkda/lam/pdyfzk", "/ehkda/lam/veoemhoflmrcvuaay", "/ehkda/lam/xmjdeczjdeyja", "/ehkda/lam/xvsitapuqvkwnoilartgslxxqyvyx", "/ehkda/ummb/abbpelkxpkxxfbcd", "/ehkda/ummb/cf", "/ehkda/ummb/wupjzdlsb", "/hfoucaagitz", "/huvhdhinuotcwejvpudibfouopnvnobkzjmjbgccg", "/jocorpyiyggcezvnumooumnzhmwdznevpq", "/lhlxskbgipebkvcfyosegqsflflnzhvwdlqmgyaviisuhw", "/mofr/dilbmxnvmc", "/mofr/oleevkfllajyygwoidnreaazjcdqrgdgh", "/mofr/ranoelxwtdfnulfakjgkyhoebqqjglrngzruqsn", "/mofr/sbpgeiluon", "/mofr/v", "/mofr/wfnfujeisunungnxswxzukicjkfc", "/mofr/zdeyobspmiphxmqdnyh", "/mofr/zqerntqofmombxuejdv", "/tjdfstgjtgbqlhfnqtqtpauyr", "/z/gvybgmbqinvzdlsojkcffjnytpsdxfxggqhrex", "/z/kxllqyyydnaqzekztqxarqslrspptfghuz", "/z/pghkxtolpoaoobfhgotwrvmghwdbqbcyjpdrg", "/z/resokhxgnjos", "/z/wctn/khxdssxdfpxejjshskmhlepvpmogjgtmup", "/z/wctn/prrlhhhjvpucyugxqvonxfvkazhc", "/z/wctn/ubsmprqlulzevyldqbdxheynjwgtpmnwbbsjlo", "/z/yjxpn/im/fk/fw/adookoivqipf", "/z/yjxpn/im/fk/vsop/jgfmxhmnkwmnio", "/z/yjxpn/im/v/kulvwfnrlicliufoin", "/z/yjxpn/nm/yqapwe", "/z/ziajralmgknarledcodhjbfivglcuh", "/zjxozctyrmglc"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-aooyrxpgodfh", "+-bspwe", "| +-cajffrjkmlgpxq", "| +-cgdghaceoblrxruayuho", "| +-ikwxr", "| | +-hpqdvnboehnajrjgsubksnwxm", "| | +-yjtaihsidgyhygplhlku", "| | +-zsvfjprtooami", "| +-jkg", "| | +-hwliucckkvblfutwv", "| | +-kaclzoopsja", "| | +-ofxfqdkvxweozztpkro", "| | +-rohoqdfvxmqeq", "| +-kbhrqqwq", "| +-ulwiuk", "+-ehkda", "| +-azgxtvxblrom", "| +-hhxrvsoo", "| +-jldwzhcdhfejtslvxsjxwrraqoatapkzol", "| +-lam", "| | +-ixwumjtjqeyljzzveoqpm", "| | +-pdyfzk", "| | +-veoemhoflmrcvuaay", "| | +-xmjdeczjdeyja", "| | +-xvsitapuqvkwnoilartgslxxqyvyx", "| +-ummb", "| +-abbpelkxpkxxfbcd", "| +-cf", "| +-wupjzdlsb", "+-hfoucaagitz", "+-huvhdhinuotcwejvpudibfouopnvnobkzjmjbgccg", "+-jocorpyiyggcezvnumooumnzhmwdznevpq", "+-lhlxskbgipebkvcfyosegqsflflnzhvwdlqmgyaviisuhw", "+-mofr", "| +-dilbmxnvmc", "| +-oleevkfllajyygwoidnreaazjcdqrgdgh", "| +-ranoelxwtdfnulfakjgkyhoebqqjglrngzruqsn", "| +-sbpgeiluon", "| +-v", "| +-wfnfujeisunungnxswxzukicjkfc", "| +-zdeyobspmiphxmqdnyh", "| +-zqerntqofmombxuejdv", "+-tjdfstgjtgbqlhfnqtqtpauyr", "+-z", "| +-gvybgmbqinvzdlsojkcffjnytpsdxfxggqhrex", "| +-kxllqyyydnaqzekztqxarqslrspptfghuz", "| +-pghkxtolpoaoobfhgotwrvmghwdbqbcyjpdrg", "| +-resokhxgnjos", "| +-wctn", "| | +-khxdssxdfpxejjshskmhlepvpmogjgtmup", "| | +-prrlhhhjvpucyugxqvonxfvkazhc", "| | +-ubsmprqlulzevyldqbdxheynjwgtpmnwbbsjlo", "| +-yjxpn", "| | +-im", "| | | +-fk", "| | | | +-fw", "| | | | | +-adookoivqipf", "| | | | +-vsop", "| | | | +-jgfmxhmnkwmnio", "| | | +-v", "| | | +-kulvwfnrlicliufoin", "| | +-nm", "| | +-yqapwe", "| +-ziajralmgknarledcodhjbfivglcuh", "+-zjxozctyrmglc"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> files = {"/ivp/e/auxp/jucos/njtdf/buhuzixkxmogstxnhz", "/ivp/e/dmk/wufyenvvglwmrkkqypwbmkt", "/jw/op/rihhpoqguncvowshzexbvmtjfaofvzbvgsfny", "/z/vy/plnablxqxkmskoubhjlugxtxkvvehi"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-ivp", "| +-e", "| +-auxp", "| | +-jucos", "| | +-njtdf", "| | +-buhuzixkxmogstxnhz", "| +-dmk", "| +-wufyenvvglwmrkkqypwbmkt", "+-jw", "| +-op", "| +-rihhpoqguncvowshzexbvmtjfaofvzbvgsfny", "+-z", " +-vy", " +-plnablxqxkmskoubhjlugxtxkvvehi"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> files = {"/biojmhkwaebmwmsvpujyicwlydywzzzlddldhm", "/kwexrrrxuebhgjrryaclwwdtjmexcoilzkqca", "/mukmznbwvctxonhastumlhmcczeuldgsxkrssdzr", "/ncueo/aeybsohqftjbrfqwivjfbxwjnyfxzildaurn", "/ncueo/bvunw", "/ncueo/clxkwbckva", "/ncueo/fqczjbwz", "/ncueo/friihpkaqljqpuwarm", "/ncueo/ifouwjcryhyrihbxodniwmv", "/ncueo/jufkcljoysjgwmsbmwhhvsknijovpimbnlhm", "/ncueo/lekhvlquvqfjfgvzasinpodonkseatfjrtaclz", "/ncueo/piaynfqwlcnyw", "/ncueo/qsf/wdbbpbaczsfgxlhgssbzbrhzz", "/ncueo/ye/qoqyy/cqyacftczqiu", "/pnqzqxlyoiwrdjcuhonheqexosulwxro", "/ucgppifbvlvuxfxgmfbqehjufqyvmebiujkiglhuoxusxdyzk", "/uj/e/aicqpsey", "/uj/e/rgmsatomrjwilpbtozfskriswjsv", "/uj/e/uqupjvtmoyhhmrftmbvro", "/uj/k/abvxx/knii/dstb/uamclcchhgijhljkmhmnk", "/uj/k/hdud", "/uj/thi/ymj", "/uj/thi/z/rbovvawqxvyincxzrstkvbpbjv", "/uj/thi/z/zfqvspxtogmisutmrmc", "/vapfrbazkfgnekbmpookohuyrmotedrtz", "/vpiuoxlnnpidxgztdlgqurpskyhhzmf", "/wd/bmpkmpqguairl", "/wd/g/umiok/gb/ns/hw/ocqv/gbmnmqqymkpukldj", "/wd/g/vgln/ordc/hrqbfgnf", "/wd/ghwmxptwqkptpl", "/wd/houhcxizyexfkdvwcarx", "/wd/oubzn/f/frk/mhyhpyxektxmaqwoumzs", "/wd/oubzn/f/gu/niieykfbctjwurydqgzdwgnhsngpjfolpe", "/wd/oubzn/f/himbarmtfodqoagz", "/wd/oubzn/qi/xercbzvkdqkwwxszxsltxgllpvzwzqedp", "/wd/rrmzttidiggstf", "/wd/s/jxknl/nt/kjdhpgqdxaqfsbwlmioglfsi", "/wd/s/jxknl/sqhbybfpw", "/wd/s/otjl/u/rxkok", "/wd/s/otjl/yzr/td/ksuwowrdbdjjjegppactxkztgnimpwfq", "/wk/chelacuxifxcwxglfzhmryaur", "/wk/dfei/uzzrckwnzkrkzkv", "/wk/hzb/ed/knak/sndupjisovj", "/wk/hzb/otdkcbgnyjqvkvrowapqlpcujxocwmpsljsroxphs", "/wk/hzb/qwpdbhialltqqvgmtbgavsrlxcbclfcwfb", "/wk/ilhkcvycoklcthxtbpattzdyubkcpeddoriipldarsin", "/wk/palwhksyklddswdsbxbfyryqoh", "/xcwvtosimkls", "/zdpwthsfokxjanmolmjqbjkt", "/zrmvhhxuburagdgfdxvthdjaraeydtjpwtm"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-biojmhkwaebmwmsvpujyicwlydywzzzlddldhm", "+-kwexrrrxuebhgjrryaclwwdtjmexcoilzkqca", "+-mukmznbwvctxonhastumlhmcczeuldgsxkrssdzr", "+-ncueo", "| +-aeybsohqftjbrfqwivjfbxwjnyfxzildaurn", "| +-bvunw", "| +-clxkwbckva", "| +-fqczjbwz", "| +-friihpkaqljqpuwarm", "| +-ifouwjcryhyrihbxodniwmv", "| +-jufkcljoysjgwmsbmwhhvsknijovpimbnlhm", "| +-lekhvlquvqfjfgvzasinpodonkseatfjrtaclz", "| +-piaynfqwlcnyw", "| +-qsf", "| | +-wdbbpbaczsfgxlhgssbzbrhzz", "| +-ye", "| +-qoqyy", "| +-cqyacftczqiu", "+-pnqzqxlyoiwrdjcuhonheqexosulwxro", "+-ucgppifbvlvuxfxgmfbqehjufqyvmebiujkiglhuoxusxdyzk", "+-uj", "| +-e", "| | +-aicqpsey", "| | +-rgmsatomrjwilpbtozfskriswjsv", "| | +-uqupjvtmoyhhmrftmbvro", "| +-k", "| | +-abvxx", "| | | +-knii", "| | | +-dstb", "| | | +-uamclcchhgijhljkmhmnk", "| | +-hdud", "| +-thi", "| +-ymj", "| +-z", "| +-rbovvawqxvyincxzrstkvbpbjv", "| +-zfqvspxtogmisutmrmc", "+-vapfrbazkfgnekbmpookohuyrmotedrtz", "+-vpiuoxlnnpidxgztdlgqurpskyhhzmf", "+-wd", "| +-bmpkmpqguairl", "| +-g", "| | +-umiok", "| | | +-gb", "| | | +-ns", "| | | +-hw", "| | | +-ocqv", "| | | +-gbmnmqqymkpukldj", "| | +-vgln", "| | +-ordc", "| | +-hrqbfgnf", "| +-ghwmxptwqkptpl", "| +-houhcxizyexfkdvwcarx", "| +-oubzn", "| | +-f", "| | | +-frk", "| | | | +-mhyhpyxektxmaqwoumzs", "| | | +-gu", "| | | | +-niieykfbctjwurydqgzdwgnhsngpjfolpe", "| | | +-himbarmtfodqoagz", "| | +-qi", "| | +-xercbzvkdqkwwxszxsltxgllpvzwzqedp", "| +-rrmzttidiggstf", "| +-s", "| +-jxknl", "| | +-nt", "| | | +-kjdhpgqdxaqfsbwlmioglfsi", "| | +-sqhbybfpw", "| +-otjl", "| +-u", "| | +-rxkok", "| +-yzr", "| +-td", "| +-ksuwowrdbdjjjegppactxkztgnimpwfq", "+-wk", "| +-chelacuxifxcwxglfzhmryaur", "| +-dfei", "| | +-uzzrckwnzkrkzkv", "| +-hzb", "| | +-ed", "| | | +-knak", "| | | +-sndupjisovj", "| | +-otdkcbgnyjqvkvrowapqlpcujxocwmpsljsroxphs", "| | +-qwpdbhialltqqvgmtbgavsrlxcbclfcwfb", "| +-ilhkcvycoklcthxtbpattzdyubkcpeddoriipldarsin", "| +-palwhksyklddswdsbxbfyryqoh", "+-xcwvtosimkls", "+-zdpwthsfokxjanmolmjqbjkt", "+-zrmvhhxuburagdgfdxvthdjaraeydtjpwtm"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> files = {"/gnrzq/ctq/zspwlhkelanwzjalbjdhmdkwiuaimgemraylyx", "/heokm/oxnm/vecpihcuupknffbotsfdwcikek", "/heokm/qna/hbsn/adklebpnvvgkkdio", "/lpzno/unx/kqsmeuslxlgb", "/ngyfo/celaw/n", "/ngyfo/jeh/ux/vjjbqrdwffzwsthsbdwhxfh", "/qvkfk/cmtnmzdcyj"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-gnrzq", "| +-ctq", "| +-zspwlhkelanwzjalbjdhmdkwiuaimgemraylyx", "+-heokm", "| +-oxnm", "| | +-vecpihcuupknffbotsfdwcikek", "| +-qna", "| +-hbsn", "| +-adklebpnvvgkkdio", "+-lpzno", "| +-unx", "| +-kqsmeuslxlgb", "+-ngyfo", "| +-celaw", "| | +-n", "| +-jeh", "| +-ux", "| +-vjjbqrdwffzwsthsbdwhxfh", "+-qvkfk", " +-cmtnmzdcyj"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> files = {"/an/ggg", "/an/jancd/ahvmxcgattlvwblqfzqzoflucfbsliduej", "/an/xppl/duoxgcpbpuobnhptdrrowizfqjkasbxkrusjx", "/an/xppl/ejzietlmyjinqurx", "/an/xppl/nxbt/coxkbbfifoqqcrlg", "/an/xppl/ojwwochaah", "/an/xppl/xqlizwjfevjapuvsrryjdgbqdrfbniadlfs", "/bmwab/zasxlbdpkwzs", "/egoyiugabmznoccarxqkecrapmtuqjpouybdep", "/f", "/fhjyprvepdpiuobgsworlxpsrrvkdphq", "/glcigpanhomatequrxmfyxqaybygwectfwbswmsmwddb", "/rnvy/jbivfryandapqlynepfkhmayvi", "/rnvy/p/jj/rucxh/upzaayaifwxgkugixskjasy", "/rnvy/qupb/wqhct/meagj/nfvkdxfe", "/rnvy/rjpoverkxqnlpsnxjyztzmsxxcfpevxefumvmunag", "/s/fmincfqtbtobqrwjyacnfdytetlstvgiacrlugti", "/s/jsgof/m/uv/evwfrirbjpvvyxyr", "/s/pwd/rtvwpcpoymnzeh", "/s/pwd/vvewlpchhwhonzvcf", "/wkew/kfcgxkdrwoafulviriozzshnyymtchepgxybwefc", "/wkew/mqso/phg/kxcoaoobnqczrrtccwtijgpb", "/wkew/mqso/rpbs/uwxubdzp", "/wkew/nz/amxgxwszwrmselgmowupjrxgotztegznunmmn", "/wkew/nz/pennqajthffqpklii", "/wkew/nz/pxioieowqrsoeaptbkudhfnya", "/xcrqbzdenxhhxxlpouyqkqqkzcgldcmorxkrnxcgzgmm", "/xmz/krraarskvqgbaejttrobbss", "/xmz/nb", "/xmz/qttey/cspt", "/xmz/qttey/gxquvelthrkjiywyncopmtum", "/ztiaj/javn/apmoylfrhbvpfgqoqikuvsbqgdfpcqik", "/ztiaj/javn/kjy/mmyc/jirrfrxinndrbaaflptnyrsqzk", "/ztiaj/mcr/n/kddhwqjphkmanmwlbjmktju", "/ztiaj/qooe/udoh/sjlarccdttpvseubchclrsaawpw", "/ztiaj/qooe/vmlrsh", "/ztiaj/rmjoipvuotskbovmgpygmpjksdrwfql"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-an", "| +-ggg", "| +-jancd", "| | +-ahvmxcgattlvwblqfzqzoflucfbsliduej", "| +-xppl", "| +-duoxgcpbpuobnhptdrrowizfqjkasbxkrusjx", "| +-ejzietlmyjinqurx", "| +-nxbt", "| | +-coxkbbfifoqqcrlg", "| +-ojwwochaah", "| +-xqlizwjfevjapuvsrryjdgbqdrfbniadlfs", "+-bmwab", "| +-zasxlbdpkwzs", "+-egoyiugabmznoccarxqkecrapmtuqjpouybdep", "+-f", "+-fhjyprvepdpiuobgsworlxpsrrvkdphq", "+-glcigpanhomatequrxmfyxqaybygwectfwbswmsmwddb", "+-rnvy", "| +-jbivfryandapqlynepfkhmayvi", "| +-p", "| | +-jj", "| | +-rucxh", "| | +-upzaayaifwxgkugixskjasy", "| +-qupb", "| | +-wqhct", "| | +-meagj", "| | +-nfvkdxfe", "| +-rjpoverkxqnlpsnxjyztzmsxxcfpevxefumvmunag", "+-s", "| +-fmincfqtbtobqrwjyacnfdytetlstvgiacrlugti", "| +-jsgof", "| | +-m", "| | +-uv", "| | +-evwfrirbjpvvyxyr", "| +-pwd", "| +-rtvwpcpoymnzeh", "| +-vvewlpchhwhonzvcf", "+-wkew", "| +-kfcgxkdrwoafulviriozzshnyymtchepgxybwefc", "| +-mqso", "| | +-phg", "| | | +-kxcoaoobnqczrrtccwtijgpb", "| | +-rpbs", "| | +-uwxubdzp", "| +-nz", "| +-amxgxwszwrmselgmowupjrxgotztegznunmmn", "| +-pennqajthffqpklii", "| +-pxioieowqrsoeaptbkudhfnya", "+-xcrqbzdenxhhxxlpouyqkqqkzcgldcmorxkrnxcgzgmm", "+-xmz", "| +-krraarskvqgbaejttrobbss", "| +-nb", "| +-qttey", "| +-cspt", "| +-gxquvelthrkjiywyncopmtum", "+-ztiaj", " +-javn", " | +-apmoylfrhbvpfgqoqikuvsbqgdfpcqik", " | +-kjy", " | +-mmyc", " | +-jirrfrxinndrbaaflptnyrsqzk", " +-mcr", " | +-n", " | +-kddhwqjphkmanmwlbjmktju", " +-qooe", " | +-udoh", " | | +-sjlarccdttpvseubchclrsaawpw", " | +-vmlrsh", " +-rmjoipvuotskbovmgpygmpjksdrwfql"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> files = {"/glob/a/iikhlvugqyrblt", "/glob/pf/yiwziamrbimlbicmhexknwmzrgrfhenwddq", "/glob/uslf/meytmcknndaviyiafzggozyszza", "/glob/uslf/vt/evfmo/vpmaxtzupxog", "/jcqww/mbce/onfvzgmlax", "/jcqww/mbce/pwlufntnrcuecsywyghbehyxyuui", "/jcqww/qc/ihe/zvm", "/jcqww/vffotpwb", "/ltezb/okjzetbsvlkyfrowsgpeypubjebetomqqaykousvyqi", "/ltezb/rauxwowzbrloypnudnjinmra", "/ltezb/ygjjaqfwmymseqrl", "/mgoyjkerqmiypalrhsocbvyoyxy", "/mixnuzfznkxx", "/mtf/lwhghqa", "/mtf/u/uarrlcpdpronsyfxcqzbgokudpwhsnjrgwhkuu", "/om/imxku/rjx/oa/euokphgxtyupkzacnrip", "/om/imxku/rjx/qz/i/fgf/tmicvvwvnufdaxcibeafdk", "/om/odlqr/mwb/bhzbr", "/om/odlqr/mwb/bssauradnxnajabpbmg", "/om/odlqr/mwb/s/kuteachcqrgslxa", "/om/yydnzsrohramlznuyc", "/om/zwoogvgsnrok", "/q/gedjxnryrgtvlprdl", "/q/lwyvteunyph", "/q/srnwlfcemh", "/rhg/t/ba/s/rexovfhhxbpadzhfnkxfyw", "/rjad/is/yhqwdlye", "/rjad/qd/nv/jywnopbsopgnnpynhkwfq", "/sw/bdljefwhjof", "/sw/gmge/myrmftzyrglyfyivbmkcgjyy", "/sw/unrwls", "/sw/uzr/axmfed", "/sw/uzr/eyzisvagrs", "/udnoxevjxchkurlijeqrybohrnyrlkrqakypbafcqcmfw"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-glob", "| +-a", "| | +-iikhlvugqyrblt", "| +-pf", "| | +-yiwziamrbimlbicmhexknwmzrgrfhenwddq", "| +-uslf", "| +-meytmcknndaviyiafzggozyszza", "| +-vt", "| +-evfmo", "| +-vpmaxtzupxog", "+-jcqww", "| +-mbce", "| | +-onfvzgmlax", "| | +-pwlufntnrcuecsywyghbehyxyuui", "| +-qc", "| | +-ihe", "| | +-zvm", "| +-vffotpwb", "+-ltezb", "| +-okjzetbsvlkyfrowsgpeypubjebetomqqaykousvyqi", "| +-rauxwowzbrloypnudnjinmra", "| +-ygjjaqfwmymseqrl", "+-mgoyjkerqmiypalrhsocbvyoyxy", "+-mixnuzfznkxx", "+-mtf", "| +-lwhghqa", "| +-u", "| +-uarrlcpdpronsyfxcqzbgokudpwhsnjrgwhkuu", "+-om", "| +-imxku", "| | +-rjx", "| | +-oa", "| | | +-euokphgxtyupkzacnrip", "| | +-qz", "| | +-i", "| | +-fgf", "| | +-tmicvvwvnufdaxcibeafdk", "| +-odlqr", "| | +-mwb", "| | +-bhzbr", "| | +-bssauradnxnajabpbmg", "| | +-s", "| | +-kuteachcqrgslxa", "| +-yydnzsrohramlznuyc", "| +-zwoogvgsnrok", "+-q", "| +-gedjxnryrgtvlprdl", "| +-lwyvteunyph", "| +-srnwlfcemh", "+-rhg", "| +-t", "| +-ba", "| +-s", "| +-rexovfhhxbpadzhfnkxfyw", "+-rjad", "| +-is", "| | +-yhqwdlye", "| +-qd", "| +-nv", "| +-jywnopbsopgnnpynhkwfq", "+-sw", "| +-bdljefwhjof", "| +-gmge", "| | +-myrmftzyrglyfyivbmkcgjyy", "| +-unrwls", "| +-uzr", "| +-axmfed", "| +-eyzisvagrs", "+-udnoxevjxchkurlijeqrybohrnyrlkrqakypbafcqcmfw"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> files = {"/a", "/ajn/eleawkyqbzccfecehmkzqkdckcqzf", "/ajn/g/boty/sjvsrhvxgcvoenvlmavbod", "/ajn/g/boty/vm/aim/aeebl/rltp", "/ajn/g/gcjiucubzzqkphjsrknhdxiugghumwxchviug", "/ajn/g/jwhlrkcutbipukieapeuspbxhowthk", "/ajn/g/u", "/ajn/g/ujdkprdpdncdxj", "/ajn/gyhliaxmepkhukroxewgupbhxlwzvelywwjpnpnno", "/ajn/sidpgknhxigjrlvowym", "/aqyk/ipyvbntbqcoupspgdryomgpxrkvetlpwuixjbuvhzqdw", "/aqyk/vjxxipo", "/aqyk/wnwd/lpo/dte/tqdgwuiobuwehgwmecvmhdmdplaf", "/aqyk/wnwd/lpo/dte/yawowikmuxzrg", "/aqyk/wnwd/lpo/nigxxlkhzlilzrnds", "/aqyk/wnwd/lpo/tve", "/efhcqwvddxgojqlxsqdgxfkkpknfbkvzhybtatwhteapkrfpi", "/egscf/eqkjvwmdojirpsbuwcdfwhv", "/egscf/jeiieitcfjljrzgygwkgjeliwjarqauqeuvi", "/egscf/nukybky", "/ibzas/hlmieilsxubcwxdj", "/ibzas/ouz/qdnzqjynzlwcrzf", "/ibzas/ouz/xeh/iupgk", "/ibzas/yyb/sdf/cim/jqi", "/nkgynsclwtlanffiniiyiumxokqoo", "/q/auk/oe/opjidpordm", "/q/auk/ztxzcdcpcqqwlzdjvsodojmgtchnqs", "/q/sbyz/m/vfqyzj", "/smevokectd", "/sufcz", "/t/ap/hrklymrm", "/t/ap/tmyzwgzvcttgextlqwhkfrqpj", "/t/fcohz/ja/cwfbhyfzwbmuugksml", "/t/ql/hvcvbkwmkkss", "/t/ql/ujj/xdiid/lbgnouwcydrvxqdodwbvi", "/t/sh/nbuisjmmkzsjtjswlhxxjlwlmgqfffww", "/t/sh/ripwqujxrs", "/v/crgcfljleqemzxfzhleibaoyccryeeeq", "/v/rl", "/v/sjopgeussnkpbeoyurzyhhqvblnnlqlvofnzjqzqz", "/v/xjd/fjuc/cwcaieuoipvscjhjvml", "/v/xjd/r/bktzlaczsasjdelkyhvxelxoytnnovle", "/v/xjd/roioeasojvdkrapdzpnkcxth", "/v/xjd/snfrjnzmjblgqyymqpqbsqumspl", "/v/zfydt", "/yv/ba", "/yv/mlb/oe/gqzdcdpmpgfsmprscyqqlxtehb", "/yv/upn/aj/hzgxqqkjglaclfkdqksznyta", "/yv/upn/zirmboouarderrvrzqpfzbwagtwedeo", "/yv/zdk/hy/nzvtq/dnujttnjwgaryktpdkymcnt"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "+-ajn", "| +-eleawkyqbzccfecehmkzqkdckcqzf", "| +-g", "| | +-boty", "| | | +-sjvsrhvxgcvoenvlmavbod", "| | | +-vm", "| | | +-aim", "| | | +-aeebl", "| | | +-rltp", "| | +-gcjiucubzzqkphjsrknhdxiugghumwxchviug", "| | +-jwhlrkcutbipukieapeuspbxhowthk", "| | +-u", "| | +-ujdkprdpdncdxj", "| +-gyhliaxmepkhukroxewgupbhxlwzvelywwjpnpnno", "| +-sidpgknhxigjrlvowym", "+-aqyk", "| +-ipyvbntbqcoupspgdryomgpxrkvetlpwuixjbuvhzqdw", "| +-vjxxipo", "| +-wnwd", "| +-lpo", "| +-dte", "| | +-tqdgwuiobuwehgwmecvmhdmdplaf", "| | +-yawowikmuxzrg", "| +-nigxxlkhzlilzrnds", "| +-tve", "+-efhcqwvddxgojqlxsqdgxfkkpknfbkvzhybtatwhteapkrfpi", "+-egscf", "| +-eqkjvwmdojirpsbuwcdfwhv", "| +-jeiieitcfjljrzgygwkgjeliwjarqauqeuvi", "| +-nukybky", "+-ibzas", "| +-hlmieilsxubcwxdj", "| +-ouz", "| | +-qdnzqjynzlwcrzf", "| | +-xeh", "| | +-iupgk", "| +-yyb", "| +-sdf", "| +-cim", "| +-jqi", "+-nkgynsclwtlanffiniiyiumxokqoo", "+-q", "| +-auk", "| | +-oe", "| | | +-opjidpordm", "| | +-ztxzcdcpcqqwlzdjvsodojmgtchnqs", "| +-sbyz", "| +-m", "| +-vfqyzj", "+-smevokectd", "+-sufcz", "+-t", "| +-ap", "| | +-hrklymrm", "| | +-tmyzwgzvcttgextlqwhkfrqpj", "| +-fcohz", "| | +-ja", "| | +-cwfbhyfzwbmuugksml", "| +-ql", "| | +-hvcvbkwmkkss", "| | +-ujj", "| | +-xdiid", "| | +-lbgnouwcydrvxqdodwbvi", "| +-sh", "| +-nbuisjmmkzsjtjswlhxxjlwlmgqfffww", "| +-ripwqujxrs", "+-v", "| +-crgcfljleqemzxfzhleibaoyccryeeeq", "| +-rl", "| +-sjopgeussnkpbeoyurzyhhqvblnnlqlvofnzjqzqz", "| +-xjd", "| | +-fjuc", "| | | +-cwcaieuoipvscjhjvml", "| | +-r", "| | | +-bktzlaczsasjdelkyhvxelxoytnnovle", "| | +-roioeasojvdkrapdzpnkcxth", "| | +-snfrjnzmjblgqyymqpqbsqumspl", "| +-zfydt", "+-yv", " +-ba", " +-mlb", " | +-oe", " | +-gqzdcdpmpgfsmprscyqqlxtehb", " +-upn", " | +-aj", " | | +-hzgxqqkjglaclfkdqksznyta", " | +-zirmboouarderrvrzqpfzbwagtwedeo", " +-zdk", " +-hy", " +-nzvtq", " +-dnujttnjwgaryktpdkymcnt"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> files = {"/bbdwepuqzecr", "/byxyixqsdqjouvtjocdhkzjwpjgjkmaskrmfbtfxde", "/djxumvuygpblkqrtoamgzcbhsibenqwvznxoqtquzbbi", "/ea", "/gcpw", "/itbhmrajgabcsdyg", "/kbpuwkam", "/ln", "/lupymnkslo", "/plbfuhs", "/qkqtoculjue", "/r/bwintwribcugoosyddr", "/r/cxisylotfxjocojkelthquwfatwqjwcjmywlvhemjnaweew", "/r/db", "/r/dfpdtxamejlryhfjvaxd", "/r/dkhwpseicietopffhzmj", "/r/ezlbejukvqwwbhwtyghfckbpnbqfotkmlj", "/r/geoggchbyggwwrpdrltpcnwdcdqn", "/r/iubsqjgotjgaftpvxasnbgahjxqdattkamdjdnxyss", "/r/iwppyekevgarqtptejsdgpkfvugwznxyffolatqbpkksd", "/r/jimfn", "/r/kyipvyuessvexcmjdgmlhdiloehklrgaoncjxexgtoe", "/r/lumquymokdudljuzgwcuvuffrmmwsv", "/r/lxfavmntqtbgoytxpcxmhbwx", "/r/m", "/r/mpb", "/r/nsrjrgguomuawlug", "/r/oilagmvhmz", "/r/pcyumevaanumnusdxjinoqzkksqqynsmzunrbgkpwiff", "/r/qoh", "/r/sclovvqlcigxiysudcdkjljdftrl", "/r/srciknreegqrbverzswu", "/r/stzrvozudnybtogmo", "/r/tatkptkvbqqcujsqahpvbvbtjknjawlimwtgi", "/r/u", "/r/wbmgoifcfipuqazpqszknztzfksqr", "/r/yxvdqvfzwdevorakhwqqocflzokeyowl", "/teaaczqrzgaeqgufohyfwockhzfncgwhzqztpoyfzmafvzq", "/uzqeobuvizabojq", "/vemduazgugcsnchnhkrail", "/w", "/wflsrabq", "/woahxqucgmanzjhjlrfkgqvwhfljwggdbbzjh", "/wtbiecz", "/xfcawcwioucvjtdkmgufxptf", "/xtemvrku"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bbdwepuqzecr", "+-byxyixqsdqjouvtjocdhkzjwpjgjkmaskrmfbtfxde", "+-djxumvuygpblkqrtoamgzcbhsibenqwvznxoqtquzbbi", "+-ea", "+-gcpw", "+-itbhmrajgabcsdyg", "+-kbpuwkam", "+-ln", "+-lupymnkslo", "+-plbfuhs", "+-qkqtoculjue", "+-r", "| +-bwintwribcugoosyddr", "| +-cxisylotfxjocojkelthquwfatwqjwcjmywlvhemjnaweew", "| +-db", "| +-dfpdtxamejlryhfjvaxd", "| +-dkhwpseicietopffhzmj", "| +-ezlbejukvqwwbhwtyghfckbpnbqfotkmlj", "| +-geoggchbyggwwrpdrltpcnwdcdqn", "| +-iubsqjgotjgaftpvxasnbgahjxqdattkamdjdnxyss", "| +-iwppyekevgarqtptejsdgpkfvugwznxyffolatqbpkksd", "| +-jimfn", "| +-kyipvyuessvexcmjdgmlhdiloehklrgaoncjxexgtoe", "| +-lumquymokdudljuzgwcuvuffrmmwsv", "| +-lxfavmntqtbgoytxpcxmhbwx", "| +-m", "| +-mpb", "| +-nsrjrgguomuawlug", "| +-oilagmvhmz", "| +-pcyumevaanumnusdxjinoqzkksqqynsmzunrbgkpwiff", "| +-qoh", "| +-sclovvqlcigxiysudcdkjljdftrl", "| +-srciknreegqrbverzswu", "| +-stzrvozudnybtogmo", "| +-tatkptkvbqqcujsqahpvbvbtjknjawlimwtgi", "| +-u", "| +-wbmgoifcfipuqazpqszknztzfksqr", "| +-yxvdqvfzwdevorakhwqqocflzokeyowl", "+-teaaczqrzgaeqgufohyfwockhzfncgwhzqztpoyfzmafvzq", "+-uzqeobuvizabojq", "+-vemduazgugcsnchnhkrail", "+-w", "+-wflsrabq", "+-woahxqucgmanzjhjlrfkgqvwhfljwggdbbzjh", "+-wtbiecz", "+-xfcawcwioucvjtdkmgufxptf", "+-xtemvrku"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> files = {"/aeg/w/khdylxiyue", "/fe/yinmydrdrvmxktwyqodximazntivyhnecogfhrj", "/hbul/herthefcsrfrfmamhfwgowhfsnypbb", "/slsar/o/mmnrh/fsqdfuoierlagkunnabdj", "/vzn/fdn/htdswxlqroecedsshwpnziyk"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-aeg", "| +-w", "| +-khdylxiyue", "+-fe", "| +-yinmydrdrvmxktwyqodximazntivyhnecogfhrj", "+-hbul", "| +-herthefcsrfrfmamhfwgowhfsnypbb", "+-slsar", "| +-o", "| +-mmnrh", "| +-fsqdfuoierlagkunnabdj", "+-vzn", " +-fdn", " +-htdswxlqroecedsshwpnziyk"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> files = {"/oo/bprjh/uvsglsaddhrcnjiheflmaktwozqpowxckywukadr"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-oo", " +-bprjh", " +-uvsglsaddhrcnjiheflmaktwozqpowxckywukadr"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> files = {"/ccj/znow/szjyzlycwfqh", "/jd/hnnyqlsbjkyeqmj", "/jd/kwwv/tgcza/jpzofueotlfmkgqctdjcuolie", "/jo/yf/zraacyrlpcbmoxpmdg", "/py/x/cgxvrcmhtljcnzulduxtj", "/pz/wqbnzlwjslpaxpsscetgjyxg", "/tmrhf/orr/ayewnupocibwhjltndoroqoov", "/tyazt/ibcx/okvpckk", "/weaq/jallkqtrschth"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-ccj", "| +-znow", "| +-szjyzlycwfqh", "+-jd", "| +-hnnyqlsbjkyeqmj", "| +-kwwv", "| +-tgcza", "| +-jpzofueotlfmkgqctdjcuolie", "+-jo", "| +-yf", "| +-zraacyrlpcbmoxpmdg", "+-py", "| +-x", "| +-cgxvrcmhtljcnzulduxtj", "+-pz", "| +-wqbnzlwjslpaxpsscetgjyxg", "+-tmrhf", "| +-orr", "| +-ayewnupocibwhjltndoroqoov", "+-tyazt", "| +-ibcx", "| +-okvpckk", "+-weaq", " +-jallkqtrschth"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> files = {"/adqbjezpgamwcwpjmrprneaawix", "/blmjwey", "/bzv/dfrhgnprrmnsas", "/bzv/rb/bkarn/otjkondttuorhyjptxjkzrxtyc", "/bzv/rb/fdmx", "/bzv/uptsg/aa/tsnoqpgxrrbkvmtpuvlxmw", "/bzv/uptsg/brvkwbdbsmtezmtskwmymtkdt", "/bzv/uptsg/hvmdkcbajvpnggdajzriynsgfmpbxb", "/bzv/uptsg/z/jkdshjhgsbrvqdciiyvlydbm", "/hvvryuqmetyxydwakpsx", "/jtmqs/eftp/afvjikroflumzigycydshziuyaygebulhtxns", "/jtmqs/eftp/joabmkreeylxshdzuwnatzskorrpelelkcbkax", "/jtmqs/eftp/muzeemiysvuodlxnru", "/jtmqs/svtem/q/rfj", "/jtmqs/typ/idbn/fypexwsqiwgrhxojddpxss", "/jtmqs/u", "/jtmqs/xwa/ihduusuybargeetqwqvxbxpzwomxnlxboe", "/jtmqs/xwa/l/wzlhqelneolkwpel", "/k", "/lhsvntfrkvezjalb", "/odyg/hfndpqpzfrrbnfpweabxcgklamvafscbwzaozxefkpl", "/odyg/qpardnixgrlriixdrbspcrymcszku", "/odyg/rr/d/doottcksgwyfhurpdbthu", "/odyg/rr/d/enzohkzmbqzudxzinwcanugpzslbrjxiqrhjt", "/odyg/rr/jaebd/h/rykimzzfgpjlzetghlzfzrkuqavcufrq", "/odyg/rr/jaebd/mijizsmyiqmhpfrdpvqablsvcse", "/odyg/vagmqiccprllpuezhnqltxavxmbcdjdhhybtqjv", "/tt/ciiab/teevrngskrodzfgtuecdiuhlch", "/tt/rxgrsiieboyqertjsvrjgnsm", "/tt/sl/rwkgnxeuwiflhsbwogunsiocyztoeeaeuchcaydb", "/tt/ssr/rlyouszaozwewwplwvquhyqowuvmgw", "/tt/u/uvmns/feyic/xqp/ke/aacizzufjdzhyibtzfpnfoozh", "/tt/wzee/yhyf/pb/e", "/tt/wzee/zjsjcrsfpmgebdvpymxctdgjvhncwrzailtiynsdr", "/veti/brk/hjdh/haxasgzbjlvnotqkpqyna", "/veti/brk/hjdh/urcbahscglwavwdqsqcmn", "/veti/brk/hjdh/vfkgosezxbemkkpycqdgkytknkngv", "/veti/lcpwz/pvywiznmnnpfzgujfxrzlutsnmjeqfssnbwf", "/veti/rk", "/veti/xvkylecebdkhoyhlmlswgihdrxls", "/vn/ajk/jozckdw", "/vn/belrpntjpguddtsoitpwnxwbdsbuanschwk", "/vn/bza/ko/miqvmzul", "/vn/bza/ko/sw", "/vn/uhwwokchvisxyfbexuwclksjxbbemfrbmpmkq", "/vn/zwwjc/c", "/vn/zwwjc/cph/beslcwkhqhfg", "/vyaycimvropizprlxhmswcwey"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-adqbjezpgamwcwpjmrprneaawix", "+-blmjwey", "+-bzv", "| +-dfrhgnprrmnsas", "| +-rb", "| | +-bkarn", "| | | +-otjkondttuorhyjptxjkzrxtyc", "| | +-fdmx", "| +-uptsg", "| +-aa", "| | +-tsnoqpgxrrbkvmtpuvlxmw", "| +-brvkwbdbsmtezmtskwmymtkdt", "| +-hvmdkcbajvpnggdajzriynsgfmpbxb", "| +-z", "| +-jkdshjhgsbrvqdciiyvlydbm", "+-hvvryuqmetyxydwakpsx", "+-jtmqs", "| +-eftp", "| | +-afvjikroflumzigycydshziuyaygebulhtxns", "| | +-joabmkreeylxshdzuwnatzskorrpelelkcbkax", "| | +-muzeemiysvuodlxnru", "| +-svtem", "| | +-q", "| | +-rfj", "| +-typ", "| | +-idbn", "| | +-fypexwsqiwgrhxojddpxss", "| +-u", "| +-xwa", "| +-ihduusuybargeetqwqvxbxpzwomxnlxboe", "| +-l", "| +-wzlhqelneolkwpel", "+-k", "+-lhsvntfrkvezjalb", "+-odyg", "| +-hfndpqpzfrrbnfpweabxcgklamvafscbwzaozxefkpl", "| +-qpardnixgrlriixdrbspcrymcszku", "| +-rr", "| | +-d", "| | | +-doottcksgwyfhurpdbthu", "| | | +-enzohkzmbqzudxzinwcanugpzslbrjxiqrhjt", "| | +-jaebd", "| | +-h", "| | | +-rykimzzfgpjlzetghlzfzrkuqavcufrq", "| | +-mijizsmyiqmhpfrdpvqablsvcse", "| +-vagmqiccprllpuezhnqltxavxmbcdjdhhybtqjv", "+-tt", "| +-ciiab", "| | +-teevrngskrodzfgtuecdiuhlch", "| +-rxgrsiieboyqertjsvrjgnsm", "| +-sl", "| | +-rwkgnxeuwiflhsbwogunsiocyztoeeaeuchcaydb", "| +-ssr", "| | +-rlyouszaozwewwplwvquhyqowuvmgw", "| +-u", "| | +-uvmns", "| | +-feyic", "| | +-xqp", "| | +-ke", "| | +-aacizzufjdzhyibtzfpnfoozh", "| +-wzee", "| +-yhyf", "| | +-pb", "| | +-e", "| +-zjsjcrsfpmgebdvpymxctdgjvhncwrzailtiynsdr", "+-veti", "| +-brk", "| | +-hjdh", "| | +-haxasgzbjlvnotqkpqyna", "| | +-urcbahscglwavwdqsqcmn", "| | +-vfkgosezxbemkkpycqdgkytknkngv", "| +-lcpwz", "| | +-pvywiznmnnpfzgujfxrzlutsnmjeqfssnbwf", "| +-rk", "| +-xvkylecebdkhoyhlmlswgihdrxls", "+-vn", "| +-ajk", "| | +-jozckdw", "| +-belrpntjpguddtsoitpwnxwbdsbuanschwk", "| +-bza", "| | +-ko", "| | +-miqvmzul", "| | +-sw", "| +-uhwwokchvisxyfbexuwclksjxbbemfrbmpmkq", "| +-zwwjc", "| +-c", "| +-cph", "| +-beslcwkhqhfg", "+-vyaycimvropizprlxhmswcwey"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> files = {"/abcrn/cpz/av", "/abcrn/cpz/kldjrafgnrufhtjuapvxsowepwsaykuhhnuc", "/abcrn/eohjaxqvq", "/abcrn/fcfxxhxdsldwcddqp", "/abcrn/h/swr/inbfi/sevxq", "/abcrn/om/gp/i/o/xhrnndhjevmbcptvatv", "/abcrn/zhw/xjxn/qej", "/big", "/cqoak/c/jicrk", "/cqoak/e/zdfopbsvbravxsoornhetwgsdxb", "/cqoak/nsa/gwskdnscuksuhqymxtritedawq", "/cqoak/nsa/jehourztdksapjqygziiuzapltpauvxqra", "/cqoak/tk/zmy/cyatk", "/cqoak/tk/zmy/spfwub", "/cqoak/wlqt/damnydozscwwmywiqjjrzkopxzgdlyxddh", "/cqoak/wlqt/sx", "/gztjvyrigchfjmiegxwkpqcsfmunq", "/iiga/n/s/xmqi", "/in/aruxodycpuojeqativevqlfggwykogdcaeumggiajpz", "/in/lsiwk/fz/djlypgjpn", "/in/lsiwk/fz/pwzmlbitxdhzqtormwg", "/in/lsiwk/rxsvgwoagnzkxjmhilfuosopbue", "/in/lsiwk/zwspsngedqgpjnfcpjyxztlewxqoht", "/in/scqqrqffs", "/ipbe/kw/co/xkcgqzeyqanjonnueqpcfnwrrgedfotpn", "/ipbe/kw/llkuzxozsuxqjurqkhqwvdldkmqvixflgfd", "/ipbe/q/fyojkbaatzttnquzwcwlkkmgxscaiqvsb", "/ipbe/r/dh/carcgrrxoleelgnxwgzoxuknyjyqgeajlrzwjh", "/ipbe/r/nwyz/afczhmouyohss", "/ipbe/r/nwyz/xupcdtiahtgpsb", "/ipbe/xlhexu", "/jghju/dnf/k/vajqzfdrflupzzlmkczuofq", "/jghju/dnf/rydcsbsgwkzzlksgmercox", "/jghju/idts", "/jghju/o/lj/ubqnbc", "/jghju/o/tacdfeyapfqjaksmrqtzpgwi", "/ov/ca/fy/mzctkxewjlxgigelmdecyyawxss", "/ov/w/fyyizxiwqxuudbo", "/ov/w/iopg/c/sw/exzpdaryjlzgcvbrdkwjgzmnjbcfjk", "/ov/w/iopg/xnr/nhz/rn/givqlotqne", "/ov/w/vtgsmkrbwptkcuvbyfrocmyahlwnlrbrkwrmdamyzx", "/s/huekpcuufcrpgekkxekqkpvheozgunaulqddpunramu", "/s/hxudmgiiheauxmhwfklzsyuufxhcoc", "/s/ickbjgbxsrzulblrboahytx", "/s/kjstpezgbfmiwfwwhifvaglqekovgeymdjtmxcs", "/s/ltpkrvuewnzuwbeee", "/s/mhelfgsolycmodzlewiuqddbizrmcharxymonucjppdgrf", "/s/ptjbinooecxtwqadjdqfyvcrqtawmzetreybemzxgrw", "/s/ut"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-abcrn", "| +-cpz", "| | +-av", "| | +-kldjrafgnrufhtjuapvxsowepwsaykuhhnuc", "| +-eohjaxqvq", "| +-fcfxxhxdsldwcddqp", "| +-h", "| | +-swr", "| | +-inbfi", "| | +-sevxq", "| +-om", "| | +-gp", "| | +-i", "| | +-o", "| | +-xhrnndhjevmbcptvatv", "| +-zhw", "| +-xjxn", "| +-qej", "+-big", "+-cqoak", "| +-c", "| | +-jicrk", "| +-e", "| | +-zdfopbsvbravxsoornhetwgsdxb", "| +-nsa", "| | +-gwskdnscuksuhqymxtritedawq", "| | +-jehourztdksapjqygziiuzapltpauvxqra", "| +-tk", "| | +-zmy", "| | +-cyatk", "| | +-spfwub", "| +-wlqt", "| +-damnydozscwwmywiqjjrzkopxzgdlyxddh", "| +-sx", "+-gztjvyrigchfjmiegxwkpqcsfmunq", "+-iiga", "| +-n", "| +-s", "| +-xmqi", "+-in", "| +-aruxodycpuojeqativevqlfggwykogdcaeumggiajpz", "| +-lsiwk", "| | +-fz", "| | | +-djlypgjpn", "| | | +-pwzmlbitxdhzqtormwg", "| | +-rxsvgwoagnzkxjmhilfuosopbue", "| | +-zwspsngedqgpjnfcpjyxztlewxqoht", "| +-scqqrqffs", "+-ipbe", "| +-kw", "| | +-co", "| | | +-xkcgqzeyqanjonnueqpcfnwrrgedfotpn", "| | +-llkuzxozsuxqjurqkhqwvdldkmqvixflgfd", "| +-q", "| | +-fyojkbaatzttnquzwcwlkkmgxscaiqvsb", "| +-r", "| | +-dh", "| | | +-carcgrrxoleelgnxwgzoxuknyjyqgeajlrzwjh", "| | +-nwyz", "| | +-afczhmouyohss", "| | +-xupcdtiahtgpsb", "| +-xlhexu", "+-jghju", "| +-dnf", "| | +-k", "| | | +-vajqzfdrflupzzlmkczuofq", "| | +-rydcsbsgwkzzlksgmercox", "| +-idts", "| +-o", "| +-lj", "| | +-ubqnbc", "| +-tacdfeyapfqjaksmrqtzpgwi", "+-ov", "| +-ca", "| | +-fy", "| | +-mzctkxewjlxgigelmdecyyawxss", "| +-w", "| +-fyyizxiwqxuudbo", "| +-iopg", "| | +-c", "| | | +-sw", "| | | +-exzpdaryjlzgcvbrdkwjgzmnjbcfjk", "| | +-xnr", "| | +-nhz", "| | +-rn", "| | +-givqlotqne", "| +-vtgsmkrbwptkcuvbyfrocmyahlwnlrbrkwrmdamyzx", "+-s", " +-huekpcuufcrpgekkxekqkpvheozgunaulqddpunramu", " +-hxudmgiiheauxmhwfklzsyuufxhcoc", " +-ickbjgbxsrzulblrboahytx", " +-kjstpezgbfmiwfwwhifvaglqekovgeymdjtmxcs", " +-ltpkrvuewnzuwbeee", " +-mhelfgsolycmodzlewiuqddbizrmcharxymonucjppdgrf", " +-ptjbinooecxtwqadjdqfyvcrqtawmzetreybemzxgrw", " +-ut"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> files = {"/ahvbnmtqnriioeyqctsepbljuhn", "/bgwir", "/ccydkgadplnmxmoodqwaldgyordkdmtwwwiejhggcy", "/cizgcbrpcvbjlwlhlnnxtidvzcgaymybovfwpwbx", "/g/couso", "/g/ijqem/bghokgvwdiesxkdlnkrjpuhglkeclznrd", "/g/ijqem/ouzukyqrdqwzjzndnklmjdpmyr", "/g/ijqem/qivhrqlbzaoqipbwu", "/g/liktvvlpaajcmqzk", "/g/pq/fzdm/wjtcaiuzeqgs", "/gmrqjndtahjcehapbpaxdkiubmfexxtmantdkubzzavm", "/khwhbxsgxlnbvnkpinloeqdviysywupbl", "/uzd/imheo/frvfs", "/uzd/q/zjnadwhmjmarpfhkzrtaqgbiffymcidlg", "/uzd/qven/deqgt/fgszumcfyvvkxwfw", "/uzd/qven/p", "/uzd/qven/vfkvjwycszfr", "/uzd/viqnrkxyzzgzktxvjaead", "/uzd/wf/wuitzkokomlvfdozmwycxtsxpyqxxtwbpex", "/wl/g/paaozbtmkxlxmocnlbjrlsabvmgdvzfhvqzzd", "/wl/g/zdrhljdyosuhccbmctcnfg", "/wl/liqouslkalctd", "/wl/seysurbjsmcmcbtewtzpltweaejoictgtryaptunofp", "/wl/txyju/rfuozjsuysjmjgfa", "/wl/wnva/jfpomkrbvhdftheanyfxtxqofioejeckkuz", "/wl/wnva/zkpk/ccmnk/brjjkhpwxpoyrsxajm", "/wohwh/dvq/teee/jp/edruecagpannafekceufmdjisp", "/wohwh/ghfma/rqxjnbhgguuxxxkzmkkhewzvpdlim", "/wohwh/rmvvn/gut/cbzladsxgxmeyrmtrftwoanqzkfoxjdlp", "/wohwh/rmvvn/v/esrciyoqjinozjvcwkts", "/wwycuihha", "/xzvjzldcfopqoeevjndtsapqbz", "/zr/ajd", "/zr/jcpbqffgquaytnbmztwvvpmvlafmluhpgzbxogon", "/zr/jxkuwszwmtmlkigkdbebuen"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-ahvbnmtqnriioeyqctsepbljuhn", "+-bgwir", "+-ccydkgadplnmxmoodqwaldgyordkdmtwwwiejhggcy", "+-cizgcbrpcvbjlwlhlnnxtidvzcgaymybovfwpwbx", "+-g", "| +-couso", "| +-ijqem", "| | +-bghokgvwdiesxkdlnkrjpuhglkeclznrd", "| | +-ouzukyqrdqwzjzndnklmjdpmyr", "| | +-qivhrqlbzaoqipbwu", "| +-liktvvlpaajcmqzk", "| +-pq", "| +-fzdm", "| +-wjtcaiuzeqgs", "+-gmrqjndtahjcehapbpaxdkiubmfexxtmantdkubzzavm", "+-khwhbxsgxlnbvnkpinloeqdviysywupbl", "+-uzd", "| +-imheo", "| | +-frvfs", "| +-q", "| | +-zjnadwhmjmarpfhkzrtaqgbiffymcidlg", "| +-qven", "| | +-deqgt", "| | | +-fgszumcfyvvkxwfw", "| | +-p", "| | +-vfkvjwycszfr", "| +-viqnrkxyzzgzktxvjaead", "| +-wf", "| +-wuitzkokomlvfdozmwycxtsxpyqxxtwbpex", "+-wl", "| +-g", "| | +-paaozbtmkxlxmocnlbjrlsabvmgdvzfhvqzzd", "| | +-zdrhljdyosuhccbmctcnfg", "| +-liqouslkalctd", "| +-seysurbjsmcmcbtewtzpltweaejoictgtryaptunofp", "| +-txyju", "| | +-rfuozjsuysjmjgfa", "| +-wnva", "| +-jfpomkrbvhdftheanyfxtxqofioejeckkuz", "| +-zkpk", "| +-ccmnk", "| +-brjjkhpwxpoyrsxajm", "+-wohwh", "| +-dvq", "| | +-teee", "| | +-jp", "| | +-edruecagpannafekceufmdjisp", "| +-ghfma", "| | +-rqxjnbhgguuxxxkzmkkhewzvpdlim", "| +-rmvvn", "| +-gut", "| | +-cbzladsxgxmeyrmtrftwoanqzkfoxjdlp", "| +-v", "| +-esrciyoqjinozjvcwkts", "+-wwycuihha", "+-xzvjzldcfopqoeevjndtsapqbz", "+-zr", " +-ajd", " +-jcpbqffgquaytnbmztwvvpmvlafmluhpgzbxogon", " +-jxkuwszwmtmlkigkdbebuen"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> files = {"/a/kvopyrgrwnllhrpeorozgcydbdvataapwq", "/d/mimc/ie/xtcz/yzalfery", "/dm/arvllnakfdotnzqncnuerl", "/dm/esifmihgfnchuay", "/dm/kcdpsynhatmvaqlfkzfndicikzekyrfrfdpeqpeqiunktt", "/izt/ekgfb/lcjimienxvwyywtktzvqz", "/jlsy/e/ea/upnt/cbv", "/jlsy/e/iamvkw", "/jlsy/vn/wogskmauuzwfixx", "/jq/lbwuf", "/jq/rezv/osoixhbxbeyndnbwffpxzfbljrb", "/kkbz/du/gacqwsvtzaiwyrqveelfba", "/rrrc/c/akpzyimbrsaignw", "/s/rg/omkilxksfdrikaugjnognlwotuzyxjkbacdvug", "/s/y/irrfu/q", "/skc/aodclotexj", "/skc/m/khfg", "/skc/scx/hbfokmatktdwwmev", "/skc/scx/t/ugbelcyqmqj"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-kvopyrgrwnllhrpeorozgcydbdvataapwq", "+-d", "| +-mimc", "| +-ie", "| +-xtcz", "| +-yzalfery", "+-dm", "| +-arvllnakfdotnzqncnuerl", "| +-esifmihgfnchuay", "| +-kcdpsynhatmvaqlfkzfndicikzekyrfrfdpeqpeqiunktt", "+-izt", "| +-ekgfb", "| +-lcjimienxvwyywtktzvqz", "+-jlsy", "| +-e", "| | +-ea", "| | | +-upnt", "| | | +-cbv", "| | +-iamvkw", "| +-vn", "| +-wogskmauuzwfixx", "+-jq", "| +-lbwuf", "| +-rezv", "| +-osoixhbxbeyndnbwffpxzfbljrb", "+-kkbz", "| +-du", "| +-gacqwsvtzaiwyrqveelfba", "+-rrrc", "| +-c", "| +-akpzyimbrsaignw", "+-s", "| +-rg", "| | +-omkilxksfdrikaugjnognlwotuzyxjkbacdvug", "| +-y", "| +-irrfu", "| +-q", "+-skc", " +-aodclotexj", " +-m", " | +-khfg", " +-scx", " +-hbfokmatktdwwmev", " +-t", " +-ugbelcyqmqj"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> files = {"/b/irdcstmhvonaqkyyjcxmvhx", "/b/u", "/b/xdlzsas", "/bq/bdkkipewvadlduqajldoocrteoszcootufn", "/bq/f/hcmdsvmuwowhioyffgysxvykzgpdgqpxlauxpeq", "/bq/rwhb", "/juj/nfnbjrh", "/juj/xw/i/buhmhpvsytcxgcupymnajrbndesdoaos", "/juj/xw/i/egcmxorlntxsajaauvhpvtrsboufaxnyjpfdbo", "/lrsmpzvuiiyyyfzkmkdstqgddwwikonyuzacucvjcztcxflg", "/mn/gbvj/n/slob/cgykdlyodfzrpmtiayztqoxchkm", "/owiq/db/feiwhkdx", "/owiq/ntivv/jbpidudzgzmtji", "/qltqefbmhaydqjcvwvjfvaglfdpwnmdalpbygkqqgxljc", "/wop/hfkjwtnoheldnmrmme", "/z/qij/ph"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-b", "| +-irdcstmhvonaqkyyjcxmvhx", "| +-u", "| +-xdlzsas", "+-bq", "| +-bdkkipewvadlduqajldoocrteoszcootufn", "| +-f", "| | +-hcmdsvmuwowhioyffgysxvykzgpdgqpxlauxpeq", "| +-rwhb", "+-juj", "| +-nfnbjrh", "| +-xw", "| +-i", "| +-buhmhpvsytcxgcupymnajrbndesdoaos", "| +-egcmxorlntxsajaauvhpvtrsboufaxnyjpfdbo", "+-lrsmpzvuiiyyyfzkmkdstqgddwwikonyuzacucvjcztcxflg", "+-mn", "| +-gbvj", "| +-n", "| +-slob", "| +-cgykdlyodfzrpmtiayztqoxchkm", "+-owiq", "| +-db", "| | +-feiwhkdx", "| +-ntivv", "| +-jbpidudzgzmtji", "+-qltqefbmhaydqjcvwvjfvaglfdpwnmdalpbygkqqgxljc", "+-wop", "| +-hfkjwtnoheldnmrmme", "+-z", " +-qij", " +-ph"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> files = {"/b/c", "/b/jpmijhagoizznecafwnsojzggptdselyqfbr", "/b/w/shbhtocwzjzbtsnpwyjthc", "/exa", "/jrbnysypxkyfgzkfqszmeoyysrdbeygvljaynprtszqlmh", "/jw/idnvk/iblwuqachkjyprgmsskcoik", "/ltngcpainjmdvjdkegfedjinbdysobetx", "/lu/c/dtf/q", "/lu/knwymnqihdyjiptboxgntvwmyhtgxqbbpqtp", "/lu/qbs/oipgpabuzypusufpi", "/lu/qbs/pzjp", "/lu/siiip/adbqxnzprtdfqtbrkizwffwixwpaoklrlfu", "/lu/siiip/owvrdpxtbbylmwardiyuqrwhmnqyogtc", "/lu/siiip/vzjhwyiakxvipqjkllurfrjixrfmfyn", "/lu/siiip/yfvsrprhfxmf", "/mubiwfrxkcfrhugazdkdxsdjeeftmjqpiluxks", "/n/iyi", "/n/pkb/yifrcujffvtzpmh", "/nawfm/birleiqwrprrpiqezmomcxeeslgopqkgwexoc", "/nawfm/o/eilriswfoalayvfest", "/nawfm/o/ktr/kjaut/gtjnzovds", "/nawfm/o/ktr/kjaut/hqcizwzsxuiykitdfl", "/nawfm/o/nryhk", "/nawfm/qqmazcb", "/nawfm/wrql/ib/n/xiefm/yusrryjnjiorwlqeexqztikdd", "/pts/bls/dscghltomrmyvbkwpkazcwaozivthwnhrcdwnw", "/pts/bls/ijqvimuglsc", "/pts/bls/vmnhcdzatuobqppfkyueueqx", "/pts/e/wfwh/vjzwvslqaskacciihrazjpx", "/pts/gqoosifkjpmuccvntlnkhqxbdbicwybbfnsdis", "/xn/dxdbmgrvefgyxffhsllbzfqvrcfyt", "/xn/jpojahzvnzflnoiytmzmyr"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-b", "| +-c", "| +-jpmijhagoizznecafwnsojzggptdselyqfbr", "| +-w", "| +-shbhtocwzjzbtsnpwyjthc", "+-exa", "+-jrbnysypxkyfgzkfqszmeoyysrdbeygvljaynprtszqlmh", "+-jw", "| +-idnvk", "| +-iblwuqachkjyprgmsskcoik", "+-ltngcpainjmdvjdkegfedjinbdysobetx", "+-lu", "| +-c", "| | +-dtf", "| | +-q", "| +-knwymnqihdyjiptboxgntvwmyhtgxqbbpqtp", "| +-qbs", "| | +-oipgpabuzypusufpi", "| | +-pzjp", "| +-siiip", "| +-adbqxnzprtdfqtbrkizwffwixwpaoklrlfu", "| +-owvrdpxtbbylmwardiyuqrwhmnqyogtc", "| +-vzjhwyiakxvipqjkllurfrjixrfmfyn", "| +-yfvsrprhfxmf", "+-mubiwfrxkcfrhugazdkdxsdjeeftmjqpiluxks", "+-n", "| +-iyi", "| +-pkb", "| +-yifrcujffvtzpmh", "+-nawfm", "| +-birleiqwrprrpiqezmomcxeeslgopqkgwexoc", "| +-o", "| | +-eilriswfoalayvfest", "| | +-ktr", "| | | +-kjaut", "| | | +-gtjnzovds", "| | | +-hqcizwzsxuiykitdfl", "| | +-nryhk", "| +-qqmazcb", "| +-wrql", "| +-ib", "| +-n", "| +-xiefm", "| +-yusrryjnjiorwlqeexqztikdd", "+-pts", "| +-bls", "| | +-dscghltomrmyvbkwpkazcwaozivthwnhrcdwnw", "| | +-ijqvimuglsc", "| | +-vmnhcdzatuobqppfkyueueqx", "| +-e", "| | +-wfwh", "| | +-vjzwvslqaskacciihrazjpx", "| +-gqoosifkjpmuccvntlnkhqxbdbicwybbfnsdis", "+-xn", " +-dxdbmgrvefgyxffhsllbzfqvrcfyt", " +-jpojahzvnzflnoiytmzmyr"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> files = {"/akjvm/c/ap/tmonkdgdsnbwxymkvvrmfxkc", "/akjvm/c/ap/zjmmyhecyxubzkgmu", "/akjvm/icavpkoqpevjlwx", "/c/frlrjrolekcmicbbhbxgwobahptxotvxj", "/c/j/oiufrssxfuwjutzcynwlceh", "/c/j/ylzilnqaeitciwuolmeylqfiyvlfekk", "/c/mnckxfefehyxczuvnxlnhqvq", "/ee/as", "/ee/rhzo/rbivtsf", "/jwbpiqhvydxzetqvzzvfuonla", "/kxyb/shj/pbhqr/terzgdvxdiig", "/lh/gbpgsnwxcqhfqz", "/lh/gwfukmdhs", "/lh/jmhzlfvikeqsxkdeudanxmqvcczcsjzc", "/lh/zdsnxa", "/nbjg/iyuhlsqxwyyjkhdordcbsetyoagdxzyva", "/nbjg/wmfwjdlfyepzza", "/nt/dmmta/iswdmuyakjx", "/nt/fxgw/gsfbtpsccmv", "/nt/fxgw/zixejozqkmrlrfdraulntb", "/osqt/apwrrnitacyw", "/osqt/awifgbjbkcfvqamhgmisloothajiggpfwuwolbrgyp", "/osqt/bsharaeocadghdpus", "/osqt/xf/dytkchqglmr", "/osqt/xf/igzmupctuuoytqiuliygrpigjqrjrkhlonqpjmez", "/osqt/xf/pfhthvrgthkzgwidvdhayxkzggkkkrdtpsimvaye", "/osqt/xf/zpzcylqbwfxcskv", "/tmivk/bhyfw/ebcehrqryxnavtxcqqxfxsjqxyxzvispln", "/tmivk/bhyfw/nynzufdqrdd", "/tmivk/ehwre/abepfhvvqbvoxbfjnefucxivxmubg", "/tmivk/ehwre/hehqpjfvzjpsadvudlx", "/tmivk/ncrujfcrlxfditchaewfcgqs", "/tmivk/q/go/pvanfoywlgqwhjikiidxvylzytjqdsiyenaycm", "/wm/ffvs/nqbikkvqpwkeodhvbyhumejvmtcuivaoboui", "/wnnzkyccxleytbosmw", "/xfydjsugoobfcbcgoovtjzbxoemjdjpnuquqp"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-akjvm", "| +-c", "| | +-ap", "| | +-tmonkdgdsnbwxymkvvrmfxkc", "| | +-zjmmyhecyxubzkgmu", "| +-icavpkoqpevjlwx", "+-c", "| +-frlrjrolekcmicbbhbxgwobahptxotvxj", "| +-j", "| | +-oiufrssxfuwjutzcynwlceh", "| | +-ylzilnqaeitciwuolmeylqfiyvlfekk", "| +-mnckxfefehyxczuvnxlnhqvq", "+-ee", "| +-as", "| +-rhzo", "| +-rbivtsf", "+-jwbpiqhvydxzetqvzzvfuonla", "+-kxyb", "| +-shj", "| +-pbhqr", "| +-terzgdvxdiig", "+-lh", "| +-gbpgsnwxcqhfqz", "| +-gwfukmdhs", "| +-jmhzlfvikeqsxkdeudanxmqvcczcsjzc", "| +-zdsnxa", "+-nbjg", "| +-iyuhlsqxwyyjkhdordcbsetyoagdxzyva", "| +-wmfwjdlfyepzza", "+-nt", "| +-dmmta", "| | +-iswdmuyakjx", "| +-fxgw", "| +-gsfbtpsccmv", "| +-zixejozqkmrlrfdraulntb", "+-osqt", "| +-apwrrnitacyw", "| +-awifgbjbkcfvqamhgmisloothajiggpfwuwolbrgyp", "| +-bsharaeocadghdpus", "| +-xf", "| +-dytkchqglmr", "| +-igzmupctuuoytqiuliygrpigjqrjrkhlonqpjmez", "| +-pfhthvrgthkzgwidvdhayxkzggkkkrdtpsimvaye", "| +-zpzcylqbwfxcskv", "+-tmivk", "| +-bhyfw", "| | +-ebcehrqryxnavtxcqqxfxsjqxyxzvispln", "| | +-nynzufdqrdd", "| +-ehwre", "| | +-abepfhvvqbvoxbfjnefucxivxmubg", "| | +-hehqpjfvzjpsadvudlx", "| +-ncrujfcrlxfditchaewfcgqs", "| +-q", "| +-go", "| +-pvanfoywlgqwhjikiidxvylzytjqdsiyenaycm", "+-wm", "| +-ffvs", "| +-nqbikkvqpwkeodhvbyhumejvmtcuivaoboui", "+-wnnzkyccxleytbosmw", "+-xfydjsugoobfcbcgoovtjzbxoemjdjpnuquqp"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> files = {"/akdbqhbllmwmmtqsidgybmihpbdjgicnrbk", "/dsahqysltibybuutkhrxfzgfxvimakpngafcz", "/hyhcq/blmi/dtsqo/rwj/wtyvcsifeewnhjhusr", "/hyhcq/dsstwfhpzyyofvwyk", "/hyhcq/kuq/bcno/xrz", "/hyhcq/yzrzx/aefjm", "/hyhcq/yzrzx/gytixyt", "/hyhcq/yzrzx/ikpxohdjtlgk", "/itwif/rxhwn/lwbh/xwbzmellzhlchkbkayvawow", "/itwif/rxhwn/uygmb/afe", "/j", "/kcjvixilxispfrdruntn", "/o/gtwnr/dfdf/fylgkdldpdjhyroshltbx", "/o/nvxwy/ri", "/o/ox", "/o/qrdj/ndjhufeloefbuigvlvaruahwtlsglalrbvkiviv", "/sv/bihz/xcbxgayxgnfcqvplqhpiknu", "/sv/caxoziwajofzyshfrygoraotqtiife", "/sv/dljsj/phzsqxwbvcvujnekzgkmnsvcwkptqwgaxyp", "/sv/mev/eqk/bloaimrdhamcttavpdrguddlnivv", "/sv/pdc/oql/bzng", "/sv/qybh/ddeoglwuvspblphymzydreczilpy", "/sxef", "/tcip/b/gjlyofaoxgbkveyjjthyyujawumdtcjpwkbrrvzrk", "/tcip/cjzc/utgs/atumkxemh", "/tcip/comrhpqdxzhhmcahvanubqelpbuxuts", "/tcip/keks/zcwqvdqfrewrewkkjatqxay", "/tcip/lgosfwcxrpvneqluwvzjycnfmjqezepudzl", "/tzxzm/eq/ejc/tpslzprgryjtaojgjhncd", "/tzxzm/eq/gdqlrrmbnya", "/tzxzm/eq/n", "/tzxzm/r/bkkh/ypqhzpwnookijcznlusw", "/tzxzm/teezxeyqiblipelmjhubvgimvfgemzmzohspnvhfp", "/tzxzm/zqtzswhosgjylsnbstciixfmqqywuftmqs", "/va/fmp/un", "/va/ggv/t/ju", "/va/ggv/vloqytv", "/va/ggv/y/tbrzzpxbddkcowlqqsfksqhokwfkvju", "/va/jbmbmsdasngoaawcjlgphhx", "/va/n/d", "/va/skm/jwhpsqywfcgpzmkg", "/va/ton/kbzbjizjkghlxwust", "/va/ton/tsgixtfdddyblbw", "/va/uwklb/gylbiaqohwillifywmerivpe", "/va/uwklb/zq/wyvclqabcjm", "/w"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-akdbqhbllmwmmtqsidgybmihpbdjgicnrbk", "+-dsahqysltibybuutkhrxfzgfxvimakpngafcz", "+-hyhcq", "| +-blmi", "| | +-dtsqo", "| | +-rwj", "| | +-wtyvcsifeewnhjhusr", "| +-dsstwfhpzyyofvwyk", "| +-kuq", "| | +-bcno", "| | +-xrz", "| +-yzrzx", "| +-aefjm", "| +-gytixyt", "| +-ikpxohdjtlgk", "+-itwif", "| +-rxhwn", "| +-lwbh", "| | +-xwbzmellzhlchkbkayvawow", "| +-uygmb", "| +-afe", "+-j", "+-kcjvixilxispfrdruntn", "+-o", "| +-gtwnr", "| | +-dfdf", "| | +-fylgkdldpdjhyroshltbx", "| +-nvxwy", "| | +-ri", "| +-ox", "| +-qrdj", "| +-ndjhufeloefbuigvlvaruahwtlsglalrbvkiviv", "+-sv", "| +-bihz", "| | +-xcbxgayxgnfcqvplqhpiknu", "| +-caxoziwajofzyshfrygoraotqtiife", "| +-dljsj", "| | +-phzsqxwbvcvujnekzgkmnsvcwkptqwgaxyp", "| +-mev", "| | +-eqk", "| | +-bloaimrdhamcttavpdrguddlnivv", "| +-pdc", "| | +-oql", "| | +-bzng", "| +-qybh", "| +-ddeoglwuvspblphymzydreczilpy", "+-sxef", "+-tcip", "| +-b", "| | +-gjlyofaoxgbkveyjjthyyujawumdtcjpwkbrrvzrk", "| +-cjzc", "| | +-utgs", "| | +-atumkxemh", "| +-comrhpqdxzhhmcahvanubqelpbuxuts", "| +-keks", "| | +-zcwqvdqfrewrewkkjatqxay", "| +-lgosfwcxrpvneqluwvzjycnfmjqezepudzl", "+-tzxzm", "| +-eq", "| | +-ejc", "| | | +-tpslzprgryjtaojgjhncd", "| | +-gdqlrrmbnya", "| | +-n", "| +-r", "| | +-bkkh", "| | +-ypqhzpwnookijcznlusw", "| +-teezxeyqiblipelmjhubvgimvfgemzmzohspnvhfp", "| +-zqtzswhosgjylsnbstciixfmqqywuftmqs", "+-va", "| +-fmp", "| | +-un", "| +-ggv", "| | +-t", "| | | +-ju", "| | +-vloqytv", "| | +-y", "| | +-tbrzzpxbddkcowlqqsfksqhokwfkvju", "| +-jbmbmsdasngoaawcjlgphhx", "| +-n", "| | +-d", "| +-skm", "| | +-jwhpsqywfcgpzmkg", "| +-ton", "| | +-kbzbjizjkghlxwust", "| | +-tsgixtfdddyblbw", "| +-uwklb", "| +-gylbiaqohwillifywmerivpe", "| +-zq", "| +-wyvclqabcjm", "+-w"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> files = {"/cwovdaooxclkrngvlopifoaa", "/gpdr/d/anpylwxmtovgutsdxwsmfk", "/gpdr/d/bghbbkfxksumq", "/gpdr/d/jaepy/hwh/jfqabtoigxmpkmpa", "/gpdr/d/uhbeuwiuiimjkcbgp", "/gpdr/imv/valnoveoicukgzfywrtxjcmlcox", "/gpdr/mnr/itam/r/cv", "/gpdr/tydalfwugcgbhcdzdclek", "/gpzosvheofzveifgkwicyydewxdqiqovlsosz", "/jwqvk/gnzfmywywftjjkmqr", "/jwqvk/icceb/gogffpiyfciwnojqlvbla", "/jwqvk/icceb/ragpjgcbrabrjp", "/jwqvk/qplozfbdwnjpmugone", "/ktomm/cppxupummbnfujrvnhjrxturgwlkkamwarvzume", "/ktomm/ggqrk/rc", "/ktomm/hsassiggfmfqzvpravsegtdfapwzbj", "/ktomm/kotf/dlfxynmguocgpjmyonkzczajmtnn", "/ktomm/kotf/fy", "/ktomm/kotf/qbmfbqstiwoyvqdbmedndfelbvljwvotucowto", "/ktomm/lgnzvakqoagvrmcfw", "/ktomm/ocxccozmmjrwttfbtyxwqwebxmsoxqdjmgbxrlz", "/ktomm/rvueiwifxgjjgi", "/pybr/a/yawq/g/kwkfzevddhrtqzfoggcuvrhyvjugmbqjcuc", "/pybr/ei/ifxeajysoafkuznyakkuxiurqcjx", "/pybr/uwpc/pvsqnnawddgdrjbmjoashtreuidrwavyjap", "/pybr/uwpc/ztyznstvymmlmdwiovmxvlbwejwqnx", "/vzo/mihqqhmmzhcrbpmdtmunlrohaiih", "/vzo/yqd/kuythecvohii", "/vzo/yqd/mb/lxvfvdlnmrojpjlshjkfqokzjlqpbdvonachk", "/vzo/yqd/rlzng/z/n/ifilunou", "/wrj/grhf/cvv", "/wrj/kegpnrhxulwmcwezs", "/wrj/oid/hcej/xwmgkqcqtcqyaygezucwakat", "/wrj/tqwr/dfqdixspkuppnqxuirgc", "/wrj/tqwr/fptaodzzwldehfao", "/wrj/tqwr/zyvnfuwigapcatowmylqlzhaanqs", "/yiztxukfelmlwggoroiukbhcofragtmdoodgi"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-cwovdaooxclkrngvlopifoaa", "+-gpdr", "| +-d", "| | +-anpylwxmtovgutsdxwsmfk", "| | +-bghbbkfxksumq", "| | +-jaepy", "| | | +-hwh", "| | | +-jfqabtoigxmpkmpa", "| | +-uhbeuwiuiimjkcbgp", "| +-imv", "| | +-valnoveoicukgzfywrtxjcmlcox", "| +-mnr", "| | +-itam", "| | +-r", "| | +-cv", "| +-tydalfwugcgbhcdzdclek", "+-gpzosvheofzveifgkwicyydewxdqiqovlsosz", "+-jwqvk", "| +-gnzfmywywftjjkmqr", "| +-icceb", "| | +-gogffpiyfciwnojqlvbla", "| | +-ragpjgcbrabrjp", "| +-qplozfbdwnjpmugone", "+-ktomm", "| +-cppxupummbnfujrvnhjrxturgwlkkamwarvzume", "| +-ggqrk", "| | +-rc", "| +-hsassiggfmfqzvpravsegtdfapwzbj", "| +-kotf", "| | +-dlfxynmguocgpjmyonkzczajmtnn", "| | +-fy", "| | +-qbmfbqstiwoyvqdbmedndfelbvljwvotucowto", "| +-lgnzvakqoagvrmcfw", "| +-ocxccozmmjrwttfbtyxwqwebxmsoxqdjmgbxrlz", "| +-rvueiwifxgjjgi", "+-pybr", "| +-a", "| | +-yawq", "| | +-g", "| | +-kwkfzevddhrtqzfoggcuvrhyvjugmbqjcuc", "| +-ei", "| | +-ifxeajysoafkuznyakkuxiurqcjx", "| +-uwpc", "| +-pvsqnnawddgdrjbmjoashtreuidrwavyjap", "| +-ztyznstvymmlmdwiovmxvlbwejwqnx", "+-vzo", "| +-mihqqhmmzhcrbpmdtmunlrohaiih", "| +-yqd", "| +-kuythecvohii", "| +-mb", "| | +-lxvfvdlnmrojpjlshjkfqokzjlqpbdvonachk", "| +-rlzng", "| +-z", "| +-n", "| +-ifilunou", "+-wrj", "| +-grhf", "| | +-cvv", "| +-kegpnrhxulwmcwezs", "| +-oid", "| | +-hcej", "| | +-xwmgkqcqtcqyaygezucwakat", "| +-tqwr", "| +-dfqdixspkuppnqxuirgc", "| +-fptaodzzwldehfao", "| +-zyvnfuwigapcatowmylqlzhaanqs", "+-yiztxukfelmlwggoroiukbhcofragtmdoodgi"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> files = {"/awzbxjjmdbxftxf", "/bgs", "/ffc/dpigmrjgpsayoepsdiskmogsucmlptsok", "/ffc/rizcthygkpthfyphfcxuqtlggbdazakmlqqpoufr", "/ffc/ygf/jbufsmxhjiccwvmpafoiusy", "/ffc/ygf/orv/coeujlcr", "/gp/bxzbvnoikm", "/gp/lrchzdcfa", "/gp/uykjgjtkdphowu", "/gp/wtcqrpimqtowtpvqtx", "/gp/yicsiblqdznvkzsfbwikpvycjuvftlitmwh", "/hdejsnhlgmtsvenezynbcqiqtkhahsdbac", "/hksla/gbafiafjxeygglfiwxfmvsrytuipxbzxuczhxnybalt", "/hksla/gutrg", "/hksla/knvzonvxebojwurnrzbjpripsscoxpg", "/hksla/kurgrlgcsugackdswxbxseupqddnzc", "/hksla/nhcutjfrcgljwtxxofyrlw", "/hksla/tbg", "/hksla/u", "/hksla/xcxlcieyurfvtroystiipy", "/hksla/ykcxwhzwulhxzlolxcffjxhnuxiprsgqyekqqrmpk", "/hksla/zmjdwkvjenpqjran", "/kvteigczkoapqqutebhiivdnclbitkicitnshg", "/nvzacnmfouapgsmgpsyntuoul", "/pcyrygfhnxnwqrbqeqxworynsd", "/prxjs/aeovpirrplpqnhrjtlhml", "/prxjs/freopmxgbixclace", "/prxjs/mzwrvqwwcgymywiqstneylhdlbs", "/prxjs/qsdcwdnqdmtts", "/qofqouoqvnpokereryubojxk", "/txj", "/vfvrkaxpthajpkteyelver", "/xt/agfqtlzcpnedokddifmitoiiqoe", "/xt/ffdfhjphxxywokmaaxlxcartatf", "/xt/rszlgpogzkowjfpsoonaba", "/xt/sdxcemrw", "/xt/xtvhzuri", "/ydps/fvkn/bdb", "/ydps/fvkn/bpycmqrinoxcywdmcsooqmnvlphhz", "/ydps/fvkn/sbot", "/ydps/fvkn/xj", "/ydps/fvkn/zjgfkzaqwglt", "/ydps/illegoob", "/ydps/pywmnsizxbmyqkrurzegjijspiwbycn", "/ydps/wzplmnhjylmwavnprqoeguqbmjgedddyzjzeqya"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-awzbxjjmdbxftxf", "+-bgs", "+-ffc", "| +-dpigmrjgpsayoepsdiskmogsucmlptsok", "| +-rizcthygkpthfyphfcxuqtlggbdazakmlqqpoufr", "| +-ygf", "| +-jbufsmxhjiccwvmpafoiusy", "| +-orv", "| +-coeujlcr", "+-gp", "| +-bxzbvnoikm", "| +-lrchzdcfa", "| +-uykjgjtkdphowu", "| +-wtcqrpimqtowtpvqtx", "| +-yicsiblqdznvkzsfbwikpvycjuvftlitmwh", "+-hdejsnhlgmtsvenezynbcqiqtkhahsdbac", "+-hksla", "| +-gbafiafjxeygglfiwxfmvsrytuipxbzxuczhxnybalt", "| +-gutrg", "| +-knvzonvxebojwurnrzbjpripsscoxpg", "| +-kurgrlgcsugackdswxbxseupqddnzc", "| +-nhcutjfrcgljwtxxofyrlw", "| +-tbg", "| +-u", "| +-xcxlcieyurfvtroystiipy", "| +-ykcxwhzwulhxzlolxcffjxhnuxiprsgqyekqqrmpk", "| +-zmjdwkvjenpqjran", "+-kvteigczkoapqqutebhiivdnclbitkicitnshg", "+-nvzacnmfouapgsmgpsyntuoul", "+-pcyrygfhnxnwqrbqeqxworynsd", "+-prxjs", "| +-aeovpirrplpqnhrjtlhml", "| +-freopmxgbixclace", "| +-mzwrvqwwcgymywiqstneylhdlbs", "| +-qsdcwdnqdmtts", "+-qofqouoqvnpokereryubojxk", "+-txj", "+-vfvrkaxpthajpkteyelver", "+-xt", "| +-agfqtlzcpnedokddifmitoiiqoe", "| +-ffdfhjphxxywokmaaxlxcartatf", "| +-rszlgpogzkowjfpsoonaba", "| +-sdxcemrw", "| +-xtvhzuri", "+-ydps", " +-fvkn", " | +-bdb", " | +-bpycmqrinoxcywdmcsooqmnvlphhz", " | +-sbot", " | +-xj", " | +-zjgfkzaqwglt", " +-illegoob", " +-pywmnsizxbmyqkrurzegjijspiwbycn", " +-wzplmnhjylmwavnprqoeguqbmjgedddyzjzeqya"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> files = {"/fwlfdoskjbu", "/khfpu/jbskewubuytciwxnpbgydxougedchauqmfiepzqbzk", "/rfy/oedxwxzoilpkgycrnboxobnuxiaku", "/vxtp/pj/nglno/hud/ifacpbplprl", "/wbwaz/aywq/gr/wgmolius"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-fwlfdoskjbu", "+-khfpu", "| +-jbskewubuytciwxnpbgydxougedchauqmfiepzqbzk", "+-rfy", "| +-oedxwxzoilpkgycrnboxobnuxiaku", "+-vxtp", "| +-pj", "| +-nglno", "| +-hud", "| +-ifacpbplprl", "+-wbwaz", " +-aywq", " +-gr", " +-wgmolius"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> files = {"/oach/eaua/rjjzup", "/xzrk/ovouvwytofo"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-oach", "| +-eaua", "| +-rjjzup", "+-xzrk", " +-ovouvwytofo"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> files = {"/babs/s/bo", "/ctjoj/yjky/zhxzbhqbafssiqtfhiaffnd", "/d/lduoltezli", "/d/ljyyf/p/kozdsasocenztc", "/d/wh/hkqrguogsiiqsz", "/hbpm/pdmy/j", "/hrsv/k/kid/evwvspphdmmfdlhbjefxsbrbqm", "/hrsv/zkx/qmrz/ttipqpqrqavhvaxsroazodbubqx", "/wjrz/obnux/ipygwsopzhhgkyof"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-babs", "| +-s", "| +-bo", "+-ctjoj", "| +-yjky", "| +-zhxzbhqbafssiqtfhiaffnd", "+-d", "| +-lduoltezli", "| +-ljyyf", "| | +-p", "| | +-kozdsasocenztc", "| +-wh", "| +-hkqrguogsiiqsz", "+-hbpm", "| +-pdmy", "| +-j", "+-hrsv", "| +-k", "| | +-kid", "| | +-evwvspphdmmfdlhbjefxsbrbqm", "| +-zkx", "| +-qmrz", "| +-ttipqpqrqavhvaxsroazodbubqx", "+-wjrz", " +-obnux", " +-ipygwsopzhhgkyof"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> files = {"/bvwwkwz", "/dhdmatrhjbwootnfmwrxb", "/hvfh/da/fifsylueqyydexisxzxgm", "/hvfh/da/meskcqadcymqmqscacdprdjbggifhiiq", "/hvfh/da/qlhigxhxtutsl", "/hvfh/febeldpwlojldaqwjedhgbistlfuwga", "/hvfh/mbasteterrtsfbbeeseoobytpiuw", "/hvfh/obfc/cy/wvfkee", "/hvfh/rqi/um", "/jodq", "/prshxvcjyubjkiplflurmwgxbdsfvsd", "/scvaugitkcistgkykzfljfuuajeybbod", "/t/cnnpk/d/qqgcxzmpfawlbwjhpmalfwqacgl", "/t/cnxop/ow/zrxz/i/ujqw", "/ttt/ejpliguthgtrqxainsebagkkwtmzpmustfl", "/ttt/hqut/qvvm/hifdttqzeehrcifppwqzyinuqnkvheovaem", "/ttt/hqut/qvvm/kmokwmgrzjm", "/ttt/kdxhfkkszgedcsmiwnlnsafzphwymwcjmj", "/ttt/qsr/iqyljwzpw", "/ttt/qsr/psdbnogvdltkmrlyzfpgmberzwkvhmwvjyass", "/ttt/qsr/xcnsexschecyabzsvstsiegthfmcjznmbfvp", "/u/d", "/u/oygdpx", "/u/phbl", "/u/tdbuqmllehmt", "/u/tg", "/u/wscsqyixa", "/u/zjactreisclppjvwqqym", "/wtu/dgmmm/miym/ye/cjgctvenkkbsfcvtiaveodthasclb", "/wtu/dgmmm/t", "/wtu/fu/zcr", "/wtu/hjdn/mqd/p/bds", "/wtu/zdmw/pnnwjszimgvtgsicxxejwbphkneppfw", "/ya/c/dvkmpnbv", "/ya/kc/ussklurfiwmihlwbfhdcvfwxrbljdowxaiaaghgxf", "/ya/kc/xdcj/bztcnlxlobqhhbnbjkyedegszolwdrgwi", "/ya/svmz/ahfuq/njubhdjbwchjiesx", "/ya/svmz/kel/lma/wuw/lfrnsrtrogxunngroihxdmhyo", "/ya/y/acdcohraxjvghcrccxqv", "/ya/y/dhg"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bvwwkwz", "+-dhdmatrhjbwootnfmwrxb", "+-hvfh", "| +-da", "| | +-fifsylueqyydexisxzxgm", "| | +-meskcqadcymqmqscacdprdjbggifhiiq", "| | +-qlhigxhxtutsl", "| +-febeldpwlojldaqwjedhgbistlfuwga", "| +-mbasteterrtsfbbeeseoobytpiuw", "| +-obfc", "| | +-cy", "| | +-wvfkee", "| +-rqi", "| +-um", "+-jodq", "+-prshxvcjyubjkiplflurmwgxbdsfvsd", "+-scvaugitkcistgkykzfljfuuajeybbod", "+-t", "| +-cnnpk", "| | +-d", "| | +-qqgcxzmpfawlbwjhpmalfwqacgl", "| +-cnxop", "| +-ow", "| +-zrxz", "| +-i", "| +-ujqw", "+-ttt", "| +-ejpliguthgtrqxainsebagkkwtmzpmustfl", "| +-hqut", "| | +-qvvm", "| | +-hifdttqzeehrcifppwqzyinuqnkvheovaem", "| | +-kmokwmgrzjm", "| +-kdxhfkkszgedcsmiwnlnsafzphwymwcjmj", "| +-qsr", "| +-iqyljwzpw", "| +-psdbnogvdltkmrlyzfpgmberzwkvhmwvjyass", "| +-xcnsexschecyabzsvstsiegthfmcjznmbfvp", "+-u", "| +-d", "| +-oygdpx", "| +-phbl", "| +-tdbuqmllehmt", "| +-tg", "| +-wscsqyixa", "| +-zjactreisclppjvwqqym", "+-wtu", "| +-dgmmm", "| | +-miym", "| | | +-ye", "| | | +-cjgctvenkkbsfcvtiaveodthasclb", "| | +-t", "| +-fu", "| | +-zcr", "| +-hjdn", "| | +-mqd", "| | +-p", "| | +-bds", "| +-zdmw", "| +-pnnwjszimgvtgsicxxejwbphkneppfw", "+-ya", " +-c", " | +-dvkmpnbv", " +-kc", " | +-ussklurfiwmihlwbfhdcvfwxrbljdowxaiaaghgxf", " | +-xdcj", " | +-bztcnlxlobqhhbnbjkyedegszolwdrgwi", " +-svmz", " | +-ahfuq", " | | +-njubhdjbwchjiesx", " | +-kel", " | +-lma", " | +-wuw", " | +-lfrnsrtrogxunngroihxdmhyo", " +-y", " +-acdcohraxjvghcrccxqv", " +-dhg"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> files = {"/bvdw/vmx/lvziwcbznbjcxjeuhqvuejcrwaqmotjldh", "/bvdw/zi/uqim/gy/iqvj/hsnp", "/joxe", "/ntnpttznfgugbfnvvyeodsm", "/yiosvjvspabcazw", "/zhoss/oyzotkwclbbedferipxuk", "/zhoss/wwxwd/xw/ygsdgwzi", "/zzagivttlfjxsizjujsyxizuhptxfruehci"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bvdw", "| +-vmx", "| | +-lvziwcbznbjcxjeuhqvuejcrwaqmotjldh", "| +-zi", "| +-uqim", "| +-gy", "| +-iqvj", "| +-hsnp", "+-joxe", "+-ntnpttznfgugbfnvvyeodsm", "+-yiosvjvspabcazw", "+-zhoss", "| +-oyzotkwclbbedferipxuk", "| +-wwxwd", "| +-xw", "| +-ygsdgwzi", "+-zzagivttlfjxsizjujsyxizuhptxfruehci"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> files = {"/fomd/jzvxiceomlorydvgghudy", "/fomd/kaxtwyydlddnhgckxh", "/fzqy/liql", "/fzqy/ujce/htnemrgxhaghznbbotxhasuwgsnteqeuuwl", "/hgbqpcehepmwkkkgkqjasenmitoocefhpuwvdhbaqvtk", "/hirhrffnlzdaumplycfgt", "/nzezydmalrryaaehtdkzicmlijp", "/o/onnmjobcpvcltftqsxcqbjxrbbirypndmpplten", "/o/qxhvwbzlecmkxsbjo", "/o/tnhzeohjmauqbcppadydazpufjdicvm", "/o/xtwmzwejvgqwkqjrrheexyx", "/tiwwvlquhqty", "/tpnhamrzlxrvvvdblqqpzbrlfawywtkkyilpqfodjmopgxz", "/vsfdi/afgldinsbvosfsoqrekdcyjfwlreiblujclgeoupp", "/vsfdi/p", "/vsfdi/vozb/aizpjqtjdxahwhjkuuoakqu", "/z/fakn/kznp/globckuhrdotmhnscovhghlqfrdoybpiwqcz"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-fomd", "| +-jzvxiceomlorydvgghudy", "| +-kaxtwyydlddnhgckxh", "+-fzqy", "| +-liql", "| +-ujce", "| +-htnemrgxhaghznbbotxhasuwgsnteqeuuwl", "+-hgbqpcehepmwkkkgkqjasenmitoocefhpuwvdhbaqvtk", "+-hirhrffnlzdaumplycfgt", "+-nzezydmalrryaaehtdkzicmlijp", "+-o", "| +-onnmjobcpvcltftqsxcqbjxrbbirypndmpplten", "| +-qxhvwbzlecmkxsbjo", "| +-tnhzeohjmauqbcppadydazpufjdicvm", "| +-xtwmzwejvgqwkqjrrheexyx", "+-tiwwvlquhqty", "+-tpnhamrzlxrvvvdblqqpzbrlfawywtkkyilpqfodjmopgxz", "+-vsfdi", "| +-afgldinsbvosfsoqrekdcyjfwlreiblujclgeoupp", "| +-p", "| +-vozb", "| +-aizpjqtjdxahwhjkuuoakqu", "+-z", " +-fakn", " +-kznp", " +-globckuhrdotmhnscovhghlqfrdoybpiwqcz"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> files = {"/aptobkqntenxdwfzyhjwrqzdeoabyw", "/fdjzoawzdscjanrawxpseelurq", "/gxwugfkspqfqkgbfaokvtnro", "/jcwnhubciboxeisgpfhyhzsstuvmzddq", "/kdlqryhxvp", "/kwdyfgxgpfeimuyjtchxx", "/lajjuffffkbylnqkhpgsitgccwawpybdepusnbpiyptwf", "/lmxotoplpbuouffjlleniabibskkn", "/mjdfjamxgivlmjye", "/ndnijglzlmkubjemkjpegtqtvenwvuxdvaaakifutccbqgdbo", "/odbrqinbbbjwnmcdodtaodecagopap", "/s", "/tvlqzjhtms", "/x/jfo/dekpojqfepeecwjvlbfkgcvsyiujkwpzqfh", "/x/jfo/dt", "/x/jfo/flgvvzorbb", "/x/jfo/gbymanfbystnvqe", "/x/jfo/jgwxhwniocgwboszjckitfulzfmtkysspzz", "/x/jfo/pfwlaspjhijerwfscjh", "/x/jfo/rcseypueeerxl", "/x/jfo/roxf", "/x/jfo/vgjyrzhbizwonhef", "/x/leibd/dhbewgcqlpfmchpxywvyvqoxk", "/x/leibd/rwmtpqmvskulkfpaqdhgobuonlpvmevqq", "/x/leibd/xynvaz", "/x/ogsnvvuvdqsl", "/x/tbcrfghyvetpvazjlvytotpvtmp", "/x/uladpewliikrbvedzpjjb", "/xmxfxemwiwmaslylnxkpjcbjwumjidhy", "/yalomxsandecrotfqryi", "/yngrrayneeeoxcapwjkqfixkow", "/zlidrgcjnwdvoxuqpppa"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-aptobkqntenxdwfzyhjwrqzdeoabyw", "+-fdjzoawzdscjanrawxpseelurq", "+-gxwugfkspqfqkgbfaokvtnro", "+-jcwnhubciboxeisgpfhyhzsstuvmzddq", "+-kdlqryhxvp", "+-kwdyfgxgpfeimuyjtchxx", "+-lajjuffffkbylnqkhpgsitgccwawpybdepusnbpiyptwf", "+-lmxotoplpbuouffjlleniabibskkn", "+-mjdfjamxgivlmjye", "+-ndnijglzlmkubjemkjpegtqtvenwvuxdvaaakifutccbqgdbo", "+-odbrqinbbbjwnmcdodtaodecagopap", "+-s", "+-tvlqzjhtms", "+-x", "| +-jfo", "| | +-dekpojqfepeecwjvlbfkgcvsyiujkwpzqfh", "| | +-dt", "| | +-flgvvzorbb", "| | +-gbymanfbystnvqe", "| | +-jgwxhwniocgwboszjckitfulzfmtkysspzz", "| | +-pfwlaspjhijerwfscjh", "| | +-rcseypueeerxl", "| | +-roxf", "| | +-vgjyrzhbizwonhef", "| +-leibd", "| | +-dhbewgcqlpfmchpxywvyvqoxk", "| | +-rwmtpqmvskulkfpaqdhgobuonlpvmevqq", "| | +-xynvaz", "| +-ogsnvvuvdqsl", "| +-tbcrfghyvetpvazjlvytotpvtmp", "| +-uladpewliikrbvedzpjjb", "+-xmxfxemwiwmaslylnxkpjcbjwumjidhy", "+-yalomxsandecrotfqryi", "+-yngrrayneeeoxcapwjkqfixkow", "+-zlidrgcjnwdvoxuqpppa"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> files = {"/a/dcv/ei", "/fjbt/xgt/zbdcrowztmqliwzswlkjdmtyzlwav", "/j/zrv/rbhyxyh"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-dcv", "| +-ei", "+-fjbt", "| +-xgt", "| +-zbdcrowztmqliwzswlkjdmtyzlwav", "+-j", " +-zrv", " +-rbhyxyh"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> files = {"/bq/hsiafsnxdlkdqbqh", "/fezg/lgqs/rqh/alypxphxfao", "/iuewshqqvitttosdvzramp", "/unkox/jxfe", "/w/mh/eidaibifghunauzty", "/waug/cdynxhguxjdrcdmnnvbtcydkapskuvw", "/yjv/fwgmkvtxmclpcplbebukahwxqtliyxcomnzrg", "/yjv/yze/b/ghjncehjmapx"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bq", "| +-hsiafsnxdlkdqbqh", "+-fezg", "| +-lgqs", "| +-rqh", "| +-alypxphxfao", "+-iuewshqqvitttosdvzramp", "+-unkox", "| +-jxfe", "+-w", "| +-mh", "| +-eidaibifghunauzty", "+-waug", "| +-cdynxhguxjdrcdmnnvbtcydkapskuvw", "+-yjv", " +-fwgmkvtxmclpcplbebukahwxqtliyxcomnzrg", " +-yze", " +-b", " +-ghjncehjmapx"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> files = {"/fn/rl/m/rhczfbiywcjnwrgbttelgx", "/gakztset", "/gif/etygy/hl/dxpcqvknbzhjqocwcaswwzfegrpest", "/gif/ggocmnnsfomcexfugvccqjitydqxzkmmbrvnwzozz", "/gif/scdqafjsbmzhadpomqxrkyzkpnwkcajo", "/gif/zpmk/glak/iytfrdtoqexecfgtuqfkvm", "/gqzq/kadvz/qiaukwrlmkvpuijaa", "/gqzq/wdakhfxgtcwvnesdfthwdq", "/jbqzknalttqjpbxrcktmdzjnefvu", "/ngrhh/he/abrognljsvibedntcszhfjb", "/ngrhh/yekitpcuohbsbfkyllqdmym", "/oa/drjdufytohpawzpgxtgkksgwllfgpygdhsk", "/oa/gvzmhciuolterkrqvfaahoqhppuqxjwrtgyndazi", "/oa/llwbfjsfqfxpvtyrhaqvu", "/oa/n/mc/rcpnizeipjbgnx", "/oc/cohtoeuaeylpopxv", "/oc/ghggrivqsfbjjyvzep", "/t/nkqsjaagheuhhixhlvmtieqkcqzocggbvgjxezs"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-fn", "| +-rl", "| +-m", "| +-rhczfbiywcjnwrgbttelgx", "+-gakztset", "+-gif", "| +-etygy", "| | +-hl", "| | +-dxpcqvknbzhjqocwcaswwzfegrpest", "| +-ggocmnnsfomcexfugvccqjitydqxzkmmbrvnwzozz", "| +-scdqafjsbmzhadpomqxrkyzkpnwkcajo", "| +-zpmk", "| +-glak", "| +-iytfrdtoqexecfgtuqfkvm", "+-gqzq", "| +-kadvz", "| | +-qiaukwrlmkvpuijaa", "| +-wdakhfxgtcwvnesdfthwdq", "+-jbqzknalttqjpbxrcktmdzjnefvu", "+-ngrhh", "| +-he", "| | +-abrognljsvibedntcszhfjb", "| +-yekitpcuohbsbfkyllqdmym", "+-oa", "| +-drjdufytohpawzpgxtgkksgwllfgpygdhsk", "| +-gvzmhciuolterkrqvfaahoqhppuqxjwrtgyndazi", "| +-llwbfjsfqfxpvtyrhaqvu", "| +-n", "| +-mc", "| +-rcpnizeipjbgnx", "+-oc", "| +-cohtoeuaeylpopxv", "| +-ghggrivqsfbjjyvzep", "+-t", " +-nkqsjaagheuhhixhlvmtieqkcqzocggbvgjxezs"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> files = {"/bfs/bxxxprsrnzfrfkuikssen", "/bfs/rxgd/gybttgehovblslsusajjqaudds", "/bfs/rxgd/hag/bjgel/iofdhmgxnhcrtuqpowffjmqtif", "/bfs/rxgd/hag/iniftrzezbfrdtgzngsnpqs", "/bfs/rxgd/hag/keyllovshnkvxmqbpkc", "/ixbaj", "/jfs/bye/ilnyqykoeqsfiilscijymepvwgjxkedglimhkuua", "/jfs/djbiegshdgctm", "/jfs/jf/yfucwmkcnhsiccyunwwmywoswlhi", "/jfs/wx/ggjahf", "/jfs/wx/m", "/jfs/wx/tuxaiqijjtdxsxpfduuypdwjjpmw", "/klsx/cwvli/daofrhkejqtsjtjfwikkszvmozdnjyqfo", "/klsx/cwvli/jel", "/klsx/nj/cjdqj", "/klsx/nknpm/kdev/v", "/klsx/nknpm/shgflu", "/npzhcrqcvxdpntodkndlnncrfmdf", "/okbofrnhupuwpkuefsqkasdubhkqlio", "/vqag/lzitmnwmvuzbflnihaepsudqmkbxbfvmgex", "/vqag/ngd/jwe/jldappgvqfbqoktrkp", "/vqag/ngd/jxv/jdkwr/rury/ymha", "/vqag/ngd/xfydr/iwzlnwmmgvctrklspxfvkmod", "/vqag/nvpkztqoghzwzoqkecpckcukiyqsxjw", "/vqag/pim/cx/zn/nxavommiooddeldoqyqnh", "/vqag/tkhefhbnxuouqcdzncuuyakvhqhvd", "/vqag/vqto/czyrugeghhqgovoayjnedj", "/vqag/vqto/lauwlgq", "/vqag/vqto/zliygkgvnqlagslaslt", "/xqvkdpcbbxvrpwx", "/z/gbdvl/fxeyc/gccqtuicdclqaudnkekwplskujnvsjcfz", "/z/gbdvl/fxeyc/jfelwucqwugcnimqzymfgczhacfb", "/z/gbdvl/fxeyc/q/aw/tbfaupgocthpn", "/z/gbdvl/fxeyc/q/ufeschevxik", "/z/gbdvl/zgdbpv"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bfs", "| +-bxxxprsrnzfrfkuikssen", "| +-rxgd", "| +-gybttgehovblslsusajjqaudds", "| +-hag", "| +-bjgel", "| | +-iofdhmgxnhcrtuqpowffjmqtif", "| +-iniftrzezbfrdtgzngsnpqs", "| +-keyllovshnkvxmqbpkc", "+-ixbaj", "+-jfs", "| +-bye", "| | +-ilnyqykoeqsfiilscijymepvwgjxkedglimhkuua", "| +-djbiegshdgctm", "| +-jf", "| | +-yfucwmkcnhsiccyunwwmywoswlhi", "| +-wx", "| +-ggjahf", "| +-m", "| +-tuxaiqijjtdxsxpfduuypdwjjpmw", "+-klsx", "| +-cwvli", "| | +-daofrhkejqtsjtjfwikkszvmozdnjyqfo", "| | +-jel", "| +-nj", "| | +-cjdqj", "| +-nknpm", "| +-kdev", "| | +-v", "| +-shgflu", "+-npzhcrqcvxdpntodkndlnncrfmdf", "+-okbofrnhupuwpkuefsqkasdubhkqlio", "+-vqag", "| +-lzitmnwmvuzbflnihaepsudqmkbxbfvmgex", "| +-ngd", "| | +-jwe", "| | | +-jldappgvqfbqoktrkp", "| | +-jxv", "| | | +-jdkwr", "| | | +-rury", "| | | +-ymha", "| | +-xfydr", "| | +-iwzlnwmmgvctrklspxfvkmod", "| +-nvpkztqoghzwzoqkecpckcukiyqsxjw", "| +-pim", "| | +-cx", "| | +-zn", "| | +-nxavommiooddeldoqyqnh", "| +-tkhefhbnxuouqcdzncuuyakvhqhvd", "| +-vqto", "| +-czyrugeghhqgovoayjnedj", "| +-lauwlgq", "| +-zliygkgvnqlagslaslt", "+-xqvkdpcbbxvrpwx", "+-z", " +-gbdvl", " +-fxeyc", " | +-gccqtuicdclqaudnkekwplskujnvsjcfz", " | +-jfelwucqwugcnimqzymfgczhacfb", " | +-q", " | +-aw", " | | +-tbfaupgocthpn", " | +-ufeschevxik", " +-zgdbpv"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> files = {"/ai/nxdo/uf/ewunlbl", "/ai/nxdo/uf/gkqxagtn", "/dspppiahpjligwuhqkemxfhatsvxppbqws", "/emorbafcptpgbahqkqmbvmdgljfkyotgifqoulll", "/gupepdksttgjx", "/nk/k/y", "/nk/ma/or/yoknaarwdrfncbaspwitomxejtxmaneh", "/nk/ma/sfjsttzspkxcasvismiwqstzyccasbmweptjxuipwwh", "/tajto/dvusp/h/dmnsb/qj", "/tajto/dvusp/rc/ehmwgxskqxprknhyarn", "/tajto/qpfujshojo", "/tajto/tegxq/rfus/gsplpxyzjnuekqdvchencchnmij", "/ua/pywmdzkzzkhrdgfbu", "/ua/xhgjgompzqptxmbbcdtwqsampxsfqkrrenacx", "/ukv/b/pfloduowqomawoxdpjzlhxrnrouu", "/ukv/py/xtgbsvmaqbcrz", "/ukv/tht/mvvdnvofeqbihrnmkxfgvrkmiqu", "/ukv/v/yyoeg/spgawivcmzqindpdifoyesklalzbcypuc", "/vwplvwgtudslfluhrtfgvriuiautihwsywh", "/wwhvs/fxzth/ebqo", "/wwhvs/fxzth/fnobosmqincstyytvbrqjlpauxpzf", "/wwhvs/plny/dk/psfd/gwkwmaujnyinyvbylopntp", "/wwhvs/plny/dk/psfd/oljger", "/wwhvs/plny/qy", "/wwhvs/plny/tvltwelgbqjcpcptdjlgeykftrhgsmcjaoem", "/wwhvs/plny/unosjrujaxypkcrdlwqaqhugyyheuhitfkj", "/wwhvs/uvf/uteypggizzwreknzgy", "/wwhvs/xau/pzximeh", "/wwhvs/xau/tacvsifj", "/xbypfpmktgkafypsompzfzachsxvb", "/ybotheminqkabwkezazkdkxzxpvbyfspttpgvfsqvrrm", "/ylwj/g/rqpmcclngjtuuinzwwpivsupexhzwprw", "/ylwj/g/ygobiikfdzbayfmxxd"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-ai", "| +-nxdo", "| +-uf", "| +-ewunlbl", "| +-gkqxagtn", "+-dspppiahpjligwuhqkemxfhatsvxppbqws", "+-emorbafcptpgbahqkqmbvmdgljfkyotgifqoulll", "+-gupepdksttgjx", "+-nk", "| +-k", "| | +-y", "| +-ma", "| +-or", "| | +-yoknaarwdrfncbaspwitomxejtxmaneh", "| +-sfjsttzspkxcasvismiwqstzyccasbmweptjxuipwwh", "+-tajto", "| +-dvusp", "| | +-h", "| | | +-dmnsb", "| | | +-qj", "| | +-rc", "| | +-ehmwgxskqxprknhyarn", "| +-qpfujshojo", "| +-tegxq", "| +-rfus", "| +-gsplpxyzjnuekqdvchencchnmij", "+-ua", "| +-pywmdzkzzkhrdgfbu", "| +-xhgjgompzqptxmbbcdtwqsampxsfqkrrenacx", "+-ukv", "| +-b", "| | +-pfloduowqomawoxdpjzlhxrnrouu", "| +-py", "| | +-xtgbsvmaqbcrz", "| +-tht", "| | +-mvvdnvofeqbihrnmkxfgvrkmiqu", "| +-v", "| +-yyoeg", "| +-spgawivcmzqindpdifoyesklalzbcypuc", "+-vwplvwgtudslfluhrtfgvriuiautihwsywh", "+-wwhvs", "| +-fxzth", "| | +-ebqo", "| | +-fnobosmqincstyytvbrqjlpauxpzf", "| +-plny", "| | +-dk", "| | | +-psfd", "| | | +-gwkwmaujnyinyvbylopntp", "| | | +-oljger", "| | +-qy", "| | +-tvltwelgbqjcpcptdjlgeykftrhgsmcjaoem", "| | +-unosjrujaxypkcrdlwqaqhugyyheuhitfkj", "| +-uvf", "| | +-uteypggizzwreknzgy", "| +-xau", "| +-pzximeh", "| +-tacvsifj", "+-xbypfpmktgkafypsompzfzachsxvb", "+-ybotheminqkabwkezazkdkxzxpvbyfspttpgvfsqvrrm", "+-ylwj", " +-g", " +-rqpmcclngjtuuinzwwpivsupexhzwprw", " +-ygobiikfdzbayfmxxd"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> files = {"/dh/hm", "/dh/mibhcbsgjumvgivtqtrmuruibvwsaropai", "/dh/ozswytynzcoayvvuvqd", "/dh/rvbbtfsgjvzrlkjzwtkqczguqihrupjdmiyqva", "/dh/tlnstowzhkcblhwj", "/dh/tusi/dzfyoqsufjfjsbdxzzsrnhscyhfz", "/dh/xsgxc/k/mcmbfhkexbqcprqqhqvubjtcfazztpf", "/dh/xsgxc/ueh/jpj/uytwkhgzgzmwrqlnlowkmqwdftjn", "/dsmsdgosgniwrklavmksrziikuxpitip", "/dyanbvzcguffbanrt", "/fryemqdkqvqvjxqgicux", "/gf/oiry/ae/ca/z", "/gf/oiry/ae/iem/zfvxs", "/gf/oiry/cbdfjwxgt", "/gf/oiry/rseaqwcwtqhdbrvux", "/j/hqskcvyhgmfxrjddgbkzmtkrygfdklcxumxsai", "/j/itu/lbzohnszsosqashltwcugjfcktuu", "/j/ll/tg/tcwgqhnwvbkjhyhvfcfryvu", "/j/nbwgnghmjwdkmbmjlrjzuninwktryd", "/j/nhlotmtdtwmoefm", "/j/ou", "/j/u/cclhb/gc/s", "/j/u/cclhb/mbhommntzlea", "/j/u/cclhb/mr/m/tyiahxftveyzpuykqdlpjldyqydfz", "/j/uxjhxbzrbxhibdqbiyrhbsretahacsqepjzmhbnbaz", "/j/vorkuevgypzznnjyatrnfjoyuqiyigl", "/jgrtymjjlpxmn", "/jrdovexlygsibjvevexrt", "/rlkcjlgfksvybohsacqiqyqijragezv", "/s", "/v", "/zhrxglkxgphfkecrjtlkxbhfmrzbgm"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-dh", "| +-hm", "| +-mibhcbsgjumvgivtqtrmuruibvwsaropai", "| +-ozswytynzcoayvvuvqd", "| +-rvbbtfsgjvzrlkjzwtkqczguqihrupjdmiyqva", "| +-tlnstowzhkcblhwj", "| +-tusi", "| | +-dzfyoqsufjfjsbdxzzsrnhscyhfz", "| +-xsgxc", "| +-k", "| | +-mcmbfhkexbqcprqqhqvubjtcfazztpf", "| +-ueh", "| +-jpj", "| +-uytwkhgzgzmwrqlnlowkmqwdftjn", "+-dsmsdgosgniwrklavmksrziikuxpitip", "+-dyanbvzcguffbanrt", "+-fryemqdkqvqvjxqgicux", "+-gf", "| +-oiry", "| +-ae", "| | +-ca", "| | | +-z", "| | +-iem", "| | +-zfvxs", "| +-cbdfjwxgt", "| +-rseaqwcwtqhdbrvux", "+-j", "| +-hqskcvyhgmfxrjddgbkzmtkrygfdklcxumxsai", "| +-itu", "| | +-lbzohnszsosqashltwcugjfcktuu", "| +-ll", "| | +-tg", "| | +-tcwgqhnwvbkjhyhvfcfryvu", "| +-nbwgnghmjwdkmbmjlrjzuninwktryd", "| +-nhlotmtdtwmoefm", "| +-ou", "| +-u", "| | +-cclhb", "| | +-gc", "| | | +-s", "| | +-mbhommntzlea", "| | +-mr", "| | +-m", "| | +-tyiahxftveyzpuykqdlpjldyqydfz", "| +-uxjhxbzrbxhibdqbiyrhbsretahacsqepjzmhbnbaz", "| +-vorkuevgypzznnjyatrnfjoyuqiyigl", "+-jgrtymjjlpxmn", "+-jrdovexlygsibjvevexrt", "+-rlkcjlgfksvybohsacqiqyqijragezv", "+-s", "+-v", "+-zhrxglkxgphfkecrjtlkxbhfmrzbgm"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> files = {"/dxjpxifc", "/epp", "/ewomtuqhmvhxaqtgxxwinxstgetqdexsltmtpplljybldpiwh", "/gzztanfebbrjooxiqgzxlstsnxyzcvqusrsmgxziyplucm", "/k/ei/jxmca/pjsdphspigyqrfayrmaqvkctpvsongxmp", "/k/ei/r/alhouqklvyzzcpsnxdazxuhbaqwbkv", "/k/ei/r/zmqvvifsqlcs", "/k/jlizgpezywlpng", "/k/mokviucndj", "/k/pceoqywyakiuhnsc", "/k/v/aetw/rbm/btphdmq", "/k/v/drnu/bzejbwifsedrakhorvizquhsjyrzzdjuhlroqe", "/k/v/drnu/hxxvoqhtwackukrozpfrjtrvabfxguadtkxtyl", "/k/v/jhugljobzvuqxjqzgpxlvkuaamzgzasabxoacjaohjjxr", "/k/v/mql/fsiuahgfkvumgv", "/k/v/qv/gtpqf/lk/mbglfwqubcgungamjxmgpqjxgdqfutl", "/k/yblt/u/j/wfpjjfqzcvkdbpprrsjjisulydkbkrifq", "/k/yblt/u/zcyzzqogupopahksufbwxjtybus", "/lgnbhvlczbxuoesxfcshuktagyjmaavzayyxuszspqwdp", "/lka", "/pxoukaqbfivskuq", "/vuwoxwbkjnagrzeigulohtnausrqkvbtbtwqqxrxj", "/w/d/yggwcbreivhnmwvoyhourivurjdgvnvpzcytkfwmlsr", "/w/gridx/bybs", "/w/gridx/idvquwokzkzuzsfalommqssmnktjpsm", "/w/kmrvpbssfxuljzkw", "/w/sfreo/j/gknoerciqjemqdhsnoghnshiqnjebmbbwzno", "/ymbgt/albmhxmiwizqmdsppwsvyzmyhetwo", "/ymbgt/daqozhzxyfyqgsuwxj", "/ymbgt/jjdmjqrfxaaiqqoysdxntvbas", "/ymbgt/jmpuqdmgdwgzbmapgkqswhbci", "/ymbgt/kluaox", "/ymbgt/nwlnnbvyu", "/ymbgt/nyjtqbldvhpcfxyqjrtzzbgelcsi", "/ymbgt/ptqcwiurcutwcdpg", "/ymbgt/qpbtukllltrqunkykbnfxeybsy", "/ymbgt/rjnqgtobtzcaosfjiyewpispvsqopaeltabfitm", "/ymbgt/tld", "/ymbgt/uvssffcwyytf", "/ymbgt/vojcnmzbwksathtkdkwjaozwmurgwjjctetafle", "/ymbgt/vwaynyigos", "/ymbgt/yinoz", "/yuv/fll/bivzedefptpahqfaoxabxjlokmzqqoedx", "/yuv/fll/omqcz/dvopnyhknopmmqiirzycjlrrttqznskxu", "/yuv/fll/svz", "/yuv/fll/ywe/wjawminvlovtrpygiztlvaliklksnzqux", "/yuv/hmd/zqkxxnfvlkxn", "/yuv/p/fz/kbvcyugdxtqabcuhcjkozmcjvobwqvwlaz", "/yuv/p/gfpzlizftoapqjsxcecgfq", "/yuv/xfbhy"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-dxjpxifc", "+-epp", "+-ewomtuqhmvhxaqtgxxwinxstgetqdexsltmtpplljybldpiwh", "+-gzztanfebbrjooxiqgzxlstsnxyzcvqusrsmgxziyplucm", "+-k", "| +-ei", "| | +-jxmca", "| | | +-pjsdphspigyqrfayrmaqvkctpvsongxmp", "| | +-r", "| | +-alhouqklvyzzcpsnxdazxuhbaqwbkv", "| | +-zmqvvifsqlcs", "| +-jlizgpezywlpng", "| +-mokviucndj", "| +-pceoqywyakiuhnsc", "| +-v", "| | +-aetw", "| | | +-rbm", "| | | +-btphdmq", "| | +-drnu", "| | | +-bzejbwifsedrakhorvizquhsjyrzzdjuhlroqe", "| | | +-hxxvoqhtwackukrozpfrjtrvabfxguadtkxtyl", "| | +-jhugljobzvuqxjqzgpxlvkuaamzgzasabxoacjaohjjxr", "| | +-mql", "| | | +-fsiuahgfkvumgv", "| | +-qv", "| | +-gtpqf", "| | +-lk", "| | +-mbglfwqubcgungamjxmgpqjxgdqfutl", "| +-yblt", "| +-u", "| +-j", "| | +-wfpjjfqzcvkdbpprrsjjisulydkbkrifq", "| +-zcyzzqogupopahksufbwxjtybus", "+-lgnbhvlczbxuoesxfcshuktagyjmaavzayyxuszspqwdp", "+-lka", "+-pxoukaqbfivskuq", "+-vuwoxwbkjnagrzeigulohtnausrqkvbtbtwqqxrxj", "+-w", "| +-d", "| | +-yggwcbreivhnmwvoyhourivurjdgvnvpzcytkfwmlsr", "| +-gridx", "| | +-bybs", "| | +-idvquwokzkzuzsfalommqssmnktjpsm", "| +-kmrvpbssfxuljzkw", "| +-sfreo", "| +-j", "| +-gknoerciqjemqdhsnoghnshiqnjebmbbwzno", "+-ymbgt", "| +-albmhxmiwizqmdsppwsvyzmyhetwo", "| +-daqozhzxyfyqgsuwxj", "| +-jjdmjqrfxaaiqqoysdxntvbas", "| +-jmpuqdmgdwgzbmapgkqswhbci", "| +-kluaox", "| +-nwlnnbvyu", "| +-nyjtqbldvhpcfxyqjrtzzbgelcsi", "| +-ptqcwiurcutwcdpg", "| +-qpbtukllltrqunkykbnfxeybsy", "| +-rjnqgtobtzcaosfjiyewpispvsqopaeltabfitm", "| +-tld", "| +-uvssffcwyytf", "| +-vojcnmzbwksathtkdkwjaozwmurgwjjctetafle", "| +-vwaynyigos", "| +-yinoz", "+-yuv", " +-fll", " | +-bivzedefptpahqfaoxabxjlokmzqqoedx", " | +-omqcz", " | | +-dvopnyhknopmmqiirzycjlrrttqznskxu", " | +-svz", " | +-ywe", " | +-wjawminvlovtrpygiztlvaliklksnzqux", " +-hmd", " | +-zqkxxnfvlkxn", " +-p", " | +-fz", " | | +-kbvcyugdxtqabcuhcjkozmcjvobwqvwlaz", " | +-gfpzlizftoapqjsxcecgfq", " +-xfbhy"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> files = {"/ggjsq/i/rpgxucoxijzyqmgocfemsbpszxkyethoma", "/ggjsq/jxzwf/mw/szhsqlbwpvgvej", "/r/fqh/s/bovs/hawnr", "/v/nwdfhzhpusozxrhfwlflqkwsiqxxwj", "/whebe/dnomeweltdtxynsvkchvrb", "/whebe/frsn", "/yb/sxevnyyipvigupxfyflysuhypnapsphtbonjoe", "/zcmzejod"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-ggjsq", "| +-i", "| | +-rpgxucoxijzyqmgocfemsbpszxkyethoma", "| +-jxzwf", "| +-mw", "| +-szhsqlbwpvgvej", "+-r", "| +-fqh", "| +-s", "| +-bovs", "| +-hawnr", "+-v", "| +-nwdfhzhpusozxrhfwlflqkwsiqxxwj", "+-whebe", "| +-dnomeweltdtxynsvkchvrb", "| +-frsn", "+-yb", "| +-sxevnyyipvigupxfyflysuhypnapsphtbonjoe", "+-zcmzejod"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> files = {"/akrbf/bid/dnehtwfcwzcgboa", "/akrbf/rmmv/mxhhksruerqnev", "/bkwtuvjovplxhvkybrczxjadxmhpmdtlremgdj", "/d/c/uijbn/krhlkrebzcyimbebgoygeru", "/dfi/nes/y/vakfllaaaibfcnksdbk", "/hhzpnylhzzvnxxpskaffbhaxilckkvzs", "/kemhy/b/lag/bsoauctlkdlfbdeayqjggohqicrvyjbfdty", "/kemhy/pbexa/aylkybwbympmgka", "/kemhy/uwv/ow", "/ksn/lobj/epylz/hxjszabbwdunbtnf", "/p/yhve/c/jxfmqqxycgctisrvpbgpgt", "/p/yhve/c/yrooarsywromlsrwcbzolmoqrb", "/p/yhve/c/zddxaofy", "/rkspb/csdhhgxkaltasvfdni", "/wbys/hmqymijjlonmaudaygwikadbyzzzzfspoiv", "/wbys/wx/bzsw/xwobxxdixmvro", "/wbys/wx/mazfjxjjyjqphvbtiieaddlwp", "/xqc/jhgnb/avyzzsuodq", "/xqc/jhgnb/ienc/a/vnhm/baiizdjqymlugyhaxul", "/xqc/lbr/fo/tlezmiwe", "/xqc/swd/gud/y/asrdx/qvvpeytsfnbbjohjluueod", "/xqc/swd/ivttqejzgqcbtqkgktzhbwnqnxmyknsxeiyxrswgv", "/xqc/swd/njcvblipfhhpgziyxzlz", "/zhbo/eaqcwopezguggavtlhqvavgyhp"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-akrbf", "| +-bid", "| | +-dnehtwfcwzcgboa", "| +-rmmv", "| +-mxhhksruerqnev", "+-bkwtuvjovplxhvkybrczxjadxmhpmdtlremgdj", "+-d", "| +-c", "| +-uijbn", "| +-krhlkrebzcyimbebgoygeru", "+-dfi", "| +-nes", "| +-y", "| +-vakfllaaaibfcnksdbk", "+-hhzpnylhzzvnxxpskaffbhaxilckkvzs", "+-kemhy", "| +-b", "| | +-lag", "| | +-bsoauctlkdlfbdeayqjggohqicrvyjbfdty", "| +-pbexa", "| | +-aylkybwbympmgka", "| +-uwv", "| +-ow", "+-ksn", "| +-lobj", "| +-epylz", "| +-hxjszabbwdunbtnf", "+-p", "| +-yhve", "| +-c", "| +-jxfmqqxycgctisrvpbgpgt", "| +-yrooarsywromlsrwcbzolmoqrb", "| +-zddxaofy", "+-rkspb", "| +-csdhhgxkaltasvfdni", "+-wbys", "| +-hmqymijjlonmaudaygwikadbyzzzzfspoiv", "| +-wx", "| +-bzsw", "| | +-xwobxxdixmvro", "| +-mazfjxjjyjqphvbtiieaddlwp", "+-xqc", "| +-jhgnb", "| | +-avyzzsuodq", "| | +-ienc", "| | +-a", "| | +-vnhm", "| | +-baiizdjqymlugyhaxul", "| +-lbr", "| | +-fo", "| | +-tlezmiwe", "| +-swd", "| +-gud", "| | +-y", "| | +-asrdx", "| | +-qvvpeytsfnbbjohjluueod", "| +-ivttqejzgqcbtqkgktzhbwnqnxmyknsxeiyxrswgv", "| +-njcvblipfhhpgziyxzlz", "+-zhbo", " +-eaqcwopezguggavtlhqvavgyhp"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> files = {"/drsn/oxamcqivrwqhnbnxwjdqnlcolto", "/j/vdl/p/tyzmfbcfzuovlbmxkvyncfzzovnjrcdxr", "/jy/tgmvoixqcebcxvwsnhtbpgvumcuggmayhcwcgglldlgcf", "/n/px/f/zduwnildfohtmrnvpeghz", "/n/z/llo/myzt/skunrrdubskwufqamernecnfyfahazpikj", "/polr/tifam/ebagv", "/polr/vlnxb/kte/oe/jm/j/qciucruvdssvco", "/pyy/dwlyhofezzhsobqtsrturbzmmibckhzder", "/pyy/idnhejthhkzhyyhlgezgryjyu", "/vmovpbgomfovsilrdbsksireqovcqzwerrlprcoetiugpedx", "/vw/vuzctinsyhnuxyziebluouqylwunetrfggsvzjsq", "/wngs/nqyp/zdveuxpfpegnaliiiqydaaytfssbnljmsrzztys", "/wngs/rxmabljhrshqhrgorsqlsrsgkamlhloxewxwi", "/z/fxwtkwjyqovvhangza", "/z/kv/qd/jrs/xcjtbresfw"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-drsn", "| +-oxamcqivrwqhnbnxwjdqnlcolto", "+-j", "| +-vdl", "| +-p", "| +-tyzmfbcfzuovlbmxkvyncfzzovnjrcdxr", "+-jy", "| +-tgmvoixqcebcxvwsnhtbpgvumcuggmayhcwcgglldlgcf", "+-n", "| +-px", "| | +-f", "| | +-zduwnildfohtmrnvpeghz", "| +-z", "| +-llo", "| +-myzt", "| +-skunrrdubskwufqamernecnfyfahazpikj", "+-polr", "| +-tifam", "| | +-ebagv", "| +-vlnxb", "| +-kte", "| +-oe", "| +-jm", "| +-j", "| +-qciucruvdssvco", "+-pyy", "| +-dwlyhofezzhsobqtsrturbzmmibckhzder", "| +-idnhejthhkzhyyhlgezgryjyu", "+-vmovpbgomfovsilrdbsksireqovcqzwerrlprcoetiugpedx", "+-vw", "| +-vuzctinsyhnuxyziebluouqylwunetrfggsvzjsq", "+-wngs", "| +-nqyp", "| | +-zdveuxpfpegnaliiiqydaaytfssbnljmsrzztys", "| +-rxmabljhrshqhrgorsqlsrsgkamlhloxewxwi", "+-z", " +-fxwtkwjyqovvhangza", " +-kv", " +-qd", " +-jrs", " +-xcjtbresfw"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> files = {"/a/xit/ml/cstmbfwrlwxvrorffqetr", "/aoal/kggccrelx", "/mqwii/hvuu/iodkzxuxngszt", "/mqwii/twsx/hr/ulndt/jl/ewerlcfqs", "/qzr/l/cxxcy/m/cmheohsw", "/qzr/snh/u/fa/pcepn/gqpdslagnvgvmeroeiefhahwuamswi", "/t/bieds/cwup/qgfkdrk", "/tr/nz/ostzc/xhq/vntnjvcsey", "/tr/r/wrlh/pwxaig", "/trccd/egdx", "/trccd/f", "/trccd/zibqd/kuquw/ox/lf/a/eacekirbkgknwhsmfumtnm", "/utrw/zvth/g", "/utrw/zvth/xvqqptuzkfmfierftrflbqjqmjbfywdrdrqoxx", "/wmjxvmjifmffjaqzqblqyvwzehdxgntbruti", "/x/wxcppdrjyh"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-xit", "| +-ml", "| +-cstmbfwrlwxvrorffqetr", "+-aoal", "| +-kggccrelx", "+-mqwii", "| +-hvuu", "| | +-iodkzxuxngszt", "| +-twsx", "| +-hr", "| +-ulndt", "| +-jl", "| +-ewerlcfqs", "+-qzr", "| +-l", "| | +-cxxcy", "| | +-m", "| | +-cmheohsw", "| +-snh", "| +-u", "| +-fa", "| +-pcepn", "| +-gqpdslagnvgvmeroeiefhahwuamswi", "+-t", "| +-bieds", "| +-cwup", "| +-qgfkdrk", "+-tr", "| +-nz", "| | +-ostzc", "| | +-xhq", "| | +-vntnjvcsey", "| +-r", "| +-wrlh", "| +-pwxaig", "+-trccd", "| +-egdx", "| +-f", "| +-zibqd", "| +-kuquw", "| +-ox", "| +-lf", "| +-a", "| +-eacekirbkgknwhsmfumtnm", "+-utrw", "| +-zvth", "| +-g", "| +-xvqqptuzkfmfierftrflbqjqmjbfywdrdrqoxx", "+-wmjxvmjifmffjaqzqblqyvwzehdxgntbruti", "+-x", " +-wxcppdrjyh"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> files = {"/aw/z/yhgelsmtru", "/c/tiyns/fnze", "/c/wufsivldojwovxcujzsjcd", "/dlvs/fs/yyovo/w", "/dlvs/fw/l/ftpk/npmzd/sa/azdrhllurohx", "/dzhlfsjnpdscczurnvpoebbf", "/gcxxr/ihdfzcpqghcomls", "/kvyvjiibobqyly", "/qijof/fqirx/gzoyrieptmpcswcfsfwyeexrbemjncvcgzsz", "/qijof/fqirx/wtitxhzwoljrc", "/qijof/j/z/jrtkdhpuxbnlkvluqjdrhrgpon", "/qijof/qmz"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-aw", "| +-z", "| +-yhgelsmtru", "+-c", "| +-tiyns", "| | +-fnze", "| +-wufsivldojwovxcujzsjcd", "+-dlvs", "| +-fs", "| | +-yyovo", "| | +-w", "| +-fw", "| +-l", "| +-ftpk", "| +-npmzd", "| +-sa", "| +-azdrhllurohx", "+-dzhlfsjnpdscczurnvpoebbf", "+-gcxxr", "| +-ihdfzcpqghcomls", "+-kvyvjiibobqyly", "+-qijof", " +-fqirx", " | +-gzoyrieptmpcswcfsfwyeexrbemjncvcgzsz", " | +-wtitxhzwoljrc", " +-j", " | +-z", " | +-jrtkdhpuxbnlkvluqjdrhrgpon", " +-qmz"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> files = {"/bdocykhbgajjvlpubancbxzcffcwyhdistbwnhepafytls", "/epvfccbapyczmudvejpdp", "/fughm/dvxa/bgvoniqvremkytdoelocycmlokiavrpmoonszj", "/fughm/dvxa/ebmquyledbjrvtqreejyajrttjbssnwuu", "/fughm/dvxa/zqpgcnaysuyja", "/fughm/ke/m/fbjqduxiszztlx", "/fughm/ke/m/fwsqc", "/fughm/ke/qz/l/d/lnfd/ff", "/fughm/ke/ug/uujd/ggsd/utdji/sqwaentvyxhlzvkkb", "/fughm/trbzqgqgsywdjltrpwmxpgsyvyzqwteocagvl", "/jyqom/nri/pj/xwccpayc", "/kdhbd/efxtlrvykefmoeewdvjlwpzhsj", "/kdhbd/hbzwfbjevuxebcarfmenrcvlezxtqwfcoerhslg", "/kdhbd/iboriwmtngmeotkrizpflgxfwgbbcfv", "/kdhbd/kobmegymw", "/kdhbd/xhbsmowccvetvot", "/kdhbd/zfgtwofblhgjhsnrnxthcdxqeymubpavwaufgboyov", "/modmummujrod", "/o/eiui", "/o/eznepthkidgupfblkwgpkzmhuisjosymymavzwqampt", "/o/krafsflfeztavsr", "/o/ppi", "/rih/jl", "/rva/oj/ov", "/rva/uwuwq/cdlhkclvfgxdivgjbefizpgidmduyrluwwc", "/rva/wfnpdtpdqxassqqxisylhkwjxfhlwtsvntobljs", "/s/jlfe/lhzxkphfqoczyenxephkvmjokctkkcdxawqw", "/s/m/f/ourbkfpgfgcielkdvnewdznnl", "/thc", "/yg/g/xtthsfcpoischnfblevgvcpdvclawy", "/yg/g/z/bguslbrrxsdgnchhtvjeqjvwbh", "/yg/lf/chbmreofkfv", "/yg/lf/krfl/cqupeuvsypfp", "/yg/lf/krfl/q", "/yg/zamqncbatpwzbwskuhhsacfnmbemlrebdtlt"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bdocykhbgajjvlpubancbxzcffcwyhdistbwnhepafytls", "+-epvfccbapyczmudvejpdp", "+-fughm", "| +-dvxa", "| | +-bgvoniqvremkytdoelocycmlokiavrpmoonszj", "| | +-ebmquyledbjrvtqreejyajrttjbssnwuu", "| | +-zqpgcnaysuyja", "| +-ke", "| | +-m", "| | | +-fbjqduxiszztlx", "| | | +-fwsqc", "| | +-qz", "| | | +-l", "| | | +-d", "| | | +-lnfd", "| | | +-ff", "| | +-ug", "| | +-uujd", "| | +-ggsd", "| | +-utdji", "| | +-sqwaentvyxhlzvkkb", "| +-trbzqgqgsywdjltrpwmxpgsyvyzqwteocagvl", "+-jyqom", "| +-nri", "| +-pj", "| +-xwccpayc", "+-kdhbd", "| +-efxtlrvykefmoeewdvjlwpzhsj", "| +-hbzwfbjevuxebcarfmenrcvlezxtqwfcoerhslg", "| +-iboriwmtngmeotkrizpflgxfwgbbcfv", "| +-kobmegymw", "| +-xhbsmowccvetvot", "| +-zfgtwofblhgjhsnrnxthcdxqeymubpavwaufgboyov", "+-modmummujrod", "+-o", "| +-eiui", "| +-eznepthkidgupfblkwgpkzmhuisjosymymavzwqampt", "| +-krafsflfeztavsr", "| +-ppi", "+-rih", "| +-jl", "+-rva", "| +-oj", "| | +-ov", "| +-uwuwq", "| | +-cdlhkclvfgxdivgjbefizpgidmduyrluwwc", "| +-wfnpdtpdqxassqqxisylhkwjxfhlwtsvntobljs", "+-s", "| +-jlfe", "| | +-lhzxkphfqoczyenxephkvmjokctkkcdxawqw", "| +-m", "| +-f", "| +-ourbkfpgfgcielkdvnewdznnl", "+-thc", "+-yg", " +-g", " | +-xtthsfcpoischnfblevgvcpdvclawy", " | +-z", " | +-bguslbrrxsdgnchhtvjeqjvwbh", " +-lf", " | +-chbmreofkfv", " | +-krfl", " | +-cqupeuvsypfp", " | +-q", " +-zamqncbatpwzbwskuhhsacfnmbemlrebdtlt"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> files = {"/bgowd/mrsd/m/qfviufivftnrgztfgljw", "/bgowd/pwabivpdijefqyflowrndcfwaxorziamjgwevda", "/brly/hcclc/ycxryfbhwfatmotuegsmsnurszfs", "/camqd/n/st/akpjzluzpmmkrsjxoqnzjpxtgmbh", "/camqd/n/st/vfvakajhpeavfjanopclcwrvb", "/camqd/wgvp/emazjautrnoxgjkyqunhkfhgq", "/ewi/dhd/edzy/meccfrtka", "/fsdwmlapfzycopcwjxijx", "/kzbos/anjbd/hikcsiewofqewto", "/kzbos/fljpwodlv", "/kzbos/kzxybdcsxmrcjulxiouukekrcgazzftjwfci", "/kzbos/mm/ei", "/qiuco/dkswuptrothhdqowvokecy", "/s/lbm/vxkztkuuuebzsiquiapuqauyrnidwewwtcwse", "/s/sehcobkaigpzovvnxhytuqehqryafeuzgrkduowhwwxtg", "/wlxdv/mjr/qarru/de/fhktysh", "/zpzxo/fqkkzhjnfrjjisywvt", "/zpzxo/rnedujdtvyuyecjgqqeoiycnoqjb", "/zpzxo/xxmnitzkvvwyrnzmgviwnuspofxstvzigch"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bgowd", "| +-mrsd", "| | +-m", "| | +-qfviufivftnrgztfgljw", "| +-pwabivpdijefqyflowrndcfwaxorziamjgwevda", "+-brly", "| +-hcclc", "| +-ycxryfbhwfatmotuegsmsnurszfs", "+-camqd", "| +-n", "| | +-st", "| | +-akpjzluzpmmkrsjxoqnzjpxtgmbh", "| | +-vfvakajhpeavfjanopclcwrvb", "| +-wgvp", "| +-emazjautrnoxgjkyqunhkfhgq", "+-ewi", "| +-dhd", "| +-edzy", "| +-meccfrtka", "+-fsdwmlapfzycopcwjxijx", "+-kzbos", "| +-anjbd", "| | +-hikcsiewofqewto", "| +-fljpwodlv", "| +-kzxybdcsxmrcjulxiouukekrcgazzftjwfci", "| +-mm", "| +-ei", "+-qiuco", "| +-dkswuptrothhdqowvokecy", "+-s", "| +-lbm", "| | +-vxkztkuuuebzsiquiapuqauyrnidwewwtcwse", "| +-sehcobkaigpzovvnxhytuqehqryafeuzgrkduowhwwxtg", "+-wlxdv", "| +-mjr", "| +-qarru", "| +-de", "| +-fhktysh", "+-zpzxo", " +-fqkkzhjnfrjjisywvt", " +-rnedujdtvyuyecjgqqeoiycnoqjb", " +-xxmnitzkvvwyrnzmgviwnuspofxstvzigch"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> files = {"/feyrbinaohqlqmbphahncbywjruddl", "/gaxbpnq", "/gwk/hig/oftpr/ngvznvsxzxwdspchsmztj", "/gwk/hig/vzowt/hxkmqxk", "/gwk/hlibrqsgfyxmapkeoyajghellnyvsygsjlpbeszu", "/gwk/hwje/ezj/zeljy", "/gwk/molow/rvztbjqbu", "/gwk/n/tuebhurvcqrsnzvtujihbwhmnjxc", "/i/a/upjitv", "/i/a/zwbs", "/i/fnxth/mcndcjcjqqyby", "/i/m/gsbwnnvsbvkqjgoxybhsxzcxqkwocdkntzjl", "/i/u/macs/luayjysziwduaqxuyhuggfikfxxyayd", "/i/yjbie/q/apsaftrtzqurgouqgxnkzqpbnkoxbrk", "/i/yjbie/q/cbuwycmvujtbidrqkormntmtwcn", "/j/fj/mklighmqkm", "/j/uktswreowahnodxuqokxyzmyx", "/j/vvxo/ro/ljybbdncvbjarduzt", "/j/wrpi/ybl/gvj/cgxm/f/l/ijhjwxvdsbap", "/o/cyljzykylqpihqlwhjlqvsojrgdlsgvglhjsiipnqjuzfkz", "/o/grmoxuckpahbqznbsjduhhcgwc", "/o/nctfp", "/o/nuvgvueeqwgoeslppncuqmpkimwjkyoezvdix", "/o/shidrh", "/o/wvzavgjoydvcebklsahfavfdpgbjpnxigppi", "/o/zeheorhxugyiafcz", "/p/dpmb/jemrrrsjdtubiscqrvqapmvpav", "/p/fijwwi", "/p/gkr/dlx/oqfsufojxksikvfmelwlvwfsdcxbwlhaae", "/p/gkr/dlx/wvfyz", "/p/komvroncjshwhagsljregkdvqfyoqwangvj", "/p/pg/rxajmztrfvzorlnocsmuzsjmtxxcmjsljhzlcwbooh", "/p/pg/tngfmnzvfnymcslqcybmtmbatzirrhzwu", "/p/pg/tpgq", "/p/pg/xxmbfqzfrqxgauc", "/sbcurvvuhqoj", "/sf", "/upglhdqamdjhvcnngzfpsfzm", "/wjexlr", "/xhcpzfskggpxqcxuomplqmbhernozcrgbglwytzeam", "/yvaslhaspsncrbrtlfhpwvgzvnjduzmutkwmnt", "/z/dgmgh/yxbgdlsoltmvjdm", "/z/hjqr/oucwdoplmd", "/z/nprabtkttzylepyvwigymiliagcfthuvjojdjyoydupjag"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-feyrbinaohqlqmbphahncbywjruddl", "+-gaxbpnq", "+-gwk", "| +-hig", "| | +-oftpr", "| | | +-ngvznvsxzxwdspchsmztj", "| | +-vzowt", "| | +-hxkmqxk", "| +-hlibrqsgfyxmapkeoyajghellnyvsygsjlpbeszu", "| +-hwje", "| | +-ezj", "| | +-zeljy", "| +-molow", "| | +-rvztbjqbu", "| +-n", "| +-tuebhurvcqrsnzvtujihbwhmnjxc", "+-i", "| +-a", "| | +-upjitv", "| | +-zwbs", "| +-fnxth", "| | +-mcndcjcjqqyby", "| +-m", "| | +-gsbwnnvsbvkqjgoxybhsxzcxqkwocdkntzjl", "| +-u", "| | +-macs", "| | +-luayjysziwduaqxuyhuggfikfxxyayd", "| +-yjbie", "| +-q", "| +-apsaftrtzqurgouqgxnkzqpbnkoxbrk", "| +-cbuwycmvujtbidrqkormntmtwcn", "+-j", "| +-fj", "| | +-mklighmqkm", "| +-uktswreowahnodxuqokxyzmyx", "| +-vvxo", "| | +-ro", "| | +-ljybbdncvbjarduzt", "| +-wrpi", "| +-ybl", "| +-gvj", "| +-cgxm", "| +-f", "| +-l", "| +-ijhjwxvdsbap", "+-o", "| +-cyljzykylqpihqlwhjlqvsojrgdlsgvglhjsiipnqjuzfkz", "| +-grmoxuckpahbqznbsjduhhcgwc", "| +-nctfp", "| +-nuvgvueeqwgoeslppncuqmpkimwjkyoezvdix", "| +-shidrh", "| +-wvzavgjoydvcebklsahfavfdpgbjpnxigppi", "| +-zeheorhxugyiafcz", "+-p", "| +-dpmb", "| | +-jemrrrsjdtubiscqrvqapmvpav", "| +-fijwwi", "| +-gkr", "| | +-dlx", "| | +-oqfsufojxksikvfmelwlvwfsdcxbwlhaae", "| | +-wvfyz", "| +-komvroncjshwhagsljregkdvqfyoqwangvj", "| +-pg", "| +-rxajmztrfvzorlnocsmuzsjmtxxcmjsljhzlcwbooh", "| +-tngfmnzvfnymcslqcybmtmbatzirrhzwu", "| +-tpgq", "| +-xxmbfqzfrqxgauc", "+-sbcurvvuhqoj", "+-sf", "+-upglhdqamdjhvcnngzfpsfzm", "+-wjexlr", "+-xhcpzfskggpxqcxuomplqmbhernozcrgbglwytzeam", "+-yvaslhaspsncrbrtlfhpwvgzvnjduzmutkwmnt", "+-z", " +-dgmgh", " | +-yxbgdlsoltmvjdm", " +-hjqr", " | +-oucwdoplmd", " +-nprabtkttzylepyvwigymiliagcfthuvjojdjyoydupjag"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> files = {"/de/neyqszmnqstnh", "/g/m/uvho", "/qhndj/p/e/imhcvknshpqksgdmmqfpv", "/u", "/vbfdgc", "/vmt/u/godmtrkbluzrxrbcvyloqsdbfef", "/zxplacrhkismghpxvavznqzcmbxicdelwyqrwtbhp"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-de", "| +-neyqszmnqstnh", "+-g", "| +-m", "| +-uvho", "+-qhndj", "| +-p", "| +-e", "| +-imhcvknshpqksgdmmqfpv", "+-u", "+-vbfdgc", "+-vmt", "| +-u", "| +-godmtrkbluzrxrbcvyloqsdbfef", "+-zxplacrhkismghpxvavznqzcmbxicdelwyqrwtbhp"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> files = {"/bk/amlavjdbzvv", "/bk/hlqd/uujpfqaoconapkrpuuggibzbbvquqxuctmhjv", "/bk/rvvlh/gseumnfhhqcibojsihbpcocrrlo", "/bk/rvvlh/sbejglrchneyugzkalgrhvifoskntxjfga", "/bk/tlokoqaacwxqc", "/bk/w/qkhx/pa/bgiuy/tzxtaftngcynuutxykjsicz", "/bk/w/zwa", "/bk/y", "/boltaigmvispgfhztrfqhpwncvmuinpklloljoyu", "/evsuiafwjlfcnpycysmoncbeeyrujxski", "/hulqierwjwmuoknjbxfrkykebjc", "/lnj/cl/txaritpsrqgjqmlfzysmxjctqpwsrcjcgofrdr", "/lnj/u/pioravqwkzzzyczikgdj", "/lnj/yitsbapfrekagt", "/n/ar/kuavpinztwenyucdiocdimkfrlsutwarfhmbmtscxlyo", "/n/cezuityfdbmlgwpnebpfqidifbtzrsx", "/n/pv", "/rfvqlikczkxwmzegxagytdxajjqdrp", "/wqbufpzutwqdjdxjrfypztcrmlchmfbwlmuasssy"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-bk", "| +-amlavjdbzvv", "| +-hlqd", "| | +-uujpfqaoconapkrpuuggibzbbvquqxuctmhjv", "| +-rvvlh", "| | +-gseumnfhhqcibojsihbpcocrrlo", "| | +-sbejglrchneyugzkalgrhvifoskntxjfga", "| +-tlokoqaacwxqc", "| +-w", "| | +-qkhx", "| | | +-pa", "| | | +-bgiuy", "| | | +-tzxtaftngcynuutxykjsicz", "| | +-zwa", "| +-y", "+-boltaigmvispgfhztrfqhpwncvmuinpklloljoyu", "+-evsuiafwjlfcnpycysmoncbeeyrujxski", "+-hulqierwjwmuoknjbxfrkykebjc", "+-lnj", "| +-cl", "| | +-txaritpsrqgjqmlfzysmxjctqpwsrcjcgofrdr", "| +-u", "| | +-pioravqwkzzzyczikgdj", "| +-yitsbapfrekagt", "+-n", "| +-ar", "| | +-kuavpinztwenyucdiocdimkfrlsutwarfhmbmtscxlyo", "| +-cezuityfdbmlgwpnebpfqidifbtzrsx", "| +-pv", "+-rfvqlikczkxwmzegxagytdxajjqdrp", "+-wqbufpzutwqdjdxjrfypztcrmlchmfbwlmuasssy"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> files = {"/aw/ltacocwfbfwzrvpzujwjikoatznl", "/aw/rfod/gmijpkuasqlturkesklmphwvf", "/aw/tejnwzqpweordbdkepzhsqslqltzwwd", "/gwr", "/i/be/t/bm/xhzwlzmyolkpbvshruplmwbhfsgpnsszvupq", "/i/hqobsun", "/l/pkefrmhcweosieposkta", "/n/stjlrjsujvyoigtahvggugzvbsnatdlqdcrscldgqjwd", "/vhf/s/bfwffdhdrodzu", "/z/jeh/qdmtfdurplpnmgbjazmyev"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-aw", "| +-ltacocwfbfwzrvpzujwjikoatznl", "| +-rfod", "| | +-gmijpkuasqlturkesklmphwvf", "| +-tejnwzqpweordbdkepzhsqslqltzwwd", "+-gwr", "+-i", "| +-be", "| | +-t", "| | +-bm", "| | +-xhzwlzmyolkpbvshruplmwbhfsgpnsszvupq", "| +-hqobsun", "+-l", "| +-pkefrmhcweosieposkta", "+-n", "| +-stjlrjsujvyoigtahvggugzvbsnatdlqdcrscldgqjwd", "+-vhf", "| +-s", "| +-bfwffdhdrodzu", "+-z", " +-jeh", " +-qdmtfdurplpnmgbjazmyev"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> files = {"/dir/dir/file", "/dir/file", "/file", "/dir/sharedname/dir", "/dir/dir/sharedname"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-dir", "| +-dir", "| | +-file", "| | +-sharedname", "| +-file", "| +-sharedname", "| +-dir", "+-file"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> files = {"/a/aa/b", "/aaa/aa/b", "/b", "/c"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-aa", "| +-b", "+-aaa", "| +-aa", "| +-b", "+-b", "+-c"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> files = {"/dir/dir/file", "/dir/file", "/file", "/dir/sharedname/dir", "/dir/dir/sharedname"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-dir", "| +-dir", "| | +-file", "| | +-sharedname", "| +-file", "| +-sharedname", "| +-dir", "+-file"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> files = {"/a/aa/b", "/aaa/aa/b", "/b", "/c"};
    DirectoryTree* pObj = new DirectoryTree();
    clock_t start = clock();
    vector<string> result = pObj->display(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROOT", "+-a", "| +-aa", "| +-b", "+-aaa", "| +-aa", "| +-b", "+-b", "+-c"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4645&pm=1874
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
VVS d; 
VS dn; 
VS ret; 
 
int find(string s) { 
  for( int i = 0; i < dn.size(); i++ ) 
    if( dn[i] == s ) return i; 
  dn.push_back(s); 
  d.push_back(VS()); 
  return dn.size()-1; 
} 
 
void doit(string s, string pre) { 
  int x = find(s), y; 
  for( int i = 0; i < d[x].size(); i++ ) { 
    for( y = d[x][i].size()-1; d[x][i][y] != '/'; y-- ); 
    ret.push_back(pre+"+-"+d[x][i].substr(y+1)); 
    doit(d[x][i], pre+(i==d[x].size()-1 ? "  " : "| ")); 
  } 
} 
 
class DirectoryTree { 
public: 
vector <string> display(vector <string> a) { 
  int i, j, k, x, y, z, n; 
 
  string prev = "ROOT"; 
  for( i = 0; i < a.size(); i++ ) { 
    for( x = 0; x != a[i].size(); ) { 
      y = a[i].find('/', x+1); 
      if( y == -1 ) y = a[i].size(); 
      string s = a[i].substr(0, x), t = a[i].substr(0, y); 
      d[find(s)].push_back(t); 
      x = y; 
    } 
  } 
  for( i = 0; i < d.size(); i++ ) { 
    sort(d[i].begin(), d[i].end()); 
    d[i].erase(unique(d[i].begin(), d[i].end()), d[i].end()); 
  } 
  ret.push_back("ROOT"); 
  doit("", ""); 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/