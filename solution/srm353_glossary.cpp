/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7838
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

class Glossary {
public:
    vector<string> buildGlossary(vector<string> items);
};

vector<string> Glossary::buildGlossary(vector<string> items) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> items = {"Canada", "France", "Germany", "Italy", "Japan", "Russia", "United Kingdom", "United States"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C R ", "------------------- -------------------", " Canada Russia ", "F U ", "------------------- -------------------", " France United Kingdom ", "G United States ", "------------------- ", " Germany ", "I ", "------------------- ", " Italy ", "J ", "------------------- ", " Japan "};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> items = {"alpha", "beta", "gamma", "delta", "omega"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A O ", "------------------- -------------------", " alpha omega ", "B ", "------------------- ", " beta ", "D ", "------------------- ", " delta ", "G ", "------------------- ", " gamma "};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> items = {"AVL tree", "backtracking", "array", "balanced tree", "binary search"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " array ", " AVL tree ", "B ", "------------------- ", " backtracking ", " balanced tree ", " binary search "};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> items = {"XXXXXXXXXXXXXXXXX", "YYYYYYYYYYYYYYYYY", "ZZZZZZZZZZZZZZZZZ"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X ", " -------------------", " XXXXXXXXXXXXXXXXX", " Y ", " -------------------", " YYYYYYYYYYYYYYYYY", " Z ", " -------------------", " ZZZZZZZZZZZZZZZZZ"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> items = {"Asteria", "Astraeus", "Atlas", "Clymene", "Coeus", "Crius", "Cronus", "Dione", "Epimetheus", "Helios", "Hyperion", "Iapetus", "Leto", "Mnemosyne", "Oceanus", "Ophion", "Phoebe", "Prometheus", "Rhea", "Tethys", "Theia", "Themis"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A O ", "------------------- -------------------", " Asteria Oceanus ", " Astraeus Ophion ", " Atlas P ", "C -------------------", "------------------- Phoebe ", " Clymene Prometheus ", " Coeus R ", " Crius -------------------", " Cronus Rhea ", "D T ", "------------------- -------------------", " Dione Tethys ", "E Theia ", "------------------- Themis ", " Epimetheus ", "H ", "------------------- ", " Helios ", " Hyperion ", "I ", "------------------- ", " Iapetus ", "L ", "------------------- ", " Leto ", "M ", "------------------- ", " Mnemosyne "};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> items = {"Assessor", "adverBs", "aperitif", "Artery", "Airliners", "assistants", "Assembly", "anthropOlogY", "addictive", "Astronomers", "Averages", "Already", "AcqUisition", "Adjudging", "Adduced", "Algal", "Agronomy", "Achieving", "Aureoles", "administeriNg", "adulteration", "aspen", "abseiLs", "Alpine", "affixed", "Amuses", "Act", "Adjoined", "anyhow", "antiperspirant", "AiRplanes", "AccenTuate", "adulterated", "Apiece", "AffablE", "anodyne", "alarmist", "as", "Album", "Almoners", "Affiliates", "AnthIlLs", "anTiquities", "Aspirin", "affectations", "Abutting", "Allotting", "Allergens", "accessorised", "aBased"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aBased ", " abseiLs ", " Abutting ", " AccenTuate ", " accessorised ", " Achieving ", " AcqUisition ", " Act ", " addictive ", " Adduced ", " Adjoined ", " Adjudging ", " administeriNg ", " adulterated ", " adulteration ", " adverBs ", " AffablE ", " affectations ", " Affiliates ", " affixed ", " Agronomy ", " Airliners ", " AiRplanes ", " alarmist ", " Album ", " Algal ", " Allergens ", " Allotting ", " Almoners ", " Alpine ", " Already ", " Amuses ", " anodyne ", " AnthIlLs ", " anthropOlogY ", " antiperspirant ", " anTiquities ", " anyhow ", " aperitif ", " Apiece ", " Artery ", " as ", " aspen ", " Aspirin ", " Assembly ", " Assessor ", " assistants ", " Astronomers ", " Aureoles ", " Averages "};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> items = {"Malefactors", "Mains", "mooning", "memos", "metamorphosis", "Mightier", "Morgue", "Manipulative", "MajOrdomos", "marketeers", "Mashing", "Match", "Mosaics", "Meantime", "mobilisation", "measurEments", "maximum", "molests", "moI", "Mincing", "MournfulnESs", "Mandate", "Merciful", "Mailman", "Mistrust", "Mulish", "mitigating", "matRons", "molding", "Missteps", "Masochists", "Melodramas", "Muzzled", "mails", "MoTto", "Moccasins", "mistimes", "meanest", "MilOmeters", "meteors", "Mediums", "midsHipman", "motherly", "marginalizing", "MIght", "movers", "Marring", "Mirrors", "misguidedlY", "mincemeat"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M ", "------------------- ", " Mailman ", " mails ", " Mains ", " MajOrdomos ", " Malefactors ", " Mandate ", " Manipulative ", " marginalizing ", " marketeers ", " Marring ", " Mashing ", " Masochists ", " Match ", " matRons ", " maximum ", " meanest ", " Meantime ", " measurEments ", " Mediums ", " Melodramas ", " memos ", " Merciful ", " metamorphosis ", " meteors ", " midsHipman ", " MIght ", " Mightier ", " MilOmeters ", " mincemeat ", " Mincing ", " Mirrors ", " misguidedlY ", " Missteps ", " mistimes ", " Mistrust ", " mitigating ", " mobilisation ", " Moccasins ", " moI ", " molding ", " molests ", " mooning ", " Morgue ", " Mosaics ", " motherly ", " MoTto ", " MournfulnESs ", " movers ", " Mulish ", " Muzzled "};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> items = {"Cancan", "Altos", "ComFortless", "busied", "battlegrounds", "crumbs", "Acreages", "AirworthIness", "Anoraks", "calligraphy", "Carburetor", "beauty", "Airlines", "animatedly", "buskers", "Confessing", "Barricades", "anklets", "Compartmentalize", "bitty", "camisole", "accomplish", "connoted", "avalanches", "bricklayer", "brogue", "Clairvoyant", "bunkhouSe", "comprehends", "belch", "blockade", "consortia", "Bridegrooms", "beat", "conduits", "cuckoLded", "Cloudiest", "amend", "craggy", "compressing", "amBush", "Assemblywoman", "Appraising", "Austere", "Credulousness", "coppers", "bloating", "chatterBox", "Brawled", "appoiNtees"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " accomplish ", " Acreages ", " Airlines ", " AirworthIness ", " Altos ", " amBush ", " amend ", " animatedly ", " anklets ", " Anoraks ", " appoiNtees ", " Appraising ", " Assemblywoman ", " Austere ", " avalanches ", "B ", "------------------- ", " Barricades ", " battlegrounds ", " beat ", " beauty ", " belch ", " bitty ", " bloating ", " blockade ", " Brawled ", " bricklayer ", " Bridegrooms ", " brogue ", " bunkhouSe ", " busied ", " buskers ", "C ", "------------------- ", " calligraphy ", " camisole ", " Cancan ", " Carburetor ", " chatterBox ", " Clairvoyant ", " Cloudiest ", " ComFortless ", " Compartmentalize ", " comprehends ", " compressing ", " conduits ", " Confessing ", " connoted ", " consortia ", " coppers ", " craggy ", " Credulousness ", " crumbs ", " cuckoLded "};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> items = {"griffon", "geNerics", "hALlucinaTe", "gangly", "Granting", "Fraud", "glibness", "Fustier", "Fairylands", "farms", "Hydroplaned", "Fens", "hypnotised", "Galaxies", "Grooming", "highfalutin", "Gyroscopic", "Hoovering", "Hypothesize", "Hotfoots", "firetraps", "famous", "HayricK", "hurtfullY", "Fronts", "hiccup", "height", "grenades", "Heated", "gobbled", "Handicaps", "hagiographies", "Girders", "Grandee", "Homebody", "Hideouts", "gyrates", "fells", "Grates", "Hairbrushes", "grommet", "GaUzy", "Ganglions", "hotpots", "Heralded", "Ferry", "guardrail", "Fleeces", "humidifies", "Hopes"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F ", "------------------- ", " Fairylands ", " famous ", " farms ", " fells ", " Fens ", " Ferry ", " firetraps ", " Fleeces ", " Fraud ", " Fronts ", " Fustier ", "G ", "------------------- ", " Galaxies ", " Ganglions ", " gangly ", " GaUzy ", " geNerics ", " Girders ", " glibness ", " gobbled ", " Grandee ", " Granting ", " Grates ", " grenades ", " griffon ", " grommet ", " Grooming ", " guardrail ", " gyrates ", " Gyroscopic ", "H ", "------------------- ", " hagiographies ", " Hairbrushes ", " hALlucinaTe ", " Handicaps ", " HayricK ", " Heated ", " height ", " Heralded ", " hiccup ", " Hideouts ", " highfalutin ", " Homebody ", " Hoovering ", " Hopes ", " Hotfoots ", " hotpots ", " humidifies ", " hurtfullY ", " Hydroplaned ", " hypnotised ", " Hypothesize "};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> items = {"neaten", "nomenclatures", "navigating", "Notepads", "newts", "naturalisTs", "Nowhere", "niTrogen", "neatest", "Neutered", "nOnresidents", "negroid", "Nixed", "NaRcissi", "Neatness", "noisome", "neonatal", "Nexus", "noodling", "Narrators", "necromAnceRs", "Nepotistic", "novelette", "Neckties", "nestling", "newcomer", "Northern", "Newspapers", "nobleman", "Necking", "nook", "naval", "Nameplates", "Nudity", "Night", "nominees", "Nippers", "Nutritious", "natuRalizing", "Nobility", "nicest", "Newsstands", "NEighed", "Nothingness", "naturalness", "Normalizing", "neophytes", "Naming", "none", "Nominate"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" N ", " -------------------", " Nameplates ", " Naming ", " NaRcissi ", " Narrators ", " naturalisTs ", " natuRalizing ", " naturalness ", " naval ", " navigating ", " neaten ", " neatest ", " Neatness ", " Necking ", " Neckties ", " necromAnceRs ", " negroid ", " NEighed ", " neonatal ", " neophytes ", " Nepotistic ", " nestling ", " Neutered ", " newcomer ", " Newspapers ", " Newsstands ", " newts ", " Nexus ", " nicest ", " Night ", " Nippers ", " niTrogen ", " Nixed ", " Nobility ", " nobleman ", " noisome ", " nomenclatures ", " Nominate ", " nominees ", " none ", " nOnresidents ", " noodling ", " nook ", " Normalizing ", " Northern ", " Notepads ", " Nothingness ", " novelette ", " Nowhere ", " Nudity ", " Nutritious "};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> items = {"TowNee", "Trenchant", "tulipS", "Trades", "trialIng", "teletypewriters", "tunelessly", "Trustees", "theism", "Tastings", "thorns", "torpid", "Transactions", "tyranny", "TArred", "testing", "tenses", "Taping", "toga", "Tenderised", "ticKled", "TobacConists", "thrift", "Tribunals", "transcended", "tom", "tendrils", "typecasts", "twitches", "triviality", "Tightness", "Tzar", "tranSlating", "TrIumphalist", "Trainer", "Trumpet", "Threatens", "TAPpeTs", "Tablespoonfuls", "Tassels", "Tracksuits", "trilbIes", "transforms", "Titivate", "TaRtly", "they", "Testified", "Truces", "tobogganIng", "TrAnssexuAls"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" T ", " -------------------", " Tablespoonfuls ", " Taping ", " TAPpeTs ", " TArred ", " TaRtly ", " Tassels ", " Tastings ", " teletypewriters ", " Tenderised ", " tendrils ", " tenses ", " Testified ", " testing ", " theism ", " they ", " thorns ", " Threatens ", " thrift ", " ticKled ", " Tightness ", " Titivate ", " TobacConists ", " tobogganIng ", " toga ", " tom ", " torpid ", " TowNee ", " Tracksuits ", " Trades ", " Trainer ", " Transactions ", " transcended ", " transforms ", " tranSlating ", " TrAnssexuAls ", " Trenchant ", " trialIng ", " Tribunals ", " trilbIes ", " TrIumphalist ", " triviality ", " Truces ", " Trumpet ", " Trustees ", " tulipS ", " tunelessly ", " twitches ", " typecasts ", " tyranny ", " Tzar "};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> items = {"Toady", "Tiler", "taskmasters", "tuba", "tiResOmely", "Typos", "TEammate", "thyroid", "Turtledove", "titch", "toddle", "Thong", "Tenth", "ToRmentors", "tramcArs", "theorists", "tenderised", "technologies", "trivially", "Talc", "Townhouse", "Tunefully", "troughs", "Tape", "tromping", "titivating", "thResholds", "telecasting", "takes", "Transported", "thinker", "TortUre", "topographer", "timElinesS", "tricky", "tapioca", "toss", "Testing", "Tyrannies", "tumblEdown", "TeletypewritEr", "tautologically", "triUmphAlism", "thriftIness", "Transceiver", "tonnEs", "Topee", "tissue", "tenaciously", "Tuque"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" T ", " -------------------", " takes ", " Talc ", " Tape ", " tapioca ", " taskmasters ", " tautologically ", " TEammate ", " technologies ", " telecasting ", " TeletypewritEr ", " tenaciously ", " tenderised ", " Tenth ", " Testing ", " theorists ", " thinker ", " Thong ", " thResholds ", " thriftIness ", " thyroid ", " Tiler ", " timElinesS ", " tiResOmely ", " tissue ", " titch ", " titivating ", " Toady ", " toddle ", " tonnEs ", " Topee ", " topographer ", " ToRmentors ", " TortUre ", " toss ", " Townhouse ", " tramcArs ", " Transceiver ", " Transported ", " tricky ", " triUmphAlism ", " trivially ", " tromping ", " troughs ", " tuba ", " tumblEdown ", " Tunefully ", " Tuque ", " Turtledove ", " Typos ", " Tyrannies "};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> items = {"putsches", "phonemic", "Quashed", "Schoolwork", "RedeploymeNt", "Quadrupeds", "rivulET", "quarterly", "Tampered", "quarto", "Princesses", "radish", "togging", "steelworkers", "pares", "Quenches", "Unplaced", "quip", "Smaller", "Precipitately", "tiebreakers", "Questioners", "rapiers", "unmarked", "Ultraviolet", "tramps", "undulations", "UnvArNished", "ValenciEs", "Quelling", "unthinkinglY", "skid", "quitters", "scrunching", "Vigour", "tarmacked", "Sandblast", "Teacup", "quaff", "resonantly", "Spandex", "retreaded", "RApidity", "Twisty", "Quins", "retroactively", "Verrucas", "pretenses", "pOrterhouse", "tumbledown"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" P ", " -------------------", " pares ", " phonemic ", " pOrterhouse ", " Precipitately ", " pretenses ", " Princesses ", " putsches ", " Q ", " -------------------", " Quadrupeds ", " quaff ", " quarterly ", " quarto ", " Quashed ", " Quelling ", " Quenches ", " Questioners ", " Quins ", " quip ", " quitters ", " R ", " -------------------", " radish ", " RApidity ", " rapiers ", " RedeploymeNt ", " resonantly ", " retreaded ", " retroactively ", " rivulET ", " S ", " -------------------", " Sandblast ", " Schoolwork ", " scrunching ", " skid ", " Smaller ", " Spandex ", " steelworkers ", " T ", " -------------------", " Tampered ", " tarmacked ", " Teacup ", " tiebreakers ", " togging ", " tramps ", " tumbledown ", " Twisty ", " U ", " -------------------", " Ultraviolet ", " undulations ", " unmarked ", " Unplaced ", " unthinkinglY ", " UnvArNished ", " V ", " -------------------", " ValenciEs ", " Verrucas ", " Vigour "};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> items = {"Ganged", "Kill", "gentrifying", "hurling", "Hardback", "Grammar", "glamorizes", "humAnises", "Kept", "Knelt", "kenning", "Headlocks", "Kilogrammes", "Geniuses", "grumble", "kale", "Godlessly", "grafts", "histrionic", "hotpots", "greedier", "gauged", "KnowIngly", "Gents", "kleptomaniacs", "Glibly", "herb", "knotTing", "HunchiNg", "HacklEs", "Kippers", "Husks", "Kipped", "heliotrope", "gaolers", "kingfisher", "keystroke", "Homosexuality", "Hallucinogen", "Grieve", "Guardedly", "goner", "Graceless", "hydrofoils", "KeyPUnches", "Genuflecting", "gymnastic", "KnIt", "goddaughter", "Governmental"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"G ", "------------------- ", " Ganged ", " gaolers ", " gauged ", " Geniuses ", " gentrifying ", " Gents ", " Genuflecting ", " glamorizes ", " Glibly ", " goddaughter ", " Godlessly ", " goner ", " Governmental ", " Graceless ", " grafts ", " Grammar ", " greedier ", " Grieve ", " grumble ", " Guardedly ", " gymnastic ", "H ", "------------------- ", " HacklEs ", " Hallucinogen ", " Hardback ", " Headlocks ", " heliotrope ", " herb ", " histrionic ", " Homosexuality ", " hotpots ", " humAnises ", " HunchiNg ", " hurling ", " Husks ", " hydrofoils ", "K ", "------------------- ", " kale ", " kenning ", " Kept ", " KeyPUnches ", " keystroke ", " Kill ", " Kilogrammes ", " kingfisher ", " Kipped ", " Kippers ", " kleptomaniacs ", " Knelt ", " KnIt ", " knotTing ", " KnowIngly "};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> items = {"ImBroglios", "Inured", "achieVement", "interscholastic", "adverbial", "indifferent", "internally", "Immigrants", "Afflicted", "Improvement", "Deceiver", "Idioms", "Duplex", "InSults", "Deputises", "initialled", "Depredation", "Decanted", "artists", "disappoIntMent", "appositE", "Deportees", "annoyingLy", "anecdotes", "industrialist", "Demotic", "Distribution", "amputations", "depravity", "Dirtying", "deconstructEd", "Dogma", "Impregnated", "dumpling", "interrUPted", "Daffy", "Inhale", "Dictionaries", "Dossers", "Absences", "Deficit", "Aqueous", "Interspersed", "AcqUaint", "Identikits", "icily", "Awesomely", "autocross", "abstaining", "Adventures"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " Absences ", " abstaining ", " achieVement ", " AcqUaint ", " Adventures ", " adverbial ", " Afflicted ", " amputations ", " anecdotes ", " annoyingLy ", " appositE ", " Aqueous ", " artists ", " autocross ", " Awesomely ", "D ", "------------------- ", " Daffy ", " Decanted ", " Deceiver ", " deconstructEd ", " Deficit ", " Demotic ", " Deportees ", " depravity ", " Depredation ", " Deputises ", " Dictionaries ", " Dirtying ", " disappoIntMent ", " Distribution ", " Dogma ", " Dossers ", " dumpling ", " Duplex ", "I ", "------------------- ", " icily ", " Identikits ", " Idioms ", " ImBroglios ", " Immigrants ", " Impregnated ", " Improvement ", " indifferent ", " industrialist ", " Inhale ", " initialled ", " InSults ", " internally ", " interrUPted ", " interscholastic ", " Interspersed ", " Inured "};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> items = {"Mat", "Euphonious", "Beekeeping", "Flannels", "Choreographic", "Kitting", "Awake", "kissing", "muckier", "Deluding", "Bolshie", "bimbos", "Awesome", "lodgers", "equalized", "Miaowing", "JoggleS", "head", "Gladiola", "checkpoints", "absence", "ItaliciZing", "flextime", "anaesthetises", "motor", "involunTary", "condescends", "ArcaDe", "Encourages", "aware", "mar", "Martyring", "mudslides", "mendacious", "EnErgetically", "glassiest", "greases", "inaccurately", "Cession", "Heal", "BeTokening", "LitteriNg", "banana", "hijacks", "Marketeers", "DromedarieS", "flub", "cleaners", "Estimate", "geek"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " absence ", " anaesthetises ", " ArcaDe ", " Awake ", " aware ", " Awesome ", "B ", "------------------- ", " banana ", " Beekeeping ", " BeTokening ", " bimbos ", " Bolshie ", "C ", "------------------- ", " Cession ", " checkpoints ", " Choreographic ", " cleaners ", " condescends ", "D ", "------------------- ", " Deluding ", " DromedarieS ", "E ", "------------------- ", " Encourages ", " EnErgetically ", " equalized ", " Estimate ", " Euphonious ", "F ", "------------------- ", " Flannels ", " flextime ", " flub ", "G ", "------------------- ", " geek ", " Gladiola ", " glassiest ", " greases ", "H ", "------------------- ", " head ", " Heal ", " hijacks ", "I ", "------------------- ", " inaccurately ", " involunTary ", " ItaliciZing ", "J ", "------------------- ", " JoggleS ", "K ", "------------------- ", " kissing ", " Kitting ", "L ", "------------------- ", " LitteriNg ", " lodgers ", "M ", "------------------- ", " mar ", " Marketeers ", " Martyring ", " Mat ", " mendacious ", " Miaowing ", " motor ", " muckier ", " mudslides "};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> items = {"jumpier", "bursar", "BookIngs", "iNfusion", "brothel", "bougainvillea", "brIefest", "gaped", "gamblers", "jubilantly", "Jive", "jauntineSs", "goldfields", "fiancee", "jilts", "foresters", "Badness", "balmy", "GumbOot", "Bails", "Irrational", "ballyhoos", "bandies", "foregrounding", "graPefruIts", "IncrUstation", "Fulfilling", "GloBalization", "interbreeDs", "Foals", "jungles", "Glues", "FiGuring", "Glory", "Gumdrop", "journos", "FincHes", "impairment", "ferocity", "graIns", "behaving", "jubilation", "beSieGing", "Jazziest", "Jeweler", "gallants", "fatherlaNd", "Borehole", "jibbing", "Burnished"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B ", "------------------- ", " Badness ", " Bails ", " ballyhoos ", " balmy ", " bandies ", " behaving ", " beSieGing ", " BookIngs ", " Borehole ", " bougainvillea ", " brIefest ", " brothel ", " Burnished ", " bursar ", "F ", "------------------- ", " fatherlaNd ", " ferocity ", " fiancee ", " FiGuring ", " FincHes ", " Foals ", " foregrounding ", " foresters ", " Fulfilling ", "G ", "------------------- ", " gallants ", " gamblers ", " gaped ", " GloBalization ", " Glory ", " Glues ", " goldfields ", " graIns ", " graPefruIts ", " GumbOot ", " Gumdrop ", "I ", "------------------- ", " impairment ", " IncrUstation ", " iNfusion ", " interbreeDs ", " Irrational ", "J ", "------------------- ", " jauntineSs ", " Jazziest ", " Jeweler ", " jibbing ", " jilts ", " Jive ", " journos ", " jubilantly ", " jubilation ", " jumpier ", " jungles "};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> items = {"DelviNg", "Editorialized", "Infinitive", "Misconstruction", "guesthouse", "Implants", "muskrat", "geologists", "hornets", "industries", "Bricklayer", "Busked", "disarranged", "italicise", "Aired", "hemorrhage", "blether", "KinDles", "HIllocks", "collaboratively", "Humidity", "keener", "Keelhauls", "Kingfisher", "kIdney", "household", "entIced", "ExpatiAtes", "ideologies", "Coarsens", "keyed", "massive", "Eves", "aCcept", "gaiNer", "Glossiness", "Caked", "Bigamy", "mAndible", "auDiovisual", "islands", "aviaries", "Gondola", "inconsequentially", "accessibility", "drab", "knife", "cOg", "Handball", "capillaries"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aCcept ", " accessibility ", " Aired ", " auDiovisual ", " aviaries ", "B ", "------------------- ", " Bigamy ", " blether ", " Bricklayer ", " Busked ", "C ", "------------------- ", " Caked ", " capillaries ", " Coarsens ", " cOg ", " collaboratively ", "D ", "------------------- ", " DelviNg ", " disarranged ", " drab ", "E ", "------------------- ", " Editorialized ", " entIced ", " Eves ", " ExpatiAtes ", "G ", "------------------- ", " gaiNer ", " geologists ", " Glossiness ", " Gondola ", " guesthouse ", "H ", "------------------- ", " Handball ", " hemorrhage ", " HIllocks ", " hornets ", " household ", " Humidity ", "I ", "------------------- ", " ideologies ", " Implants ", " inconsequentially ", " industries ", " Infinitive ", " islands ", " italicise ", "K ", "------------------- ", " Keelhauls ", " keener ", " keyed ", " kIdney ", " KinDles ", " Kingfisher ", " knife ", "M ", "------------------- ", " mAndible ", " massive ", " Misconstruction ", " muskrat "};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> items = {"guerriLla", "Intuit", "buffoons", "globalizing", "HelmeT", "Investigated", "ManioC", "haunch", "Initially", "lisped", "Comparable", "gazes", "Memorable", "LAboured", "Bone", "insiders", "JAilbirds", "Lettered", "grimaces", "jabber", "Knickknack", "Jots", "lemoNs", "identikits", "Bookmobiles", "Guppies", "Joshed", "Lacerated", "ConTrast", "jambs", "Jubilee", "kibbutzim", "catarrh", "kiRsch", "DrainboarDs", "kip", "Jaw", "Gritted", "InfatuatioNs", "hiding", "inhalations", "inaDequately", "Ghettoizes", "implausible", "job", "ImMigrates", "idol", "Jumble", "incremenTally", "Giro"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B ", "------------------- ", " Bone ", " Bookmobiles ", " buffoons ", "C ", "------------------- ", " catarrh ", " Comparable ", " ConTrast ", "D ", "------------------- ", " DrainboarDs ", "G ", "------------------- ", " gazes ", " Ghettoizes ", " Giro ", " globalizing ", " grimaces ", " Gritted ", " guerriLla ", " Guppies ", "H ", "------------------- ", " haunch ", " HelmeT ", " hiding ", "I ", "------------------- ", " identikits ", " idol ", " ImMigrates ", " implausible ", " inaDequately ", " incremenTally ", " InfatuatioNs ", " inhalations ", " Initially ", " insiders ", " Intuit ", " Investigated ", "J ", "------------------- ", " jabber ", " JAilbirds ", " jambs ", " Jaw ", " job ", " Joshed ", " Jots ", " Jubilee ", " Jumble ", "K ", "------------------- ", " kibbutzim ", " kip ", " kiRsch ", " Knickknack ", "L ", "------------------- ", " LAboured ", " Lacerated ", " lemoNs ", " Lettered ", " lisped ", "M ", "------------------- ", " ManioC ", " Memorable "};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> items = {"JackpoTs", "grimness", "gammy", "Impeachments", "Farmlands", "featured", "Hikes", "elaborating", "MinioN", "contributes", "Lessen", "dovecotes", "fobs", "Indeed", "Kimonos", "Apotheoses", "insolvencies", "Cool", "morn", "impassable", "Hang", "muzzle", "Manliest", "Emotionalism", "legalIstic", "homEwaRd", "decoder", "mileposts", "Kestrels", "Bosun", "formed", "fag", "Indoor", "birdie", "brownie", "Lasso", "adversaries", "HospiCes", "Intensities", "insolvAble", "Assassinations", "fell", "InstigaTes", "manacles", "Maker", "Keepers", "ComposEr", "Injected", "fascInatingly", "lane"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " adversaries ", " Apotheoses ", " Assassinations ", "B ", "------------------- ", " birdie ", " Bosun ", " brownie ", "C ", "------------------- ", " ComposEr ", " contributes ", " Cool ", "D ", "------------------- ", " decoder ", " dovecotes ", "E ", "------------------- ", " elaborating ", " Emotionalism ", "F ", "------------------- ", " fag ", " Farmlands ", " fascInatingly ", " featured ", " fell ", " fobs ", " formed ", "G ", "------------------- ", " gammy ", " grimness ", "H ", "------------------- ", " Hang ", " Hikes ", " homEwaRd ", " HospiCes ", "I ", "------------------- ", " impassable ", " Impeachments ", " Indeed ", " Indoor ", " Injected ", " insolvAble ", " insolvencies ", " InstigaTes ", " Intensities ", "J ", "------------------- ", " JackpoTs ", "K ", "------------------- ", " Keepers ", " Kestrels ", " Kimonos ", "L ", "------------------- ", " lane ", " Lasso ", " legalIstic ", " Lessen ", "M ", "------------------- ", " Maker ", " manacles ", " Manliest ", " mileposts ", " MinioN ", " morn ", " muzzle "};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> items = {"grows", "gizZArds", "BoOKstall", "Eavesdropping", "jumBling", "Multiculturalism", "allowed", "Inaccurate", "landmine", "Debugs", "FrienDships", "account", "Figure", "Minted", "Floe", "frogmarches", "intROducTion", "masticate", "jalOpy", "micros", "Legion", "Exiling", "GolDfiSh", "Leprechauns", "flanked", "consents", "endgames", "dOwnstage", "Deposits", "Miscarry", "broach", "Doughty", "external", "Drake", "inducing", "legacy", "Kinfolk", "IlluSionists", "Lash", "blubs", "INterchangeably", "larks", "Fertilisers", "IncapacitatinG", "Apparently", "Goner", "filaments", "lathers", "Huckleberry", "Legendary"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " account ", " allowed ", " Apparently ", "B ", "------------------- ", " blubs ", " BoOKstall ", " broach ", "C ", "------------------- ", " consents ", "D ", "------------------- ", " Debugs ", " Deposits ", " Doughty ", " dOwnstage ", " Drake ", "E ", "------------------- ", " Eavesdropping ", " endgames ", " Exiling ", " external ", "F ", "------------------- ", " Fertilisers ", " Figure ", " filaments ", " flanked ", " Floe ", " FrienDships ", " frogmarches ", "G ", "------------------- ", " gizZArds ", " GolDfiSh ", " Goner ", " grows ", "H ", "------------------- ", " Huckleberry ", "I ", "------------------- ", " IlluSionists ", " Inaccurate ", " IncapacitatinG ", " inducing ", " INterchangeably ", " intROducTion ", "J ", "------------------- ", " jalOpy ", " jumBling ", "K ", "------------------- ", " Kinfolk ", "L ", "------------------- ", " landmine ", " larks ", " Lash ", " lathers ", " legacy ", " Legendary ", " Legion ", " Leprechauns ", "M ", "------------------- ", " masticate ", " micros ", " Minted ", " Miscarry ", " Multiculturalism "};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> items = {"Thinker", "upstage", "Retain", "RecalcItrAnt", "unrelievedly", "temPo", "Receptor", "townhouse", "upswings", "TreaCle", "underground", "Upholder", "Recipes", "TenUred", "tapas", "RelIve", "telecasts", "Recoverable", "Refinements", "Underclassman", "twats", "trundle", "treasurers", "rattiEst", "Uncovering", "recantation", "Repatriated", "recce", "regress", "ReCons", "Recede", "Resplendent", "Ritzy", "Townspeople", "Terminals", "transferable", "Uncommon", "Undivided", "usherettes", "Urbanely", "redskins", "Up", "RecapitaLization", "refrigerates", "unearnEd", "trio", "Renovate", "Unscrupulous", "TonnageS", "Reforms"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" R ", " -------------------", " rattiEst ", " RecalcItrAnt ", " recantation ", " RecapitaLization ", " recce ", " Recede ", " Receptor ", " Recipes ", " ReCons ", " Recoverable ", " redskins ", " Refinements ", " Reforms ", " refrigerates ", " regress ", " RelIve ", " Renovate ", " Repatriated ", " Resplendent ", " Retain ", " Ritzy ", " T ", " -------------------", " tapas ", " telecasts ", " temPo ", " TenUred ", " Terminals ", " Thinker ", " TonnageS ", " townhouse ", " Townspeople ", " transferable ", " TreaCle ", " treasurers ", " trio ", " trundle ", " twats ", " U ", " -------------------", " Uncommon ", " Uncovering ", " Underclassman ", " underground ", " Undivided ", " unearnEd ", " unrelievedly ", " Unscrupulous ", " Up ", " Upholder ", " upstage ", " upswings ", " Urbanely ", " usherettes "};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> items = {"yuppify", "vulture", "Victimizes", "tigresses", "rigor", "peephole", "teepees", "opportunists", "oversaw", "Yawn", "outshines", "talks", "Zones", "ratchets", "radicalized", "Vanishes", "Zodiacs", "Quotes", "Zither", "tanners", "Onside", "Respired", "yanking", "zodiac", "Togged", "penalising", "rings", "Unstated", "poisoned", "tourneys", "Renovations", "Young", "untAngles", "Quarts", "thereof", "Zithers", "oxygenating", "quasars", "Pitiably", "Versatility", "quaRterfinal", "preventative", "Zapper", "Warrants", "Wily", "Ordinations", "unexpecteD", "zydeco", "queasinEss", "preempted"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" O ", " -------------------", " Onside ", " opportunists ", " Ordinations ", " outshines ", " oversaw ", " oxygenating ", " P ", " -------------------", " peephole ", " penalising ", " Pitiably ", " poisoned ", " preempted ", " preventative ", " Q ", " -------------------", " quaRterfinal ", " Quarts ", " quasars ", " queasinEss ", " Quotes ", " R ", " -------------------", " radicalized ", " ratchets ", " Renovations ", " Respired ", " rigor ", " rings ", " T ", " -------------------", " talks ", " tanners ", " teepees ", " thereof ", " tigresses ", " Togged ", " tourneys ", " U ", " -------------------", " unexpecteD ", " Unstated ", " untAngles ", " V ", " -------------------", " Vanishes ", " Versatility ", " Victimizes ", " vulture ", " W ", " -------------------", " Warrants ", " Wily ", " Y ", " -------------------", " yanking ", " Yawn ", " Young ", " yuppify ", " Z ", " -------------------", " Zapper ", " Zither ", " Zithers ", " zodiac ", " Zodiacs ", " Zones ", " zydeco "};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> items = {"yin", "yearlY", "necklacings", "overlap", "Spacious", "relied", "OffenD", "Vestment", "Pinhole", "Workstation", "Yodelling", "whirlybird", "pulsation", "wastes", "yids", "windbreaks", "standoff", "QuadrupliNg", "offload", "yodels", "ViBrating", "questioningly", "wreckers", "zApped", "Xenophobic", "noncomMittal", "repUtatiOns", "Vandalize", "ZeAl", "unpretentious", "Qua", "wAllop", "Quartering", "Yonks", "Zoological", "narcoleptic", "Niceness", "sword", "xenophobes", "understating", "nightclubs", "Rejiggering", "yellows", "UnidentifieD", "Oodles", "Yearbooks", "supernaturally", "xylophone", "reselling", "updates"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" N ", " -------------------", " narcoleptic ", " necklacings ", " Niceness ", " nightclubs ", " noncomMittal ", " O ", " -------------------", " OffenD ", " offload ", " Oodles ", " overlap ", " P ", " -------------------", " Pinhole ", " pulsation ", " Q ", " -------------------", " Qua ", " QuadrupliNg ", " Quartering ", " questioningly ", " R ", " -------------------", " Rejiggering ", " relied ", " repUtatiOns ", " reselling ", " S ", " -------------------", " Spacious ", " standoff ", " supernaturally ", " sword ", " U ", " -------------------", " understating ", " UnidentifieD ", " unpretentious ", " updates ", " V ", " -------------------", " Vandalize ", " Vestment ", " ViBrating ", " W ", " -------------------", " wAllop ", " wastes ", " whirlybird ", " windbreaks ", " Workstation ", " wreckers ", " X ", " -------------------", " xenophobes ", " Xenophobic ", " xylophone ", " Y ", " -------------------", " Yearbooks ", " yearlY ", " yellows ", " yids ", " yin ", " Yodelling ", " yodels ", " Yonks ", " Z ", " -------------------", " zApped ", " ZeAl ", " Zoological "};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> items = {"waning", "ZoomIng", "Zine", "yelp", "Whiling", "Theorising", "warplanes", "Regulates", "Wedge", "Zealously", "workouts", "yammered", "ZoologisT", "Retails", "withers", "Yaks", "wanes", "tomfoolery", "roman", "ZiPping", "YOdeled", "tendentiously", "Youngest", "yardarm", "thanks", "recitative", "Zingers", "Yaps", "zonked", "Zillion", "workshop", "Wedges", "yogurts", "YelPing", "Youthful", "topmost", "yellows", "Reclaim", "Washcloth", "yodelled", "womenfolk", "thuggish", "yells", "warhorses", "Tinge", "Wrinkling", "yang", "tying", "zombie", "Radishes"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" R ", " -------------------", " Radishes ", " recitative ", " Reclaim ", " Regulates ", " Retails ", " roman ", " T ", " -------------------", " tendentiously ", " thanks ", " Theorising ", " thuggish ", " Tinge ", " tomfoolery ", " topmost ", " tying ", " W ", " -------------------", " wanes ", " waning ", " warhorses ", " warplanes ", " Washcloth ", " Wedge ", " Wedges ", " Whiling ", " withers ", " womenfolk ", " workouts ", " workshop ", " Wrinkling ", " Y ", " -------------------", " Yaks ", " yammered ", " yang ", " Yaps ", " yardarm ", " yellows ", " yells ", " yelp ", " YelPing ", " YOdeled ", " yodelled ", " yogurts ", " Youngest ", " Youthful ", " Z ", " -------------------", " Zealously ", " Zillion ", " Zine ", " Zingers ", " ZiPping ", " zombie ", " zonked ", " ZoologisT ", " ZoomIng "};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> items = {"Wannabe", "Pellucid", "QuArtos", "Yid", "Yardstick", "Weave", "zenith", "Queenly", "ops", "solidified", "Obnoxious", "vehement", "scathing", "napped", "yahoo", "vanished", "Yanks", "weAken", "wheeziest", "northwards", "whitey", "zooms", "Vivaciously", "Zings", "wipes", "quarrelsomE", "ZucchInis", "Octopuses", "Queasiest", "verbosity", "thresh", "Obey", "Zinc", "pastrami", "Tasking", "Stride", "Scraping", "QuiTters", "Yellowhammers", "Tars", "Phials", "yoghurts", "Novelty", "Obstetric", "ZiNg", "volition", "yuccas", "phosphoric", "watErwheels", "Versions"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" N ", " -------------------", " napped ", " northwards ", " Novelty ", " O ", " -------------------", " Obey ", " Obnoxious ", " Obstetric ", " Octopuses ", " ops ", " P ", " -------------------", " pastrami ", " Pellucid ", " Phials ", " phosphoric ", " Q ", " -------------------", " quarrelsomE ", " QuArtos ", " Queasiest ", " Queenly ", " QuiTters ", " S ", " -------------------", " scathing ", " Scraping ", " solidified ", " Stride ", " T ", " -------------------", " Tars ", " Tasking ", " thresh ", " V ", " -------------------", " vanished ", " vehement ", " verbosity ", " Versions ", " Vivaciously ", " volition ", " W ", " -------------------", " Wannabe ", " watErwheels ", " weAken ", " Weave ", " wheeziest ", " whitey ", " wipes ", " Y ", " -------------------", " yahoo ", " Yanks ", " Yardstick ", " Yellowhammers ", " Yid ", " yoghurts ", " yuccas ", " Z ", " -------------------", " zenith ", " Zinc ", " ZiNg ", " Zings ", " zooms ", " ZucchInis "};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> items = {"Xerox", "Parkway", "specimen", "Yetis", "unshaven", "posses", "Overlapped", "Stayer", "PhalangEs", "overestimatEs", "vandalised", "Yeti", "phoneys", "whirligig", "olive", "Overpaid", "Uncoiling", "wordiness", "weiRd", "overcompensating", "zydeco", "Wanting", "Wander", "Sags", "Seemlier", "woodenly", "where", "servings", "Yuppifies", "streetwalkers", "Yachtsman", "Recruiters", "proboScis", "yearns", "Visualises", "xeroxing", "sChmoozes", "whippets", "postponing", "veranda", "Yuk", "Zealousness", "Undermanned", "zodiacS", "VOlatile", "Wins", "ovErfly", "Predeterminer", "vilest", "xenon"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" O ", " -------------------", " olive ", " overcompensating ", " overestimatEs ", " ovErfly ", " Overlapped ", " Overpaid ", " P ", " -------------------", " Parkway ", " PhalangEs ", " phoneys ", " posses ", " postponing ", " Predeterminer ", " proboScis ", " R ", " -------------------", " Recruiters ", " S ", " -------------------", " Sags ", " sChmoozes ", " Seemlier ", " servings ", " specimen ", " Stayer ", " streetwalkers ", " U ", " -------------------", " Uncoiling ", " Undermanned ", " unshaven ", " V ", " -------------------", " vandalised ", " veranda ", " vilest ", " Visualises ", " VOlatile ", " W ", " -------------------", " Wander ", " Wanting ", " weiRd ", " where ", " whippets ", " whirligig ", " Wins ", " woodenly ", " wordiness ", " X ", " -------------------", " xenon ", " Xerox ", " xeroxing ", " Y ", " -------------------", " Yachtsman ", " yearns ", " Yeti ", " Yetis ", " Yuk ", " Yuppifies ", " Z ", " -------------------", " Zealousness ", " zodiacS ", " zydeco "};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> items = {"enlivening", "Figurines", "impanels", "ChamPing", "chIrping", "excepting", "Quested", "questioning", "inequity", "Entertainment", "ContempoRaRy", "QuIet", "CRuiser", "In", "Flicks", "incriMination", "eRupting", "Feminists", "Cleric", "Facials", "Chart", "chessboards", "insertion", "quashed", "QuAshing", "identities", "cHarisma", "feedbag", "chiropractor", "Correspondences", "It", "Freethinking", "FalsehoOd", "calCUlable", "easily", "impassioned", "Quarterfinals", "impartial", "eNsemble", "Exhibitionism", "flaunted", "infO", "Query", "Indecision", "Fatigued", "Interrogators", "cyanidE", "Inference", "injudiciouS", "excavates"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C Q ", "------------------- -------------------", " calCUlable Quarterfinals ", " ChamPing quashed ", " cHarisma QuAshing ", " Chart Query ", " chessboards Quested ", " chiropractor questioning ", " chIrping QuIet ", " Cleric ", " ContempoRaRy ", " Correspondences ", " CRuiser ", " cyanidE ", "E ", "------------------- ", " easily ", " enlivening ", " eNsemble ", " Entertainment ", " eRupting ", " excavates ", " excepting ", " Exhibitionism ", "F ", "------------------- ", " Facials ", " FalsehoOd ", " Fatigued ", " feedbag ", " Feminists ", " Figurines ", " flaunted ", " Flicks ", " Freethinking ", "I ", "------------------- ", " identities ", " impanels ", " impartial ", " impassioned ", " In ", " incriMination ", " Indecision ", " inequity ", " Inference ", " infO ", " injudiciouS ", " insertion ", " Interrogators ", " It "};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> items = {"NineteeNs", "Nudge", "Vapid", "Artists", "VirgInity", "nasturtium", "demarcating", "van", "normalizes", "discount", "Hoards", "nurseries", "desirability", "DeNude", "distributional", "vents", "desErvedly", "Demigoddesses", "Hinges", "acuTe", "notify", "hydroplanes", "aRcheology", "veracity", "Hibernation", "alleyWay", "Heating", "Decanter", "Hybridizes", "hm", "HexinG", "aerie", "harmoNic", "viewed", "dreadlocks", "noggin", "nuttier", "nett", "domiciliarY", "vigorous", "dick", "nourish", "disMantle", "Detox", "noisiness", "Nosedive", "Habits", "Voracity", "adjourning", "debasing"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " acuTe nasturtium ", " adjourning nett ", " aerie NineteeNs ", " alleyWay noggin ", " aRcheology noisiness ", " Artists normalizes ", "D Nosedive ", "------------------- notify ", " debasing nourish ", " Decanter Nudge ", " demarcating nurseries ", " Demigoddesses nuttier ", " DeNude V ", " desErvedly -------------------", " desirability van ", " Detox Vapid ", " dick vents ", " discount veracity ", " disMantle viewed ", " distributional vigorous ", " domiciliarY VirgInity ", " dreadlocks Voracity ", "H ", "------------------- ", " Habits ", " harmoNic ", " Heating ", " HexinG ", " Hibernation ", " Hinges ", " hm ", " Hoards ", " Hybridizes ", " hydroplanes "};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> items = {"Debonair", "pucks", "Defiance", "patronagE", "Damned", "Pittance", "Desists", "Pejorative", "Egret", "palindromes", "Detainees", "PooEd", "extradite", "Defiantly", "Er", "Devotion", "Exhilarating", "epicUres", "peroration", "Director", "entities", "distanced", "dogie", "preps", "protocol", "Elevator", "Decoder", "downswinG", "DiagRammaticallY", "prattlers", "escapism", "Echoing", "EnCountering", "dispersed", "pelmet", "EjaculatioNs", "disavowaLs", "PlEaD", "Dockers", "directorships", "DispoSal", "EncoDing", "PUlveriseS", "Energises", "Erosion", "Debacles", "Pastrami", "Paleontology", "eyeglass", "draughtswoman"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D P ", "------------------- -------------------", " Damned Paleontology ", " Debacles palindromes ", " Debonair Pastrami ", " Decoder patronagE ", " Defiance Pejorative ", " Defiantly pelmet ", " Desists peroration ", " Detainees Pittance ", " Devotion PlEaD ", " DiagRammaticallY PooEd ", " Director prattlers ", " directorships preps ", " disavowaLs protocol ", " dispersed pucks ", " DispoSal PUlveriseS ", " distanced ", " Dockers ", " dogie ", " downswinG ", " draughtswoman ", "E ", "------------------- ", " Echoing ", " Egret ", " EjaculatioNs ", " Elevator ", " EncoDing ", " EnCountering ", " Energises ", " entities ", " epicUres ", " Er ", " Erosion ", " escapism ", " Exhilarating ", " extradite ", " eyeglass "};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> items = {"hankering", "Ha", "Helpmates", "baiting", "Wording", "beholden", "WorSted", "Wiener", "BlUsh", "haulers", "WoNderlands", "wrestlers", "hospitalizing", "Hisses", "bookies", "hazardous", "WaNLy", "womAnhood", "Bumpiest", "Humanised", "Hapless", "honeymooners", "Wracked", "booties", "HypErbole", "Barmiest", "huddleS", "harmonisinG", "wallflower", "homiest", "Windy", "busying", "barRed", "wends", "himself", "wise", "BUstier", "Witnessing", "homophones", "worktop", "HeLlishly", "hoedowns", "woodenness", "Wound", "Welsh", "Hydrates", "While", "Haggles", "HaMpered", "weaklings"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B W ", "------------------- -------------------", " baiting wallflower ", " Barmiest WaNLy ", " barRed weaklings ", " beholden Welsh ", " BlUsh wends ", " bookies While ", " booties Wiener ", " Bumpiest Windy ", " BUstier wise ", " busying Witnessing ", "H womAnhood ", "------------------- WoNderlands ", " Ha woodenness ", " Haggles Wording ", " HaMpered worktop ", " hankering WorSted ", " Hapless Wound ", " harmonisinG Wracked ", " haulers wrestlers ", " hazardous ", " HeLlishly ", " Helpmates ", " himself ", " Hisses ", " hoedowns ", " homiest ", " homophones ", " honeymooners ", " hospitalizing ", " huddleS ", " Humanised ", " Hydrates ", " HypErbole "};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> items = {"lowly", "Scrutinizing", "Kilos", "Posteriors", "Kilobytes", "lameness", "SchooLmasteRs", "PreScribed", "Inhabit", "levelling", "KaleidoscopiCally", "protestation", "Lousing", "InvigilaTion", "Lax", "perforce", "pointillist", "imputed", "lOcalized", "investigator", "Kipper", "SLoping", "klutz", "Pooch", "Prefigures", "porn", "seedier", "Kiddy", "passably", "Intellectualised", "know", "Swimmingly", "Idealizes", "Lease", "KIndle", "Lastly", "Idiosyncrasies", "kitting", "symbolisEd", "Spiritless", "leafier", "keyboardists", "Stomached", "knittinG", "SnakiNg", "Slimiest", "sox", "stirrer", "Livid", "initialing"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I P ", "------------------- -------------------", " Idealizes passably ", " Idiosyncrasies perforce ", " imputed pointillist ", " Inhabit Pooch ", " initialing porn ", " Intellectualised Posteriors ", " investigator Prefigures ", " InvigilaTion PreScribed ", "K protestation ", "------------------- S ", " KaleidoscopiCally -------------------", " keyboardists SchooLmasteRs ", " Kiddy Scrutinizing ", " Kilobytes seedier ", " Kilos Slimiest ", " KIndle SLoping ", " Kipper SnakiNg ", " kitting sox ", " klutz Spiritless ", " knittinG stirrer ", " know Stomached ", "L Swimmingly ", "------------------- symbolisEd ", " lameness ", " Lastly ", " Lax ", " leafier ", " Lease ", " levelling ", " Livid ", " lOcalized ", " Lousing ", " lowly "};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> items = {"enlivening", "Figurines", "impanels", "ChamPing", "chIrping", "excepting", "Quested", "questioning", "inequity", "Entertainment", "ContempoRaRy", "QuIet", "CRuiser", "In", "Flicks", "incriMination", "eRupting", "Feminists", "Cleric", "Facials", "Chart", "chessboards", "insertion", "quashed", "QuAshing", "identities", "cHarisma", "feedbag", "chiropractor", "Correspondences", "It", "Freethinking", "FalsehoOd", "calCUlable", "easily", "impassioned", "Quarterfinals", "impartial", "eNsemble", "Exhibitionism", "flaunted", "infO", "Query", "Indecision", "Fatigued", "Interrogators", "cyanidE", "Inference", "injudiciouS", "excavates"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C Q ", "------------------- -------------------", " calCUlable Quarterfinals ", " ChamPing quashed ", " cHarisma QuAshing ", " Chart Query ", " chessboards Quested ", " chiropractor questioning ", " chIrping QuIet ", " Cleric ", " ContempoRaRy ", " Correspondences ", " CRuiser ", " cyanidE ", "E ", "------------------- ", " easily ", " enlivening ", " eNsemble ", " Entertainment ", " eRupting ", " excavates ", " excepting ", " Exhibitionism ", "F ", "------------------- ", " Facials ", " FalsehoOd ", " Fatigued ", " feedbag ", " Feminists ", " Figurines ", " flaunted ", " Flicks ", " Freethinking ", "I ", "------------------- ", " identities ", " impanels ", " impartial ", " impassioned ", " In ", " incriMination ", " Indecision ", " inequity ", " Inference ", " infO ", " injudiciouS ", " insertion ", " Interrogators ", " It "};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> items = {"NineteeNs", "Nudge", "Vapid", "Artists", "VirgInity", "nasturtium", "demarcating", "van", "normalizes", "discount", "Hoards", "nurseries", "desirability", "DeNude", "distributional", "vents", "desErvedly", "Demigoddesses", "Hinges", "acuTe", "notify", "hydroplanes", "aRcheology", "veracity", "Hibernation", "alleyWay", "Heating", "Decanter", "Hybridizes", "hm", "HexinG", "aerie", "harmoNic", "viewed", "dreadlocks", "noggin", "nuttier", "nett", "domiciliarY", "vigorous", "duck", "nourish", "disMantle", "Detox", "noisiness", "Nosedive", "Habits", "Voracity", "adjourning", "debasing"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " acuTe nasturtium ", " adjourning nett ", " aerie NineteeNs ", " alleyWay noggin ", " aRcheology noisiness ", " Artists normalizes ", "D Nosedive ", "------------------- notify ", " debasing nourish ", " Decanter Nudge ", " demarcating nurseries ", " Demigoddesses nuttier ", " DeNude V ", " desErvedly -------------------", " desirability van ", " Detox Vapid ", " discount vents ", " disMantle veracity ", " distributional viewed ", " domiciliarY vigorous ", " dreadlocks VirgInity ", " duck Voracity ", "H ", "------------------- ", " Habits ", " harmoNic ", " Heating ", " HexinG ", " Hibernation ", " Hinges ", " hm ", " Hoards ", " Hybridizes ", " hydroplanes "};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> items = {"monopolised", "idle", "UNreserved", "pancreases", "hikers", "whistleD", "messed", "yellowy", "Galumphing", "Wide", "Missive", "Facing", "moorland", "fAnLights", "Wondered", "inhErits", "underwhelmEd", "Wordy", "Revolutionised", "unTItled", "yak", "fabrics", "Militiamen", "ReassemBling", "We", "Revelling", "unwary", "HeadliNe", "roasts", "Graphologist", "Intimates", "Grandpas", "Remonstrating", "roWing", "itemises", "yearbook", "Misapplying", "hippies", "Interpolate", "Youngest", "Whipped", "repented", "modelers", "Hums", "unnatural", "Widest", "patience", "whitebait", "Insets", "Permanent"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F P ", "------------------- -------------------", " fabrics pancreases ", " Facing patience ", " fAnLights Permanent ", "G R ", "------------------- -------------------", " Galumphing ReassemBling ", " Grandpas Remonstrating ", " Graphologist repented ", "H Revelling ", "------------------- Revolutionised ", " HeadliNe roasts ", " hikers roWing ", " hippies U ", " Hums -------------------", "I underwhelmEd ", "------------------- unnatural ", " idle UNreserved ", " inhErits unTItled ", " Insets unwary ", " Interpolate W ", " Intimates -------------------", " itemises We ", "M Whipped ", "------------------- whistleD ", " messed whitebait ", " Militiamen Wide ", " Misapplying Widest ", " Missive Wondered ", " modelers Wordy ", " monopolised Y ", " moorland -------------------", " yak ", " yearbook ", " yellowy ", " Youngest "};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> items = {"melted", "suntan", "potency", "Pettifogging", "spatially", "wonky", "WalkwAys", "Locums", "virology", "quaffing", "LIft", "fallacy", "Lull", "yodel", "Zodiac", "GIantess", "quadruple", "flimsier", "Telecommuting", "violins", "KiLometer", "knucKleduster", "solEmnising", "Zookeeper", "Going", "SoundeR", "Gores", "TunefuLness", "wicked", "tartness", "Yams", "zithers", "lugging", "guides", "surmounting", "Gardeners", "sweetened", "Piously", "Majestic", "yak", "flashers", "verbosity", "sloes", "forebears", "void", "surmounted", "Grocery", "Signalmen", "Versatile", "yearnings"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F P ", "------------------- -------------------", " fallacy Pettifogging ", " flashers Piously ", " flimsier potency ", " forebears Q ", "G -------------------", "------------------- quadruple ", " Gardeners quaffing ", " GIantess S ", " Going -------------------", " Gores Signalmen ", " Grocery sloes ", " guides solEmnising ", "K SoundeR ", "------------------- spatially ", " KiLometer suntan ", " knucKleduster surmounted ", "L surmounting ", "------------------- sweetened ", " LIft T ", " Locums -------------------", " lugging tartness ", " Lull Telecommuting ", "M TunefuLness ", "------------------- V ", " Majestic -------------------", " melted verbosity ", " Versatile ", " violins ", " virology ", " void ", " W ", " -------------------", " WalkwAys ", " wicked ", " wonky ", " Y ", " -------------------", " yak ", " Yams ", " yearnings ", " yodel ", " Z ", " -------------------", " zithers ", " Zodiac ", " Zookeeper "};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> items = {"intoxicAted", "boa", "ventured", "johns", "johnny", "Intend", "VIctimization", "Loans", "ideology", "Zonked", "Garcons", "Grousing", "Vacancies", "vindictively", "Bowers", "PloUgHs", "lumbers", "Bursars", "Jeopardized", "jaywalker", "Intellect", "Bronco", "yaks", "Bewigged", "voracious", "Vertebrae", "goblin", "fannies", "zodiacal", "INsatiaBly", "jocksTrap", "zeal", "Ladyship", "Jogs", "dicker", "workAday", "louvre", "ethnocentrism", "Vindicating", "Versed", "Indistinguishable", "enCapsulated", "desists", "zoning", "wells", "Zoom", "plangEnt", "Fruited", "Vied", "disassociates"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B P ", "------------------- -------------------", " Bewigged plangEnt ", " boa PloUgHs ", " Bowers V ", " Bronco -------------------", " Bursars Vacancies ", "D ventured ", "------------------- Versed ", " desists Vertebrae ", " dicker VIctimization ", " disassociates Vied ", "E Vindicating ", "------------------- vindictively ", " enCapsulated voracious ", " ethnocentrism W ", "F -------------------", "------------------- wells ", " fannies workAday ", " Fruited Y ", "G -------------------", "------------------- yaks ", " Garcons Z ", " goblin -------------------", " Grousing zeal ", "I zodiacal ", "------------------- zoning ", " ideology Zonked ", " Indistinguishable Zoom ", " INsatiaBly ", " Intellect ", " Intend ", " intoxicAted ", "J ", "------------------- ", " jaywalker ", " Jeopardized ", " jocksTrap ", " Jogs ", " johnny ", " johns ", "L ", "------------------- ", " Ladyship ", " Loans ", " louvre ", " lumbers "};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> items = {"Asteria", "Astraeus", "Atlas", "Clymene", "Coeus", "Crius", "Cronus", "Dione", "Epimetheus", "Helios", "Hyperion", "Iapetus", "Leto", "Mnemosyne", "Oceanus", "Ophion", "Phoebe", "Prometheus", "Rhea", "Tethys", "Theia", "Themis"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A O ", "------------------- -------------------", " Asteria Oceanus ", " Astraeus Ophion ", " Atlas P ", "C -------------------", "------------------- Phoebe ", " Clymene Prometheus ", " Coeus R ", " Crius -------------------", " Cronus Rhea ", "D T ", "------------------- -------------------", " Dione Tethys ", "E Theia ", "------------------- Themis ", " Epimetheus ", "H ", "------------------- ", " Helios ", " Hyperion ", "I ", "------------------- ", " Iapetus ", "L ", "------------------- ", " Leto ", "M ", "------------------- ", " Mnemosyne "};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> items = {"XXXXXXXXXXXXXXXXX", "YYYYYYYYYYYYYYYYY", "ZZZZZZZZZZZZZZZZZ"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X ", " -------------------", " XXXXXXXXXXXXXXXXX", " Y ", " -------------------", " YYYYYYYYYYYYYYYYY", " Z ", " -------------------", " ZZZZZZZZZZZZZZZZZ"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> items = {"AVL tree", "backtracking", "array", "balanced tree", "binary search", "Asff"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " array ", " Asff ", " AVL tree ", "B ", "------------------- ", " backtracking ", " balanced tree ", " binary search "};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> items = {"alpha", "beta", "gamma", "delta", "omega"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A O ", "------------------- -------------------", " alpha omega ", "B ", "------------------- ", " beta ", "D ", "------------------- ", " delta ", "G ", "------------------- ", " gamma "};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> items = {"Ab", "aa"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aa ", " Ab "};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> items = {"AVL tree", "backtracking", "array", "balanced tree", "binary search", "Chare"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " array ", " AVL tree ", "B ", "------------------- ", " backtracking ", " balanced tree ", " binary search ", "C ", "------------------- ", " Chare "};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> items = {"ABD", "abc"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " abc ", " ABD "};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> items = {"a", "AA", "aaaaa", "aaa", "zz", "z", "zzz", "zzzz", "zzzzzz", "bbbbbb", "BBB"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A Z ", "------------------- -------------------", " a z ", " AA zz ", " aaa zzz ", " aaaaa zzzz ", "B zzzzzz ", "------------------- ", " BBB ", " bbbbbb "};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> items = {"NG"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" N ", " -------------------", " NG "};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> items = {"adsdsfv", "asdfla", "aaaaaaaaaa", "AAAAAAAAA", "aaaaaW"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " AAAAAAAAA ", " aaaaaaaaaa ", " aaaaaW ", " adsdsfv ", " asdfla "};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> items = {"AAA", "aaab"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " AAA ", " aaab "};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> items = {"united states", "united kingdom"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" U ", " -------------------", " united kingdom ", " united states "};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> items = {"n", "Nn", "zZ", "ZzZ"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" N ", " -------------------", " n ", " Nn ", " Z ", " -------------------", " zZ ", " ZzZ "};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> items = {"aRz", "array", "baba", "bbb", "bac"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " array ", " aRz ", "B ", "------------------- ", " baba ", " bac ", " bbb "};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> items = {"Aa", "AB", "aZ", "ay", "Aw", "ac", "aD"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " Aa ", " AB ", " ac ", " aD ", " Aw ", " ay ", " aZ "};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> items = {"Abug", "A Bug"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " A Bug ", " Abug "};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> items = {"ab", "Aa"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " Aa ", " ab "};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> items = {"aaaaaaa", "AAaAA", "qqqq"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A Q ", "------------------- -------------------", " AAaAA qqqq ", " aaaaaaa "};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> items = {"AVL tree", "backtracking", "array", "balanced tree", "binary search"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " array ", " AVL tree ", "B ", "------------------- ", " backtracking ", " balanced tree ", " binary search "};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> items = {"Ask", "ast", "Bst", "bsk"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " Ask ", " ast ", "B ", "------------------- ", " bsk ", " Bst "};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> items = {"HgUeyNFXICSxgWfQU", "WNOVrKPEGxPRYtwyy", "cpvkfMNmksWrnKcFT", "SySAPofZCeUPAOgOy", "FBPJRIYmeWnrpxjLo", "AwxhsCXosZvtDnYYF", "xSnkfUXRBngoktYNo", "uzrdItijayPSmSjFG", "bAoLYNRdpsTsWDzoZ", "nWQjVWXRbDGlgUbbr", "THspOGgKuDOObxEaF", "tueZhlUgejQJnEQxe", "JrZAULCHFmiwOIyXU", "nSsSTkqCzEuMrczjp", "IneDSRAYmABZseuNP", "SabzxhcHErUKMPWqG", "OAMwDyxtBHwYCRBPO", "hKquRzNNUQQlZPIgL", "eDUOrrsOBZwPwjlfA", "mIpPuGPnWMaXnnHQr", "ULFOCTZUldmCOkFjR", "xtOkJWclFIpyCZIkA", "XGCCyJgxtVRhBpIBV", "BgcQkoZkbjMSTsFOf", "sRJGzuZwiuPxqLUvo", "wcdNfJAmcFkiUUIwB", "EukbCKZzOdkhZfzZF", "qPzkOUdTXJkERPxme", "OwtPPcIKlYIRqyNfN", "VzdyNydUMHektWsOG", "FzvQXwmXYgdazgvoK", "GCmMRhyYgjkkZAxko", "zmuZzphtyZvuprMIg", "krzXHOmAYAXvhQIES", "gHJUXmsNrekgCvHJB", "TqJoGKFFcfewrwpSm", "tgppNJuAYnknvlScW", "AgMKiDOKMQipohmFU", "WvjflKDhjfTKfryFN", "HscYTadjPHNgixcWG", "SeertJjAijWYNRiOw", "iYtdAwhgwMGnLJGuN", "hEgFkStJAfzalRhCd", "rVRvyefvRyuQRdkbF", "uRqlbwxzasGhmGNpN", "kmUKRFcVrKlAlToOo", "XQjGnNZaxAdWdZFsw", "TOVnHsCnunDFMZatC", "kAyZxTbGnvPGjgMxb", "CYCqhDZrBMrXOThGn"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " AgMKiDOKMQipohmFU nSsSTkqCzEuMrczjp", " AwxhsCXosZvtDnYYF nWQjVWXRbDGlgUbbr", "B O ", "------------------- -------------------", " bAoLYNRdpsTsWDzoZ OAMwDyxtBHwYCRBPO", " BgcQkoZkbjMSTsFOf OwtPPcIKlYIRqyNfN", "C Q ", "------------------- -------------------", " cpvkfMNmksWrnKcFT qPzkOUdTXJkERPxme", " CYCqhDZrBMrXOThGn R ", "E -------------------", "------------------- rVRvyefvRyuQRdkbF", " eDUOrrsOBZwPwjlfA S ", " EukbCKZzOdkhZfzZF -------------------", "F SabzxhcHErUKMPWqG", "------------------- SeertJjAijWYNRiOw", " FBPJRIYmeWnrpxjLo sRJGzuZwiuPxqLUvo", " FzvQXwmXYgdazgvoK SySAPofZCeUPAOgOy", "G T ", "------------------- -------------------", " GCmMRhyYgjkkZAxko tgppNJuAYnknvlScW", " gHJUXmsNrekgCvHJB THspOGgKuDOObxEaF", "H TOVnHsCnunDFMZatC", "------------------- TqJoGKFFcfewrwpSm", " hEgFkStJAfzalRhCd tueZhlUgejQJnEQxe", " HgUeyNFXICSxgWfQU U ", " hKquRzNNUQQlZPIgL -------------------", " HscYTadjPHNgixcWG ULFOCTZUldmCOkFjR", "I uRqlbwxzasGhmGNpN", "------------------- uzrdItijayPSmSjFG", " IneDSRAYmABZseuNP V ", " iYtdAwhgwMGnLJGuN -------------------", "J VzdyNydUMHektWsOG", "------------------- W ", " JrZAULCHFmiwOIyXU -------------------", "K wcdNfJAmcFkiUUIwB", "------------------- WNOVrKPEGxPRYtwyy", " kAyZxTbGnvPGjgMxb WvjflKDhjfTKfryFN", " kmUKRFcVrKlAlToOo X ", " krzXHOmAYAXvhQIES -------------------", "M XGCCyJgxtVRhBpIBV", "------------------- XQjGnNZaxAdWdZFsw", " mIpPuGPnWMaXnnHQr xSnkfUXRBngoktYNo", " xtOkJWclFIpyCZIkA", " Z ", " -------------------", " zmuZzphtyZvuprMIg"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> items = {"Canada", "France", "Germany", "Italy", "Japan", "Russia", "United Kingdom", "United States"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C R ", "------------------- -------------------", " Canada Russia ", "F U ", "------------------- -------------------", " France United Kingdom ", "G United States ", "------------------- ", " Germany ", "I ", "------------------- ", " Italy ", "J ", "------------------- ", " Japan "};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> items = {"albania", "polonia", "nueva york", "ucrania", "irlanda", "portugal"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " albania nueva york ", "I P ", "------------------- -------------------", " irlanda polonia ", " portugal ", " U ", " -------------------", " ucrania "};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> items = {"AVL tree", "backtracking", "array", "balanced tree", "binary search", "abcdefg"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " abcdefg ", " array ", " AVL tree ", "B ", "------------------- ", " backtracking ", " balanced tree ", " binary search "};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> items = {"Ab", "ABb", "Aa", "AAa", "Ac", "ACc", "Ad", "ADd"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " Aa ", " AAa ", " Ab ", " ABb ", " Ac ", " ACc ", " Ad ", " ADd "};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> items = {"aaaaaaa", "AAaAA", "qqqq", "aa"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A Q ", "------------------- -------------------", " aa qqqq ", " AAaAA ", " aaaaaaa "};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> items = {"aa", "aAa"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aa ", " aAa "};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> items = {"albania", "polonia", "nueva york", "ucrania", "irlanda", "portugal", "madagascar", "uruguay"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " albania nueva york ", "I P ", "------------------- -------------------", " irlanda polonia ", "M portugal ", "------------------- U ", " madagascar -------------------", " ucrania ", " uruguay "};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> items = {"Cat", "CBD"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C ", "------------------- ", " Cat ", " CBD "};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> items = {"adc", "aBf", "abc"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " abc ", " aBf ", " adc "};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> items = {"aA", "AAAAAAAAA", "abbbbbbbb", "aaaabbbbb", "bbbaaaaaa", "abbbbb"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aA ", " AAAAAAAAA ", " aaaabbbbb ", " abbbbb ", " abbbbbbbb ", "B ", "------------------- ", " bbbaaaaaa "};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> items = {"Abb"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " Abb "};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> items = {"albania", "polonia", "nueva york", "ucrania", "irlanda", "portugal", "madagascar", "uruguay", "brasil", "yucatan"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " albania nueva york ", "B P ", "------------------- -------------------", " brasil polonia ", "I portugal ", "------------------- U ", " irlanda -------------------", "M ucrania ", "------------------- uruguay ", " madagascar Y ", " -------------------", " yucatan "};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> items = {"abb", "ABC"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " abb ", " ABC "};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> items = {"Nevada"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" N ", " -------------------", " Nevada "};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> items = {"aBAa", "aabb", "accc"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aabb ", " aBAa ", " accc "};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> items = {"aaaaaaa", "aaaaa", "aaa", "aa", "aaaa", "aaaaaa", "aaaaaaaa", "a"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " a ", " aa ", " aaa ", " aaaa ", " aaaaa ", " aaaaaa ", " aaaaaaa ", " aaaaaaaa "};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> items = {"aa", "aB", "ac", "aD"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aa ", " aB ", " ac ", " aD "};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> items = {"A ", "a"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " a ", " A "};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> items = {"asdadsadas", "ewrwrewr", "reterte", "ertetrete", "yyyoyoyppyp", "tttttttttttttt", "ttttttttttttttytr", "mmmmmmmmmm", "MMMMMMM", "NNNNNNNN", "TTTTTTTTTTT", "oopopop", "tryrtyr", "ytrytrytry", "nvbnvnbvnvvb", "p"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " asdadsadas NNNNNNNN ", "E nvbnvnbvnvvb ", "------------------- O ", " ertetrete -------------------", " ewrwrewr oopopop ", "M P ", "------------------- -------------------", " MMMMMMM p ", " mmmmmmmmmm R ", " -------------------", " reterte ", " T ", " -------------------", " tryrtyr ", " TTTTTTTTTTT ", " tttttttttttttt ", " ttttttttttttttytr", " Y ", " -------------------", " ytrytrytry ", " yyyoyoyppyp "};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> items = {"alpha", "beta", "gamma", "delta", "omega", "alpHaa", "gaMs", "Deltas", "beTs", "bEha"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A O ", "------------------- -------------------", " alpha omega ", " alpHaa ", "B ", "------------------- ", " bEha ", " beta ", " beTs ", "D ", "------------------- ", " delta ", " Deltas ", "G ", "------------------- ", " gamma ", " gaMs "};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> items = {"KGTU", "Student", "Sucker", "suup", "Zed", "is dead", "i must do that", "i am", "i Am coder", "Krasnoaarsk", "Moscow", "MoScoww", "abs", "gha", "dasdasfqa", "dddafa", "asdafa", "ADAF", "I hate you", "exams", "somebody ", "nobody", "nobodies", "Nobodi", "nobode", "nasdfeE", "fdsag", "fffadsa", "tobeornotbe", "toppcoder", "tomek", "Petr", "tomekkluczincki", "asfasfagasga", "asfagarfgagd", "asfasfaga", "asdsafafafsaga", "hfaagha", "adafgajgkakjaga", "bvbklfkaskashk", "asfasfasg", "basdasfa", "aaafasfa"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A N ", "------------------- -------------------", " aaafasfa nasdfeE ", " abs nobode ", " ADAF Nobodi ", " adafgajgkakjaga nobodies ", " asdafa nobody ", " asdsafafafsaga P ", " asfagarfgagd -------------------", " asfasfaga Petr ", " asfasfagasga S ", " asfasfasg -------------------", "B somebody ", "------------------- Student ", " basdasfa Sucker ", " bvbklfkaskashk suup ", "D T ", "------------------- -------------------", " dasdasfqa tobeornotbe ", " dddafa tomek ", "E tomekkluczincki ", "------------------- toppcoder ", " exams Z ", "F -------------------", "------------------- Zed ", " fdsag ", " fffadsa ", "G ", "------------------- ", " gha ", "H ", "------------------- ", " hfaagha ", "I ", "------------------- ", " i am ", " i Am coder ", " I hate you ", " i must do that ", " is dead ", "K ", "------------------- ", " KGTU ", " Krasnoaarsk ", "M ", "------------------- ", " Moscow ", " MoScoww "};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> items = {"aa", "aAA", "aaaa"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " aa ", " aAA ", " aaaa "};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> items = {"AbBD", "AcBC"};
    Glossary* pObj = new Glossary();
    clock_t start = clock();
    vector<string> result = pObj->buildGlossary(items);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ", "------------------- ", " AbBD ", " AcBC "};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10710&pm=7838
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <queue>
#include <complex>
#include <cctype>
 
using namespace std;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
 
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef complex<double> pnt;
 
 
class Glossary
{
public:
    vector <string> buildGlossary(vector <string> items);
};
 
bool cmp(const string &a, const string &b)
{
    return strcasecmp(a.c_str(), b.c_str()) < 0;
}
 
string pad(string s, size_t len)
{
    while (s.size() < len) s += " ";
    return s;
}
 
vector <string> Glossary::buildGlossary(vector <string> items)
{
    vector<string> cols[2];
    sort(RA(items), cmp);
    int N = items.size();
    int col = 0;
 
    char last = ' ';
    for (int i = 0; i < N; i++)
    {
        char c = toupper(items[i][0]);
        if (c != last)
        {
            col = (c >= 'N');
            cols[col].push_back(pad(string(1, c), 19));
            cols[col].push_back("-------------------");
            last = c;
        }
        cols[col].push_back(pad("  " + items[i], 19));
    }
 
    while (cols[0].size() < cols[1].size())
        cols[0].push_back(string(19, ' '));
    while (cols[1].size() < cols[0].size())
        cols[1].push_back(string(19, ' '));
    for (size_t i = 0; i < cols[0].size(); i++)
    {
        cols[0][i] += "  ";
        cols[0][i] += cols[1][i];
    }
    return cols[0];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/