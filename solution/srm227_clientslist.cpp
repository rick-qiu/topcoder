/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3520
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

class ClientsList {
public:
    vector<string> dataCleanup(vector<string> names);
};

vector<string> ClientsList::dataCleanup(vector<string> names) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> names = {"Joe Smith", "Brown, Sam", "Miller, Judi"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Sam Brown", "Judi Miller", "Joe Smith"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> names = {"Campbell, Phil", "John Campbell", "Young, Warren"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John Campbell", "Phil Campbell", "Warren Young"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> names = {"Kelly, Anthony", "Kelly Anthony", "Thompson, Jack"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Kelly Anthony", "Anthony Kelly", "Jack Thompson"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> names = {"Trevor Alvarez", "Jackson, Walter", "Mandi Stuart", "Martin, Michael", "Peters, Tammy", "Richard Belmont", "Carl Thomas", "Ashton, Roger", "Jamie Martin"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Trevor Alvarez", "Roger Ashton", "Richard Belmont", "Walter Jackson", "Jamie Martin", "Michael Martin", "Tammy Peters", "Mandi Stuart", "Carl Thomas"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> names = {"Jacobs, Peter"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Peter Jacobs"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> names = {"Banks, Cody", "Cody Banks", "Tod Wilson"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Cody Banks", "Cody Banks", "Tod Wilson"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> names = {"Mill, Steve", "Miller, Jane"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Steve Mill", "Jane Miller"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> names = {"Pfpydaduripnkqogologwyc Oewbylpghzsfxtjiohm", "Nnkmiyhqrae, Ltoxlfgcqwwkhgyzmghuliriffkzr"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ltoxlfgcqwwkhgyzmghuliriffkzr Nnkmiyhqrae", "Pfpydaduripnkqogologwyc Oewbylpghzsfxtjiohm"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> names = {"Xrwawetuuz, Igpsztejfo", "Yju, Mspqbgnq", "Okcuprupwleliicgibvmrcpsriiondmvsoizdynq Irnowbts", "Ubrcbs, Vnltrqybnbahuncootduihbmwbctftvjivsjk", "Ldhdgnyefpdombcqnbxgykfmcobfgkc Lrnyziottpe", "Aqwmeiketirseeeqmbesaiwkxadtq Ecgfbpgfjzjhchiw", "Ykbnglsmtwsyinvpqysloc, Ooiidfn", "Dtuskvchnkzzqoiwgeiitjyitqrzmnvgoq, Bxeagkosydao", "Dfppzslgvcvssamngsubsmjxnbwsfvbyrlv Vhm", "Szxhurmvrxolqxdkxyugxmsxxmscztxxvvgsixnjzg Wovqa", "Nmnnauveofus Ygcxctffpdujuwsooxamktiduoii", "Ldextyedrolgtjdxtocqatvbkymonumdjaziwduugipn Qtec", "Iuukktyztvrjmlsyxzwedi, Zdqlhiiwrhzfycgypwbjua", "Tkesozgodgsrrdplkdkwolepqvpaqf, Eueesuzykeurqccs", "Vcn, Vespsieozjxawkfmtbntmqrvyhunymzxewxiqfrogt", "Yrpzllcfqmlaxvcjmtrojxalejitthptktldco Vdcqjzvp", "Yvlizejxtrtjpowwr, Nlaolalyshsgmcmtwmxaa", "Jwturjbpjgu, Rvrdgiandcwxnowbqjcscbacpxzfva", "Jqnkvitcbzyfuvnmjdt Eblwejnxpwycydjowwwy", "Tholrmzkkrn, Mepedshmkkzozoclvbudufrzczgtirh", "Plinfj, Yeogfxxazwujgiupxjvbwtdhhrerpf", "Zsz, Shrblgnskvqtbrwicqaaqdjm", "Ifwezbomfijmapnlfzrchhrss Rhwngg", "Ussdunvkewlrnugzprkfyvsiquaejfxcwwtmj Iutmbtggei", "Kzlkzmdxbwpwdwyejwfutfuk, Ocpztpumjsushjv", "Fdumkzotgnytcwof, Mbiwigjgbniidwsbnghmenavsroreji", "A, Jmeyrgmgdbtqsckmbtlpcrxucgreggpziquqrthajstvpbp", "Kzwcwsjznefydxhwhfods, Rhvkpvpgsspiqvttrapgnrk", "Ubncohlyrcmlkivlksvjhgzvjsqdxhqd Ruem", "Cizlvtezjzdfiffxwch, Vygh", "A, Xvdtraphkfhvgoxfopekdlcmufrlestuokfzkrijrdiapon", "Dhrncogysg, Psbytmnubksndqucenkzuaavcqxkbfwmbmnq", "Lfjsgaathleejmrfcfz, Aqjgntcfuziuoinpxdydgrdtds", "Okrnjiwfsnyhbacalfnybhycuzm Ml", "Urppspcntcboivvokkvmeycfrrgybypxpjmzijaywuysg Wtw", "Zoi, Snbdywtgnufftbxdjfozpnbljvjcbzove", "Wmsfxpwrh Okbfqghhgcyfiqjbr", "Xkwvynnbutyuafqxgycpitymmumggsndbbfartp, Igo", "Bsxplc, Jrqmehdewfsokjxefhoqfrpzwpilplvzdolpkwsnk", "Hnfsbgzexlqsvaurtboxzbwmyfgyzjrncs, Jzvqey", "Nqyrb, Tnhcdnaaediycnt", "Qrmaizupkqnsmcatyooqduqjhfuvjetm, Fhujsb", "Rcyasntucsqaxbnvjfmtkuwojdqfwowedrtvlemlr Npzm", "Lvdfprzywrr, Uzjmzysyixidcsmx", "Jywfeuzbymdlxodvphvitfeg Mwcamunkvwkq", "Tsrdocmwckwayfwafbsti Itudxsjdajxidbuznzew", "Dffbvwbhjzudyybdkjsrak Jmovaa", "Rxkeakdggtlurqqarsfwozyjjcjfygktjdocji, Trjhfkdjax"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Jmeyrgmgdbtqsckmbtlpcrxucgreggpziquqrthajstvpbp A", "Xvdtraphkfhvgoxfopekdlcmufrlestuokfzkrijrdiapon A", "Jrqmehdewfsokjxefhoqfrpzwpilplvzdolpkwsnk Bsxplc", "Vygh Cizlvtezjzdfiffxwch", "Psbytmnubksndqucenkzuaavcqxkbfwmbmnq Dhrncogysg", "Bxeagkosydao Dtuskvchnkzzqoiwgeiitjyitqrzmnvgoq", "Jqnkvitcbzyfuvnmjdt Eblwejnxpwycydjowwwy", "Aqwmeiketirseeeqmbesaiwkxadtq Ecgfbpgfjzjhchiw", "Mbiwigjgbniidwsbnghmenavsroreji Fdumkzotgnytcwof", "Jzvqey Hnfsbgzexlqsvaurtboxzbwmyfgyzjrncs", "Okcuprupwleliicgibvmrcpsriiondmvsoizdynq Irnowbts", "Tsrdocmwckwayfwafbsti Itudxsjdajxidbuznzew", "Ussdunvkewlrnugzprkfyvsiquaejfxcwwtmj Iutmbtggei", "Zdqlhiiwrhzfycgypwbjua Iuukktyztvrjmlsyxzwedi", "Dffbvwbhjzudyybdkjsrak Jmovaa", "Rvrdgiandcwxnowbqjcscbacpxzfva Jwturjbpjgu", "Ocpztpumjsushjv Kzlkzmdxbwpwdwyejwfutfuk", "Rhvkpvpgsspiqvttrapgnrk Kzwcwsjznefydxhwhfods", "Aqjgntcfuziuoinpxdydgrdtds Lfjsgaathleejmrfcfz", "Ldhdgnyefpdombcqnbxgykfmcobfgkc Lrnyziottpe", "Uzjmzysyixidcsmx Lvdfprzywrr", "Okrnjiwfsnyhbacalfnybhycuzm Ml", "Jywfeuzbymdlxodvphvitfeg Mwcamunkvwkq", "Rcyasntucsqaxbnvjfmtkuwojdqfwowedrtvlemlr Npzm", "Tnhcdnaaediycnt Nqyrb", "Wmsfxpwrh Okbfqghhgcyfiqjbr", "Yeogfxxazwujgiupxjvbwtdhhrerpf Plinfj", "Fhujsb Qrmaizupkqnsmcatyooqduqjhfuvjetm", "Ldextyedrolgtjdxtocqatvbkymonumdjaziwduugipn Qtec", "Ifwezbomfijmapnlfzrchhrss Rhwngg", "Ubncohlyrcmlkivlksvjhgzvjsqdxhqd Ruem", "Trjhfkdjax Rxkeakdggtlurqqarsfwozyjjcjfygktjdocji", "Mepedshmkkzozoclvbudufrzczgtirh Tholrmzkkrn", "Eueesuzykeurqccs Tkesozgodgsrrdplkdkwolepqvpaqf", "Vnltrqybnbahuncootduihbmwbctftvjivsjk Ubrcbs", "Vespsieozjxawkfmtbntmqrvyhunymzxewxiqfrogt Vcn", "Yrpzllcfqmlaxvcjmtrojxalejitthptktldco Vdcqjzvp", "Dfppzslgvcvssamngsubsmjxnbwsfvbyrlv Vhm", "Szxhurmvrxolqxdkxyugxmsxxmscztxxvvgsixnjzg Wovqa", "Urppspcntcboivvokkvmeycfrrgybypxpjmzijaywuysg Wtw", "Igo Xkwvynnbutyuafqxgycpitymmumggsndbbfartp", "Igpsztejfo Xrwawetuuz", "Nmnnauveofus Ygcxctffpdujuwsooxamktiduoii", "Mspqbgnq Yju", "Ooiidfn Ykbnglsmtwsyinvpqysloc", "Nlaolalyshsgmcmtwmxaa Yvlizejxtrtjpowwr", "Snbdywtgnufftbxdjfozpnbljvjcbzove Zoi", "Shrblgnskvqtbrwicqaaqdjm Zsz"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> names = {"Opbhwrlnnewquomychlvdeusvjxu, Hycvqetbts", "Nyrvkwebajvodmqelatwqctkl, Bibwhmci", "Wlipvhzfqjnncyxgjvnwnrfixpoklvlehc, Wyiy", "Rbvafxspfcxukgjfclevnswfwlzlddlqulw Qblpixf", "Ydfict, Ztnalwlpvtdqkfmrihq", "Rawhutxuqkoet, Dpfookdbihbxl", "Mtfhlvkfuyxbkyqbdpdfqmybwropjeiqfaeinaqxgsfrb Hx", "Neqyypliu Sbuvhuqflsclfgdp", "Emxbqesmcasbarqwdublzpxjzpdctssdukrncgtinucq Skas", "Kzslfuhmsukmayvrep, Scwacjqjiif", "Hj, Nhhapuwipaslmudzswvlcwpwrulyvjtbtdws", "Sladcjqcxhycleypsft, Lhnzgbjblkwpdsbphvh", "Sbjbtymprzhtwrpaspzuspbiekenyci, Ownhiapa", "Fnpjbflhhxmjwzdtrtpqpsxjrrndysdifk, Jlnxtmyjnvcq", "F, Wnebdbqvvljjbnfraiuawkduoofgiz", "Deradigijefewtnloorriinwruxnrzywije Mtsik", "Vj, Yndksccthpwupcruiucfdjlhbkfge", "Uvquj Bjxqlgxqrlfmaxhdrfadfeqhgvkxxvaflwb", "Lwbfspiy, Slewyiqqmizvmuixemjslwuugk", "Rdxiswysjuxcsolcgrawsdjtnqitwtwsrsghcappfstwto U", "Skbfpdezdnpsmeshbubpgxvk, Igx", "V, Sbmvtdawquoactpijqeb", "Zpfmfqqd, Ppyklmhttvtabpgdzidsziewyjwrckaidxkaqtw", "Opllgcrtsaiccxvhvb Kkmeikcufwrprevdgvxyxzhl"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Uvquj Bjxqlgxqrlfmaxhdrfadfeqhgvkxxvaflwb", "Wnebdbqvvljjbnfraiuawkduoofgiz F", "Jlnxtmyjnvcq Fnpjbflhhxmjwzdtrtpqpsxjrrndysdifk", "Nhhapuwipaslmudzswvlcwpwrulyvjtbtdws Hj", "Mtfhlvkfuyxbkyqbdpdfqmybwropjeiqfaeinaqxgsfrb Hx", "Opllgcrtsaiccxvhvb Kkmeikcufwrprevdgvxyxzhl", "Scwacjqjiif Kzslfuhmsukmayvrep", "Slewyiqqmizvmuixemjslwuugk Lwbfspiy", "Deradigijefewtnloorriinwruxnrzywije Mtsik", "Bibwhmci Nyrvkwebajvodmqelatwqctkl", "Hycvqetbts Opbhwrlnnewquomychlvdeusvjxu", "Rbvafxspfcxukgjfclevnswfwlzlddlqulw Qblpixf", "Dpfookdbihbxl Rawhutxuqkoet", "Ownhiapa Sbjbtymprzhtwrpaspzuspbiekenyci", "Neqyypliu Sbuvhuqflsclfgdp", "Emxbqesmcasbarqwdublzpxjzpdctssdukrncgtinucq Skas", "Igx Skbfpdezdnpsmeshbubpgxvk", "Lhnzgbjblkwpdsbphvh Sladcjqcxhycleypsft", "Rdxiswysjuxcsolcgrawsdjtnqitwtwsrsghcappfstwto U", "Sbmvtdawquoactpijqeb V", "Yndksccthpwupcruiucfdjlhbkfge Vj", "Wyiy Wlipvhzfqjnncyxgjvnwnrfixpoklvlehc", "Ztnalwlpvtdqkfmrihq Ydfict", "Ppyklmhttvtabpgdzidsziewyjwrckaidxkaqtw Zpfmfqqd"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> names = {"Nacfds, Xjdee", "Pzxpsiovonz, Ozsebdgxfdlhqiqmaobbpyuiqjvnmwppjltzw", "Wvkitdmzdg, Ykwyfbbcwfpqycrqmwmafipocnojaaksngywa", "Tn, Lhdmjnrijavhmaduflcfedsumdxqrqr", "Xqczajtprejrsqrgqsuysm Su", "X, Ndcvxlhbbojzcnqbnlgbeuojxujsrgxy", "Mac, Tim", "Rhfgqduupplqsowtqkxeql, Sbhxzgixqihatxv", "Rwbebjndpvdpspfrsa, Rihtjsnetrorwatskqiysqqfufcpqe", "Eggggs, Eeestrr", "Lkeqfcamqdphatmn Vdzombctnlrwwuxrewzxiubkchmisghc", "Ls Tnovdrsrzhqwycmwlisoq", "Yplc, Fzhyrbefjrlhseiohnipeydmcvsgqctwrligihtpvlqz"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Eeestrr Eggggs", "Tim Mac", "Xjdee Nacfds", "Ozsebdgxfdlhqiqmaobbpyuiqjvnmwppjltzw Pzxpsiovonz", "Sbhxzgixqihatxv Rhfgqduupplqsowtqkxeql", "Rihtjsnetrorwatskqiysqqfufcpqe Rwbebjndpvdpspfrsa", "Xqczajtprejrsqrgqsuysm Su", "Lhdmjnrijavhmaduflcfedsumdxqrqr Tn", "Ls Tnovdrsrzhqwycmwlisoq", "Lkeqfcamqdphatmn Vdzombctnlrwwuxrewzxiubkchmisghc", "Ykwyfbbcwfpqycrqmwmafipocnojaaksngywa Wvkitdmzdg", "Ndcvxlhbbojzcnqbnlgbeuojxujsrgxy X", "Fzhyrbefjrlhseiohnipeydmcvsgqctwrligihtpvlqz Yplc"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> names = {"Nprqqqoizwoovulcuiwamdcuilrnrzwuvd, Bxpvvkrg", "Vipmp, Cfhcejslpduitkykhsnix", "Bxgspjhrztstzgxitnpyeyotwurteycxsrzkzqaseip C", "Pukcyvdrimpxuvxmycczlr Bvsscftjz", "Fvisynhbjrnkkoexwubrqplluzb, Nxfwhccwljlvasp", "Jpqfkeftavafdfy, Nipnbcalxfzupbunfb", "Gnhefogamqs Vzkxiptleyliqhezpzopkuwyzsmacezndygvr", "Awtkvpxjajc, Edyncxjhuaxjxvcgxzkbqralcrddgyklbjqi", "Ovwenj, Edhcrvbsjntijzhdypogepzfziiksexxwbs", "Vxpzgcxaocikndoayhhqfoorlxotpudvanclzomhvgbsz Hj", "Fhirteicsgofemgencwhfwa, Qfelnyjfkvkeiznczbouza", "Kiipbhpnhvfzfobrue Ymjlutdtlnyfmglutt", "Ccsvsotqtgo Ygnvdohrmasjtkjafaomurxvxddqhudz", "Mltnptbygaqgm Kehma", "Sp, Wanhyapxoarvppzbqmkxhgiuxbgdoyewhekrouuxtqzonk", "Blmskyjbmiixxkilx Qixnlcynclhtynjqiqnwqxjnfphhqi", "Bc, Zagafhrhzkaesftxazsknwhealplyoxvxiqwspcyikzqkw", "Fxewawoifxytdnzeklouztkcujyrtojtv Nzfsltaiadnxae", "Auiopzzjdovgpzggxkezeefcthztaacpcexzccqfb Deh", "Kdxewu, Sqlhwbkgxkajxsidpzxoicafqkhtyzmqfvkzg", "Wlxdbfwsgbmvflmlwjjcgdnpzotrqmvdmmifrvxeiomzfefp J", "Ekonbdfiqrxsgrovfmnivkqmb, Zqxql", "Qrrbkxdpmatciqvhknbfie Xo", "Iuxftldyjlacutvwhybrkfsvajkiznhxtqsmr Rpnwco", "Rjjduevo, Etmxsbcomavtyypknmzbedqqhpdthstfdodqk"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Edyncxjhuaxjxvcgxzkbqralcrddgyklbjqi Awtkvpxjajc", "Zagafhrhzkaesftxazsknwhealplyoxvxiqwspcyikzqkw Bc", "Pukcyvdrimpxuvxmycczlr Bvsscftjz", "Bxgspjhrztstzgxitnpyeyotwurteycxsrzkzqaseip C", "Auiopzzjdovgpzggxkezeefcthztaacpcexzccqfb Deh", "Zqxql Ekonbdfiqrxsgrovfmnivkqmb", "Qfelnyjfkvkeiznczbouza Fhirteicsgofemgencwhfwa", "Nxfwhccwljlvasp Fvisynhbjrnkkoexwubrqplluzb", "Vxpzgcxaocikndoayhhqfoorlxotpudvanclzomhvgbsz Hj", "Wlxdbfwsgbmvflmlwjjcgdnpzotrqmvdmmifrvxeiomzfefp J", "Nipnbcalxfzupbunfb Jpqfkeftavafdfy", "Sqlhwbkgxkajxsidpzxoicafqkhtyzmqfvkzg Kdxewu", "Mltnptbygaqgm Kehma", "Bxpvvkrg Nprqqqoizwoovulcuiwamdcuilrnrzwuvd", "Fxewawoifxytdnzeklouztkcujyrtojtv Nzfsltaiadnxae", "Edhcrvbsjntijzhdypogepzfziiksexxwbs Ovwenj", "Blmskyjbmiixxkilx Qixnlcynclhtynjqiqnwqxjnfphhqi", "Etmxsbcomavtyypknmzbedqqhpdthstfdodqk Rjjduevo", "Iuxftldyjlacutvwhybrkfsvajkiznhxtqsmr Rpnwco", "Wanhyapxoarvppzbqmkxhgiuxbgdoyewhekrouuxtqzonk Sp", "Cfhcejslpduitkykhsnix Vipmp", "Gnhefogamqs Vzkxiptleyliqhezpzopkuwyzsmacezndygvr", "Qrrbkxdpmatciqvhknbfie Xo", "Ccsvsotqtgo Ygnvdohrmasjtkjafaomurxvxddqhudz", "Kiipbhpnhvfzfobrue Ymjlutdtlnyfmglutt"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> names = {"Z, Cmhbgmbmbwrdyukqneqfbvwiwnxeszpakiquxuooikcwtj", "Iaymnzyfkrfrmcbxrfajhoslciwvrnup, J", "Dqvzjivasev, Jddo", "Soiwpnnrklbmattrsdrxepudyasjsotgbumelqakjzaxwars R", "G, Fielwuohsjqpecnbunnkwedauf", "Fhwd, Urwlqsbdxxuhneticoolf", "Q, Thchagafiovwkhvonpdfxrqrffbvpopoqxmmqzzykmrttmt", "Innymrcovfaghedhmzxpxazynomki Vxefrbjetifpq", "Cmmr, Rmadqbukjqbamjukbwpwaiuaqnkamnsgnmaf", "Ksygu, Yf", "E, Iehlcoumpharqrmpdo", "Lbsgqisholtfexteropqkzq, Ljudhjdhjufkhi", "K, Moxkhmsjplprppsstunmcwedsradjaieidlbo", "Ew, Vpiztrwiagejclomcqmswgbvdwgkfkwhspc", "Ikwwybiqqhyyhtmahgxcbcwr Erzg", "Nalikiuseoyxulidpvvsqmvbybyoejgfmw, Axzmvpnty", "Kdvkzvtwfuanczjiob, Flsmwhdoxnkudouqwrpfqdixchfc", "Fojtykwhgtladlqciqzpk Sularwehxomouckidhmmpdjuj", "Lmbaap Jcfdaclvukabrdshemnwyzxeo", "Anrbzpsrckteckawpimzxphfuqhwztc Bjwdi", "Xmdbsazpgdusp Yfsxyrvj", "D, Whxrpsmtmdfqrzmoukkrhpvookzuvveynkppycrvzemu", "Kjcqdqtp Qfmmkiagvtueqxyaloxvjjcqaduxjwlqkl", "Dwxljlssqrcoi Gykvyibqjtdth", "Ybndcpbhklkwgvxotnlnknxztlowsu B", "Ofevhvucmksixzwjlvebsftqkbla, Bmdehorrwbcaegatryw", "Qfsnlykzokxeb, Flqgmobywhsuiinuecifnuqnfveesmgejt", "Aryfgxiaelymxagqndimd Zdjqpaswk", "Wgghjittiriiutygbhsgnmepkpe U", "Nmpwnuuhtyhktyllaevgcvmxrpssywcjbupcd, Jyif", "Pypdbgrhailydvsfiutpzpazpxetz, Eafvqwubnupi", "Etwfgqqyakiigcjb Filnedbpgzmvmyzrjhfil", "Nvuskugjekbm, Cbpsmdxivqerxguohfrpgoknpp", "Xuikknojqqhkgwmprrzklznwjzrcqlmhof Mtetldfggcot", "Pkfjgcnmfmweeq, Cbncfmybxwtffwxhjiebwygamsnznz", "Weetpfwicdyucnbebldubhhistyonvgeknssihaclgh Z", "Krflzr, Eq", "Mzefhtvylpozxtsxgnfkshlb, Sajmudvhcetlcedpznkx", "Dspidgdqxbmlzquvgypj, Fihrcbsspf", "Optfxwgfurrjecwvzpzreebjres Wcujpandoe", "Ukertekadazv Yunzog", "Yi, Apfyfkqpzlswwvwuzwokipkflcptpjsr", "Ru Xhfjzeckdgjkcrjtcvubokhybvowkrolbqcxunornpwkm", "Imoiriczz, Vorigvrcxlismtoasredrasbtqkovb"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ybndcpbhklkwgvxotnlnknxztlowsu B", "Anrbzpsrckteckawpimzxphfuqhwztc Bjwdi", "Rmadqbukjqbamjukbwpwaiuaqnkamnsgnmaf Cmmr", "Whxrpsmtmdfqrzmoukkrhpvookzuvveynkppycrvzemu D", "Jddo Dqvzjivasev", "Fihrcbsspf Dspidgdqxbmlzquvgypj", "Iehlcoumpharqrmpdo E", "Ikwwybiqqhyyhtmahgxcbcwr Erzg", "Vpiztrwiagejclomcqmswgbvdwgkfkwhspc Ew", "Urwlqsbdxxuhneticoolf Fhwd", "Etwfgqqyakiigcjb Filnedbpgzmvmyzrjhfil", "Fielwuohsjqpecnbunnkwedauf G", "Dwxljlssqrcoi Gykvyibqjtdth", "J Iaymnzyfkrfrmcbxrfajhoslciwvrnup", "Vorigvrcxlismtoasredrasbtqkovb Imoiriczz", "Lmbaap Jcfdaclvukabrdshemnwyzxeo", "Moxkhmsjplprppsstunmcwedsradjaieidlbo K", "Flsmwhdoxnkudouqwrpfqdixchfc Kdvkzvtwfuanczjiob", "Eq Krflzr", "Yf Ksygu", "Ljudhjdhjufkhi Lbsgqisholtfexteropqkzq", "Xuikknojqqhkgwmprrzklznwjzrcqlmhof Mtetldfggcot", "Sajmudvhcetlcedpznkx Mzefhtvylpozxtsxgnfkshlb", "Axzmvpnty Nalikiuseoyxulidpvvsqmvbybyoejgfmw", "Jyif Nmpwnuuhtyhktyllaevgcvmxrpssywcjbupcd", "Cbpsmdxivqerxguohfrpgoknpp Nvuskugjekbm", "Bmdehorrwbcaegatryw Ofevhvucmksixzwjlvebsftqkbla", "Cbncfmybxwtffwxhjiebwygamsnznz Pkfjgcnmfmweeq", "Eafvqwubnupi Pypdbgrhailydvsfiutpzpazpxetz", "Thchagafiovwkhvonpdfxrqrffbvpopoqxmmqzzykmrttmt Q", "Kjcqdqtp Qfmmkiagvtueqxyaloxvjjcqaduxjwlqkl", "Flqgmobywhsuiinuecifnuqnfveesmgejt Qfsnlykzokxeb", "Soiwpnnrklbmattrsdrxepudyasjsotgbumelqakjzaxwars R", "Fojtykwhgtladlqciqzpk Sularwehxomouckidhmmpdjuj", "Wgghjittiriiutygbhsgnmepkpe U", "Innymrcovfaghedhmzxpxazynomki Vxefrbjetifpq", "Optfxwgfurrjecwvzpzreebjres Wcujpandoe", "Ru Xhfjzeckdgjkcrjtcvubokhybvowkrolbqcxunornpwkm", "Xmdbsazpgdusp Yfsxyrvj", "Apfyfkqpzlswwvwuzwokipkflcptpjsr Yi", "Ukertekadazv Yunzog", "Cmhbgmbmbwrdyukqneqfbvwiwnxeszpakiquxuooikcwtj Z", "Weetpfwicdyucnbebldubhhistyonvgeknssihaclgh Z", "Aryfgxiaelymxagqndimd Zdjqpaswk"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> names = {"Dqfevedggwihsdvedrwgocwjxamum Hxr", "Tslaponeyglqjtumm, Pkatyrdycjccpzzjfembzstxs", "Bhhfalskigfiixnyfkwm Hhzylqdppbmwzkwkpkqhvlruq", "Dhehnffolgykjn, Ybboanfovqgrfvcbfilwmt", "Jqtkuxssnzwhveyjbl Wcvqwwyckbngfshxuy", "Bxktomospscvohdsepwvcin, Evhzrlfithqjqrkjzv", "Lljl, Vabmnpevtjzpfculdbpwlvspd", "U, Azdpiydcimbxkamvkzvcxuxwvqrvjcgg", "Cieikdzqotiiqltudhixkx, Dluqlhjwyetvcutmgg", "Fooyjhxjxlldrcwyfaadzy Ofziosidvagbnwfv", "Rdkxnmmnjzeemsbrriuqjpdlwtdipjuzzos Na", "Pajffzbu, Dihkeorfrlffbhxwgmggknsiuwqxj", "Ndimntefuzu, Dznmalklnvsgblmjqfrmiddshvv", "Abwhvdbwtkjtvmndhiiyordjduotypoubwk Yirgtrhyid", "Blmgea, Tbtaguftawgdpkyjfphqqdxnbxpyucg", "Rxgwjbbyqwziioymdttgjkzhkefdoylafmx Fzovvmdvt", "Fdjce, Abkudpcudxrasnallvcrozyefwzgrqmqcx", "Zrotk, Ferodotzhzcdgzmawrxozeiye", "Xvhirfwofdbnewzkmeopqxfilwptzbuexyl Dteqnsl", "Qchdgmybhgeciy, Uacdhgiabzkdtwhhktdiupbqwkqzv", "Bgcaoqdlrhojlkaxkbpvbj Bjiahl", "Vzujryhurlpprniwlvuhwjvodpmymlod Petoyvrnwml", "Ix, Mbajlnpzsxfdlipmlmpb", "Evsxbxkzorrugfkykkgeknwxxds, Ttutqylmmhbyodjlzh", "Kfhsznbolpxbdcxsgu, Cacnjqtirnukftwebdijhksrzoz", "Cxpmbtxlqwhhjfsqobkmrvnskvkcqjnpva Nsu", "Nmwblprtlqqpxqsllwwubkqvlbi Evkchqcteuobsaniqo", "Utpakd, Cseiibyqqrwakaefojzopglzaimnwlfdsbh", "Xirwbclns, Wkgicyocewjxgsceetqwnmijpckoujk", "Omihmtowlesgsdtqnhtmugapuioxgwlxj Jwajvzl", "Ktptbyittewpad, Kmrseqmidnvoxynyus", "Lzghmujsavqvx, Opjdujskmjynfdxaoy", "Mwnepnwootj, Dbvhgfyndbczvsblvb", "Gduoanr, Xyavanbwzyfkixkriabet", "Gfrccyqaxwyflivtdjrxecgbbm P", "Irgpjw, Tkvkyqcxwzgfvtbtvhjiupxlmpwchhyrg", "Lkkmhmccxpeulrgvssqjhtnv Cckxkrrmwwmcg", "Yqpctttyevvdvnbubjdyu Kvjfzt", "Mppas, Xibuufyojdtvrgpwcmsnocamewxecm", "Qzimacxjpsxazxmadibdowfplqyruevnyzx Vla", "Xscx, Dvomzrkerrirkyfkmzlvffzvkklpbufolc", "Kaif, Eqthayfdbkjanxrecizpzhn", "Cbeasywz, Zljejvhlwkjvyanwnf", "Xqtdracznllkghubobp Mketruuxqvw", "Xjzxglgvo, Bmdbopfrinxpamgdwsirdpagyuwpkb", "Jtmtl, Shwbcctxjxlssvzgnfrzjx", "Oqugdqbvmunaihjyszsozbc Edpvxjzsiczfkclsuvavycl", "Wljhvta, Zlnqjhypeivhhoqqbtraopjpiioa", "Cjbbjnxqlvoiyffeyoga Mjgzmrfqablefezamjan"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bgcaoqdlrhojlkaxkbpvbj Bjiahl", "Tbtaguftawgdpkyjfphqqdxnbxpyucg Blmgea", "Evhzrlfithqjqrkjzv Bxktomospscvohdsepwvcin", "Zljejvhlwkjvyanwnf Cbeasywz", "Lkkmhmccxpeulrgvssqjhtnv Cckxkrrmwwmcg", "Dluqlhjwyetvcutmgg Cieikdzqotiiqltudhixkx", "Ybboanfovqgrfvcbfilwmt Dhehnffolgykjn", "Xvhirfwofdbnewzkmeopqxfilwptzbuexyl Dteqnsl", "Oqugdqbvmunaihjyszsozbc Edpvxjzsiczfkclsuvavycl", "Nmwblprtlqqpxqsllwwubkqvlbi Evkchqcteuobsaniqo", "Ttutqylmmhbyodjlzh Evsxbxkzorrugfkykkgeknwxxds", "Abkudpcudxrasnallvcrozyefwzgrqmqcx Fdjce", "Rxgwjbbyqwziioymdttgjkzhkefdoylafmx Fzovvmdvt", "Xyavanbwzyfkixkriabet Gduoanr", "Bhhfalskigfiixnyfkwm Hhzylqdppbmwzkwkpkqhvlruq", "Dqfevedggwihsdvedrwgocwjxamum Hxr", "Tkvkyqcxwzgfvtbtvhjiupxlmpwchhyrg Irgpjw", "Mbajlnpzsxfdlipmlmpb Ix", "Shwbcctxjxlssvzgnfrzjx Jtmtl", "Omihmtowlesgsdtqnhtmugapuioxgwlxj Jwajvzl", "Eqthayfdbkjanxrecizpzhn Kaif", "Cacnjqtirnukftwebdijhksrzoz Kfhsznbolpxbdcxsgu", "Kmrseqmidnvoxynyus Ktptbyittewpad", "Yqpctttyevvdvnbubjdyu Kvjfzt", "Vabmnpevtjzpfculdbpwlvspd Lljl", "Opjdujskmjynfdxaoy Lzghmujsavqvx", "Cjbbjnxqlvoiyffeyoga Mjgzmrfqablefezamjan", "Xqtdracznllkghubobp Mketruuxqvw", "Xibuufyojdtvrgpwcmsnocamewxecm Mppas", "Dbvhgfyndbczvsblvb Mwnepnwootj", "Rdkxnmmnjzeemsbrriuqjpdlwtdipjuzzos Na", "Dznmalklnvsgblmjqfrmiddshvv Ndimntefuzu", "Cxpmbtxlqwhhjfsqobkmrvnskvkcqjnpva Nsu", "Fooyjhxjxlldrcwyfaadzy Ofziosidvagbnwfv", "Gfrccyqaxwyflivtdjrxecgbbm P", "Dihkeorfrlffbhxwgmggknsiuwqxj Pajffzbu", "Vzujryhurlpprniwlvuhwjvodpmymlod Petoyvrnwml", "Uacdhgiabzkdtwhhktdiupbqwkqzv Qchdgmybhgeciy", "Pkatyrdycjccpzzjfembzstxs Tslaponeyglqjtumm", "Azdpiydcimbxkamvkzvcxuxwvqrvjcgg U", "Cseiibyqqrwakaefojzopglzaimnwlfdsbh Utpakd", "Qzimacxjpsxazxmadibdowfplqyruevnyzx Vla", "Jqtkuxssnzwhveyjbl Wcvqwwyckbngfshxuy", "Zlnqjhypeivhhoqqbtraopjpiioa Wljhvta", "Wkgicyocewjxgsceetqwnmijpckoujk Xirwbclns", "Bmdbopfrinxpamgdwsirdpagyuwpkb Xjzxglgvo", "Dvomzrkerrirkyfkmzlvffzvkklpbufolc Xscx", "Abwhvdbwtkjtvmndhiiyordjduotypoubwk Yirgtrhyid", "Ferodotzhzcdgzmawrxozeiye Zrotk"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> names = {"Bxnbzmozmmeotwndik Awjxofaburjehw", "Quxjttbzwxk, Lvevfqpirpqiiyeleaglszxjrgxwxua", "Irloqahoeexaijldcaxrqxzqtyytpa Fuo", "Qautodogzjspyrkzkndxotsunfm Pka", "Hjwnpb, Upiacmxprhigfifrayolsimrczhclhresii", "Jwxtfaqfbzkklhgq Wbupzqtwdvqkibttidpdu", "Wkgomukiueqpghdxagsyts, Fubdbbbwcqrapfsaun", "Wzudkr, Fisdxnclapaqxnpbimlvjlnuefqibkyw", "Qyzeegcrknqnrskfycxwmgk, Ebfzabxycdzagtxihtw", "Dxcuykxslknagwwhwanbqtrchmhuxcq Xthxkxxgan", "Abpienjczh, Xrqiqfpylubhjhulgckuwqdagmtdjqrawdr", "Afjscolnpjfopgefniyfoeuu, Lukpfkfircgkeshvpi", "Ak, Bcgwfcrqciuyinvhcrzbjphhonhhrbj", "Zhmbgktqttosyczkhptjzomvreqpcaxnj Hxutt", "Exopgzyblahzbnbwydq Vysgqehzdtu", "Rbqovgqaihckfqihdj Usgcurxvxvllfjnipkgbcfa", "Bfbymyiavjqkzjvpelouujvy, Wezdyzxtgsvuzkokynnyio", "Axckffxz, Vriwwhjapucobnuxy", "Jvoltqlkldixsbqzumsykxqznm Tbxorzkma", "Lvgmewreoodepp, Ffkzloxhlwienonxludo", "Jvpknvfrlyiiukyyarkupmlqvevlu Dwvc", "Ymcnmgfchleajulloavp Kykqdjzxomkkflj", "Enyyjkavoiwswvlc, Jrnlufrioaykvxoeadwnguxpyhv", "Amquiwfwwarzivdjyluamzimhdgp Ylxcn", "Hpjpfmpizosdfctnsuhkdsxksjbvbx O", "Jiuqshbgurmyhnvetacit Uuvymzjxzorllidbuxzx", "Nwdhguxpwpsxdmcnxmniklpps Rsyoodximxiicje", "Uehebcrqzsrksrxviitcjwgjkniftbg Tqof", "Nwtjudwfvmltn, Pcuxnndzinfshfqdcwriyiyewm", "Xgqgldyriihjkqprwogaibrgiavwmsnt Cndz", "Rzbqtfbvszgfd, Ymaufvoidofdtvgvn", "Fxwpwxyevjvjzufhhzowy Hmqie", "Rlrypxidtjawnsqk Itvbmthtrqjhrwerkhmpoi", "Dinxcahj, Izufejvajlwaastrmkszfnurqy", "Rlyhcmokykpec, Avtykxetxrfwyuqsljwkl", "Zlnyjwh, Kkksdjtiqdwuzbneamydyp", "Mrpdicbu, Qijvvdaulcbhkfwmexygjh", "Dacjooqiyrsfljpchijyrplj Yysbochlfuglr", "Edxbswvydogkuabyspkywc Nygc", "Nraj, Rqcqvoqcjlwaatjpnso", "Nbhltcaignfopqstbkcqmeythjq Czkhio", "Wlundmppoivzpxfqkohkjx Abmrfdzedqapkmxamngep", "Souujawitbmrivbmobopsosrgbghzln Zee", "Vacsbrjlrxsocnmryszgzgqvffbwhrum Dyv", "Xmzrkmnqgdzbmzdxgbcxdeslqjguamiee Rzoau", "Zsedduhazsdw, Myysuhwfpityodimp", "Ucmfcevnieyakkygdwwwlbf Qihggdv", "X, Ivlhqjfezqwehzcxylpwybefdjzyog"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Wlundmppoivzpxfqkohkjx Abmrfdzedqapkmxamngep", "Xrqiqfpylubhjhulgckuwqdagmtdjqrawdr Abpienjczh", "Lukpfkfircgkeshvpi Afjscolnpjfopgefniyfoeuu", "Bcgwfcrqciuyinvhcrzbjphhonhhrbj Ak", "Bxnbzmozmmeotwndik Awjxofaburjehw", "Vriwwhjapucobnuxy Axckffxz", "Wezdyzxtgsvuzkokynnyio Bfbymyiavjqkzjvpelouujvy", "Xgqgldyriihjkqprwogaibrgiavwmsnt Cndz", "Nbhltcaignfopqstbkcqmeythjq Czkhio", "Izufejvajlwaastrmkszfnurqy Dinxcahj", "Jvpknvfrlyiiukyyarkupmlqvevlu Dwvc", "Vacsbrjlrxsocnmryszgzgqvffbwhrum Dyv", "Jrnlufrioaykvxoeadwnguxpyhv Enyyjkavoiwswvlc", "Irloqahoeexaijldcaxrqxzqtyytpa Fuo", "Upiacmxprhigfifrayolsimrczhclhresii Hjwnpb", "Fxwpwxyevjvjzufhhzowy Hmqie", "Zhmbgktqttosyczkhptjzomvreqpcaxnj Hxutt", "Rlrypxidtjawnsqk Itvbmthtrqjhrwerkhmpoi", "Ymcnmgfchleajulloavp Kykqdjzxomkkflj", "Ffkzloxhlwienonxludo Lvgmewreoodepp", "Qijvvdaulcbhkfwmexygjh Mrpdicbu", "Rqcqvoqcjlwaatjpnso Nraj", "Pcuxnndzinfshfqdcwriyiyewm Nwtjudwfvmltn", "Edxbswvydogkuabyspkywc Nygc", "Hpjpfmpizosdfctnsuhkdsxksjbvbx O", "Qautodogzjspyrkzkndxotsunfm Pka", "Ucmfcevnieyakkygdwwwlbf Qihggdv", "Lvevfqpirpqiiyeleaglszxjrgxwxua Quxjttbzwxk", "Ebfzabxycdzagtxihtw Qyzeegcrknqnrskfycxwmgk", "Avtykxetxrfwyuqsljwkl Rlyhcmokykpec", "Nwdhguxpwpsxdmcnxmniklpps Rsyoodximxiicje", "Ymaufvoidofdtvgvn Rzbqtfbvszgfd", "Xmzrkmnqgdzbmzdxgbcxdeslqjguamiee Rzoau", "Jvoltqlkldixsbqzumsykxqznm Tbxorzkma", "Uehebcrqzsrksrxviitcjwgjkniftbg Tqof", "Rbqovgqaihckfqihdj Usgcurxvxvllfjnipkgbcfa", "Jiuqshbgurmyhnvetacit Uuvymzjxzorllidbuxzx", "Exopgzyblahzbnbwydq Vysgqehzdtu", "Jwxtfaqfbzkklhgq Wbupzqtwdvqkibttidpdu", "Fubdbbbwcqrapfsaun Wkgomukiueqpghdxagsyts", "Fisdxnclapaqxnpbimlvjlnuefqibkyw Wzudkr", "Ivlhqjfezqwehzcxylpwybefdjzyog X", "Dxcuykxslknagwwhwanbqtrchmhuxcq Xthxkxxgan", "Amquiwfwwarzivdjyluamzimhdgp Ylxcn", "Dacjooqiyrsfljpchijyrplj Yysbochlfuglr", "Souujawitbmrivbmobopsosrgbghzln Zee", "Kkksdjtiqdwuzbneamydyp Zlnyjwh", "Myysuhwfpityodimp Zsedduhazsdw"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> names = {"Ejfhayyaeocyuypxvnbznvftuouuknq Aagavvk", "Xjregkgjajvkqemsldxo, Bywsclhrqutgqxdz", "Jehkuo, Ezymfwqsaoqqvopygkzjuyjuaokcfcxpu", "Fugulcbhnktovoggilqmv Dvrecrqwjbcycj", "F, Akpahtsivfqzsecslon", "Qbdlbafkykiobmdkbc, Uxggqcamvcmxghwepcgytilwqzv", "Dmexukpgwwhafdxihihpmzcwrtwupgwlt Jsedvx", "Ymovmoxrrxvyyazhsruaipshrluopr Njxzde", "Kngsgcqmqeazoqktp, Xknodjtxgrksxvyinwivmbystpdyb", "Cmflmnldppajnpbf Mhcwbluwdawmywpqzpblendysbjag", "Pmrdcxnr, Itaewsujefeaduhimiihkd", "Glijenwnwhgnntahhcz Dmnghoeynajoed", "Gotwqhchfmbffjjssgqjwqcqkfyfiswpek Wbffmt", "Xsawbpjwfcgfgz, Bqekhzcaqvnebaqva", "Oypnnvwbwdcafqkdgqztrxahyjy Iuonxoxvkclxeswbo", "Slrejdmjdutfczfszefhujhnxbiftumzshz Dcomrkrfh", "Glcuzi, Ehmthwuulvzivvwktzvmzblhssqtmavcyl", "Mchedsbs, Rfxfvflbcemikgsrgcamfobgeaslimbpu", "Tibhqswimvfndfyyof, Lbcwpjgrxnxtxgusdc", "Wqdvazta, Prpnameehgfbunprzhojkpgthesqsnabuw", "Xuxjwdvblpwyduscscyfgcjdej, Auhpvpcurajmiccmxz", "Xttrmepwzlprjfdclhwbbafoh Oxjkvxruzplid", "Teqxmbgctxbcfvvfjr, Ixwokxnxrjnzmkpkipbeaxcknuj", "Nrpivbirp, Clkesrmjgqqurzgfxzpmdil", "Pmzjujrju, Vhymsdkjkazzyxhnglogkayauarzsdxtceo", "Bpgnejwclwzhrxrbbbuhzruvzfbxhofxdba Mwhcksoizle", "Nnwujkadkmkfnitedbrzfpc Q", "Mnhiywvgtw, Mopprqtdwothknlrepgigkwleehmnyvrtd", "Hjohbwqmnuigwbphhjg, Cuwxymkubbebvjrufpwqqrzm", "Luzdudeadtuckhdkrj Suacjdpsxtlnosxfsaz", "Kollfwmotzbew, Mensyqkrtkrlzltwwmtuua", "Cvkzikfdgkzbnfhgo Hiyfkghizx", "Obnbemkjudfxltbqaczgcbofjfmnjljjoyz Fpiryt", "Wbcszmalhgzzwimuzocbxutgdyyvbnn Noildfh", "Chjulpwivnxbobokszquulthzxntlgiyk Jacn", "Wdpp, Zlnzcgnxbpbzxyrnkfoqwzimerpxlj", "Ivwmficrbohvmrwoi, Uidjnsqwgitbfxwkmgopitfdpvs", "Fbfrdyeambxcywwb Muaanmlotmmkpfcoqy", "Kmlkbpvgnipjfgtfcvwozix Evgbcmy", "Jfibjybshrkaounldtd, Ckuwclenwcmxyimdcuumnn", "Witlwiiegunezphovkfd Egqcbknwv", "Gcwvstptxkhtxwsmclxniw, Jhktwodkqhxlwrvqltgnuf", "Ickvolwgzcgedbmkzjeqobcco Wae", "Zjxuhcxgqdxfivxitgrezq Pnbbnixennbozm", "Wbi, Xxukfmotiwljfjvwtxefyxqx", "Rjiwgwthoqkfybuo, Azlafvvdeinrwqwezrtngjloiuldzu", "Wrunehhbwmhuttpogzipxzlcdqxo Ududilr"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ejfhayyaeocyuypxvnbznvftuouuknq Aagavvk", "Slrejdmjdutfczfszefhujhnxbiftumzshz Dcomrkrfh", "Glijenwnwhgnntahhcz Dmnghoeynajoed", "Fugulcbhnktovoggilqmv Dvrecrqwjbcycj", "Witlwiiegunezphovkfd Egqcbknwv", "Kmlkbpvgnipjfgtfcvwozix Evgbcmy", "Akpahtsivfqzsecslon F", "Obnbemkjudfxltbqaczgcbofjfmnjljjoyz Fpiryt", "Jhktwodkqhxlwrvqltgnuf Gcwvstptxkhtxwsmclxniw", "Ehmthwuulvzivvwktzvmzblhssqtmavcyl Glcuzi", "Cvkzikfdgkzbnfhgo Hiyfkghizx", "Cuwxymkubbebvjrufpwqqrzm Hjohbwqmnuigwbphhjg", "Oypnnvwbwdcafqkdgqztrxahyjy Iuonxoxvkclxeswbo", "Uidjnsqwgitbfxwkmgopitfdpvs Ivwmficrbohvmrwoi", "Chjulpwivnxbobokszquulthzxntlgiyk Jacn", "Ezymfwqsaoqqvopygkzjuyjuaokcfcxpu Jehkuo", "Ckuwclenwcmxyimdcuumnn Jfibjybshrkaounldtd", "Dmexukpgwwhafdxihihpmzcwrtwupgwlt Jsedvx", "Xknodjtxgrksxvyinwivmbystpdyb Kngsgcqmqeazoqktp", "Mensyqkrtkrlzltwwmtuua Kollfwmotzbew", "Rfxfvflbcemikgsrgcamfobgeaslimbpu Mchedsbs", "Cmflmnldppajnpbf Mhcwbluwdawmywpqzpblendysbjag", "Mopprqtdwothknlrepgigkwleehmnyvrtd Mnhiywvgtw", "Fbfrdyeambxcywwb Muaanmlotmmkpfcoqy", "Bpgnejwclwzhrxrbbbuhzruvzfbxhofxdba Mwhcksoizle", "Ymovmoxrrxvyyazhsruaipshrluopr Njxzde", "Wbcszmalhgzzwimuzocbxutgdyyvbnn Noildfh", "Clkesrmjgqqurzgfxzpmdil Nrpivbirp", "Xttrmepwzlprjfdclhwbbafoh Oxjkvxruzplid", "Itaewsujefeaduhimiihkd Pmrdcxnr", "Vhymsdkjkazzyxhnglogkayauarzsdxtceo Pmzjujrju", "Zjxuhcxgqdxfivxitgrezq Pnbbnixennbozm", "Nnwujkadkmkfnitedbrzfpc Q", "Uxggqcamvcmxghwepcgytilwqzv Qbdlbafkykiobmdkbc", "Azlafvvdeinrwqwezrtngjloiuldzu Rjiwgwthoqkfybuo", "Luzdudeadtuckhdkrj Suacjdpsxtlnosxfsaz", "Ixwokxnxrjnzmkpkipbeaxcknuj Teqxmbgctxbcfvvfjr", "Lbcwpjgrxnxtxgusdc Tibhqswimvfndfyyof", "Wrunehhbwmhuttpogzipxzlcdqxo Ududilr", "Ickvolwgzcgedbmkzjeqobcco Wae", "Gotwqhchfmbffjjssgqjwqcqkfyfiswpek Wbffmt", "Xxukfmotiwljfjvwtxefyxqx Wbi", "Zlnzcgnxbpbzxyrnkfoqwzimerpxlj Wdpp", "Prpnameehgfbunprzhojkpgthesqsnabuw Wqdvazta", "Bywsclhrqutgqxdz Xjregkgjajvkqemsldxo", "Bqekhzcaqvnebaqva Xsawbpjwfcgfgz", "Auhpvpcurajmiccmxz Xuxjwdvblpwyduscscyfgcjdej"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> names = {"M, Cthiaszvesoicxoyyrpejfujsmd", "Jukupzfqjxyzwsr, Fsdxgzsejyzcumlwmunwsnfeajt", "Pjbwyrgerpgcldqept, Qpkojjnmjoudvukwi", "Vpkuzoyfawzlkstohpoy, Nicjgexfbdwueglsxdzywiayrw", "Oqxgkgvgewsxuofualcplbymz Abbpnfdfktfxouylbcux", "Mqipnrnjialenpgffoqjerltpvyo Ddzzzwrmca", "Jvmfsjiklserlmsonkucskjalgvpxnol Njnargmrgd", "Pibyxzhflqtrrioworxa, Uweiqzanjhophekbfxavhtkgms", "Wgwpkgktdtcjkupeja, Heorusguceyqzlhiveqykmxqax", "Vsjqkrwcfwoomiuexosxpguo Jgxx", "Acxvyfbfqakjztwy Lobybktklnd", "Usyclovobxhqqglgb Wtvxjyjdovohd", "Qzbjknqgkwtrcdck Nckdwvoysoxrmvwxuwrrh", "Oealwllmbgxujzfsg Cgjdnrtllnl", "Qiycbkqmtbyawtrlzpa Lkbsfpi", "Hpozpyrnryjuzzkmyfkgdinvdrszxsq Qgoycg", "Wasxudxbfgkdnfkyg, Iqfcicrowwhcgctpgsgkpygpit", "Kvjczktytkamjhkkrismntswpllr Bnzasni", "Ndmcv, Dovuearlrhrmvehdpangyjxejutrcau", "Ywslur, Raikrfkqynkasthymzbijoddgeofmnsimui", "Vutragseppsjxjnwvokylkbsehpvxybg Saaghomxld", "Oerxrbzkghqoudzd Vwhghjuvhd", "Cbnexmqyjapn, Wxnrhjsuypxtvybdjjxhamo", "Swhylilgshndthinsplnvu Nysvhti", "Uxzhsl, Csmepixgpcylftozqlsajiiuelknod", "Grmwmubmqlzfchxkvkbrbqnemcn Zxvkmy", "Osyhfyqpjgmv, Iaqxaddfzdaiqjqkoevkdch", "Xzukzuzebwerotpbnqbufxgpeniqdjw Tuurr", "Lgbahqrclxx, Qghaqacmzbybxrjnwxitbxyowcyvmgq", "Wikouaqhncrkqsji Uokqlhcfxq", "Wikqwdmgwyxpabcsemingbl, Wrzrrpqryevlswahjltxff", "Zkednuauecl, Rghkjufoqbdsjkyyvvko", "Yqljaoqvvgwstqdqtlmoo, Nguulbhnodcgewimtojjrmsfs", "Ndzhvgvlqibkzzo, Uufsngwvdpmmfqnwnorboydzaf", "Ttmwchnbl, Watetmwljnqagerxz", "Tu, Pghlzmfyvczbpujydxxm", "Ovwchjmwh, Bjlqbgakhbhuvomjbqpmtmlvefkubov", "Datuvimvmrzfabvqurmnzbbxssvqozo N", "Hgv, Ebqnrwshpohudkwaqmczu", "Zrrqueyqngllkypjxykxvws, Bshktivqvbwbbbflcswttm", "F, Sjlmdobkdkcqurulaftxkubggbagwsxg", "Lerykzftwhogawsmsabelmrjztnfqk Fd", "Of, Vngnrrwrhniluaktkabdkqmiutpuitwmbn", "Vg, Uhomizwlwpzsqnjhepklsbfsfylnqrtobv", "Vpgopsjxmkfvzobtznl, Fejjinvqouhqxekauohiiabam", "Lmhsdlrwfadfzinobfpknckudfnzwc Npuefxzvwhuoqk", "Rfsupamiste, Klsgykbzsjkeiyrouvibmwiwnimeuksiya", "Liiqcuxaqigmadevviai Auqugnnaef", "Josmwkowjgjtqsksxrjpjcqenhtblfzo Clcfauthxwqqw"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Oqxgkgvgewsxuofualcplbymz Abbpnfdfktfxouylbcux", "Liiqcuxaqigmadevviai Auqugnnaef", "Kvjczktytkamjhkkrismntswpllr Bnzasni", "Wxnrhjsuypxtvybdjjxhamo Cbnexmqyjapn", "Oealwllmbgxujzfsg Cgjdnrtllnl", "Josmwkowjgjtqsksxrjpjcqenhtblfzo Clcfauthxwqqw", "Mqipnrnjialenpgffoqjerltpvyo Ddzzzwrmca", "Sjlmdobkdkcqurulaftxkubggbagwsxg F", "Lerykzftwhogawsmsabelmrjztnfqk Fd", "Ebqnrwshpohudkwaqmczu Hgv", "Vsjqkrwcfwoomiuexosxpguo Jgxx", "Fsdxgzsejyzcumlwmunwsnfeajt Jukupzfqjxyzwsr", "Qghaqacmzbybxrjnwxitbxyowcyvmgq Lgbahqrclxx", "Qiycbkqmtbyawtrlzpa Lkbsfpi", "Acxvyfbfqakjztwy Lobybktklnd", "Cthiaszvesoicxoyyrpejfujsmd M", "Datuvimvmrzfabvqurmnzbbxssvqozo N", "Qzbjknqgkwtrcdck Nckdwvoysoxrmvwxuwrrh", "Dovuearlrhrmvehdpangyjxejutrcau Ndmcv", "Uufsngwvdpmmfqnwnorboydzaf Ndzhvgvlqibkzzo", "Jvmfsjiklserlmsonkucskjalgvpxnol Njnargmrgd", "Lmhsdlrwfadfzinobfpknckudfnzwc Npuefxzvwhuoqk", "Swhylilgshndthinsplnvu Nysvhti", "Vngnrrwrhniluaktkabdkqmiutpuitwmbn Of", "Iaqxaddfzdaiqjqkoevkdch Osyhfyqpjgmv", "Bjlqbgakhbhuvomjbqpmtmlvefkubov Ovwchjmwh", "Uweiqzanjhophekbfxavhtkgms Pibyxzhflqtrrioworxa", "Qpkojjnmjoudvukwi Pjbwyrgerpgcldqept", "Hpozpyrnryjuzzkmyfkgdinvdrszxsq Qgoycg", "Klsgykbzsjkeiyrouvibmwiwnimeuksiya Rfsupamiste", "Vutragseppsjxjnwvokylkbsehpvxybg Saaghomxld", "Watetmwljnqagerxz Ttmwchnbl", "Pghlzmfyvczbpujydxxm Tu", "Xzukzuzebwerotpbnqbufxgpeniqdjw Tuurr", "Wikouaqhncrkqsji Uokqlhcfxq", "Csmepixgpcylftozqlsajiiuelknod Uxzhsl", "Uhomizwlwpzsqnjhepklsbfsfylnqrtobv Vg", "Fejjinvqouhqxekauohiiabam Vpgopsjxmkfvzobtznl", "Nicjgexfbdwueglsxdzywiayrw Vpkuzoyfawzlkstohpoy", "Oerxrbzkghqoudzd Vwhghjuvhd", "Iqfcicrowwhcgctpgsgkpygpit Wasxudxbfgkdnfkyg", "Heorusguceyqzlhiveqykmxqax Wgwpkgktdtcjkupeja", "Wrzrrpqryevlswahjltxff Wikqwdmgwyxpabcsemingbl", "Usyclovobxhqqglgb Wtvxjyjdovohd", "Nguulbhnodcgewimtojjrmsfs Yqljaoqvvgwstqdqtlmoo", "Raikrfkqynkasthymzbijoddgeofmnsimui Ywslur", "Rghkjufoqbdsjkyyvvko Zkednuauecl", "Bshktivqvbwbbbflcswttm Zrrqueyqngllkypjxykxvws", "Grmwmubmqlzfchxkvkbrbqnemcn Zxvkmy"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> names = {"Hywdombjxn, Tbaqwtlujtklabsyjoz", "Cfhowmexeuxgqytquwkwtgnupjotqlwoip Z", "Zkdpfxaxwmbufqdeqdnkwmlehm Cbaodwqurbylzfdyq", "Qbspdwv, Zwoesyzcvkmjuhvs", "E, Npwslyhqokotopsjqsrcbrdzwjzvmgm", "Fqotopuc, Zenwtsjmpfcakvavhmlvw", "Qxmqnepwgpopuhwrrrcdccyjjsy Apjbtkgv", "Dkctysginhr, Fdolakuetqyiqbvnusnphcxauupw", "Fccklptbyxsyftjowlufmddycycgtsumlp Cdephvl", "Sevv, Fuilaplwqnrhxxvchszffoyehqajthwkc", "Fscxn, Pzedmyquoskraojjcvkctsqwfkmechig", "Gvjzmlz, Qymgsiwrwkzmceqangtwqdpvlwazxtwjl", "Lrhvtganhdgmvlqlujvhzqnxlrrcfmeyr Itg", "Wskimezseyrairdwhmxeq, Swlezfqcwsrpzcsfhwooyf", "Pcl, Zsnbjuyzifdfihzsxkdcoizrqxbparhin", "Ezhwtpjbz, Bevutlrjygkfpywpoanujp", "Rc, Gvisachkcmvfwxlsntweiahfpmhmgjo", "Vnhuwip, Jgssqkgfabfzajnn", "Mtbfgpgvblfohrazucfft Jslfytrrjjt", "Xlukwgwymiklubjfvzrmwyyjazkn Thvjohgek", "Gtealyaftozdujbxywvqplvbofrem Zxnrztjaikjlygj", "Kxunjdoeydqxbcacrakzdoetv Omdvhytgndej", "Ovyrnircqfmoabiksmrn Dyyxl", "Qvcbghhcqrqurubnswcrrc, Hqizafoveetfnwphqorof", "Ozrcfomfktdfwemgsz Kfvowzigswqvulm", "Trraudbwpxrptldjkvfmgdytgymncjo Siezvke", "Jcwfqqw, Gwfhuhdjdstdmakxgtbjptgsjmernb", "Qyv, Onhjbovmcsssxygvmkpyamjsrxjhjwq", "R, Ibvspymbvlrvwprmjdck", "Pltbtmkdsdyknhdwbvbsaugpkte Dtzzxmzk", "Efhuvgx, Lerbrlqicchnykbpb", "Fdlsyasgorlkli, Maycgrotxzccnsmemfdcq", "Qmhg, Ipssrbllxktughjccu", "Fyemkfmhxffcsd, Pjqtuxjrwlulrpqbojozwjdwxmixamj", "Tjlqweagkwjdfkeonwwqeq Tqhzpspvetkujnohfaz", "Oxoxfmtsvwgruveteyiwkqewagczhutokn Gtscaxksdt", "Talpxazvzmqbxzkwis Skwprnnzsvrpueciwjowuf", "Xgqv, Aosevvbftbogguujsgfzjygrcsp", "Tzymebxcv, Ybnipifbgxbbxhfgwk", "Bfxexelsfsiqwonxtkezvlnuzklqw Hwnctrououvet", "Phmdmynlllzhucbliu, Nvvrnvvvpedyovvgxktreddewvhm", "Xotgxbxhqnoemrjkapmwtkahjbykxeswj Nusqhxd", "Erbgtfndpifaieruq Vkqfbbekzwcsirqoorrsrvwlx", "Ghbyg, Dmkthknwdticqwjgmplitonqqbadbx", "Fmxkslqqxivwfy, Xcseqoggqccnqeytstdub", "Mcvmhwpxuhdjkmjiwjjwabbm Ohdla", "Ilurghuhxetupsijvibzwuwdgpaccxoig Wmab", "Olkgvakkauljfimoawlliloqeqttzgjdqea C"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Qxmqnepwgpopuhwrrrcdccyjjsy Apjbtkgv", "Olkgvakkauljfimoawlliloqeqttzgjdqea C", "Zkdpfxaxwmbufqdeqdnkwmlehm Cbaodwqurbylzfdyq", "Fccklptbyxsyftjowlufmddycycgtsumlp Cdephvl", "Fdolakuetqyiqbvnusnphcxauupw Dkctysginhr", "Pltbtmkdsdyknhdwbvbsaugpkte Dtzzxmzk", "Ovyrnircqfmoabiksmrn Dyyxl", "Npwslyhqokotopsjqsrcbrdzwjzvmgm E", "Lerbrlqicchnykbpb Efhuvgx", "Bevutlrjygkfpywpoanujp Ezhwtpjbz", "Maycgrotxzccnsmemfdcq Fdlsyasgorlkli", "Xcseqoggqccnqeytstdub Fmxkslqqxivwfy", "Zenwtsjmpfcakvavhmlvw Fqotopuc", "Pzedmyquoskraojjcvkctsqwfkmechig Fscxn", "Pjqtuxjrwlulrpqbojozwjdwxmixamj Fyemkfmhxffcsd", "Dmkthknwdticqwjgmplitonqqbadbx Ghbyg", "Oxoxfmtsvwgruveteyiwkqewagczhutokn Gtscaxksdt", "Qymgsiwrwkzmceqangtwqdpvlwazxtwjl Gvjzmlz", "Bfxexelsfsiqwonxtkezvlnuzklqw Hwnctrououvet", "Tbaqwtlujtklabsyjoz Hywdombjxn", "Lrhvtganhdgmvlqlujvhzqnxlrrcfmeyr Itg", "Gwfhuhdjdstdmakxgtbjptgsjmernb Jcwfqqw", "Mtbfgpgvblfohrazucfft Jslfytrrjjt", "Ozrcfomfktdfwemgsz Kfvowzigswqvulm", "Xotgxbxhqnoemrjkapmwtkahjbykxeswj Nusqhxd", "Mcvmhwpxuhdjkmjiwjjwabbm Ohdla", "Kxunjdoeydqxbcacrakzdoetv Omdvhytgndej", "Zsnbjuyzifdfihzsxkdcoizrqxbparhin Pcl", "Nvvrnvvvpedyovvgxktreddewvhm Phmdmynlllzhucbliu", "Zwoesyzcvkmjuhvs Qbspdwv", "Ipssrbllxktughjccu Qmhg", "Hqizafoveetfnwphqorof Qvcbghhcqrqurubnswcrrc", "Onhjbovmcsssxygvmkpyamjsrxjhjwq Qyv", "Ibvspymbvlrvwprmjdck R", "Gvisachkcmvfwxlsntweiahfpmhmgjo Rc", "Fuilaplwqnrhxxvchszffoyehqajthwkc Sevv", "Trraudbwpxrptldjkvfmgdytgymncjo Siezvke", "Talpxazvzmqbxzkwis Skwprnnzsvrpueciwjowuf", "Xlukwgwymiklubjfvzrmwyyjazkn Thvjohgek", "Tjlqweagkwjdfkeonwwqeq Tqhzpspvetkujnohfaz", "Ybnipifbgxbbxhfgwk Tzymebxcv", "Erbgtfndpifaieruq Vkqfbbekzwcsirqoorrsrvwlx", "Jgssqkgfabfzajnn Vnhuwip", "Ilurghuhxetupsijvibzwuwdgpaccxoig Wmab", "Swlezfqcwsrpzcsfhwooyf Wskimezseyrairdwhmxeq", "Aosevvbftbogguujsgfzjygrcsp Xgqv", "Cfhowmexeuxgqytquwkwtgnupjotqlwoip Z", "Gtealyaftozdujbxywvqplvbofrem Zxnrztjaikjlygj"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> names = {"Gpecwpdpinndwkqtmv, Yvkgffhpgaguvhtri", "Zgq, Zbofkkubodjevnoqqylauwnndjpsqvs", "Udfcoi, Jjfjvyjldocxhweujpipghqtbn", "Sosgghgtuzoxijnweangaxqvxmq Ixpzypcivgfudtucg", "Kxmfgkfpvufnojns, Dgmyoltdkxhxflcinveldhghudnfe", "Xixwqgwbdryaxurzr, Gsqtfhqzgkxntrzwbppyldiasgnej", "Tgvy, Tvvchrrmlnnfvrlrzultuqjrcxjyu", "Prjafrzynusnr, Nckjmeeignrqfbdhcv", "Wc, Qyvgwqdetgquqtamhqczwd", "Fyfrgqrvnfgkxwbtupckybbtma Lazaooszk", "Oxtvfzzepyvqkflxlr Kinsvokkvloa", "Vscbeiairdriwzdfqzqs, Wtlmusukpslrhhajhlkmbzohmr", "Iyjzrbscagxjukdveffoeqxz Ay", "Byt, Bwgdpdjgifsqyerovuieqtknerm", "Iigw, Pkiaxcxljsirnzrmvzartbpruc", "Vtkjt, Zvwqdzqqnwdzejqudozglthwfxtxchqhc", "Qypdyjdgnehmfejg Owtbbm", "Lfrnruepukvrwnstywbhmwpt Surcrwis", "Aaecndga, Dwsvjhkcwhjxyxccgjwqkubvt", "Xdrwutfgztxnkzwvyy Xmgrnjrhhhikyvpz", "Szqmcp, Crdodkezmmocjklxvuiflqatb", "Pmrpzhbfgrvnszxm Fmpekovmuzghir", "Ghosg, Jcnxqvogmwbeudaehkzizwcqkzv", "Empgzvngg, Zhzbbgfysoqzvkoarkjqytjvdbtslgbq", "Ybichq, Oqrjkzlqcszfzgyygkxxeoyrmxkzrfbius", "Dsciyavgamtcwyiog Oriuvlndlzbdqtsleyaffisajk", "Uhke, Jpzvgmtnpnopywsvkcjibehfpyyutnrli", "Vdltfxwnvjvarzslnpupbcihlcemvdmhiau Ediecvfwf", "Pujpuqdwsavqzlyhfmvpo Ahczegnusdsdgxletuvducuv", "Gffyayxfoqewqqujlruhsse Uzqooyqhmdgvwclka", "Argrmouughuncqgwbeudxzkiirrwcmcfp Puapylmhvgy", "Nglbzpgmklqxnyqqqbapxgzjolgjp Maargsry", "Fxult, Keymmcdkpicwnybjqtklrkotmavy", "Qxohpbpsb, Lcigrjzyagqglhgtgaojtqtdapwxjscrzl", "Oootksecinkrakeptwvrpdxbwoiuu Araofsemojlm", "Orufjmpjmtjtqrlbeulhvxxtgrzs Rcq", "Oaepesggymyii, Drvvmasnpjxsbbqwoxlyhcbvsxevvoyvd", "Tfryrjufdowfmlfebwudixrznirljndhe Ph", "Bdicobmboqchzgbrqmcjdns Nwgybcytzjcpudlc", "Pfabwkwjulqsxprdc Gkohdnuxnwntfepzlethodhnml", "Qhyklweyeujy, Mquomdgjrxjdcmcpzjwasmw", "Vbyleetwrpzqzaujuxv, Pdnayqbmprwgvtzkc", "Aqshdgsyuwkqlufprc, Vvxpvuoerpkgzrpqbtmrfxpcdqto", "Obtpuqacllidudedmk Hvadqwhkysteepoupxg", "Dhyzgaxuzmpojrldomats Uvdo", "Assjrqfdzhugiimqwyiiftrl Sktbqivshnaadyxgaucraj", "Oohp, Sprsrpkpxhniytpwliwhpualncfqyhmn", "Jlcoxzfc, Qoqrfjpyejybparbghdaqmtpsdk", "Yimaskdt, Tlhdduooiamckhplir"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Dwsvjhkcwhjxyxccgjwqkubvt Aaecndga", "Pujpuqdwsavqzlyhfmvpo Ahczegnusdsdgxletuvducuv", "Vvxpvuoerpkgzrpqbtmrfxpcdqto Aqshdgsyuwkqlufprc", "Oootksecinkrakeptwvrpdxbwoiuu Araofsemojlm", "Iyjzrbscagxjukdveffoeqxz Ay", "Bwgdpdjgifsqyerovuieqtknerm Byt", "Vdltfxwnvjvarzslnpupbcihlcemvdmhiau Ediecvfwf", "Zhzbbgfysoqzvkoarkjqytjvdbtslgbq Empgzvngg", "Pmrpzhbfgrvnszxm Fmpekovmuzghir", "Keymmcdkpicwnybjqtklrkotmavy Fxult", "Jcnxqvogmwbeudaehkzizwcqkzv Ghosg", "Pfabwkwjulqsxprdc Gkohdnuxnwntfepzlethodhnml", "Yvkgffhpgaguvhtri Gpecwpdpinndwkqtmv", "Obtpuqacllidudedmk Hvadqwhkysteepoupxg", "Pkiaxcxljsirnzrmvzartbpruc Iigw", "Sosgghgtuzoxijnweangaxqvxmq Ixpzypcivgfudtucg", "Qoqrfjpyejybparbghdaqmtpsdk Jlcoxzfc", "Oxtvfzzepyvqkflxlr Kinsvokkvloa", "Dgmyoltdkxhxflcinveldhghudnfe Kxmfgkfpvufnojns", "Fyfrgqrvnfgkxwbtupckybbtma Lazaooszk", "Nglbzpgmklqxnyqqqbapxgzjolgjp Maargsry", "Bdicobmboqchzgbrqmcjdns Nwgybcytzjcpudlc", "Drvvmasnpjxsbbqwoxlyhcbvsxevvoyvd Oaepesggymyii", "Sprsrpkpxhniytpwliwhpualncfqyhmn Oohp", "Dsciyavgamtcwyiog Oriuvlndlzbdqtsleyaffisajk", "Qypdyjdgnehmfejg Owtbbm", "Tfryrjufdowfmlfebwudixrznirljndhe Ph", "Nckjmeeignrqfbdhcv Prjafrzynusnr", "Argrmouughuncqgwbeudxzkiirrwcmcfp Puapylmhvgy", "Mquomdgjrxjdcmcpzjwasmw Qhyklweyeujy", "Lcigrjzyagqglhgtgaojtqtdapwxjscrzl Qxohpbpsb", "Orufjmpjmtjtqrlbeulhvxxtgrzs Rcq", "Assjrqfdzhugiimqwyiiftrl Sktbqivshnaadyxgaucraj", "Lfrnruepukvrwnstywbhmwpt Surcrwis", "Crdodkezmmocjklxvuiflqatb Szqmcp", "Tvvchrrmlnnfvrlrzultuqjrcxjyu Tgvy", "Jjfjvyjldocxhweujpipghqtbn Udfcoi", "Jpzvgmtnpnopywsvkcjibehfpyyutnrli Uhke", "Dhyzgaxuzmpojrldomats Uvdo", "Gffyayxfoqewqqujlruhsse Uzqooyqhmdgvwclka", "Pdnayqbmprwgvtzkc Vbyleetwrpzqzaujuxv", "Wtlmusukpslrhhajhlkmbzohmr Vscbeiairdriwzdfqzqs", "Zvwqdzqqnwdzejqudozglthwfxtxchqhc Vtkjt", "Qyvgwqdetgquqtamhqczwd Wc", "Gsqtfhqzgkxntrzwbppyldiasgnej Xixwqgwbdryaxurzr", "Xdrwutfgztxnkzwvyy Xmgrnjrhhhikyvpz", "Oqrjkzlqcszfzgyygkxxeoyrmxkzrfbius Ybichq", "Tlhdduooiamckhplir Yimaskdt", "Zbofkkubodjevnoqqylauwnndjpsqvs Zgq"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> names = {"Smbi, Acetfteeusnqdtgcbftjcublay", "Buvfkvwoekv, Xlnabjkuvbligxrndvjik", "Tyzpbhsfzlseoriiybwernqkelakm Kxcg", "Yxbxjalvrftfoppalczp, Hognegwsqgbxzsqtdj", "Jdsxcdnjjo, Lutmfatsbhynwolgbulg", "Fmmnigxbfepevunhcktuf Breamkmqftc", "Zmttjbctnlqg, Vumiuhhiungszjthiexjqyqcvf", "Tzjmjewyfinyrqniqsymgvrelpuzysxn Pd", "Gpmqvslzeqwcwrqrvyreuy Wbjulpw", "Qkburf, Rkwtokprvokyefquawmfijwmmlgqhldm", "Icfppxci, Mulubyjblmwiqfxtxxkq", "Ktywxuxeqsqjyhsdvghhzh Foeziwsdwrkdtmpwxajtva", "Vjlinoxzitqfmyipphkepbxkqyoydsutfan Tjmsthypne", "Zbbsklz, Sqocnmkvwzexyetdplowdxhqgmwdeqv", "Mkfidgvatswxgexzwzpoygnv, Nppuwegxinfbabzyzmx", "Qqqmmyopsvnvun, Yfdmvmqjdvwywqwxjypcx", "Glw, Twgxnculonjidfhbasjiaqlywg", "Peaeyjtkyghglhbrhlqf Ougm", "Nejcsphsyzczq, Jubhpwxxkssrwgqo", "Jzwrrpohjnfkboenqyljl Lwz", "Nyp, Eqjviybgtcqqovawwgalqsmpr", "Cqwmgnwseidbseqxsat Kxhkkvabhcvchalmoemuoskb", "Hturveexnjehnhweaoctwrdpm Nwudwwz", "Hudswubrivcmisumlfarhuormrnbyodv Exycp", "Cewktyqemwthxkafiy Ijxjyud", "Vkccrnmy, Radfnyuevmvetcbnxeilggdhe", "Ixr, Vizjydypdfayrxclevkjfidv", "Jngwb, Krurqmmrsjokwarhbfzaedlcuzelgnggx", "Vyasifdvvoaqeekcocmkawbokmhv Tqlriejskthb", "E, Wyyaqqwkhnsmnupdtsahfneqatsmkpuufz", "Fvfbqwykcikvy, Bkcpdikouarxmdagvfwxmm", "Otyhwqkurnahhklbbabijcbsibzxamlmsl Kdlmgzxktfnu", "Tzknixvfsorfdi, Bgwoftmljazmjdjkptx", "Ylndhjglybtrggwhrgeqbepahtiynfw Igonzxzbbspnem", "Xjrftsoffjohym, Hftmxtromqevuuwje", "Tmllrnrunkdjhyeq Sxhokbzgdnsyrieduhtcxbkp", "Jjtrkogcimrodpqugflwwuqvsqiflwi Qykyg", "Lyeplinqnuizljucscempuladvrrl Lhddjvaf", "Rlhfjzqjlgtrczqafglctovykmsajbwvecl Ef", "Casbhlgbneaksywn Cdbvllwjdtacmhxyoi", "Ubsdmrtxyenrieoyslixficsuxpz Qt", "Wjwibzpso, Ssbbrguanrswijmhkmnkqjkbvqkflybpl", "Wyanwuvzx, Tnonkzhfbenmtuopsegnfaux", "Yisihlnpqgcnkpfybbsriftsfwbaxgv Ogqqi", "Vxssmhwwmwpoycid Ohb", "Fqonwxlcwzogihtk Qrxfogyvvrkuhlwg", "C, Tcmyzaewgatqabzzwbr", "Hhskhwaqryjfdbvpwrwzkfbgn Rctlsdpbm", "S, Ehqckrbhlwqgcyyheavhmrilgzvxb"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Fmmnigxbfepevunhcktuf Breamkmqftc", "Xlnabjkuvbligxrndvjik Buvfkvwoekv", "Tcmyzaewgatqabzzwbr C", "Casbhlgbneaksywn Cdbvllwjdtacmhxyoi", "Wyyaqqwkhnsmnupdtsahfneqatsmkpuufz E", "Rlhfjzqjlgtrczqafglctovykmsajbwvecl Ef", "Hudswubrivcmisumlfarhuormrnbyodv Exycp", "Ktywxuxeqsqjyhsdvghhzh Foeziwsdwrkdtmpwxajtva", "Bkcpdikouarxmdagvfwxmm Fvfbqwykcikvy", "Twgxnculonjidfhbasjiaqlywg Glw", "Mulubyjblmwiqfxtxxkq Icfppxci", "Ylndhjglybtrggwhrgeqbepahtiynfw Igonzxzbbspnem", "Cewktyqemwthxkafiy Ijxjyud", "Vizjydypdfayrxclevkjfidv Ixr", "Lutmfatsbhynwolgbulg Jdsxcdnjjo", "Krurqmmrsjokwarhbfzaedlcuzelgnggx Jngwb", "Otyhwqkurnahhklbbabijcbsibzxamlmsl Kdlmgzxktfnu", "Tyzpbhsfzlseoriiybwernqkelakm Kxcg", "Cqwmgnwseidbseqxsat Kxhkkvabhcvchalmoemuoskb", "Lyeplinqnuizljucscempuladvrrl Lhddjvaf", "Jzwrrpohjnfkboenqyljl Lwz", "Nppuwegxinfbabzyzmx Mkfidgvatswxgexzwzpoygnv", "Jubhpwxxkssrwgqo Nejcsphsyzczq", "Hturveexnjehnhweaoctwrdpm Nwudwwz", "Eqjviybgtcqqovawwgalqsmpr Nyp", "Yisihlnpqgcnkpfybbsriftsfwbaxgv Ogqqi", "Vxssmhwwmwpoycid Ohb", "Peaeyjtkyghglhbrhlqf Ougm", "Tzjmjewyfinyrqniqsymgvrelpuzysxn Pd", "Rkwtokprvokyefquawmfijwmmlgqhldm Qkburf", "Yfdmvmqjdvwywqwxjypcx Qqqmmyopsvnvun", "Fqonwxlcwzogihtk Qrxfogyvvrkuhlwg", "Ubsdmrtxyenrieoyslixficsuxpz Qt", "Jjtrkogcimrodpqugflwwuqvsqiflwi Qykyg", "Hhskhwaqryjfdbvpwrwzkfbgn Rctlsdpbm", "Ehqckrbhlwqgcyyheavhmrilgzvxb S", "Acetfteeusnqdtgcbftjcublay Smbi", "Tmllrnrunkdjhyeq Sxhokbzgdnsyrieduhtcxbkp", "Vjlinoxzitqfmyipphkepbxkqyoydsutfan Tjmsthypne", "Vyasifdvvoaqeekcocmkawbokmhv Tqlriejskthb", "Bgwoftmljazmjdjkptx Tzknixvfsorfdi", "Radfnyuevmvetcbnxeilggdhe Vkccrnmy", "Gpmqvslzeqwcwrqrvyreuy Wbjulpw", "Ssbbrguanrswijmhkmnkqjkbvqkflybpl Wjwibzpso", "Tnonkzhfbenmtuopsegnfaux Wyanwuvzx", "Hftmxtromqevuuwje Xjrftsoffjohym", "Hognegwsqgbxzsqtdj Yxbxjalvrftfoppalczp", "Sqocnmkvwzexyetdplowdxhqgmwdeqv Zbbsklz", "Vumiuhhiungszjthiexjqyqcvf Zmttjbctnlqg"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> names = {"Vkiijuwpbmtmcqpeorrytejq, Vdhbxsjrrueemrbmebu", "Nzrqzsvketxsviwytsmfuffkipmqbmawebs Trfnxxtne", "Xwccvubnhrvamcougsfsg Qjjervcbwurbxxw", "Tmexfqmavfvzcwihhlqnaeaa Cncogakjwjyjlwvvzaqy", "Ow, Lfzzkrglrfzoqofkxtfdueztaeyhoqryja", "Nsnslshljtyfyqsuzrhhykokdqqdktyn Cfsaygupzykt", "Nduhjuanjvtyhtihgbfsddunjwmbcyxblwk O", "Ykptwvcebcerljgwvpsktlmirxvolrop Xgeqhcpvpvxtta", "Demejkwigvjqivwxlxqynj, Beukefjtdsgkmvqj", "Sowcwoiohiiwquqdro Xppumqoyguaizbtlswwwioddtx", "Zzdunkziudjsjozkewesnfewco, Calndwjgktugfjhzigav", "Netodyttyskmgpmdppk, Chetjwbfsxyurchhzfkar", "Mtnyaln, Yhwbuwemylodwlsllcq", "Ucxgeemrywngkdxrny Xluqdial", "Xamokcglnxrvkkercyym Phaxntzrtododtxryzmgnuq", "Tkxrlymmmrsmkexlm Beiydrkgtpnhrykdt", "Zwetiazueskcwd, Mwrdgwvlcxzduxekpriudjnkzbj", "Buscsyqknievrbubxtxhyx Lyixsmyrorkkitdngkc", "Ha, Wapmaiiparmsdxczfnlbdhmdom", "Bpjtdmcxcofmtlfvvkf, Zcytfkjmbxhwukyrgnioysymcou", "Wevpgxvjwnyikumtdxovnfnoqhf Ztfzabcfhysxtcsuo", "Oxxbaxjm, Syzagpafdwralenocpcn", "Axgivhmsulb, Aqcdldnlfamcckpyxbvftwiztzznx", "Yicgblqkmtjinkjyfzzcxxmfyr Epkwtpzst", "Psmuuipucuac, Kaymacajzmlpzrotmlqikbzhdknb", "I, Gwvsjnsonyahqygfhbvvkyynpyobz", "Cqjawff, Vtxclqtejqxjxvajhuavvosvtorkzayuk", "Bwsaepsnngvgjwyjuijuqqjnoabanxkfn Jrfpiuww", "Kowrovojpwlacfxezp Cxttgqnrcqfwyibcmedfgrnkvr", "Kohsazhejxzwibpbyztyiwibuintaw Acscgx", "Xymjqxwucotsszkqsqmjq, Ojqmgmtzmaxvlsexs", "Vkijvt, Uqpcwmsvmgpuzxssavdghonmlt", "Dhfpbdfdfphqolupr Jtchoydnbcwxc", "Nzfbxpcmqofnpqw, Jticsqkubmmyjkleqzwrbdivji", "Pzlbfy, Anzxmpqjbednulcpyggmowicssczpuzcbb", "Wreytdgtpgfb, Zxvwlgwthkgejfddxrtfevygpcticom", "Czptdlkgbnwybuncpeldenixvckmt Sviizfhim", "Kankiugfhfjyzshaoauqoiaxixv Ibchqtdjgvqzfm", "Jykfffpfxevijwxubwyyhkaxzqkoyjrqdr Qikc", "Imcacvjjnbgkxxypp, Vuniebweljclzzvp", "Ogkfpxlsnx, Jvjfnqaoavllygtyk", "Nhrstzrtqwrbcjntlaotsbiaevttdvka Jvchjfrtvrd", "Bvtjwho, Gbcopoccojawdfbjzzclobqscrmgmuiiue", "Hjbwwgskfnzgpnpw Ukqavcvberkkawxyptpdrvnzegvrw", "Vgoktrvoxod, Znrvqwspzzdgocuozyzydvlnqunr", "Wahebqmvsgm, Jpujvyilsbxfkgtrnbiehxkk", "Yudhobhmqjequeaougbzltjrlkjyecbb Inskvjzlm", "Ygsratyfziydmdwmpqakweufjfkml Dgkomfnh"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Kohsazhejxzwibpbyztyiwibuintaw Acscgx", "Aqcdldnlfamcckpyxbvftwiztzznx Axgivhmsulb", "Tkxrlymmmrsmkexlm Beiydrkgtpnhrykdt", "Zcytfkjmbxhwukyrgnioysymcou Bpjtdmcxcofmtlfvvkf", "Gbcopoccojawdfbjzzclobqscrmgmuiiue Bvtjwho", "Nsnslshljtyfyqsuzrhhykokdqqdktyn Cfsaygupzykt", "Tmexfqmavfvzcwihhlqnaeaa Cncogakjwjyjlwvvzaqy", "Vtxclqtejqxjxvajhuavvosvtorkzayuk Cqjawff", "Kowrovojpwlacfxezp Cxttgqnrcqfwyibcmedfgrnkvr", "Beukefjtdsgkmvqj Demejkwigvjqivwxlxqynj", "Ygsratyfziydmdwmpqakweufjfkml Dgkomfnh", "Yicgblqkmtjinkjyfzzcxxmfyr Epkwtpzst", "Wapmaiiparmsdxczfnlbdhmdom Ha", "Gwvsjnsonyahqygfhbvvkyynpyobz I", "Kankiugfhfjyzshaoauqoiaxixv Ibchqtdjgvqzfm", "Vuniebweljclzzvp Imcacvjjnbgkxxypp", "Yudhobhmqjequeaougbzltjrlkjyecbb Inskvjzlm", "Bwsaepsnngvgjwyjuijuqqjnoabanxkfn Jrfpiuww", "Dhfpbdfdfphqolupr Jtchoydnbcwxc", "Nhrstzrtqwrbcjntlaotsbiaevttdvka Jvchjfrtvrd", "Buscsyqknievrbubxtxhyx Lyixsmyrorkkitdngkc", "Yhwbuwemylodwlsllcq Mtnyaln", "Chetjwbfsxyurchhzfkar Netodyttyskmgpmdppk", "Jticsqkubmmyjkleqzwrbdivji Nzfbxpcmqofnpqw", "Nduhjuanjvtyhtihgbfsddunjwmbcyxblwk O", "Jvjfnqaoavllygtyk Ogkfpxlsnx", "Lfzzkrglrfzoqofkxtfdueztaeyhoqryja Ow", "Syzagpafdwralenocpcn Oxxbaxjm", "Xamokcglnxrvkkercyym Phaxntzrtododtxryzmgnuq", "Kaymacajzmlpzrotmlqikbzhdknb Psmuuipucuac", "Anzxmpqjbednulcpyggmowicssczpuzcbb Pzlbfy", "Jykfffpfxevijwxubwyyhkaxzqkoyjrqdr Qikc", "Xwccvubnhrvamcougsfsg Qjjervcbwurbxxw", "Czptdlkgbnwybuncpeldenixvckmt Sviizfhim", "Nzrqzsvketxsviwytsmfuffkipmqbmawebs Trfnxxtne", "Hjbwwgskfnzgpnpw Ukqavcvberkkawxyptpdrvnzegvrw", "Znrvqwspzzdgocuozyzydvlnqunr Vgoktrvoxod", "Vdhbxsjrrueemrbmebu Vkiijuwpbmtmcqpeorrytejq", "Uqpcwmsvmgpuzxssavdghonmlt Vkijvt", "Jpujvyilsbxfkgtrnbiehxkk Wahebqmvsgm", "Zxvwlgwthkgejfddxrtfevygpcticom Wreytdgtpgfb", "Ykptwvcebcerljgwvpsktlmirxvolrop Xgeqhcpvpvxtta", "Ucxgeemrywngkdxrny Xluqdial", "Sowcwoiohiiwquqdro Xppumqoyguaizbtlswwwioddtx", "Ojqmgmtzmaxvlsexs Xymjqxwucotsszkqsqmjq", "Wevpgxvjwnyikumtdxovnfnoqhf Ztfzabcfhysxtcsuo", "Mwrdgwvlcxzduxekpriudjnkzbj Zwetiazueskcwd", "Calndwjgktugfjhzigav Zzdunkziudjsjozkewesnfewco"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> names = {"Mshronqkiupsguluomvrxleexmkttiqzoo Qfevgf", "Zluhoda, Ghextmcuiiyhcmjpnjqjt", "Iikknqaepqognl, Hvvhjyaeqohelbivjutxnocfrzfxtnq", "Ktkmwbbuknqmgigw Tfoimqzickvkdpvaumxwdyfbfal", "Utkeu, Heskudrkmeiimgfnnpa", "Zctqoksdeqhabsdoltlnbpiyznnt Jflfodg", "Bi, Hkprfgesbbyfjvwbdvcrqqf", "Xkqccuxjiflmxdyjmwqy Daqucpbgpzvpbkfptpehaqobn", "Tngcrzsicmvfcwukqcejpb, Pmzgrutkklotblnaev", "Jyvc, Xssdzymxymolyvbuvusphumekkbj", "Brqdonlxpqv, Kaudgylhsstpgbfygopkghgdemazlpc", "Djoioxriv, Ucdedpapsqxfiocbtqay", "Digwzfka, Ihpoqecuulqqjxapkzgtsyx", "Nonulolopoalmsozqghejgsxlsop Tasilijutmvyc", "R, Xbhpmooouqutrsjrcfyyk", "Xyzdi, Pwmkpnxfhpscxblvfprwe", "Srporbubkpabngsk Ugkqdqgdoxe", "Zesfwbxi, Uuxirafpoqcenabbrfyjfolmewyxlu", "Adznwhdfnjgaqpewmyjouhbxdk Ybbt", "Hlsfghqkehrmopqd Xsi", "Iucfxyubvwgaztynfcwwyukquzw Mnmrlci", "Lrnvqlbackqftakogdfnfwrwmgtr Gzjwtnmqiczrxrqy", "Clvgfxobfuekqogjnyivmc Herwtjrlrybcmqbhmy", "Cfpuuzxclrdwcvqsurvh Lnudhkmftazcesdcdchwi", "Cedkh, Oywotgulfmgucnrgvz", "Trhfnwrteieqlsqsdnyqzerbhrzphgb Pyph", "T, Fbgbzeaplaajucplpa", "Oqiod, Sdmxmpfluhxqtubdppb", "Pzddofykgctznjzkhjoitjhwyqkbc Bfmtve", "Nshesufcgtwvgkjiap, Xfdjbmqdjbtrjsjmfic", "Bgwjgbfcwtmifcsb Gskxyyqodfprijavljjcgiokuqv", "Ymzinltjqpxfszio Lcdwaojltmojyjzehcrnfmfccoft", "Qdlsgskzhnrfrehxjeoobffrs, Pxerdrjsfboqhoaig", "Xqafxnpxbyzykoojywzh, Ozanzrvgluhymstackgxnijozr", "Pqzqtonfnaagdeqnknkcbqbjcjsaiyiqkl M", "Stbtrxqvdy, Pohjtsrxpcfkvqecdqqqizccqimraaajb", "Cifeqtraraxjukuvfbkomcxlc Vtjhpcbcvsttspnfgon", "Qhgjvendgiftqvzunedzerqbsyhzpvk Hcloji", "Jucfrhybnxunealyxyrphvu I", "Lzbmnfvz, Uuasjeqdpghmuiliqolgeikyvmttban", "Fsbqqhplholekqf, Gqxgxhudqcpimqbxejmgtfkwov", "Fgsivqcyrdnavswazfdhfy Dnhnvxwwvbbjeoipxmlvqi", "Mvjhhtcftfmthng, Ewaeyzdpknwnqgwkjx", "Ppchojtvrzawjzedo Ctnbdmrjrzvrim", "Sjqigc, Myexsfutibhlxmwlafsinjrlkkreekyy", "Vxclbuai, Fmmghdwdqgalsgtncoqhoeatoduxvkzokef", "Vuwunvxmhkzcgmzlcc, Ejuqxggbnaizmgvkuoj", "Yerlmtnqgvsfkeigqqr Gkrxggkyi"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Pzddofykgctznjzkhjoitjhwyqkbc Bfmtve", "Hkprfgesbbyfjvwbdvcrqqf Bi", "Kaudgylhsstpgbfygopkghgdemazlpc Brqdonlxpqv", "Oywotgulfmgucnrgvz Cedkh", "Ppchojtvrzawjzedo Ctnbdmrjrzvrim", "Xkqccuxjiflmxdyjmwqy Daqucpbgpzvpbkfptpehaqobn", "Ihpoqecuulqqjxapkzgtsyx Digwzfka", "Ucdedpapsqxfiocbtqay Djoioxriv", "Fgsivqcyrdnavswazfdhfy Dnhnvxwwvbbjeoipxmlvqi", "Gqxgxhudqcpimqbxejmgtfkwov Fsbqqhplholekqf", "Yerlmtnqgvsfkeigqqr Gkrxggkyi", "Bgwjgbfcwtmifcsb Gskxyyqodfprijavljjcgiokuqv", "Lrnvqlbackqftakogdfnfwrwmgtr Gzjwtnmqiczrxrqy", "Qhgjvendgiftqvzunedzerqbsyhzpvk Hcloji", "Clvgfxobfuekqogjnyivmc Herwtjrlrybcmqbhmy", "Jucfrhybnxunealyxyrphvu I", "Hvvhjyaeqohelbivjutxnocfrzfxtnq Iikknqaepqognl", "Zctqoksdeqhabsdoltlnbpiyznnt Jflfodg", "Xssdzymxymolyvbuvusphumekkbj Jyvc", "Ymzinltjqpxfszio Lcdwaojltmojyjzehcrnfmfccoft", "Cfpuuzxclrdwcvqsurvh Lnudhkmftazcesdcdchwi", "Uuasjeqdpghmuiliqolgeikyvmttban Lzbmnfvz", "Pqzqtonfnaagdeqnknkcbqbjcjsaiyiqkl M", "Iucfxyubvwgaztynfcwwyukquzw Mnmrlci", "Ewaeyzdpknwnqgwkjx Mvjhhtcftfmthng", "Xfdjbmqdjbtrjsjmfic Nshesufcgtwvgkjiap", "Sdmxmpfluhxqtubdppb Oqiod", "Trhfnwrteieqlsqsdnyqzerbhrzphgb Pyph", "Pxerdrjsfboqhoaig Qdlsgskzhnrfrehxjeoobffrs", "Mshronqkiupsguluomvrxleexmkttiqzoo Qfevgf", "Xbhpmooouqutrsjrcfyyk R", "Myexsfutibhlxmwlafsinjrlkkreekyy Sjqigc", "Pohjtsrxpcfkvqecdqqqizccqimraaajb Stbtrxqvdy", "Fbgbzeaplaajucplpa T", "Nonulolopoalmsozqghejgsxlsop Tasilijutmvyc", "Ktkmwbbuknqmgigw Tfoimqzickvkdpvaumxwdyfbfal", "Pmzgrutkklotblnaev Tngcrzsicmvfcwukqcejpb", "Srporbubkpabngsk Ugkqdqgdoxe", "Heskudrkmeiimgfnnpa Utkeu", "Cifeqtraraxjukuvfbkomcxlc Vtjhpcbcvsttspnfgon", "Ejuqxggbnaizmgvkuoj Vuwunvxmhkzcgmzlcc", "Fmmghdwdqgalsgtncoqhoeatoduxvkzokef Vxclbuai", "Ozanzrvgluhymstackgxnijozr Xqafxnpxbyzykoojywzh", "Hlsfghqkehrmopqd Xsi", "Pwmkpnxfhpscxblvfprwe Xyzdi", "Adznwhdfnjgaqpewmyjouhbxdk Ybbt", "Uuxirafpoqcenabbrfyjfolmewyxlu Zesfwbxi", "Ghextmcuiiyhcmjpnjqjt Zluhoda"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> names = {"Yhmwazhwakicegyzoihjnizperf Qyytzkiplg", "Oierhobpfaeuwnucwuczxvtaikangt Vicqddwrauhs", "Vsobuoblhhpzmoigifesjcvdcgklmo Pxocsitnyrvvk", "Qktkchozzekfeihuwxm Fjiqvyvzuidwv", "Ohpkwidxgquj, Vxlerydbgxofzlubciunkjzhnbygid", "Gsunhilfmihmldtpveljieaffqrgivm Acugadpkbnzm", "Iwelqffjdxoejrddyxuf, Goqkonnagwdlraqexftfxcpfl", "Zezdjdlxqssbrqekogxuvkrcpkx Ntdfnnpbscmmiyijsr", "Qj, Wtxgbzfotdiyxhcvskhcrqmbkqdjbocmtof", "Ghldudzqgz, Camzdkkdhmylqyfvcogchhrqvpb", "Bkdculxdwabkhlbs, Xsixlvmhbbbexbithuu", "Sagyuqmhvmeaqmeat Roteatlqlekjuxytutfssnkammexl", "Wdmkgpfzq, Mmkbvsjleiqoopzhepseontrkgfvoyyhkg", "Hpclowddkslobcmkcrd, Bmwujjibunxnzuzzvszw", "Jnzirlrlakvdybx, Xhkyxvnziletwgpaqvtgxwyyskuhd", "Wy, Licqmpvftfxinoebfnpxfucxbzkhimms", "Rm, Zxijqwrsmdwtyeuwbplmqxshqzpq", "Fblqpbwkj, Cqnqjsadgjlfkyxlalwrkicnkwekr", "Paaihpcxgytzyzjhympoouoiqrabmkbfdhz Ctfeuhooroh", "Gtmagkrfrd, Fherqqhcfrhazsbfbuhfcufa", "Sbkknewxrgqbclplesukzmfdzfecutqsk Wzc", "Tcgucokvpkuagwqdhbipmyt Ymkcgana", "Tbyuftvszdscapywpwnfpsmaloyx D", "Hxknxhkfwnpjroknnkbhisyksjsdvngtp Zfimkqbxpr", "Xtkqaneea, Peqowuadftlbbwknyphwfyzytkrtslwnwam", "Vtfeevksqjc, Spslvdzlvblsknqljjfpn", "Grcjjp, Oxubyzwgnzxllivwmdtnvolxrnlm", "Lkclefhkezszbpljn, Ykcqwpnvhmesaljmbpnnuy", "Fuphyfoxvmayrmyywqjxmq Qx", "Ydyxojghdwbasbco Dbnavpgg", "Lpikmnifwjjuh, Mkzfjkzujmoqlswahghwvp", "Odmuzlnuoeivrjgttssztaaqgmcjjo E", "Brwgyepnzrlbfoiyct Agtfiuljishfpof", "Hqpcfdrocuzgjcyuw Otjhbjxsbzsrkmxiziyxlo", "Jtmgecwbdgouqrrlynkuou Eyi", "Yyknajhmktbxekdvinpfb X", "Ryyyiuk, Ywjinhvyyppsgtcsgyboxyknzxcafgca", "Jshuownkauccev, Ucisiievhwuwwkqzxmff", "Ogifenjxybjlfzuukymcj, Daflubwleygkczboxvuxsez", "Swu, Ovoivefmhibdbvjxwlrylczo", "Qblnbwbwutoeuhpmtboumcxurctdjfxlhax Kwu", "Mywcapbnhidjjjtwhrwtgagnnbbmmrr Wksrmtu", "Mrlx, Stwcppqbcfnnsmrkefljpcqn", "Ixxbmlugsro, Resltkzahjjclvuvqovhwzklcoa", "Zmdjcwzcnaojpfwafxjclzdzqldivbq Ynrcsijdrhauh", "Zxgxkiexmzrdumj, Gkmjzhejcxmgcabyzye", "Weyrnivlhdfewouatupggtk, Cgdtynqkxgzehbyjsetyl"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Gsunhilfmihmldtpveljieaffqrgivm Acugadpkbnzm", "Brwgyepnzrlbfoiyct Agtfiuljishfpof", "Xsixlvmhbbbexbithuu Bkdculxdwabkhlbs", "Paaihpcxgytzyzjhympoouoiqrabmkbfdhz Ctfeuhooroh", "Tbyuftvszdscapywpwnfpsmaloyx D", "Ydyxojghdwbasbco Dbnavpgg", "Odmuzlnuoeivrjgttssztaaqgmcjjo E", "Jtmgecwbdgouqrrlynkuou Eyi", "Cqnqjsadgjlfkyxlalwrkicnkwekr Fblqpbwkj", "Qktkchozzekfeihuwxm Fjiqvyvzuidwv", "Camzdkkdhmylqyfvcogchhrqvpb Ghldudzqgz", "Oxubyzwgnzxllivwmdtnvolxrnlm Grcjjp", "Fherqqhcfrhazsbfbuhfcufa Gtmagkrfrd", "Bmwujjibunxnzuzzvszw Hpclowddkslobcmkcrd", "Goqkonnagwdlraqexftfxcpfl Iwelqffjdxoejrddyxuf", "Resltkzahjjclvuvqovhwzklcoa Ixxbmlugsro", "Xhkyxvnziletwgpaqvtgxwyyskuhd Jnzirlrlakvdybx", "Ucisiievhwuwwkqzxmff Jshuownkauccev", "Qblnbwbwutoeuhpmtboumcxurctdjfxlhax Kwu", "Ykcqwpnvhmesaljmbpnnuy Lkclefhkezszbpljn", "Mkzfjkzujmoqlswahghwvp Lpikmnifwjjuh", "Stwcppqbcfnnsmrkefljpcqn Mrlx", "Zezdjdlxqssbrqekogxuvkrcpkx Ntdfnnpbscmmiyijsr", "Daflubwleygkczboxvuxsez Ogifenjxybjlfzuukymcj", "Vxlerydbgxofzlubciunkjzhnbygid Ohpkwidxgquj", "Hqpcfdrocuzgjcyuw Otjhbjxsbzsrkmxiziyxlo", "Vsobuoblhhpzmoigifesjcvdcgklmo Pxocsitnyrvvk", "Wtxgbzfotdiyxhcvskhcrqmbkqdjbocmtof Qj", "Fuphyfoxvmayrmyywqjxmq Qx", "Yhmwazhwakicegyzoihjnizperf Qyytzkiplg", "Zxijqwrsmdwtyeuwbplmqxshqzpq Rm", "Sagyuqmhvmeaqmeat Roteatlqlekjuxytutfssnkammexl", "Ywjinhvyyppsgtcsgyboxyknzxcafgca Ryyyiuk", "Ovoivefmhibdbvjxwlrylczo Swu", "Oierhobpfaeuwnucwuczxvtaikangt Vicqddwrauhs", "Spslvdzlvblsknqljjfpn Vtfeevksqjc", "Mmkbvsjleiqoopzhepseontrkgfvoyyhkg Wdmkgpfzq", "Cgdtynqkxgzehbyjsetyl Weyrnivlhdfewouatupggtk", "Mywcapbnhidjjjtwhrwtgagnnbbmmrr Wksrmtu", "Licqmpvftfxinoebfnpxfucxbzkhimms Wy", "Sbkknewxrgqbclplesukzmfdzfecutqsk Wzc", "Yyknajhmktbxekdvinpfb X", "Peqowuadftlbbwknyphwfyzytkrtslwnwam Xtkqaneea", "Tcgucokvpkuagwqdhbipmyt Ymkcgana", "Zmdjcwzcnaojpfwafxjclzdzqldivbq Ynrcsijdrhauh", "Hxknxhkfwnpjroknnkbhisyksjsdvngtp Zfimkqbxpr", "Gkmjzhejcxmgcabyzye Zxgxkiexmzrdumj"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> names = {"Joe Smith", "Brown, Sam", "Miller, Judi"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Sam Brown", "Judi Miller", "Joe Smith"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> names = {"Carlos Peres", "Zzzz Aaaa"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Zzzz Aaaa", "Carlos Peres"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> names = {"Campbell, Phil", "John Campbell", "Young, Warren"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John Campbell", "Phil Campbell", "Warren Young"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> names = {"Trevor Alvarez", "Jackson, Walter", "Mandi Stuart", "Martin, Michael", "Peters, Tammy", "Richard Belmont", "Carl Thomas", "Ashton, Roger", "Jamie Martin"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Trevor Alvarez", "Roger Ashton", "Richard Belmont", "Walter Jackson", "Jamie Martin", "Michael Martin", "Tammy Peters", "Mandi Stuart", "Carl Thomas"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> names = {"Trevor Alvarez", "Jackson, Walter", "Mandi Stuart", "Martin, Michael", "Peters, Tammy", "Richard Belmont", "Carl Thomas", "Ashton, Roger", "Jamie Martin", "Martin, Micha", "Martin, Mic"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Trevor Alvarez", "Roger Ashton", "Richard Belmont", "Walter Jackson", "Jamie Martin", "Mic Martin", "Micha Martin", "Michael Martin", "Tammy Peters", "Mandi Stuart", "Carl Thomas"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> names = {"A, Bob", "Rob Hot"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob A", "Rob Hot"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> names = {"A, B", "B, A"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B A", "A B"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> names = {"John Smith", "Smithen, John", "Joe Smith", "Jack Smith", "Smith, Jack", "Jack Smith", "Jack, Smith", "Smith, John", "John Smith"};
    ClientsList* pObj = new ClientsList();
    clock_t start = clock();
    vector<string> result = pObj->dataCleanup(names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Smith Jack", "Jack Smith", "Jack Smith", "Jack Smith", "Joe Smith", "John Smith", "John Smith", "John Smith", "John Smithen"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7479769&rd=6516&pm=3520
********************************************************************************
#include <string>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
 
using namespace std;
 
class ClientsList {
public:
  vector <string> dataCleanup(vector <string> names) {
    vector<pair<string,string> > v;
    for (int i=0;i<names.size();i++) {
      istringstream str(names[i]);
      string s1,s2;
      str >> s1 >> s2;
      if (s1[s1.size()-1]==',') {
        v.push_back(make_pair(s1.substr(0,s1.size()-1),s2));
      } else {
        v.push_back(make_pair(s2,s1));
      }
    }
    sort(v.begin(),v.end());
    vector<string> ret;
    for (int i=0;i<v.size();i++) {
      ret.push_back(v[i].second+" "+v[i].first);
    }
    return ret;
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/