/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9905
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

class MostCommonLetters {
public:
    string listMostCommon(vector<string> text);
};

string MostCommonLetters::listMostCommon(vector<string> text) {
    string ret;
    return ret;
}


int test0() {
    vector<string> text = {"abc a"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> text = {"abc", "ab"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> text = {"qwerty", "abc", "qwe", "a"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "aeqw";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> text = {"english is a west germanic language originating", "in england and is the first language for most", "people in the united kingdom the united", "states canada australia new zealand ireland", "and the anglophone caribbean it is used", "extensively as a second language and as an", "official language throughout the world", "especially in commonwealth countries and in", "many international organizations"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> text = {"", "", "", "", "", " ", " a ", " ", " "};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> text = {"amanda forsaken bloomer meditated gauging knolls", "betas neurons integrative expender commonalities", "latins antidotes crutched bandwidths begetting", "prompting dog association athenians christian ires", "pompousness percolating figured bagatelles bursted", "ninth boyfriends longingly muddlers prudence puns", "groove deliberators charter collectively yorks", "daringly antithesis inaptness aerosol carolinas", "payoffs chumps chirps gentler inexpressive morales"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> text = {"adventures amusement fading disclaiming apical", "celebrity outgoingness bureaucracys bananas afghan", "controllably pasting departing dislocated planting", "mooring feelings mournfulness infinitives denounce", "cellaring asiatic fairy politer departmental cacti", "gazes casuals indebted planar displacing ostrich", "bolivias pinnings grabbing lurked funds bagels", "bronchus decimated asians digits analogously hyper", "neats airline memorandums idiocy infant fashioner", "indications baggy inefficiency irregularly lodgers", "abstained nouns hoaxs instantaneous animally bas", "hairdressers optimism pilgrim bluntly longingly", "holdings hums parapets drilled peeled illustrate", "barer helpless freed directories pithes filth cats", "denigrated courters accomplishments manifolder", "blustering alleviator defile giller alliterations", "boatswain batches hoarsely dredges granger giving", "boldfaces plenty obstructions delegates promenader", "blackbirds overestimating fruiter ditching harsher", "instrumentally admirations climaxing central cures", "expressive arrest papering boorish expulsion hues", "dissociated indivisibleness anthracite amorous", "amalgamate abolition crater compatibility inhere", "baggies demand aliases inability invincible guider", "huge fissuring applicants flag admirations fates", "inclosing infidel cyclones defer admissions comply", "luckless brat congregations engage colemans leaps", "depravedness courageousness moved pistils psyche", "adventist formatting nomenclatures deed clefts", "abjure grouping deigned olivers abstain drinkers", "nested piazzas deprived irons grooves medically", "obsolescence gargle glitch amity malted dyed gilds", "ghastliness frayed methodologies impostors corning", "egas chatterer cops bunters linguist cycler hated", "outweighed births fence packagings looker pray", "boathouse pacification manuscripts poising musters", "others hatcherys blackboards gullys character jars", "macroeconomics benefactors interfaced enciphered", "amusements meanly necessitating attained frog beth", "alloy christens inaner mortifier foothold cuteness", "long burdens hermits bunkhouses bore prematurity", "classifiable venturas lilies barnyard adheres loss", "vaxs misguided babble heaver floaters productions", "earned breakpoint comfortableness lots cord aprons", "proffering lawfulness barfly drool intensifiers", "puffing loan hilt halls planter inducer clumsier", "fractures coach fleece interactions cannot flash", "envisage poachers impermanently liableness handled", "dogged marinating kneeled proneness bored hauling", "pardoned giraffes payable excelled enter pining"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> text = {"birthright carnivals boor iterations pins hard", "acquisitions hilled acceptingness foot fittingly", "dolls aggregatively provisioner audacious governed", "admonished beryllium hypocrisies contented broiled", "incensed begot escort excludes mat disperses echo", "crumbs artificiality paled mimicking dressers guys", "gallantly inevitably jades patented imperiousness", "colossal meditations daylights psychological omen", "amtraks dorsal discharging massacred dustier butts", "foreigners antitoxin peg outwardly neglect healed", "knuckles lawsuit catches pardoning makefiles flunk", "adorable eyewitnesss mailbox insidious abaft heir", "coincide embracingly oblong amoeba apprizings bits", "crazily doubler blabbermouths ovens handicaps part", "fabrication iterators pulser predominate notch", "motionlessness bandaged damped clergy beneficence", "presenter kick interpretive absorbs hoe jostled", "middlingly attained interviews dandelion hopefully", "patchwork orthodoxly abundance literate dote bulk", "diker bating peaceable every calibration panics", "brazening absurdly linguists buildup footer naming", "contemplated fiftieth propounding nowheres bugging", "merchant customers culturing accessions forgets", "dens assuages consenting overtaken bonuses attend", "mute outweighed doer bromines hedges forestalls", "hangars disallows michigan nondestructively macros", "dirts midpoints justifiable awaited russian packet", "dyer lightens admonishment haziness abandoning", "inconveniences predictions evaluator installs home", "gluing chandelier mugs dumped lacking covertness", "kleinrocks emblems harmoniousness description days", "burgeons pickling newest practicality greeted dome", "others frugally abrasion proved after causes clad", "exploiters entitle devour peppers governments numb", "confederations pilgrimages cheaper pitiers living", "elephants bibbed abjectness acquitting dressers", "nips awaking kleinrock braves midways manure avian", "affluent fairys cricketer measles be overweight", "autograph abrogated biographies middler captivate", "frequently cot filially imaginations numerically", "pervertedness planar architecturally bars martens", "overdone alluring obediently miniaturing defending", "fleshed important downtowns clasped plenty glinted", "chinked automate bobbies got ennobled crave bums", "emperors infections plead implementors butts fresh", "controllers counter belligerently clutched pends", "justifiers measurer horizons indiscipline cherry", "liens airframes intrusions neutrally cops filth", "grandparent frantically locomotive hideouts leech", "noticeable baud disagreements lustily texs cheerly"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> text = {"alighted canary processors exchanged guidebooks", "allocate curable polygons newswire converge caked", "clucks adopter prospectively berried alkaloids", "brisker comforts luxuriant hooters anchors awe", "bricklaying formations bigotry healthfulness pun", "heedlessness gypsys glint glare bludgeons bunkers", "act buzzes casuals despotic manifestation chinner", "overwork deafening irrationalness bottomlessness", "advance granting crags crossbars impasses browned", "overestimations cots poisoning imaginer booby muds", "implying migrating bangladesh entropy granularity", "phosphates coagulated grassed knowing obligingness", "participating mittens grassier communications coop", "handily medicinal audubon architectures deluding", "cigarettes condescend miring natively boatswain", "fortuned eigenvalues provable dismayingly curly", "dilative decomposes gallingly occurrences plumped", "executives dilated greedily locative anchoritism", "barging bouquets announcers condones electrify", "hating contestable amoebas guaranteeing bagpipes", "clanged miscommunicated distance proton exterior", "chapels bolshevism functor linearity armament amyl", "lastly murderously heredity crises eluded aphid", "dictionaries blatantly corks pas bulletin complies", "bash cop birches chin bothering berried contrary", "airships everyones powerfully meeter dollies bilk", "encouragement electrodes initiators capitals miler", "havent manifesting bologna certain clucks caters", "pedestrians entrepreneurs anything misgivings lava", "blanks approval disadvantages inborn familiarly", "mires mooring childishness ethical numbs bantam", "preludes fielding broaches alcoved bored boldface", "poplar glassy juniper cogitative inclose lurk pope", "decaying contaminating indentations ordinarily", "dean dismays improving chat endears famous masted", "mandatories knobs enlargers missionarys forego", "cistern cottoning adversary pars lensers curly", "clattering brainwashing consecrating admittedly", "onanism capriciously describing ballads observing", "greatest lowers boardinghouses draftsmen dismissal", "hem maturer betrothals conjunctively pouringly", "insurances boatloads nobodys adieu kindness frauds", "feather brigadier ambiguous communes airframes", "deviated avarice cargo milling executables astute", "clerical instants elder cohere corrections fainted", "memorially expounder alga misty fogs arbitrating", "exemplify plateaus invariantly elk dozes payrolls", "fleshes cuckoo opportunity hymn atheism exclaiming", "artisans claim flapping maintained cursedly kitten", "earshot crisis divan gels deadline healed forbid"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> text = {"endanger moods blackest demorgans arrayer acorns", "broke cater detractively instituted diversifier", "autumnal fisted negative meant brief pension deem", "hollander busying or glaciers barrages microport", "females patricians hottest brunette desirer clung", "federals oversimplifying eminently constituency", "improver dunes garlanded dews pelter astonishment", "imaginable banquet canvassers articulate entrance", "dreadfully housekeepers dikes hideously apportion", "moaned currency octals extractions potently delve", "invoker hazardous damn merges narrow airbag lowing", "choking formulas betting attachments leader citys", "beneficence fitfulness cadenced confession consul", "pocketbooks confound compensated bedding currants", "churners postponer busier ceremonially happy laws", "garlic chides intentness converse interferer inlet", "hazards attitude intonations debris factions girth", "equivalences absorber implores flutter couplings", "frightful lever vcr alaska flask lackadaisically", "classrooms mandated monks inversely collared free", "chapters articles chateau jellying prick enquires", "breakpoints masons grover counterfeiter endangered", "puddled dales playwright broached hawkers fumbles", "ballot perseverance drumming hinted adjusting jabs", "barometer lawyerly barrels deservings guaranteed", "interrelatedly mitigations oration aimers delver", "grandioseness enrich drab legs fuzziest garnered", "critters lamentation amusements apostolic pry dens", "aroma dictated disorder chemises drawback brutal", "certifier him outright offensively doubles devise", "bunter pragmatically justice copied invariance", "grandest haltering ovally inconvenient bused liz", "exhibitors dualities preluder orthodoxes inquires", "caning arbitrate chasm economist gravel dedicating", "assembled publishes juvenile acquaintance asiatics", "incoherence pooling instantaneousness landowners", "backwards incarnations grouses ignore pretties", "allocating paperers nigh hat originative fugitives", "barons oversimplifies frosty chamberer bewitch", "hardest momentariness imperviousness networks car", "breathy normally disgraceful botcher permuted haze", "pinpointing journalists jots deferments flirting", "privative hassles conspire diseased harsher airman", "backlog dreamers bin homaged negative chars dregs", "anxious extravagance considerate mailers mire leak", "dispelling bruiser analysts charitable hardwares", "lifelikeness considerer caster engendering lapsed", "forks counsels ingloriously precipitation chipmunk", "originates glacial gratuitously couched mite nine", "cloudless proofs militarily dereferencer hunters"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> text = {"personifying painstaking circularities lest hip", "adjudging chances clothed malefactor cawed clobber", "covets passworded midsummer calls congressman ably", "confiscated competitors ballasts faiths consonants", "kennels godlikeness gainer peremptory hypotheses", "insurrections gangs allowableness cohere knuths", "liquefying psychiatrists gainer communities avid", "exploitive blandness flight dating exhibitors most", "clouded publish nephews conversational battlefield", "armed pounder princesss gates ashamedly alignments", "contagion dentals disgraced jingled maturer gloves", "odder fort papered bothered bulled bilging brew", "monarchys lowest needled densities divesting clump", "berried obedience electronic movers partakes gay", "beadle doing inconsistently microwaves processors", "preached expertly annulments adobe funnel no dandy", "lobbied pancreas fortress mention maritime limits", "boastfulness havering experience mucked isolate", "inexorable gyms demonstrators odes procurement", "feasting carter gorgeousness incompatibly highways", "plumbs formality child exhaled bookstores belongs", "banter intuitions infants footnote hammock prowler", "punchings goblin experience fainting modulate ave", "petroleum microprogramming appreciates navigators", "decays length airport consisting maxtor altos loot", "locating lobster landlords grumble acutest foci", "inheriting avoidable clinkering jade consumable", "council exercised parsimony plaided perceives nigh", "freighter pills infections comparer proponents", "disastrous ping granulated entreaty befriends dons", "lizard obliteration pasturer fiery hoards caravans", "grover hitcher interests poked freighting couch", "nettled logged kerchiefs pique meaningless abduct", "pits distortions boomerang herder boatswains amber", "deluged laws lieutenants moderateness inference", "destinations essentials hijackers anchorages bird", "bunkhouse hallway abutted principally continuances", "probation familiarly aerating fretful diamonds", "balanced dens barracudas commencing briefly goodie", "displayed september immunity princes dimpling cork", "millionth arms pained gender integrates blamers", "guarantee activations cipher forgeries guidebooks", "hearkened mortars flattery hoer frets poser older", "ensembles formidable librarian singapore jeans", "dwelling clutch disclosures hooted antedated figs", "conserving aristotle parry inscriptions childs", "linguist admirals brainstormer cannoned flattened", "abducts balancers fewest deceptiveness drooler", "murmur tvs devastated bastards justing croppers", "deallocating beagles criticism equivalenced damper"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> text = {"fluter inhospitable ducked cuts boycotted basses", "crunched dreaminess brainy misinterpreting dismay", "insociably clockers encircles bibles elaborations", "conserving dining teflons drab comedy contends", "pennsylvania flowed munching likeness harps preyed", "embodiments permits inelegant hostilities keeled", "pamphlets fluffy deluged debugs manipulating blue", "circularness alterers decompile consumed disrupted", "allele drowner establishing ambusher macaroni roys", "paraffin lessened nostrils cubs erecting detail", "manurer beliefs campaigns festivals contour dive", "legitimately elections advertises exterminating", "permeations drawled hiring breezy celebrated blitz", "muffs economical hunger mcelhaney constitutes eyes", "nailed alternator flax norther indulgences glens", "interiorly indirecting clusterings nothings flock", "autumnal behave cooperatives hawks passion divests", "homomorphisms lamports bottomlessness flamed bugs", "luncheons hazards cent bronchioles caption fences", "lathing misleadings accumulators livers backyards", "amandas nondeterminate impotence dated detections", "locative appeal persecutive cross murmured minded", "lotteries botany hoofs lusts hitters kids espy", "dentists jaws evinces juries collating grasp fret", "insect porcupine liquored exclaiming fabling disks", "microscopic choiceness gathered fumblingly dopers", "photography invoicing denial dabbled hitting locus", "blueness continues flags assail floridas cough", "carpets counters dye packets looking diverseness", "demises islet hadnt customers actuated bathroom", "boated attacked autopilots direst agers lisps jot", "allies greaser adjustive acuteness biochemically", "imp breakdowns possessive namelessly disciples", "flesh covenants memoir bourbons affinity been agog", "manufacture backscatter moldered proximally active", "americas brigades hasted inflated indivisibility", "digested kidnaps luxurys detain contributer huts", "awning golfer parachutes catered mention fretful", "minded foraging bingos dogging nestling humanitys", "infinite blocks hourly experimenting coupons heirs", "landings pineapple parole drawl kennels marginally", "dandies curfew math assyrians augment configuring", "conferencing congruently inceptions overruling", "infernally ethic cupboard messes alleged listening", "proficient inherited algaecide chooses inadvertent", "propulsion braced cudgel affixing cabling boldface", "distrusted pillager feminineness infringes broils", "frantic devour lambdas allies maple prime fluting", "damed ammonias fittings idiocies evils inks bauble", "amazing blackmailed coasts analogously immaturely"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> text = {"interrelations hopeful gurgled motionlessly pcs", "lipstick idling prompters bequeathed bided odious", "predications frustrations captures oared blamed", "monotonousness blockages drooping disobeyed doting", "breadboard furious bordellos gorges marriages duty", "mountaineers irks allophonic completive durability", "northward bombarding humaneness appeal eventuality", "bight hopefuls armistice embodying flask peeving", "equilibriums crib milkmaid damages apprenticeship", "hornedness heaves melancholy confessor planted", "congressionally lasted cleaned buffs clings dolly", "differentially chips flocking calories offset jars", "knolls protectiveness dispenser packagings brooks", "desirously jokers intentioned gamma projectors", "anglophobias plantings gangly duals discreteness", "crescent granger gold dirt israels aquifer cages", "articulateness acquitter decouple bloodstream oily", "challengingly length foxed sam burningly mutest", "arboreal inspected intelligence adultery annoying", "overstate perceptual coolness enlarges kitties", "likest axiomatic initiative fatigue disclosures", "burlesque microprocessor appetites feverishly flip", "heater credulity gutser prejudicing invalids float", "erectness partitioned contemplatively chooses acne", "nondescript necessary incompetents languid forging", "casseroles hitches prints bylaws misdirected omens", "absentmindedness assigners automatic archiver knit", "falcons badged berets intersperses nicknamer badge", "liberal comparativeness flush deceptive barbaric", "provided multiplication lip bathes bus handcuffing", "assurers flammable consecutive optimism jellied", "grievously constellation annotated inhumanities", "measures consequential intrinsics kindness cupful", "pounced horseman abbreviations enthusiastically", "associational compulsion ferries milled creeping", "accursedness asks aggressors grind fogs betrothed", "magazine eyebrows appender acts initiators propels", "particles accord appropriations legislated brewed", "adverb paragrapher mercilessly escaper corollarys", "consonants honeymooner naming coexist homing fogs", "contraptions confider depreciating extermination", "bestowal decaying basally dirts adherer midpoint", "casualtys badminton accountability keyboarding", "mainframes identifies preserve memos moderates", "arrester policemen masks cusp almsman inc instead", "grocers neutrality prevalent condescendingly mules", "ably herald absorptions garner latex antedate ache", "ones bounden agglutinates correctness dredgers", "cellars orderliness adiabatically dims clench job", "outgrown militants expense eaten grazing boat coon"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> text = {"perfecting data brainy bribers pound airbags maces", "dominant magnifier muting launderings busies fain", "nonstandard issuing blimps montanans competitors", "dispose gleefulness creatureliness choose debugger", "constituents devise pilgrimages nostril facades", "misleading modulus cryptic insolubleness gruffness", "decent burliness maddeningly force bells circler", "prowlers advent perisher grafts oppressors dummys", "flashers boron listeners adduces privy crossed", "modulus furtherest cower abundant dejectedness", "deliver mice land cultures industrys disentangler", "parallelograms decouple implausible miniatures", "decimate accustom descrying liens discrepancy ore", "atonement dinner insulations bucks characters nows", "melts indigenousness linens drums murderousness", "cartesian proposing limbers cultivated polygons", "abrader muskrat antifundamentalist collaborators", "cavitys comdexs caress confirmedly decades pills", "painless proven freight demonstrated efficiencies", "envies facelessness basalt exchequer prepositional", "invalidness crowded choir adulations impinge omit", "allegrettos lossiest anchor flourished effeminate", "pickled mint philosophers musing bodies officiate", "atrocity furious jr knowhow grovers judiciously", "plot manifestly give crookedly grafting horrifying", "disarming asymptoticly bard inattentive mostly", "outline concurred bonny noisier afflict absentia", "hubris academically oems friars chording parroting", "league effected faring distortions paraphraser", "pierce patricians belief bottoms bases combat junk", "elementary exacting foil platinum inserter naive", "impedances mutilating grunted circuited caged jay", "divinity berliners ellipsoid cudgels tinseltowns", "perseverance ejaculate occupations hairier narrow", "blemish consisting bullies matures activists chops", "paring pipes contribute chiming noisier astounding", "adulate carer nines courageousness givers caresser", "archbishop garlanded pitiable cascading concreted", "backpackers beating firelight macro bracelet end", "besiegers appeared brunt protests bitten kicks", "complexes exceeding newspapers follows phonograph", "immovability flops amplify biographer granted jaws", "inclusion lairs pastorally emperor frameworks bans", "audiologists insociably accrue duchess grounding", "deceivers ditchs embark chubbiest adults polymers", "condescendingly blanket leads nroff educatedly", "bendable believably foraging helpless profits muds", "bonnet numbs lagoons handier eighths absurdly fool", "every moping boomerangs middle muteness gingering", "positives chickadees pruners grieves gauzing loins"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> text = {"brave embarking capitalists professed overdosed", "edibleness crucifying lets accorder aggressor gulp", "aggressively aftereffects doll extravagant acclaim", "postulates burlesqued cleaning priestly fiddled", "parapet bittersweetly airspace bisecting presences", "cashier orthogonal homaged goodness perfections", "conductively kindled abstract opponents bamboo", "combat corridors belles ointments engineer apple", "firelight bestially divorced edge diphtheria dirty", "farmhouses case comparable overhauled asper loops", "constructors hymn oughts gapingly inspecting clogs", "deplored benefited boardinghouses griller bayonets", "misconstrue existed backscattered drenched bereave", "lighthouse fatten autopilot exploder irreversible", "latex pinnings conditioners inexorably guilts dyed", "gratefully airway nondeterminately opiate packages", "postcondition packards cops lobbies allaying mourn", "eccentric instantiates awarders dimly censored", "plague playwrights catches deprivation biography", "diagonally modus candled districts institutionally", "declination conceal puddings procrastinators latex", "chefs buoyantly gaps ive boomer peddlers blowfish", "internally leftwards dependencies navally mates", "bunkhouses practitioner inattentive devour changes", "anglicans russian disgracer milestone camouflage", "contributers afflicted attentiveness acknowledger", "pricks extendedly barbarousness affricate ix bows", "pedagogical pancreas banshee hoarding fainter jog", "necessitates grumbled mouths firefly annuls lairs", "apparatuses harassments credits guardianship had", "microsecond interrogatives accelerometers adrift", "foods enlist exclusively allotment maps priorities", "sikkim hearkened glowed lotus afterthoughts aborts", "computed grayly gypsying debugged leashs flower", "augmentations federal grieving peninsulas harlots", "chips excruciatingly drowsiness glaring opposed", "electors beanbags languid entirely lotteries jig", "moat ode highlights delegate chaperoned adjourned", "hopped macdraw mindlessly picnics ledgers nose", "aliased charactering bicycler intimidation hunters", "descriptives latexs evilly predecessor halfness", "excretes mistrusting nettling ebbs adaptively pens", "matchings caribou deviate haggard mildews gels", "being covertly mantels guiltiest lazily nailed", "fugitiveness bounce penetrating cycloid forages", "experts chickadees discontinue captives knifes", "files entreatingly implying discipline forwardness", "forearmed alyssa polite applauded grinds orphan", "biblical invalidated aborigine clip dryly bites", "fawningly illegally prompters ham argon curls aim"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> text = {"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "yzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "wxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "stuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "qrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn", "opqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl", "mnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij", "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", "ijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd", "efghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzab", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "yzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "wxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "stuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "qrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn", "opqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl", "mnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij", "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", "ijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd", "efghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzab", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "yzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "wxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "stuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "qrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn", "opqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl", "mnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij", "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", "ijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd", "efghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzab", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "yzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "wxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "stuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "qrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn", "opqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl", "mnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij", "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", "ijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyz";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> text = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccdddddddddddd", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "ddddddddddddddddddddddddddddddddddeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeffffffffffffffffffff", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "ffffffffffffffffffffffffffgggggggggggggggggggggggg", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "gggggggggggggggggggggghhhhhhhhhhhhhhhhhhhhhhhhhhhh", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "hhhhhhhhhhhhhhhhhhiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiijjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkllllllllllllllllllllllllllllllllllllllllllll", "llllllllllllllllllllllllllllllllllllllllllllllllll", "llmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnoooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooopppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppppppppppppppppqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "sssssssssssssssssssssssstttttttttttttttttttttttttt", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "ttttttttttttttttttttuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyz";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> text = {"hdovkdyxgrzqkrqwsvmetyyvrazekneyrbmavzzsznelsyfwsl", "cdptcgwojutdvlxyrxldluypcqnltnrxnvcwzvtmsifxfeboly", "qapwvqeipzvhgrdulqdsdkmqndfbotrnbffuxbzuiifdufaqkn", "rohlfofyawjkgnofkcyzqapupyzlgmtuorfpczfomuxdmizepv", "slhcyycwgggbshizcqsodegmomtbhmjfagwvqsjrdwbyeenkki", "mgphpsgqrbxujgpnbadutslndiqapkramgxqasemrfhopvacdf", "sidkaedibnsrveoftqznpuleknkndtlhdozolswmabxvpiwixk", "azlqgddjsgpfnbyvvglcwyzboojujhmcpavlpwxfdrjphbspfv", "dchtvtsvtblbirijahinoidiformokvocceiplqfgkcymezedv", "esoypapqcsumvczkvhapyegnmrmnczfhdeizxpkrhifbzudwsj", "pfrhxvznvcwnbihrmwnygdmzopijzmygbuabgalxyfsmczhbfj", "ssxsgawhhhjdmtshqlclpvfrynsawjqfpxyvazmfcladywlufm", "mkvtaytyoplczkzknwmaaiblisxuponjsyxyugjvtydazkbnjq", "xwlnxlnbnoqdndbctffzroxjcufykusopwmulsgaxzhkmrhzdj", "ubpcxwetkuehchrcshpaycxtwpzvjbfbbbkwggmbgxuxjkgkme", "yqzutxqtmgeonexnerqfwjxmtzrgjhalnjopbdzbxgngicqzlk", "dmeuduliklcsjqdlmouapzvgatqkvkgmrpecjfyvroyqsdlwjj", "pxirxkksofebjafwdfxaecmomchkcvlyejhmwwonyhkxscfhup", "jhkpergnvlzctgyljffqlszlmdrevtizeenrbhvvyjpmnngwve", "tqktlozfvzodrbnqubphmnptatrzozwwazzfhhxzetnqivarca", "horaygerktdgmrdrhjnahgfwjimmrmfetueasxsoixmrnprvkv", "tplfopileueukbjkgpqtfuhjilwxjbilpwkqqbiaamedfvufrk", "rxxqjihdalgwjbxgdyxzuyqwxschjyhsmtqlbkzxeyobmkvord", "vbyhflogdzttbsquoayydjqukefgegrrhjcflomugvomgswppe", "zfwnpcbfwlnroiuqfxgpixxbykeonticbtyupcgnljothibnmr", "bozyysklzlntlaiezvskklkgotxjmuvtrwqrqmntypdeqrquoj", "gwxnpnhauewaiastjoldxsnmihixqxzswfdrmmusrmpbfrxmqu", "kfwspekwbvkwkyhmhiwguswryeteajozemfwodpxllokdujlsw", "itpreeqlyzxtlgmrrmjwonrteaydozmqoecctswzxkizfxhvzq", "yqqcakjuojfxzeevnvzrxqtxluwctbkicjkcrkgbmruggwjyyh", "tsvzrlidcgmwxjusyuohpirazuaaslwbonmzagselaxtsakndl", "rudbhchzpgqchxuduqdjwgipwgrqudzxxghqiqnfseoxuogpuo", "irixzrzhuwqahclzsptekqdnszfmqpqodjuntpoclpurcaahij", "jmtyouhhxqkyxdrnjthqgvzywsulzalfpyebaqvvwjcxvvqfov", "kbnfearategkiedagdevnldoxrvehgrzviabwcvvaiixwyejtx", "jgjvamitogixhupbhnomjfftewalnymksswmyjbpnrqoikfiea", "wuzzbdcjxqgsvvhqyvvamkgiiiavigcpbqgrwjmnbbbcioyxzc", "stnbziegmcyigkwinypdesduabpqmnlcczlufshuwoyzqkjzqs", "suujiywkvcckfnmymhchyfepyfkambkxevwgcjkgplduztgemt", "tihudoiabwhsavilqdyeketjqbsrdzqcmmjhotbagfvnuufftv", "foqytjwyjsvncjkfazhuqsdshnfrfqqeqyochpsoviyfnlbhrc", "tjntuunccidoiswxipvflagnvphyedujjoaeosgblkettfeayl", "khufexihbxgobpmktgdfwtjwxvfoyhhdcpnhbcyhxsrilygpvh", "jazvcylykguoclrlgtevwbwkkpcfstrxjnhdfagrvmgctjzcxr", "lqnsapdroyhxbtsciuwcnktivsjufbdcqtudizbilrekxdlped", "xohtqtwlxpoqactlmzgpjdddsgzcigfkkrpnbamxmpidygtulw", "cnbwbfqvepewwkcsamjeonjgqrzvxcipwuqaxwannktpwqwynv", "whskpocivibxixwxsbtbwtancnjlkhqbjjbpcubobshsiisbba", "fzjuuuhynzrlilpakjinhrfdsejlqwntzvsktjqrivorrmracy", "tmwspudjtvogfudqdlquvqmxhebyeovmeckwsyntsydcub"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyz";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> text = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " x ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> text = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "f", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> text = {"gcoukcywgqyqkqqwsumesyyuqayekmeyqamauyysymeksyewsk", "ccoscgwoiuscukwyqwkckuyocqmksmqwmucwyusmsieweeaoky", "qaowuqeioyuggqcukqcsckmqmceaosqmaeeuwayuiiecueaqkm", "qogkeoeyawikgmoekcyyqaouoyykgmsuoqeocyeomuwcmiyeou", "skgcyycwgggasgiycqsocegmomsagmieagwuqsiqcwayeemkki", "mgogosgqqawuigomaacusskmciqaokqamgwqasemqegoouacce", "sickaeciamsqueoesqymoukekmkmcskgcoyokswmaawuoiwiwk", "aykqgccisgoemayuugkcwyyaooiuigmcoaukowwecqiogasoeu", "ccgsussusakaiqiiagimoicieoqmokuocceiokqegkcymeyecu", "esoyoaoqcsumucykugaoyegmmqmmcyegceiywokqgieayucwsi", "oeqgwuymucwmaigqmwmygcmyooiiymygauaagakwyesmcygaei", "sswsgawgggicmssgqkckoueqymsawiqeowyuaymeckacywkuem", "mkusaysyookcykykmwmaaiakiswuoomisywyugiusycaykamiq", "wwkmwkmamoqcmcacseeyqowicueykusoowmuksgawygkmqgyci", "uaocwweskuegcgqcsgoaycwswoyuiaeaaakwggmagwuwikgkme", "yqyuswqsmgeomewmeqqewiwmsyqgigakmiooacyawgmgicqykk", "cmeucukikkcsiqckmouaoyugasqkukgmqoecieyuqoyqsckwii", "owiqwkksoeeaiaewcewaecmomcgkcukyeigmwwomygkwsceguo", "igkoeqgmukycsgykieeqksykmcqeusiyeemqaguuyiommmgwue", "sqkskoyeuyocqamquaogmmosasqyoywwayyeggwyesmqiuaqca", "goqaygeqkscgmqcqgimaggewiimmqmeesueaswsoiwmqmoquku", "sokeooikeueukaikgoqseugiikwwiaikowkqqaiaameceuueqk", "qwwqiigcakgwiawgcywyuyqwwscgiygsmsqkakyweyoamkuoqc", "uaygekogcyssasquoayyciqukeegegqqgicekomuguomgswooe", "yewmocaewkmqoiuqewgoiwwaykeomsicasyuocgmkiosgiammq", "aoyyyskkykmskaieyuskkkkgoswimuusqwqqqmmsyoceqqquoi", "gwwmomgauewaiassiokcwsmmigiwqwyswecqmmusqmoaeqwmqu", "kewsoekwaukwkygmgiwguswqyeseaioyemewocowkkokcuiksw", "isoqeeqkyywskgmqqmiwomqseaycoymqoeccsswywkiyewguyq", "yqqcakiuoiewyeeumuyqwqswkuwcsakicikcqkgamquggwiyyg", "ssuyqkiccgmwwiusyuogoiqayuaaskwaommyagsekawssakmck", "qucagcgyogqcgwucuqciwgiowgqqucywwggqiqmeseowuogouo", "iqiwyqyguwqagckysosekqcmsyemqoqociumsoockouqcaagii", "imsyouggwqkywcqmisgqguyywsukyakeoyeaaquuwicwuuqeou", "kameeaqasegkiecagceumkcowqueggqyuiaawcuuaiiwwyeisw", "igiuamisogiwguoagmomieesewakmymksswmyiaomqqoikeiea", "wuyyacciwqgsuugqyuuamkgiiiauigcoaqgqwimmaaacioywyc", "ssmayiegmcyigkwimyocescuaaoqmmkccykuesguwoyyqkiyqs", "suuiiywkucckemmymgcgyeeoyekamakweuwgcikgokcuysgems", "sigucoiaawgsauikqcyekesiqasqcyqcmmigosaageumuueesu", "eoqysiwyisumcikeayguqscsgmeqeqqeqyocgosouiyemkagqc", "simsuumccicoiswwiouekagmuogyecuiioaeosgakkesseeayk", "kgueewigawgoaomksgcewsiwwueoyggccomgacygwsqikygoug", "iayucykykguockqkgseuwawkkocessqwimgceagqumgcsiycwq", "kqmsaocqoygwassciuwcmksiusiueaccqsuciyaikqekwckoec", "wogsqswkwooqacskmygoicccsgycigekkqomaamwmoicygsukw", "cmawaequeoewwkcsamieomigqqyuwciowuqawwammksowqwymu", "wgskoociuiawiwwwsasawsamcmikkgqaiiaocuaoasgsiisaaa", "eyiuuugymyqkikoakiimgqecseikqwmsyusksiqqiuoqqmqacy", "smwsoucisuogeucqckquuqmwgeayeoumeckwsymssyccua"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "acegikmoqsuwy";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> text = {"a "};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> text = {"zzzzaa"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> text = {" a", " a"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> text = {"x "};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> text = {"aa "};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> text = {"english is a west germanic language originating", "in england and is the first language for most", "people in the united kingdom the united", "states canada australia new zealand ireland", "and the anglophone caribbean it is used", "extensively as a second language and as an", "official language throughout the world", "especially in commonwealth countries and in", "many international organizations"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> text = {"z z zz zzzz"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> text = {"english is a west germanic language originating", "in england and is the first language for most", "people in the united kingdom the united", "states canada australia new zealand ireland", "and the anglophone caribbean it is used", "extensively as a second language and as an", "official language throughout the world", "especially in commonwealth countries and in", "many international organizations", "na ", " a"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> text = {" a"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> text = {"a b", "a v"};
    MostCommonLetters* pObj = new MostCommonLetters();
    clock_t start = clock();
    string result = pObj->listMostCommon(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22671772&rd=13507&pm=9905
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
int t[27];
 
class MostCommonLetters {
public:
  string listMostCommon(vector <string> text) {
    for (int i = 0; i < text.size(); i++) {
      for (int j = 0; j < text[i].size(); j++) {
        if (islower(text[i][j])) t[text[i][j]-'a']++;
      }
    }
    int best = 0;
    for (int i = 0; i < 26; i++) {
      best >?= t[i];
    }
    ostringstream oss;
    for (int i = 0; i < 26; i++) {
      if (best == t[i]) oss << (char)('a'+i);
    }
    return oss.str();
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/