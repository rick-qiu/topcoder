/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6621
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

class RoboRace {
public:
    int startTime(vector<string> board, vector<string> commands);
};

int RoboRace::startTime(vector<string> board, vector<string> commands) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"#....##..#....#.....#....#......#.###.#.#.##.....#", "..#...##.......#.###.#....#.#X#..######.#......###", ".#....##..##.#..#.....#..#.#.#...#...#.....#.#....", ".#.#.#......#.#........##...#..#.##....#.......##.", "...#.##...#...#......#....#..#.#..#.###..#.....#.#", "#..#.###..#...##.#...#..##..##.#.##.............#.", "..#.#.#..#.#.#...#####.#...#..##.#...#........##..", "##.###..####...#.#..#..........#.#....#...#..#.#..", ".#.#...........#..##.#.#.##....#......##....#.##..", "....##..#....##.....##.#.###...#.##......#........", ".....#..##....#.#......#.....#####.....#..#...#.##", "...........##..#.#...#....#.#.....##.#..######..#.", "...##..##...........##.##.#..#...#.#...#........#.", "#..#......#.#...##..#.#.#.#...#.....##..#......##.", "##.##.#....#..##.#.#...##..........#.#...#..#.....", "##......#.#...#......###...##....#....#.###.###.#.", ".....#..##.#..##.#.#.#.####.....#...#..#......##..", "..#.....#.#...#......###...........#....#.....#..#", ".........#.###............##...#.#.##.#....#..#..#", "....#...##..#.#...#......##..#....#.......##..#..#", ".......#.#..#.#.####..#..#..##..#.#...#...#.....#.", "..#.......#.#.#.....#.#......#...##.#.#..#........", ".......#......##..........##.....#...#.#...#.###..", "...#.#...#..#...........##..#...#.#.#.#....#......", "......#..##..#...##.#..#....#.###..#....#...#..#.#", "..........#..#.....#.#......##...#..####.##.......", "..#####......##...##....##.#.#.#...#.#.#....#.#...", ".#..#......##......#..#.#.....#...##.......#.#..#.", "#.#..##......#.#..#..#....#.###.........#....#..#.", "#.#...####.#..#.....#.#.#..##.......#..##.##......", ".#..##.##........#.#...#..##.......#.#.#......#.##", ".###.Y......#....#...#....#..#...#.....#......#...", "...##.##.###.#..##.##F..#.#.......#.##.......##...", ".............##........#...##.....#.............##", "#.##.......#...#....##......##...#.........###.#.#", ".#.....#..#....#..#....##..#....#.#.....##.#...#..", "#.#...#..#..#.......#....##..##..#...#.#......####", "....#...#.###.........#.#...##.....#.#.#...##.....", ".#............###..#.#.#.......##.....##.####..##.", ".#..#...#.##.#..#..##..##....#.........#..#.......", "...##...##....#.#..#.#.............#.#.##....##.#.", "..#.....#..#.#.#..#.....##.##......#.#............", ".##.#.......#..#.#...#..#..#..##....#...#......##.", ".#.#...#......#.#.#.#.......#####....##.#..#...#..", "....#....#..#..#......#........#...#####...#.#.#..", "..#.#.#...#.#.....#.#####...#...#..#...#..#.##.#..", "##...####...#..###.#.....#..#.#.##...#.....#......", "#..#..#.....##......#.#...........#.#..#.....####.", "..##..##.#..###.##....##..##...#....###..#..###.#.", ".#...#.#.....#.#....#.####...#.....#..#..#........"};
    vector<string> commands = {"WSENSNESEENWWWWESSNNEWNWEESNESEEEESNENWWEENNNSWWSN", "EWWWWNSWWNNSWWSWSWEWNWENWESSNNNSWSWNNEWEEENENNSNES", "ESESNENNWEEENWESWEENNSWSNEENSESWNNNENSEESEWWENNNSE", "NEESENEESNWWSNWWSWWESEWSNWSNWENSSSEENWENWWNWWWENSW", "SSWESNSSSEEENNSSESSSSWESEEWENSSSWWWNWSWWSNSWSSWEWW", "NWWNWNEENESSEWSSWENSNEENWWSWWWWNENNSSWWSSNWWESNWWN", "WESWWWNNSWESNNNWESEWNSNEWESNNESSWSNSSNNWEWSNSNSENW", "NSWESSEWWSSWSSEWEWSWWEEWSNNNSNNSSWSNWEWSESSNSWEWEW", "ESSESSSNSNENSWWSESNSESNNEEWNSESWEEESSWWSENSSWWSNSW", "ESWWWEWWWSWSSSNESEWWSWNNSEESENESSWSSWWESWEWEENSSSS", "EWNSNWSESSWNSSWEWNNSNSENNSWEWSWESWWWWSEENNEWWESSES", "EWSSNENESSNSWWNSENSSNEWWESSWEESWNENENNWEESESWSNNEN", "WWNNSEEEWSENEENSSSWWWEWNWWNSEWWNSSNENESNWSSSNEWESW", "ENSWSWNNSSSSSNWNSENNESNESNWENSWENNNEWWWNWWNENWSWNE", "EWSEEWEWSSEWWENNSWSESENWNWNSNESSNEWSWSSWWNEESWSSWE", "WWNSWNWWSSEESNNNNNNNNEWEESNESWWENSNSNEWWNNNENNSSSW", "NSWNNEESEWNEWESESNEESEEENNWENNESWWNNEWSSSWENNWSWSW", "NWNWSESNENNSSWSESEEEWWWWSNESNNWEWSSWENWNSWEESSESEN", "NWWWWNEEEENEWSEWEWSSENNWSNSEESENSWNWWNWNWNSNEEENEE", "NSNWEWWWEWSSESNEWEWNSESENSWSSNEWNNSSNSNSNEWWNSNWSS", "WEESEWWESWWSEWWWESENSEWEWNENSSSNSNESNEWENEEESENEES", "EESEWWWSWWNEWWNNENSSENNESEWEEWSSSENWWENENSNESWSEWE", "NSNESSWNENNNEWEENNEEENNWNENSENESSWENENWSSSEENESWWW", "WESNWENNWNNENNENNWSNNNWEEENSESEWENSNNWNWNNEENSNNWW", "WNWSEWWNSSEENESEWEWSSWNENSSEENNSWSSEWENSENNESWNWNS", "SWNSNWWWSEWSSWSNNSWNESEWNENSNEEEWENENWSSENWNESNSEE", "NNSEWNWSSEWENEEWWWSSNWNWENSNSSSNWWSWSSWENNNESNWWWN", "NENWWEWWNNNSEWNWSWSNWNWNWSWNNWEWNNSNNWNNWENNNSNESN", "WSNWNSSEESENSEESNENWSNENWENNSSNNSSNENEWNSESNEESNNN", "WWSEEWNSNNSNENNWNSWNNSSSEEENWNSWWNNENNNSNWNNWEEESS", "SEENWSSWEWNNENNESNWWWENNSNNESWNENWESNENWNSNEENNWSS", "EWSSSNWSEESEWEWWWWENSNSWWNEEESNNEEWENNSNENSWWNEESS", "ESEEESNWEWENNESWESEEEWWENNNSWSEWSWSNESENSESWSSWESS", "NSNEWSNWENWEEWNENSENEWWESSENWSEWNNWWSSSENSEEWSNWNW", "SSSNNEENSNSWWEESWEWWWWSESEEESNESSWWNSEESENSSNNSNWW", "NSESEWNSNEEWWWNNEEESNWESSSNENSENEEWNEWSNWWNENWESEW", "WWNWNWNEWSSWSNNNEWNESNESEEENNEWSNNSNENESWENSSSNNEW", "WSSESSNSNNNNNEWWNNNNNWWNNNESWWEWNNSNWENWSNWWESESEW", "SENEENSNESWEWESWWEEESNWNSWWSENNNWWNNENEENEWSEEENNN", "ENWSNEWWNSESWWSSNWNEEWNNENNSWSWWSESNNNSSSNSENNENNW", "WSNWNWENNNNWNSNWWNNNEWEENESWWESEESENENSNNSWSNNESSS", "WSNSNWNNSNNNEENSEENENNNWSESSWNNNNSWNWNNNWWNNNSSNWE", "SESEWSNWWSWWWSSENWNNEWNEWNEWNNWNWNENWESNSNSWNNSSWS", "SNNENSNSWWNNSSSNEENWSWWNSWWENSESWWWNSWWEESSSSSNNES", "SNWSEENNWENNSNSNENSWSNWSEWENSESEWWNSENSWSNNNEWWEWW", "ESNENWNSSSSSWSWSSESWSSWWWNWSNNSWSNSWWNNEESSSNWWSNN", "SNSSSWWNWNWENSNEWNENNNWESEEESWSWNSSNWESESWWNWSWWSN", "NENEEENWEEEWNWNWWEWNWSNSWENSNNNEWSNWNWWWEWNNWWESEW", "NNWNNNENNNNNNENNEWNSWSNNNNEWENNWNNNENWNWSNSEWWEWWN", "NNNENNNWSWNNSNSENNWNSNWNWNNNEEEWEEESWWSWSSWSNESESN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1555;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"#F", "YX"};
    vector<string> commands = {"NES"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"#F", "YX"};
    vector<string> commands = {"E"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"########", "#......#", "#.Y....#", "#.F.#..#", "#...X..#", "#...#..#", "#......#", "########"};
    vector<string> commands = {"SSEEESSW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"########", "#......#", "#.Y....#", "#.F.#..#", "#...X..#", "#...#..#", "#......#", "########"};
    vector<string> commands = {"ESSEESSW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"##.#.#.", "..##...", "..#...X", "Y...##.", "#...#.#", "..#..F."};
    vector<string> commands = {"SSSNWSSSEWNSENENENNNNENWNEWESE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {".#....#..#", "#..###Y..#", "......##..", "......##..", ".#.#X.##.F", ".#....#..#", "...#....#.", "##.####.##", "....#....."};
    vector<string> commands = {"NEWESSSSWSSWS", "SWESNWWN", "NWNNNNWNSWNWNWSSNESSEENWS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"##....#.", "...#....", "#..#....", "...#.#.#", "....Y...", "......##", ".......#", "#FX.....", "....##..", "#.##.#.."};
    vector<string> commands = {"EESSWEWNNEENWNNEWSWSNNN", "WSS", "ESEWNWENNWSNNWSNENWWSEWNSSWSWSSWSEEEWNNSE", "SWSNNSWSWESE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"#F#.#...", ".#.X..#.", ".....#..", "..##..Y.", "#....#..", ".#.##..."};
    vector<string> commands = {"SNENSNNNNSWESWWSWSSWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {".##.......", "F#.....###", "....X###.#", "..#..##...", "##..#...#.", "#..##.#..#", "...#.##...", ".#.#.Y#...", "......#.##"};
    vector<string> commands = {"SWSSEWNEWSWWWWWWNEN", "SNENEENNEEENENEWESENENEWNNWSNESNE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"..###..", "..#...#", "...#X..", ".###..#", "###..F.", "#Y...#.", ".......", ".#....#"};
    vector<string> commands = {"EWSSNSSENEEWNEESEWWWWNWNENENNEENNW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"F.##Y", ".....", "...#.", "#.X..", "#....", "#.#.#", "..#..", "#...#", ".####"};
    vector<string> commands = {"ESSNEWWSESSWSSSSEESESENENWNNNNNSNNNEWWWSSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {".#.###..", ".....#..", "......#.", "#.....#.", "Y.#.##.#", ".##..#..", "..#.#...", "...#..##", ".....##.", ".#X#F##."};
    vector<string> commands = {"WSNSENWNNESWSSWSSSWNNNSWNNSWNSENEWSWNWEWESESW", "ENWWENNSSWSEENWNEWWWSW", "SSEEWSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {".#...#.F#.", "##.......#", "...#.##...", "..##.##..#", "....#..#.#", ".#.#..##.X", "...#...##.", "..Y..#....", ".........."};
    vector<string> commands = {"WSESWWWWWNWEWSNNEWENSNSWNW", "NWWSNEESE", "NWSNSSESESEN", "EENESSES", "SEESESEEENSESESENENN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {".#.#.#", "...#X.", "....#.", "...#..", "..#...", "..#F..", ".#..Y.", "....#."};
    vector<string> commands = {"NSEESENENNSWENNWESWSNNWNENENNNNNWEW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"..F...#..", "...X.#...", "#.#..###.", "#...#....", "#.#.....#", ".Y##.#.#."};
    vector<string> commands = {"EEESNEWWNSEWNNWWNNSSSWNNSNNSEEESWENWWEESNSSSSE", "SNNENESEEWSSNSNEWENWSNWESWSSSNWNW", "WENNSEEWESNSNNEWSWWSSWEWSWSWWEWEESS", "EENWSNWSEWEWSWWWNESSWSNSNSEWE", "WSWNNWSWNSEWWEEWSWWEEWWSWWNWSE", "NNEESSENNSNEWEEENWSENNSSSSWNWS", "NSWWWEWWESSWWWSSEEWWWENESNWNWSEESENWW", "EWSWNSWWESWSWSNEEEEWSENSENESWWSSSSWESNEWNEEWSEESWN", "NWESNWNSENSSSENNNSENNSNSNWESWSEENENEEW", "EWSESWSSSNWSSWNWSNENEWSNENWESNSWN", "SWSNSSNESNEEWNEWWNSNWWENNWNENWWEWWEWE", "ESNEESENNEWEWESNNSESSENNESWWWEWESWW", "ESSWSSNWENWWEWESNEENWWWENENWNENSSWN", "SNEWESWEESEEEESWWESNESEWS", "NWNEESNSENWSWENNEWSWWEEENSWNNWSSSSENNEEEESS", "EEWEEESWNSNESEWWSSSNSNSWNEEENEEWWENWNSWNNSEEEW", "NENSNSEWENWNNEWEWENWNSWNNWSWSSWSWNNEEESWWWEWSWN", "SWNNESEWNESENESNWSSESSSWWSWSEEENNENSEWNSNSW", "EWEWNNNWNNESNEENEESSWWNENEWWSNSNSEWEENWNES", "SEWSEEESEWWEESNNESNNWNENWSEEE", "ENWNNNNWSWSSNEWNSEWNENWSESSESSENENNNWW", "EWSWSNEEENSESENESSEENNWEESESESEWSNSNSEEWWSSEEWSNNE", "EEEEWENNESSEWESNEWSWEWESSNNNNEWENWW", "NWNNENNSWEEWEEEESENSWEESSSNEWNWNEWNWWNWSSWSWNNWNN", "EWWSNWNSNNWWWEEWWSSNWNSWESS", "NWNWWNNNWWWSNEWENENSWSEEEEWSESWSSSSENNSNSSEWWSWS", "WNENENWNSWNEWNNWSNSSSENSWNEEWE", "EEENEENNENESSSNNWSNNSNSWEEEESEEWNNNWNESSSWWENSWW", "NEWNNWNSNNNENNSNNEEWSWSEEEESSNWSSENEEEWWEWES", "SENENSNWEEENESWEWEESNNEEWNESWESWSNWW", "SSNSENSENWWNENNSWNESWWSSWWSEEWESWSNEWNSWSSW", "ESNSNSNNWWWESWEENWNWSW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 380;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"........", "##...#.#", ".##..#.#", "#....X..", "..#.#.#F", "..#.....", "...#.##.", "Y.#.##..", "....###.", "...#..#."};
    vector<string> commands = {"SENNEEESWSNWNESSWENSWWSESEWSSWW", "WEWWSNNEEWSEESWNWWSNNEEEWEEN", "EWNESNWNNNNEEWSSSSSEENSNEEWNESWN", "NWWNNWSSNSWNWESNENNSWEENWEEENNENWNEENSSWSWNENNWWN", "NWENSSNWSWSNWWEWWEESSWNESWNWSESNWWWWS", "WEENWSNENEWWEWSSNNENSENNENSEWWESSWSSEEWNWESEENN", "SEEWWWEWEWNNESSSWSSSNWSSNWSNNNSNWSWEWNNSWSWWEW", "WWWSSENWWSSEWWNWSSWSNNWWWSEWEWNEESWEESWNWWNEWEWNES", "WWESSWENWSNENESSWENNWNWSSWWWSWNWWSSEEEWNESSNWSWE", "SWWNSEWWWSWNEWWSSWWSNEESSEWSSSNESSSSNWSWENEWSW", "ESNESSWEEWWSESWNSNNENNSWNSSESS", "SSSNSNSNEEWWWNSSSSSNSWWWWEWE", "NSSENEWSWWNNWWNNSNSWEEWNNSNNSWWNNWENNSWNEEWNWEWES", "EWNESENWNSSWENWEWESENNEEWEWEWNSEESNWNEWNSWNSWNEE", "WSENSWESEWEESNWWWNWNWEWSSNEESNEWSWSWEW", "NWSWESSESSWNENESWEWSESNENEESWEWNWNNEN", "NEWNWENENSSNNESSSEWNEWSSSNESENWNEENEWSWWS", "SEESNSSSWEENSSNWWSWSSWNEEWWEWNESWNWSE", "NSSSSWSSEWSWSSEEWENSSSWENNNSESESENNES", "SWSSSNWNENNEWSNWEWNWNSNNSWNNSSE", "NSSWWWEEEEEESEWSSESWEESNWSWWSEESESEESNNWEEE", "SSNSEESWNESENNWSSWNNWENENWEWENW", "EWEWNEWEWESNWWESWNEEWNNNNWSEESWSSSEWESNNWSWSSEWESE", "ENSSSWWWESSSEENNSSWSWWENWWSSSWNE", "WWNESENSEWEEENNWEENSWENENWWW", "WSSEWSWWWWSEWNENWSSEEWSENW", "ENNNEEEWWNWSSSSSENNESWESNS", "SWSESEENWNNNESSEEWWSWWWNWEENSNEWNWNWSWWEWS", "EWENWSNNEWNSENENESNWWSEESSESNNNSNNWSESNEWNNWNNNNNW", "NSNENEWWWWNWENNEWEWSNWEWWWNNSEWWWNWEWSSSSS", "SNSNNSEENWSSESENNESWNEESESEWNSW", "SSESNWNSSWNNSESSSSSSSNWSESNSENSWS", "SSEENSSWESNSWSSEWENSWSEEESSNNWSWNESWNEEESE", "WWNNNNSN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 736;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"##.##....#", "...Y......", ".....##...", "#.#......#", "##...#.#.#", "...#......", "..#..#F...", "...#.X...."};
    vector<string> commands = {"SEESSWESNEENEEEWSESSEESSWSWSEWEESSWNSEENNNNENNWE", "EWWSWWESWSSNEEWWWSNESWWWEWESWSNNEESSWWNEEWS", "SEESWSWSEESNEWNNWESSSWESSWWWSWESNNSEWN", "NNENWWESNNESEWWWENEEWEWSWWWWSWWENEENENE", "EESNSNSNNENWEEWNNNSNWSNWENNNNEWSWEENWSW", "WNENENWSENWENNENESWESWSNNWWEENNEEESWNWWEN", "NNWSESNNSWSSSNEWNWEWENWEEESEEENEEWEEEENESEWNNNSEWN", "ENESEWESENNNWWNWSSSSNNSENNWSWNWWESSESWNE", "NNSEENNENESNWEEWNEESWEESNEEWSSSSESNNNNNSWNEE", "SSNEENNENWSWSWWWNSWWEWWSSSNWENEEWEWWENNWEWWSNSE", "WEWWSNEEESWWSSEWSNNNSWNNWEWWENEEENNSESN", "ENESNEESENSNEEWWNSWSWSSWSWESNWENENNSWS", "SWSSSESWESSWNEENNEWEWSSESEWEWWENWWWEW", "WEEEESWSNNSWWNESWEWSNNNNWSENNNESNNENENNWWNWNNSN", "SSEEEEEWWENSSWEEWESEWENEWNEEENEWNWENSNWWENNNEW", "SSWNWEENNNWWWSSNWSSNNEWEWEESNSSWNWNNNWS", "WSSWEENWWWWWWWNNWWENSNEWNWESSNWWNNSENSNWWNWW", "NWSWNNWEENWSWNSEWEEENSEWESWWNNEENNWW", "WSSNWWEWEEEWNWNNSSWSWESWWWNWWESNEENSWWNESWNEENS", "WEENWENNWSSWWEWNESNNESWSNSWSWESWNNNENWNSSWNSNNSW", "EEEWSEESWNWSESEEWNESSSNSNSWWNNSENWNENNNEE", "NSNWSSNNWWSSNWNWWWWSSESWWSWESNWEEWSSWWENSSWSWN", "NESSNSSEEENNWSENESWEWNWNEWSEWEWENSSNEWENNSWSEENESE", "ESSSNNNNNSSEWSENSSSEEWSNWWESWWSSNEWNEWNSWWNWN", "WSSNSWNWEEESNESSEEEWWEEEEWEWSNNSNEENNW", "SWSEWWNENNWWNEEEEWESNWSSESESNSEESEEWWWWSNSEW", "ENENSEWSWNWWEEENSNWENENWSNWSEWNWNSSWWSS", "WWWEENWENWNWESSNNWENSSSWWSESEWSSENEWWNNWESWSES", "WWNSSNSSWNEWWSSNNESSENENSEWEWNSNWSSSWNSNSE", "WSNWEESSSEEWNESNNESWWWESEWEENESEWESEWS", "SEEWWWWEWWNSSNNWENENWWEWNWNNNNWNWNEENSSSN", "NSSSWEWWWWEESWSWESSSEEESWSSEWNNWWSENS", "NNSSESSSNWSWEWWENNWEWNESSSSSEWSEWWSSEWNSWNNWWSN", "WEWWNSSNWWNSWESNENNENWSWENWESWNWNSNNWNWEWNSSWEWSNS", "NNEEWSSWNNWWNNNEWEEWNWSWSWESWEEESNNNSWSSNWWENS", "WNENESWESSNEWEWWNESWSEEEENEWWEWSWNWNNWNSEN", "NWSWWWNSEEWWWESEWSENWSWWSEEESNESWSNENSWWEE", "NENWNWSNNNEEWWSWNSWESWSNEESWSWEWWWNNEEW", "SEENSSEWSSESEEEWSSWNNSSSNNESEWSNSNEWWENSWSEWN", "SNNSNSEEWESWNEWEENWNEESNWWEENWNWWNNWWNN", "SWSNNWWSSESWNSSNENNWWWNSSWNEWWESEEWSEWNW", "NSESESSNSWENSNEESEWWSNSEWENESNNEENNWS", "NWSSNSSNW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 979;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"#..#.........#...X##....", "#........#..........##.#", ".#.#........#.....#.#...", "..###...#..##.##...#....", "..#.#.....#....#.#.####.", "#...##.##.##..#.....##..", ".##...#.#....#.......#.#", "....##.#..#....#....#...", "....###.##.....###...#..", "#.#.......#.#......#..#.", ".##....##.#.##.......#.#", "......###...####......#.", "..#.##.#..#.#...#...#...", ".....#.#..........#...#.", "##.#....##F#.....#.##.#.", ".##....#.......##.##.##.", "..#...#..##....#..#...Y.", "#...........#...###..###", ".....#...#..#.........#.", ".#...##..#.#...#..#.##..", "#..#...######....###.#..", "#.#.....#.......#.##....", "#..#....###....#.#..#...", "..#...#.##.##.#.##.##..#", "#....##.##..........#..#"};
    vector<string> commands = {"NWWSEWSSNWESSWES", "ESEEENSNWNNWSNSNWWNWWNNNWE", "NSNENENNSEENWWNSNNNNWWSSN", "EENEWNWESESEEESNNNSEENNEWNNESNEESSEESEEENENNNWSSW", "NWNNWSNWSWSSSSEEWSSWSESWWNNWWENSNNWWSSWWNNE", "NWEWNEWSNEN", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "WSSSEESSEEEEENNSWEWWWENSENWNSEENES", "NNSNESESWNESNENSEESESWSENNESESNESNESEEW", "ESNENEENWSNS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"#..#...###.......#.##..#..#..", "...##.#....#.##...#.####....#", ".#..##..#...##..#.....#.#.##.", "##.##...#...#....##.......#..", "##...#.#.#..##.....##.#..#...", "###..###....#.##.#...#..#...#", ".###..##..#.##....#.#.....##.", "........#.#.###..#.....#.#...", "..........F......#.#..#......", "...#...####..##.....##.#.#.##", "....#..#.##.##....#..........", ".#..#.#..#...#.#..#..#..##...", ".#...#........#....#.....##..", "...##.#.....#.##.#.#..X.###.#", "#.#...#.......#.#........##.#", "#.......#.....###..##.#......", "###......###..####.##.##....#", "......#....##..#..##.#####.##", "...#...##.###..#.#.......##..", ".....#.....##...#.###.....#.#", ".#.###.####..#.....#.#.###..#", "..#..##...###....#.##..#..##.", ".....#.#....##.....#..#...#..", "##.##....#..#....#.#.###..###", "###.....######..#..........#.", "#...#####.....#....###.##...#", "#....#..#..#.###...#.#.......", "....####..#.##....#...##..#.#", "..#........#.###...###....###", "..#....#.#.#.....#...#.##Y#.."};
    vector<string> commands = {"WNWNSWNSNENNNSNNNNNW", "SWEWWNWESWWEWWWWWNWWNNEWSWSNENESWNWEEE", "WWESWWEWWWEEWEEENEWENENN", "ESNNWNNNWNWWWWSEESNESWNWSSNNNN", "ESENNWEEWWENNWWSSSSWNEEWWEWWNENSWWESNSWNSN", "EWEWENEWSNNSNWNNNSNEEEENESWSNESSWWNSENESWNSSE", "NENSWWNWEWWESSENWEWWSEWNNSEWNWNNWNN", "NWWSWSNNWSENNNENSNE", "ESENNNSWENNEEWNSNESEWWSWSSEWWSNNNWWENWESN", "NESSEWWWNSEEEEESWEWNENSSSEWSNSSSEEWNNSWWENEWE", "NENWWSEENWSWESNNSNEEESWENSSNWNNNWWENENNWWW", "NEWWSWSWENWENSSSSWSWENWEEENNNSWEESSEEE", "NWSESESSESEESNEENNSNWWSSSSSWSWSNSSSWSEEWWS", "NSWSWEENWWEWENNWWWEWWEEWEWSENSEWWWWNESSESWWNWN", "SESSNSWSESWNSWSWSSEWSNWEEWSNENW", "WEEWNSWWNSSNEWWNWENEEWWSWSWWNNWENEWSSSSEEWWEWS", "NNWESSNSESWESSENWESN", "EWSNWWSNNENWSE", "WNNEESSSSENWNESNNESSSS", "WWNWNEESWWSNSNNNNEWSEESNNW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"...###.#..#.#.#.......##.", "...#..#.Y#.#....##.#...#.", "....#..#...#......#..###.", "...#...#...#...###..####.", "..#...#.........#....##.#", "......#.#.###.##...##.###", ".##....#.#.#....#...##...", ".#.....#.##.#...##.#.....", ".#...#.##.....#..........", "#..#....#.....#.#........", "#.##...#.#...####.####...", ".F..#......#..#.##.##.#..", "#..#.#..####..........#..", "#..#...............#.....", "X#..###.#...##..#.#.#....", "..##.........#...#..#.##.", "......##.#.....###..##.#.", "..#.........#....#.....##", ".#####..#.....#......#..#", "...#..........##.##..#...", "##..#.#.##.#.#.##....###.", ".#...#..#.##.####.#.#....", "...............#.#..#.#..", "..####.#.#.###..#..####..", "............####...#.##..", ".......#..#.....#.#######", ".#.###.........#....#....", "....#.......#.#.........."};
    vector<string> commands = {"SNWENSENENSEEENNENNESSNNSENNEESESSESWSWNNENEE", "SEEEEEEEWNWSWNSSWSSNWNNSSWSEENSSSNN", "NEENEEENNE", "ESSNEESEEWNENENSNNWSNESEENSNNESSWSENWS", "NSWWWW", "SWEWNWWENEWWNSWN", "SESWENNSENSWWWEWESSEWWEWEWSSSNSSSSEEWWE", "ENESNSESNWWNWWEWESWWWNSWWSWWEWWSSEEWWNN", "NSNNWNWSEWSWWNSSSSN", "EWWNWNSWSNNSWWENNN", "NWWWWSWNWWWWWNWNESWSSWWNE", "EENEWWNWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"...##.....#.#...#.#.##..", "...#.#....###.#..Y#...#.", "..##.#.#..#.#...........", "..##..##.#..###.........", "#..#........##..#.......", "...#..............#..##.", "..#..#....###.#....#.#..", "#.........##.#..#.......", "#.....##....#.#..#..#...", ".#.##..###..#..#...#.#..", "..#.#.....#...#.#####...", "..#...##..#..#..##..#.#.", "....##...##.##..##......", "#...#.#.......####......", ".....##.......#.#..##.#.", ".#.#..............####..", "##.#.#....####.#..#....#", "........#.#..##..###....", ".#..#...#....#.....##...", "..#........##.#....#....", "###.....#.#.#...#.#X##F#", "#....##.#..###....#.####", "##.#.##.....#...##...#..", "#..##...#...###.......#."};
    vector<string> commands = {"NENWWNWSNENENNWSWNNNESWEENWNESWWENENWWEENEEEWWS", "WSSSSWWWNWNNWNWSEENWWWWWWNWWWWWWSSEEESSSESE", "SWNEWWWSWWSSEESENSNEWSSNWNWSSSS", "WNEWSSSESWSWSESESNNWSEESWNNNSESSWWSSESSSESESW", "ENSWNNNWNNWSSNWNEESEENW", "ESEWEESWWWWESSESEEEES", "WNESWSESSSSESWESWEWNEWSSEESEEEENENNWE", "NNN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {".....#..........##..#...", "..#...#.###..#.#..#.#...", "##...#.#.####..#......##", "##....X.#.##..#....#.#..", "##.#..##..###..#####.#.#", "###......#.###....##.F..", "#...#.#.........##.....#", "..##...###..###.....#.##", "..#..#...#.##.#..#....#.", "#.#....##.....###.##...#", "##..#..#.#..##......#...", ".#...........#...#......", "#...#.#.#.#.###.#.#..#..", "#.#...#......#...#..#...", ".##..#.##..........#####", "...#......##.#....######", ".....#.#.....#..#.#.#...", "#...#..##........#..##..", "...#.......#..#.#..##.##", "..##......##..#...###.#.", "#..####...#.#......#.#..", "....#...#.....#..#...Y#.", "##.##.#....#.....#...#..", ".###.#.#.#####.#....##..", "#...#..#.###..#.#..#.#..", "#..#.#.#.#...#...#.#...#"};
    vector<string> commands = {"WWEWWWEWSEWNSEEWWWSWSNWWWSWEWSEN", "WSEWWENSWEWNWSSWNSNSWNEWS", "NWSNESSSWSEWSSNE", "EWNNNENSNEEENSNESNSNSSNESNWSESSWWSNNNS", "WESNWEEEWSEWNWESWWNEWWWNSSWSEESEESESWWWSW", "ENENSNWWEWNEEWESENENWNENSWWWSENENWWEE", "SNSENENNENEWNWWSESWSWESWSNSSWNNWSWWSWNEEWNWSN", "ESEEENENESENSWWNWWEESWWWNWNSNNS", "NNSNWSSSSSSESWENNEWWSSSWWNEWSWWSWNWSWWWNWWWSSSS", "ENSWNSNSWSNNEWEESENWNNWE", "WESWWSNSNEEWNENNNWNNENWWNSSWEWWNWWSSNWS", "SNSWEWNEWNEWSNESESEEESNEWSEWSW", "WEWEWWNESNNWSSNESWWSSEWWSWNWE", "NNWWWNWEWWNSEENWNENWEEWNEWWSENNNWNSNWEWNNEWEENWW", "WSSSWSWNENNWNNWENSWSEEEENSWNNS", "WNNSSNWEEENNSNESNWWNEENSN", "NWEEWENENENEEEESW", "NESNEWWNNEEWSESNNESENENSWNENWESNENNENENSWWNSSSNE", "NWSENSNWSNNENN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {".#......##.####.....#..#....##", ".#......#.###...#....#.#......", ".#.#..#...#...#..##.....##.###", ".###.##...#.##.....#.#.##...##", "....#..##.#..##.#.#.#..#.##...", "....#...####..#..#.##..#..#...", "......##....#..........#...#..", ".#.#....#.#..#.#...#..#.Y.....", ".###.#....##...#......#.#.#.#.", "X#.#.#.#.......#.##.#...###.##", ".........#........#.##...#...#", "#.#.....#...##.#....#.#.#.#...", "#......#...###.##.......####.#", ".##....#..........##..#.#..#.#", "##.#.#.#.##.#.....#..###..#.#.", ".#.#..#..#..#..#..#...###.##.#", "..#.#.#.#..#..........##.....#", "......#F.#..#..##...##....#.#.", "..##..##..##.#.###....#.....##", "#..#...###....#....#..####..#.", ".#...#..........#........#.#.#", "##.......#....#.#..#.###...#..", "##.#....#...####...#.###...##.", "...#....#...###.#...###.###..#", "..##...#..#...#..#...#.#..##..", "..#.#....##.#..#...#.#........", "...#....###....#.#.##.#.#.##.#"};
    vector<string> commands = {"WESEWWWSEEWENEEEENNEW", "NENWSNNNNNSWNSEWSWEENNE", "SNNENESSSSENNSEWEW", "NNWNNSWNEWWNSESWWWWEWSENNESWNWESSSSNSEE", "SSNNSEWSNNWSNNSNS", "SENWENWWNNWSWENNWWSENNEES", "SWNESEEESWNWNWENNWSWWNNWNNWWWWWSENNNNSEWS", "SNNESWNWSSSNEEWSENWEWWSSES", "WEESWNSSNWSEWNWWWWNENEESNSENWNESWWSSSEEWNSES", "NSSSNNSSWENWWSWWWNNNNWWESNWWNNSWNNESNNEN", "EENWWEENSEESEWNNSSEEWESSSSNESSSEE", "WWNEWENSNSENEESWSSWEWNNWSWW", "SSNNENEWNWSNNWSESNWSWNWENSS", "EWESSSSSESNWWNSNWESNEENSWEEESNWSEWSWNSEESSSS", "WSSSSEESSNNWEWSWWWSWNEWWESENSNNNSSWNWSEWWESNN", "WWSWSNWWEWESNWESEESEEWSWWNSWNWSESWWSSWWSW", "WWSEWWEWSSNSNWWWSE", "WWWEEWSWSSNWSSWESWWENWNSNEWS", "NNNSSSWWNNNWSENEEESEWNSWWE", "NEESNENWNNEEWWSEEWWNSNSSNEWWENNWSESENENWNNEN", "NSWSNWNEWWSSNWE", "WSESWNSENWWSENNENWNWESNESEWWWWNNSSEWSWEEWNN", "NENWNNNNWWWNSNSWSWWWWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 411;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"#....#..#...#..##.##.#......##", ".#...#.#..##.......#...#.#....", ".#..#.#...#.###.#.#...#..##.#.", ".##......##..##..#..#......#..", "......##.....#..###..#.#...#..", "..###......###.##..#.#........", "##.......#.#....#.......##....", "......#.....#....#.#..#......#", "....#.#.##..#.#.##...##...#...", ".....#...X###....##.#....#..#.", "##.....#F......#..##......###.", "...####.#....#....#.#......#.#", ".#.###.##....##.....##.##..##.", "...#....#.....#.......#.Y...##", "##..#.#..##.#...###.#.#.#..#.#", "......##.##......#....#..##.#.", "###..#.##..#...#.#....#.#.....", ".#.#...#..###.####..#..##..#.#", ".##.##........#..#...........#", "....#.#.##..........#...###...", "..#.#...###.......#..#...#.##.", ".##.#..#....##...#...#...#.#.#", "#.##.#.#..#...#.....#.....#..#", ".##...###.#..###..##..#...##.#", "..#.........#....#.###....#.#.", ".#......####..#..#.#.....#...."};
    vector<string> commands = {"SENESSNNEEWNNEWSSESSNEWSNWESEWNSENNNENWSNSSESSWSES", "WSENNESEENSWSSSWWNSWSSWENNSSWSSWNSESWWNSWNNNNNW", "SEWNEEEWESNWWNWNWWW", "WNWNWNWWNWNNWWSWNWSWWNS", "NESENEWEEEENEEES"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"...#.....##...###...#....#", ".###...##........##...#...", "..#..#....#........#.#....", "#..##.#.##..#..#........#.", "..####.....#.#..#........#", "...#......#..#..#.#....###", "#.#.#...#..###.##.#..##.##", "....#####..#.#.##.###.#...", ".#..#.........#.##.#.#..#.", "#...#.....#.............##", ".#.##...........#.....#...", "##.#.##...##..#.##..#...#.", ".##...#...####.#.....#....", ".....#..###.####......#..#", "##........#....#.....#....", "#.......#.#.#..#.#..X.#...", "##.#...#..##....#.#.###..#", "..#.#..#...##.#.#.#.##....", "##...#.#...###.#.#...#..##", "#.#...##...##..###........", "...##.....##...#..#..##...", "###..##......#.##...##....", ".....##.##.Y.#.....##.#...", "#......###..#..#.#.......#", "#...###..#.#..#.....#.#...", "...#.....##..F##.....#....", "......#.......##..#.....##"};
    vector<string> commands = {"WSNWEEEWNWNNNEESEWWNSWWENWEEWNWEWWENWSESSENESEWES", "SSNWWNEENNNEENSEWNWSSEEWNSSSNEENWEEENEEEENWWSWEENE", "EENWNNWSSWNEWSWESNSNENWENNWSSSNWNENW", "SNWNSENNESNWSSSWESNESWNEEENWSEEWNENS", "WENSWEEWWNEW", "WWEEESSSWSESENWEWS", "SESSWWSEWEWNSSEN", "NNEWSSEEWESENESENESNSW", "EWNESNENNSNWENWENSSNSWSNEWES", "WWNWSENSNNNSSW", "NENNNWNWWNNSWEWSEESWSEWEEWNNESSSSNWWSWNW", "NEEENEWEEWSEEEESEENSNNEENSNSNSEWSS", "ESENWWWNWNSWSEWSNSEWEWNEESNEENESWNSNWEEWWNW", "SNNEWSWESNNWSSNWSSEESSNENEWSSNSENNEEWWESNN", "SSSSNNNNNNWESSNNNN", "WNENNNEWSNEESEWS", "SSNWSNSSWENSEENNS", "EESNNSSSSWSSEENWSWWWESEWNSSSNNEWSEEWSWNEESWSNNE", "SEWSEWESNWEWWNSSSNSSW", "EEWEEENSEE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"..#......F......##..#.#..", "##...#.....#.#....X..#...", "#..#....Y...........##...", "....#..#...#........#....", ".##...#..#.#..#...#.#.#..", "#.....#.......#....##.#..", "#.........###.......#.##.", "#........##.#.##..#......", "#...#...#..#.##.#..#..##.", "#.......##.#............#", "....#.#..........#..#.#..", "..#.##..##...#...#.#..#..", "...#...#..#........#..##.", ".##..#..#..#.#......#...#", ".###...#...#........#.#..", "..#....#.....#..##.#....#", "..#.#...#...#..#......#.#", ".#....#..#.#...#.##......", "...#####...#.....#.....##", ".#.....###..#######..#...", "...##.....#..#...#.#.###.", ".....##..#...........#.#.", "....#..#.#......##.###.#.", "..#.......##.#.....#.....", "..#.#..#####..#...#..##.#", ".#....####.#..#..#.####..", ".#..#.......#......#.#.##", "#.#..####.#..#.###...###.", "##..#....#.#.......#..#.."};
    vector<string> commands = {"WNEENENSEEEESWWWWWNWESSWESWWESEE", "NSNWWEWNEESWENNWSWSNSESESSSWESSWWNNSSNWEEESWSWW", "NWENNSNNNNWWNENEEWWESSNS", "NNEWEWNWWWSEWWWWSSESWENSNESEENNSSWESWWSSSEN", "WNNWWENNEWSWSSN", "WSWWSESEWEWEEWSWESNW", "WSEWWWSWEENEWWWSWNWSWS", "NSWSENWSESSEEEWWSSWSNESSEWSEW", "SESESSSEEWWSSENSWSWEWNEWESEESEENNSNESWNE", "SWNSNWNSENENWNSEENWENNNWNSWNNSSWNNSEESEE", "EESEWWEENSNSSNEWNSNWNNE", "EWWEWSNWESEENSNNWENSSSNSSSWE", "SSENSNEWNSENWSSSENWNEEENEWEEEENNEENWNNN", "NEWNNSEESEENNSWEENSEWWNWN", "NEESNNEWENSSESESNNSEENEN", "SWWENWNWEEWNNEENNENNNWNNWE", "NSWSEWSSSEWWNEWSWN", "WNNSEENSSNWWSWSWWWEEWW", "WNENNENNSNSNSNNSSNW", "ESWNSWSNEENEEWWNNNESWNNEENNNNSENSE", "EEESSESSEENSESNN", "WWENWENNWEWSSNSNNEWWSNSENNSN", "ESEEEWEWSNWWEWNWESSSSWNNNSEW", "WNESNESSWWNSEWEEWNWNSSSSENEWNEEWENESWNNENNSNE", "EENNNESSSWWESSEEENENNWENSSESW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 378;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"...#......###..#..#.##....", "#............#..####...##.", "...#F.............#..#.#..", ".#.Y...#.#...#.........##.", ".#.....#.#........####....", ".##..#..###....##.........", "###..#.#....#.#..####.#.#.", "#...#..##.#.#.#..##.....##", "....#.##..#X.......###...#", "#...#....#....#..#....#...", ".......########...#.#...##", ".#..#.##..#..##..#....#...", ".....##.#.##.#......#..#.#", "#..##...##.####.#.........", "#.#..#..#.....#...#.####..", "..##..#.......##..##.....#", "..#..#.##..##.##..#.###.#.", "....#.#.....#.#...#.#...#.", ".#.....##.##.##..#.#......", ".....#.##.....#...##.#....", "..###.#.#.#........##..#..", "........###.....#.....#..#"};
    vector<string> commands = {"SWSESEEEWESSWNWNWSEEWWEWEWWNSSSNSSWESESNSWNN", "SWENESWSSNNEWENWNNSNSESSEWWEWNNSSNNSSSSENNSNEW", "ENWWNNNNNSEEWEWSNEWNSNENSNNN", "SEESENNSENWEWNENSSEEWWSSNEE", "NSWWNWSESEWENSNWW", "EEEWSNSNSWWWEWENWWSSSSWSWEEEEWWSWSES", "EESWWWWWNSWEEWWSNSW", "SSWNEWNENEEEN", "WWESSWSENEWNEWEWSEWSWNSEWN", "NSNNWENNNWSWNEEESESESNNSS", "NWSSNSWNNSSSNWSEENESENWESESSESSNSENENENEEWWNW", "EEWSSEWNNEENESWSWSWEWNESNEWESSWN", "ENNNEWSWWSWNEESSWEWWESEENNWWWEENEESWENSEEWNNNEW", "NNSWENNWNNWNNNWEWSWNESWSWWSEENNSNSSNENSESW", "SNEESSSWESENWSSWNESWNENENWEEWWWSEESWE", "SNEWWNSSEWEWESNNNWSWNWEWSSESEESSNW", "WWSWNESENSNNWWSNNESSNWSNESSN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 298;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"#..#.#.#.##.#......##..##...", "#.......#.#.#.##......#..#..", ".#...#...............#....##", ".#........##.....##...#...#.", "##..##...#.#.#.....##...#..#", ".#.#..#.#..#....##.....##...", "##....#.........##.#..#.#...", "#..##....#..##...##....#..##", "#...######...#...#######....", "....#..F..#...####........#.", ".###...#......##.#.......#..", "#.#..#.##..#.#####.##...#.#.", "..#......###...#.....#......", "#...##...#....#......#...#..", ".....#..........#...#..#....", "....#.......#......#.#..#Y..", "####...#.#.#...#...#..#...#.", "....#.#..#.#.#......#..##..#", "#.##.#..#....##.##....#....#", "#.#...#.#.#...#....#.....###", "..######X...##..####.##.#.#.", ".......#.#....##.......##..#", ".#.##..#..............#.#..."};
    vector<string> commands = {"ESWWSESNNWENNSSNWSNWWENEE", "SWEENWSNWNNWNSNEEN", "SESSSNEWSWNNWWNWSEENSWS", "ESNWWSNWNEENSNNES", "SWNEEWNNWWEWNWWNSNNNWEN", "ESSSWEENENSENESESENNNWNWNNNWEESENW", "NWESWSEESSEE", "WWWNSESNNWNSNNWENWWSN", "WNEEWESSWNEESSENEEEWNESESNNSS", "SSEWSSWSESEWSNSNWSWSNSEESWSWSNESNSS", "NWSNEWESWSNSSNSNESSENENWENNWWEWNWSESSEWSSSNW", "WSSESSESSSWWWWSWWSWWNWSWSNENSWEESEEWSENWEWSSSWS", "WNWSWWSESWSSEWWNSEWSEWEWSESWWNWWSWWWWWWW", "WNNWEENSWWNE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {".#..#........#....##....###..", ".#....##.#.....##.#.....#....", ".#.....#....#.##...........#.", "...##.##.Y#.##............#..", "...##.##.............#.#..#.#", "..##.####.####...##....#.###.", "............#..#..#.#.....##.", "......#...#.#..#.#.....#.#...", ".....##.....#...#....##...##.", ".###........#...#..#.###..#..", "..##.###..#..##.#.........#..", "##............#.#........##..", "...#.###..#.#.......#...#....", "#.#.###..#....##.#...#...#...", ".......#.........####..##....", "..#.#.....##.....#....#....##", "......#...#.##..##...###..#..", "....##.#...#X....#.##........", "#.#...#...#....#..#.#.##.###.", "....#.#...##....#..#..#..##.#", "..#...#......#....###..###.##", "#.#.........#.#.#....##.....#", "..##.....#........#..#....##.", "##....###..........#..#.#....", "#..#F#.##...#.........#......"};
    vector<string> commands = {"SNNENENNWSNSNENNSWW", "SWEESEENEEWSENESNEENESSSWES", "SENSENNWESSWNEWWNNSENNSNNWESNWSEWEWNNNWNN", "WWNNNSESNENSEEEN", "SWWWEWWNSWSEENNS", "ENESWNENNEEWESNWWWSSESEENEWEWWSSWENENNNWSE", "SNSNWWSWWNEEWEWNN", "ENNNNNEWSWNSWEWNNSWWENWSSNSE", "SWEEEWNNENNEENENWNEEENENSSESEESESEWESSESS", "EEWSSSEEENNNEENESSEENWNWEWNESEENNNW", "ESEWNSWSSEEWWNWSWENWWWSENEENNSNWSWNEEE", "NNENNENNWNEWNNWSSEWENSEEEEE", "SNWENWSNESEENEWNNWWNNEWSSENSEN", "NENSEWESSSNEEWESWNNWSSNE", "SNSENNSNENSSSSSWWWEESWS", "EWWWWWEENESNNNENSESWWSSSWEWSSESEN", "EWNENWNNSEWSWSEWSWNWNSEENNSSNNEWESSWSWWSW", "SWWSSSNWESSNSSESWSSSSSSWNEWNNNNSSWSEESWEENSN", "EEESWESNENESWEENENESNNNSWWSNSWSSWENN", "ENNWSNWSWWENWESSSENNENWNW", "EENSEENNSNWWWSEEWWSWEWEWENNNWWESEENWNEWESWWWSSNE", "WWESWENNSNSNSSEENNSWNEWSN", "NEWWWSNWWEWNSWNNSSENEWWWWEESW", "NNSSNNNESWNNW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 378;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".....#...###......#####....", "#...##.........#...#...#...", "....#....###.......##..#..#", "###.......#...##......#...#", "..........#.##..##...##.##.", "#....####.....#..#...###...", ".##.##.#.###...#..###.#.#..", ".#....#..#Y...##.#......#.#", ".....#....#.....##....##...", ".#...#..#....#....#...#....", ".#......###....#..#....##..", "##......#...##..#....#.#..#", ".#.#....##......#.#.#.#.#.#", "..#....#....#..##.....#..#.", ".##....#..#.....######..##.", ".#....##...#....##.#..#.#.#", "..#.##.#..#.....##...###...", "##.#..#.....###.#.##..#.#..", ".....#.......#.#..#...#..#.", ".....#..#..#..###.....#.##.", "..#...........#.#...#....##", "F.......#....#........#....", "...###..#....#.....#X##..#.", ".......#.....#...##.....#..", "#.#........#.....#......#..", "...#.#...#.#.....#.###..#..", "#...#.##........###......##", "..#.##.....#.##...##......#", "#.#.##..#..#.#.#..##.....#.", "..#........#####.##......##"};
    vector<string> commands = {"ENNSEESWEENSNSESWEWEWSWNSSN", "WENNWNSNSENNSEWEWNNSWSSSSNWSNWEWNWNW", "EENESWNESWENWWSSWWWSNEWESWES", "SWESSSSEEEWESSWSSWEEEEE", "WSWNNWNWNEWWENESWENEWEWSWWNNEN", "NSWWEEWNENENWWNNENE", "WWWEWEWWSNWWNWNNENNNNNSNEWNEENSSESNENE", "NNWSNNNWWWESNEWSSESWNNNESWNSESENNWENWEENEE", "WNWNNENWNENNESNEESEENSSNENNEESEWNESEESSWWESSE", "WSWEWWEEEESSNESEWSNWWSSSWSWEESWESSWSSSSWEWWWSEEES", "SSNWWNNWSEEWWSNWSSWESEEWSSWEWSWSSSW", "NNWSWEEWWWSWSSNEWWEWNEEWSSSWSSSWWWWWSENSNSE", "ENENSWWEWWENWEEWS", "WSSEENEWEWWWNWENESEWEESNSENWNNWSESNSWNSWWSNEE", "SNWWEWESSWWSWNSEEWWNSSSWNNWSSEESSEENEEWSWEEEWESS", "WNNEWESWWSESWWEWSS", "WEWSWNNEESNEEEEWWSNSNSNESEEWENNEENWWN", "EEWSWWWWNSESWESENSENEEWN", "NENWSWESESENNSNWSENEEEEENE", "ENEEEENNNNNSENSEWWSES", "SNNESENWNNNWSSNEEWESEWNSNSNNNEEENS", "WSSESESWNEENEWWWESEWNENEENWEWNWNWNNNNWNEES", "SNEWSWEENNEENENEENSSN", "SSNSSEEENEWENNSNEEWNESSEWNNESNESNESWWSNSSWNEEW", "ESNSSWSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"#.....##.........#...#....#.", "...#......#.#...#..#.......#", "......#.......#...#...#.....", "###.#...........####.#.#..#.", "....#...#.###.....##.##..#..", ".#..#.##..#.....#..##...#..#", ".#.####...#.#...Y..#.......#", "...#.#..#.#..#.#.###..#.....", "#.#........#.......#.#.....#", ".....#...##...##..#.###.#.##", "#....#...###.....#....#..#.#", "#.#..##...#...###.##....#.##", "..###........#...#....#..##.", "###.##.#..###.#....#.#.#..#.", "..#...#...##.......#....#..#", "#.#.##.###...#.#..#.##..#.#.", "....#.#...#.#.............#.", ".#.#......#...##.....#......", "###....#.#.####..#.##.....#.", ".....#..#.#.#.##..##..#..#.#", "....###.....#.......#...##..", ".....#..##.##..##...........", "...F#.##.#.##..##.#..#....##", "...#.##.#............#..#..#", "......#....##..#..#.#......#", "###.#...#..##.......#..#.##.", "......##.X......#......#....", ".....#######.#.#####.####...", "..#.##.##...#.....##.#.....#", "#.........###..#.#.#....####"};
    vector<string> commands = {"WWWSWSWENNENNNEEEESWENE", "ESSESEEENWNNWW", "NENWEEWNEEESWNWSESSEEEWESNEWWNSNNNSWS", "SSNNNNEWWEWWNNWSNNESSENEWWNSEESESWSWNENSWSES", "ESSWWNENEWWWNNWSESSWNSSWWNSSENN", "SEESWNWWWWS", "SWESEEESSSSESNE", "EESSNSEENNSNESNWENSSNSESSWESNWSEWNWSSSESSSWSENENWN", "NNWWNNNENWSENNENEWWWWWSEWSWNNNSEW", "WSEEWNWEWNN", "WSSSSNSNSSEEWNEESNWSSNWNENNWSNNNWSNW", "EWWWSENEEESNSSENNNEEWNSWEWWWSWNNWENNNSESNSWWWWEE", "SWWWESESEWSEEESNSEEWEWNWSEENNNNWWESWNEESWWNWS", "SSWSNEEENNN", "SNSWNNNWSNSNWSSWWENNENWSWESEWWESW", "SSNSNWEESWWSWNWNWWNWWWSSSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"..#.#....#..#.#..###.#...#", ".....##..#....#..#.#.###..", "#...##..##.#....##..#.....", "#.#......###........#..#..", "....#.#..#.#.....#.##..##.", "#.##..##...#..#..###...#.#", ".#.#..###.#........#..#..#", "##.X.#....##......#.###...", "....#.....#....##.#..#..#.", "#......#....#....###..####", "...#.#.#.##..#..F.##....#.", "####...#....###.#....#....", "..#....##....#......#.....", "..###.#...##..#.##.#.....#", "#.#....##...#....##.#....#", "..#...#.#...#....#.#..#.#.", ".#...............#.##.....", ".#.#....#..#....###..#.#..", "#...#.#.#..#.#...###.##.#.", "....#...#.#..#...#.#..#..#", ".#.#.#...#..#.......##.#.#", "....#..##########.#.....#.", "#...###....#.##.##.......#", "#...#..#....#..#.#.#....##", "##...#.#......#.#...##...#", "......#.#.###...##.#...##.", ".......Y...#.#..###....##.", "#..##.#..#......##.#...#..", ".##..#...######........#.#", "#..#..#....#.#..##.#...###"};
    vector<string> commands = {"WWEWSEEWSSEWENWWEWNSSW", "ENWSESSSWENSWEW", "WEWNSEWNNNNNEWSSEWEWSWWN", "NNWWEWSNEWWNWWNNWNWEENNEWENWSSES", "SWEWESWSNWSSSSWSNESNSEEN", "NWNSSESWWNSEEWWNNSEWNENNNWSNNNEENSWEWEWNEEWEEENNWS", "WWSNWNNSEEWNNWWSNEEWEWNSSSEESEESWNESWSEEEESNSNS", "SEEEEWESSSEWESEWEWSSWEWEEENENNEEWSWWWSENENNESNNSW", "NWSNSSSNEWESEEEWNSSNNNWESWEEW", "NWESSESEWSESSEWEN", "WWWEWWNSSEENSSWESSWWNWWWEWSWWNNNSEESWSNEENSENEW", "WEWEEWEWWWWNESSSNWWNEESWWWEEWWN", "ESNEWNEEWWNENNSWENWNWEEENWSSSWWNNNNSWEENNENWSENWWW", "NNSWWNWWNNWWWWSWWSWNESE", "NWNWESWNESSWWNNWWNWSESSWEEWSENWWWNNW", "WEWSWEWSESNWSNSWNWWNWNNWSENNW", "SNSNWNEWNNESSNEEWNENNNNWNWEWE", "NNEEWNNNWWEWNSWSEEEESNEWW", "NNEWNSWWSWNNNSNNWNNNENNNEWESENWNWE", "WEENENNNEESSWNNEEWNWNSNSSSENNWEW", "NSSNWSSNWNWNWWNNNNWNNWENNNEWWSWSSW", "SWNEWSNWSSEWESSSSSWWWESNWSNSWWSSSEW", "SNSSWEENNSSESWWNWS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 492;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {".#.###...##..#.#......##....#.", ".##...##.##...#.....###......#", ".#....#.######..#.#...#.###.##", ".....#.#.#.#...#..#.#.#..#....", "###.#.##...#...#....##.##.....", "#.##....##..####..#...........", ".....#.#..##.......#...#..#.#.", ".#...#..##.#....#...#........#", "#....##.#.#.#...##...#.#..#...", "..##...#..............###..##.", "##...#.##.#..##.#......##...#.", "...#.#......#..#...#....#.....", "##........#....##.##.....#...#", ".F.....#..#..#...###.#.##..#..", "###..#.#.........#....#.......", "#......#.##..###.#.#....#.....", "#.##....#.....#...#.###...#...", "#.......##...#..#.#..#.##.####", "...###.#.#........#..#.#.#.#..", "#.X.....##.#..#...##..#.##.##.", "#...#..#...#..........##...#.#", "...#........##..#.###..###..#.", "#.....##.....#...#.#####......", ".....#..##...#..#...###.#.Y#.#"};
    vector<string> commands = {"NENESENWESSNESEWSSNWEWSEESWSWEWNENNSWW", "SSNWNSWEWWNWEENWSNEWSWSENEES", "WEWEESEEESESWSWWENNNWSSEWWSNSESNWNNNE", "NNENNEWNEWSWENNSWNNNSENNSSNEEEWNNSESEWSENEENEEN", "EWSWWSEESWEWEENEENNSENSNSNWWN", "SWSNWESWSESWNEWENNNSNNESSSNESESNWEEEESSWSWESSS", "EEEEENSSNNSEESSNSNEENEEEEEEWSESESSWWESE", "WEESEEESSSSWSSEESWESSSSEWS", "NWNWWWNWNNEWWWWS", "SNNEENENEWESWSEWSNNWSNW", "SSWNWNNWNWNNNWSSSEWESSWEWSSWSWENWNESW", "SNWSEESSSNSWNWENNSWNNSWWNNWSE", "SNEESESSWEEWESSSSWNSWSEWESWNNSSEEESEE", "WWSNNNSNWENNSWWNSWSEEWSSWSSWEEENEN", "WNEWWEESSWWESSNES", "SEWNSSNWNNEEWSSSEEWSWSESEWNSNEWNNSNWWSNESNSSWSNWW", "NSNSNSNSENNSEWEEEWSWNENENNEWNWWNWSNE", "SEEEEENNSWEENNEWSWWNESWWENESSNSESW", "EEWEWWSNNWNNWENNWWNNEEENNSEENNSSNNWSEENEEESENSS", "ENWNNWSNNEESWWNSEEWWWSWWW", "SNWSWNESNNSEEENSEWSNSWWEESWSNWWSN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"#..#.##....#.#..##.......##..", "#.....#.#...#...#.....#.##...", ".##.#.####.#.....#...####....", "##.##.#.###.###.#.#.F.....#.#", "#.#........#...##.#.#.....###", "#.#.Y....#..##.....#.##.#....", ".....##..##.#.......#........", "..#...#.#.#...#.......#.##..#", ".##.#.##..#...#.##..#..##.#..", "....#.#..#..#.#......##......", "#..##.#.....#..##.#.#....##..", ".....##...#...#..##.#..#....#", "..#.####..#.....#..#..#..#..#", "..#.#..#......#...#.#..#...##", "#.#....##......#...#..#.#....", "..#...#....###.#........##.##", "#.#.#.......#......#.#...##..", ".#..#.##.#....#.....#.##..#.#", "...##...#........#...#.##.###", "#....#...#.#..#...#..#..#.##.", "...#.......#####..#...##...#.", "##.#.#..#.#...#..........#..#", "..#...#...###..##.#..#.###..#", "##..#.#...#.....##.##.#...X##", ".#.#...###...##...#.....#####", "..#.##.#..#.#.##.#...##...##."};
    vector<string> commands = {"SSEESWEESEWESNSNNSESENEEENSWWNEEEEEENWNWESEENNWNSN", "NSENNEESNNWSNNESWEWSSEEENESSSWSSWEWNWNESSSWNNEEEN", "EENWNWSESSEENNNWWSSNEWWSEEWSEENNEEWNWWNEWENWWESWE", "SEWSEWENSEWWSWNWSSSSSWESWEEWWSSWNSWWSSEWWSENWWNW", "ENNEWNNWENNSNWSSSNWSESSSNEWSSNSSWWNSENNSWEWNESEWW", "NNSENSNEWSNSSWEEENENNWSESENNNWENNNNNNNEEESENWSEN", "NSSNWSESESWNSWENWEWESNSNESWNENWWWWSSNSENENSWNENWN", "WWESSSWESESESNNWNWNWNNNNSNSNWWSSESESSWENENNSWENSNW", "NEESSESNENEEWWESNNNNSENNSWSWSEWSSSWEESWSENWENWSSS", "ESWWEEWEENSEWNSESWSENSWNNSESENWWNSESNNSEESNSEEEENS", "WWNEWSNSNNEWNNSNESESESWNSEWSENNEESEWSSSNSNNNSNNE", "WEWWNSWWNNWNSWSSEEWNWENNNNENWNWNSENSEESEESNENENSES", "EESNWESEESWSSNWSEWNWENSWSWSEENSSNNSEEWNWWNNNWNNWS", "NNNWNENWNESSSWSNEEWEWWWWNWNWNSSNWWSENEWSENEWESEN", "SESWSEWENWWWWSNWNEWWWNNSEESNSWEENSWWEWNSNWEEWNNN", "WSEENSNSWSENEESWSENSEEEWSSNEWESWSNSEWWWESWSEESSS", "ESNWSWEWWWSSNNWNENNNSWEEWEWSWNNWEWSENNSSSEENWWWSE", "SWENESSSEEEWSSEEWEEESSNSSNNWSENSWNSENSESWESNWNSWS", "WNSWSENWWSEEWEESESWNENWNSNNSNWEENWESWSWNESENENNN", "ENNSEESNWNNNSNSNEEEEWWESWENNWEWEWESWENENENENESNSN", "NWESNSENWSNSESWNSNNENNWNEWNEWNWWNWEESWSSNEWSEEWE", "EWWEESESENWNSWSENNWSWNSENEWSWWNNESWWEESSEWENNNNENS", "NEWSEENSNWEWNENWSWESWWNWWSSSWWWSEEWSNNWENSSEWESW", "WNNENEWWEESWWNWSWSEWSSWEWSESWSNNENWESEWWNNENSEWEW", "NNSWSSSSNWSEEWWWNNSENNESWSWESENNWNWSNENEWSWSSNWWN", "EWSNSSWWWSSEWWENSWNEWNWWENSNEWSWNNEWEEWSNWSWSNWESW", "WWSWSNSWNENWWEEEEENEEWEWENWWSSSNEWWWWSSWESSEWNENW", "NWNESSNEWNWNSWSWSWWSNWEWSSENESNWSNNWWESSSNWWWWSNNS", "ENSNESNWNSWNNENWEWSNWENESSSSEWWSNESESSNESSEWSSNEES", "SEWSWSEWSSEWESSSSEWSSNWNSSNWENSNWWWWWWWWWSSWSNENW", "SNWSWWNWWNESNSSNESNWWWWNSNSEEWNSWSSWSSWWENEEWNNS", "ENNNSNEWWSSNWEEESNWENEWSEESNEESEWNSSNSSSWEENENENNS", "WWSEEEESSNSSNEENWNENSENWNWEWSSWNENESESWSWNEEENWSNE", "SWNWNWNNWSNNNWSSSESENEWNSWWNWSWWWEWSWENWWNWNSNENW", "NSSESEESNSSWWWNESSSNNNEWWEENSEWWSWEEWSEWNSSWEESWN", "EWWNWNNEESEESENWNNSWEEEESWWEEWWSEWNSWWNENSSENNWNEE", "NESWSESNNSESSNENNESSWESSSEEEWWWNWNEWNEESSNSWENNWN", "ESNSWESENWSWWWEEWENSWEENSNSWSWWWWESEWNSWSNWWEEWWS", "SNWENNEEESNESEWESWEWNENNEWEEESESNNWSWSEESWESNEEWS", "ESNSESSESESESESEWENSSNSSNWSSNNEEWSNEWWENNEEWNSSNN", "NENWNWSWWNWWENNWWWNESNSWEEEENENNESEWNSWWENEEWWSWSN", "NSEEEEENSWEWNNWNSSESWNWNESSWEWEENSSESNNNSSNNWSSNW", "NWENWWSENWENWSSWNESSSESSWSSEEEWSEESNNWSSWSSEWENWS", "ENNSSSEESEWWSSWEEWSENSSENENSNESSWSEEWEENWESWEENE", "EEWWSNSEWWESWESWNSNWSSENNNNWEEWEWENNNNWSEESSEWSW", "SWSESEEWSNENWSENNWSENESNWENWENSENWNWEENWNNSSESNSEW", "SESEESSEEENEWEESSNSSWNWEWSNSSWSENSSWWSEWSNSEEENE", "WWWESEWEWWESNWSSNNENNESWEEENNNSWENSSWWWNWWENSWWWE", "EENWESENW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {".##.#....##....#..#...", "...#..#...#.#....##...", "#...##...##.......#..#", "..##.#######.#..#...#.", "##Y#..#...##.#....###.", "....#......#........#.", "....#..#.##.#..#.###..", "....#.#......##...#...", "##..#.#......#.#...#..", ".#......#.#.....##....", "...##.#...##...##.#.#.", "###..#..#.......##.#.#", "##..##.#####.#.......#", "#...#.#......##.#X###.", "#...#...##..#......#..", "#.....F#.#..#....#.#..", "##..#..###...#.....##.", ".....#.#.##.........#.", ".#....#.#.#.#...###...", "##.##..#...#..####.#.#", "..#....#..####....#..#", "....#....###.#..#..#..", "......##...#.#.#......"};
    vector<string> commands = {"SWWNSNENSWENWEENSNSSSSNWNSESENWSNNN", "ESESSNENEESWNSSWNENWSNSNWNEEN", "SESEWNNWSSNNNNSNWNSWSEWNSWENWEEWNS", "SWNNNNESNNWSWWNWWNWSWSSSNWESWNSNWSNNSWEEW", "NSENWNNSSWWESNWWEWSWSS", "NENNWENWSSEEEWEWWWNSNNN", "ENEEWENEENEWWEEWSNSNSWSWSEWESESWSSSSWWEWWWNSWEEESW", "SEWSEWNEEEWNENNNNENWW", "EWNSWNESEEEEWWENEWEWWNSWESNWEEWSWS", "SWWSWNNNENEEWWWNEEEWEWEWESSESNNENSNNSEEWNWENNESWN", "NESWSSEEWNSSWWWNSNEENWSESEWWSSNEWNNWEWNSWNWWWNENE", "ENEWSSESEWNNSNESNNEEWEEWNEWWEEWSENSSSNNNESWNWN", "WSWNENNSWSSSEWWNWSEWSWESEEENNWSWNNEENE", "EESEEWWNNESSNWSSNESNWWSNSSSSSSNNNNSSEE", "SNNEEWSWENEEWNEENSNES", "EENNWSNWNSESWWNSENNENNEESSSESSESEESWNWS", "NWNSSSNNNNEWSNWWEWSNENESEWWNWSENWEEWWWWW", "SSENNNSNSSNENWSSENNSNWSSNSWEWWESWSEWENNESNNS", "ESNWWWNWWNNEESESEEEWEWNWWEWSSWS", "SWWNSNEWNSENWWENNSSESSWWWWWE", "EWSWWSEEEWWEWNNSSNWSSWNWWWWSNWESEWW", "SESNWSNSNEWSENNWSEESESNSWNSNENWSEWESWENNESWEEEWE", "NWENWSEEEENESNNWNSESNEENSWSSS", "SWWNEWENNNSESSEWWWWWENEWSWWWEEESNEEWWWSSNSWE", "SEENNNEWWWSSEEESWSSNSWWWNENE", "SNNSNENWNWEWNWNESNSSEE", "EWNENSSWWWEEWWNWESWEWNSEESWNENNWNNNNWNNEE", "ESENSWNWNSSEWWWWWWNWS", "NSSWENSSEWEWNNNEEWWENNENWENNNENENEWEESS", "ESSSNEWSSSESEWSSWESSWNNN", "NWESWNE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"#.#.#.......#.##.#.#......", ".##Y.#....#......#...#...#", "#.....#.##.........#...#.#", ".#..#......#........#.....", "....#.#..F..#.#..#.##.###.", "###.###..#.............#..", "#.#.....#....#....###.#.#.", ".#.#.......#...#..#.#.#..#", "####......#.##....#.......", "#.....#...#..#.......#...#", ".##...#######.....#.##.#..", "##..#....#...###......#.#.", "####....#.##..#.#..#.#.#..", "..##....#...#..#.#....#.#.", "..#.##.........#.#...#....", "...........##.#..#.#.#.##.", ".........##.##.......#.#.#", "........#.##..#......#.#.#", ".....##...#....#####..####", "###....#...#..##..#..#...#", "...#.......#.#..#.....##..", "...#..#....#.##...##...#.#", "...#.#....##.#....##..###.", "..##...........#........##", "#.#......##...#...#.#..#..", "..#.#.#..#..##....#.##.#.#", "...#.##.##.##..#..#.#.....", "#.####.#####..####..##....", "....#.##.#.#.........#....", "###.###...X.....#........."};
    vector<string> commands = {"NSSNWWSSWNWWEENWESENNNESEEEWWWWWSNNSESSESEENESS", "WWNSEEWSSEENNSEENWSSSEENNNWENENSSWSSWSE", "NWEWWSWEEESNESNWWNSWNSNEEEWNSENWNEESWNWW", "SEWNNSENWNEENSENWWWWSWSEWWNWSWSSWESSSE", "SESNSNWEWWEEWWWNEWNSNENWWWENNWNNSWNEWWNNSS", "WWENWSEESSSSNSNSWWNNSEWSEENEWWWSWWSEWEESSWNWEENSSN", "ESEESSNWWNWSESSENSESNEESNEESENSWEWWWSES", "EWNEWWSWNNWNNWSWSNNSEENSWEEWWEEENSSENNNNESESWSE", "WWEESWNENWESEENWNEWSEESNWWEESNWENWESWNSWWSEESNEENS", "EEWWSSESWWWNENENENESEEENSNSSNNENESWWESESN", "SENENNNEEEWSESEWEESESSWSNWSNENWWEESESNWWS", "SNESSEENSSSWSSSNWSSWWWENSWSSSEEWNWEWESSESEWNNSNEN", "WWNSWESNWSWWEENESNNWWWNWNNSWNSNENSESSWS", "SSNSWWNWWSWEWSEWNNNWSNESSSESSWWEWWESNESNEWSNWNNS", "SWWNSNESEEEESENSNEEESWNENSEWNESNSEESESEWWWWEWEESS", "NEWENESSSENNNENESEEENWSSWWEEESNNNWESSNSSNNSW", "SNWESWSEEWSNSSENEEENSNNEWWEWNWENSNSNNWSESNENEES", "SSNENENEWWWWWSWWWNWESSSNESWWSSEENSNNSWE", "NWEEEWNNSWNSWWNESWEWNESEWNNWEENENSEEENS", "NNENSWEWSWSSSWWSSESESWSNENWWWSNWNWWNSSSWEWNNN", "EWSSSNSSWNNWSNNWSSSSENSWEENSSWESWWEWWE", "SESSNESSWSESNEWSWENWSNNSEEESWSEEWWSEWSWSWNWNNNW", "EESNEESENNESESSENSNWSEWNWSEEWWWNSNWEEWSNE", "ESWEESEEWNSWWWSNWSWWSNWWSWNWENEESWNSWWSEWSWNSNENS", "SNNWSWNSWNNEENSWWSWNNNNSNWESEWSEEWEESSNSS", "ENNEEENWENEWWENNEEWESWNWWWESWWEEWNSENWWW", "WNNESNSNSSWEWSESESNNEWSEWNNENEWNENWNESSN", "EESEENNWEEWNENNENNNSWNWWNENEESNWSSSWESENSE", "SSEWNSWWNSSNSNSSEESWSESWENNSSSSNNNSSEWENNSENWES", "WSEWNNNSSSNENNEEWEWESESSWSSSESEWWSSENSN", "NWWENEEWWWSSSWWSSSWSSSESWESSWSSSSNSSWNEENSEWSWSN", "EWSNWSENSSNESWSNENSEWWWWWWESWSESESWNNEWW", "NWSSNEESWWNWNSNSSWWNSSNNENESSWNNSEEESWNEWWSNE", "EWWNWNSSEENWENEWSESSSEEWWNNENSSNSENEWWS", "SENNSWEESSNSSNEWWESENESSENSSSWEEWWWENWS", "NENWSENSWSNEWEWNWSSEWWSNSSNWNEENEESSNNSSNENWE", "WWNSSWEWSNNSNENESENEWSSNWENWSESWSWESNWNS", "EWNENWWWWWEWESWENSSESNWWESNWNSNSSSWNWSWEWNWEESEE", "NSNWESWNSWSSNNESSEEWEEEESEWNWSWEWNNNWNNNSNSEWSE", "EWWSNWNNSSNEWWSSNENEEWSSSSNESESWNWSNNEWSN", "NNWNNNEENSEWEWWSNNWWESSENWWEENNSWSNNWWWSSWWWEESNN", "WEESWSNSWEEEEESENWSWWWWWWWNWENWSNSSEWENNSWWWS", "WWSSEWEWWSNWNSNNWSESWSSSENENNEWSWWWSEESESWSNW", "SEWNENWSSSWNNWSSES"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {".#.#.####.X.#.......##..#.#.", "#.#...#.#...#.#.....###...#.", "..#.##.#.....#....#..#...#..", "#.##....##.....##..##.##....", ".#..##.#.##........###.#...#", "....#..###......###...#.#...", ".....#.#..#..##..#.##.......", ".#..##........##..#.#......#", ".##.....#...............#...", "#..#...#...##.....#..#......", "##.#...#....##...#.#.......#", ".....#F#....##...##..#..##..", ".#......#...................", "..##.#.....#......#..#...#..", "###....#.......#...##.#.....", "#..###.#.#.#...####........#", ".......#.#...#.#..#..##..#.#", ".##...#.#.#.....#..#....#...", ".#.####..#..#.....#...#.##.#", "#.....#.###.#...............", ".#.......#.#..#....#....#..#", "...#....#..#.......#......#.", ".#.#...####.......#......#..", "#.#..#...##...#.#......#..##", "...#.............#.#.......#", ".###.#.###..#..#...##.##...#", ".#...#..#.####..##..#.......", "........#......#...#.Y..#..#"};
    vector<string> commands = {"NNNENSSWWWESNWSESWWNENN", "WSWWSWWWWWESWWNSEEWEWWENSWEWEEESNSENEWWEENWS", "ENENENSSNWSEWNSWENEENNWSEWSEWSENNWSSNWSWSWNESENE", "WEWWWSESWNEESWNWWEENWNWEWSEESEEWSSWEWWWSWWWS", "WESESENNEWEEEESEENNSNSNSWNSWWSSE", "SESWENWNSWNENNNWWNSNSEWSEEEEWNENEENSNWEEESNEES", "NENSSWNWWENEEESWNNSWNSSWSWSNEEEWNWSSWS", "NWNEWNSENWSNNEESWNNSSWWSWNWWSEENWEWESNW", "SSESWWNSNNWESEWNSWWNEENNWWNNESNNSSSNWEESESEESS", "ESSWNSSEEEEWNSSEEWESSNWNWEWEN", "EWNNSWNWENWWNNSWWNNEWESN", "EEWSNSSNNEWNWWWWSWSNSNN", "SENSNSWWSNSNSESEENENWNSSWSNWNNWWENSNWSSNWSNNN", "NWNENWWENWWENNWNNSNWEE", "NNWSWWNENSNWENWNWENENE", "NENWNWENEEWWENNSEEWSWNENNSNNNENNNEWW", "NWWNWWNSWWSNEWSWNENESWWNSNEWNN", "WWNSNWWEESENSNWWNEESESENEW", "WESWNNSWSENSENNWWNEWSEWSWENWEWNE", "ESENSNEENWEENWWNNSNNWWNNSENSSWNESWSNWNSWS", "WNWNWSNWWNSNNWSNWSNWWNWNNNW", "WSNEWWSWSWNESNSSNNWWSWWENNEWWENWNNE", "NSWWEEEEWNENNNNNEENSENWNNSEWWNWNSNWSESWEWSWWEN", "NSWSEWWEWWNSSENEWSWSNNSNWSNWWENWWE", "ESNEWWNNEWWNSSNNSESEW", "EWSSWSSSSWEEWSWNWEWSSESEESENSENSSNNESSSWNWWSWWNES", "NWNEEWEESSEENENEENNNEWWWWNENWNWSEWWNEWWE", "ENWNSEESSNWNWESEEENNSSENWEWNWWESSSEWWWNNNE", "SNWWEWNEWNNNSEWWENNWNSNEWWNWNNWWNS", "SWEWESSWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 651;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"####........#..##...##..#...", "##...##.#...####...###..####", "#..........#.#.#...........#", "..#.#..........##..#.##...#.", "......#.#.#.#...##..........", "...###..##.#....#.....###.#.", "..#......#......##.###.##..#", "...#.#.##.......###..#......", "..#.#.#..#...#........#....#", ".##.#.#..#...##...##.......#", "###.#..#..#.##.###......#...", "...###.#.....#..####..#.##..", "#..#..#..#......#.#...#####.", "#.....#..##...#.#...#.###...", "....#.#..........#.#......##", "###...###.##..#####...####.#", ".#.#..#.#.#.#.#.###.....#.##", ".####..#......####....#.#...", "#.#..#F..........#.#..#.#..Y", "#...#..##.##..#........##.##", "......#....###.#.....#......", "...#..#...##..#.#.........#.", ".##..#..#.#.#......#.#...##.", "#.....##...#....#.##.....#.#", ".####....X.#...###.#........", "#.#....#........#.....#....#", "...#.....##.##..##.####.#..."};
    vector<string> commands = {"ENEEWWWSSNNENNWWSENWNNWENNESESWENWWSENNWNENSWWSW", "SESNWSENSNNEWSSENESENEESSEWSENESNENNENSNEEENSSENN", "NWWSEWNEWEENWNSEWWSSSWNWSSEEWNEEWWSSSWEESESWENN", "ESEWENSSEESESESESSEESWNNWSNNEWSNWNWWSNEEESEWNESS", "NNWNENWSWWNEWWWSNNNWSWWSEWEESNNENNSEWNWWNNWWSNN", "WESNSENEWEWSEWSESWSENEESNEEENSEESESWWNEWNEWWWENE", "WWWNSENESWSSNSWEWESSSSNSNSNNNSSEWSWESSNSSEWNSESWE", "WESSWSNEWEWWNNNEWENWESWNWSENNEEESSSEWNSNWSESSES", "NENWEEESSWNENEWSSESEEENEEWENWWSSSWENWEWWNSWESENN", "SSSWWNESNWESWWNWENSEWNNNWNWWWSSNWWNNWWSSNWSWWNS", "WSNWNSNSWNNWWNSSNSNNWNENWWENSWSWNWWWSWENEENNESWE", "WNENNEENNWESSNENNENEEENESENWSWWEWWENSNSSSSWNSNNN", "ESNNWEEWSENNENEWEWSSESNSEWNENESWNENSEEWNEWSEWNNSWN", "EENNSENNWWWWWSWNEWNNEWNSWNEWWNWNNNWNNWSNENWWNWSNES", "WNEWNSWNNNSEENEWESEENENNWNWSNNSESNWSSWSNESWWWWWNN", "SWEEESNNSSSENWNSSSWEEEEWSEWEEWNNWSEWSNNSEEESNENNE", "SNNESWWNEWWNWESWNESSSWSSENNEESEWWESNWSSWNNSSSWWWWW", "WWEEEEENNWSSWWWSEWWSNSSWSENEWSENNWWESNSNSEEENSEN", "SNWESWNSNNNEWWWNESWSSNWNWSSWSSSEEENENSNWEWWWWEW", "EWSNNEEWWSNESENSWWNNNWENWWWWSENEESEEENEESWWSNWWWS", "NEEWEWSNNSNWSEENEWWEEWNENEESWSEEWSENSNWSNNENSSS", "SWSESNENWSENESSNNSNSSENWNSNESEWENEWNNESSWSWEWNENEN", "SEESWSNNSWNEESNNNSEWEESEWENWSNSNEESEWWNNNWWSESW", "ESNNENEEWSEENNNEEESSSSNNESSNEESNEEWWNSWWEENSWNSW", "WEWNWWEENWWNWNNENSWEESNNSWWSSEESSEEEWWSSEENEWSW", "NWSENSNNNSNEENSSNNWSNSNESSEESNNNEENWWNESNEESSSNN", "NNENSESWESSSSNWWWSESSNWNSSWNWSEEWWSWNNENSNWWEWSENS", "NESESSWNNNNSSSESSNWSNWSNSSNWWNWWNEWWSWEENSEENWS", "SWENSWNNSESNWWWNNSNENWWSEWWSSEWWEEWENESEWESNSSENS", "ENNEWWWWWSNSEWSSNSWSSSEWSSENSWSNEWNWWWWNENENSNSSN", "NNEEWNNSWNWSEWSWSSWNENESNEESSWWNNSSSNNWNWEEWESEE", "SNEEESSSNEWESWSNNEENEEENENNEEWSEWEWSSNSWEEWNSWS", "NESNEESWNWSWWSWNNWWNNSWENNSSSSNESSWEENENNWWWNEW", "NNWNSNNEWWNESEWSSSWEESSNEWEWENSENEWNEWNEWWEWEENNEE", "WSSSNNWWSWSSNSESEWESESSWWWSNSEWEWWNENENNEWWWWNWN", "ENNNESWSWSSEEEEENNWEEWNWNSNEWENENEENWWSEEWENWNNESW", "NWWEWWNNSWENWWENNEEWNWESESSSENNNWENSEWEESNNNWNS", "SNSWSSSWWNSWSENWSSEENSNWEENESWEWWWEWNESEWSEWENS", "EWSESSESSNSWSWESEEWNNSSNWWEEWESWSSSNESNNNWESENWW", "EESESENNSNWSEENENEWWWSENWSWEEEWSWENNWSSWWESSNWSSE", "WWSSSSEEEWSESSWNNNWESSSEEESWWNWNSSSNENNWWNWWEWNS", "WWNEWWSESWWWSEWNNWWNWSEWWNEEESSSNSESWWSEESEESNNE", "EWSNSEWESNNWNNESSEEWSEEWSEEEWNSNSNWWSWWSEWWSWNSNE", "SEEWWSEENWESWSWWSWEWSSESNWWNNNWSWESNWESNSSNSNEEE", "NWNNWENWNSEEWNENSESWNSNNNWSNESENWENSWEEESWEWENEW", "EWNSWENEESNWWNENSSNSSNNNSNWSEESWSSWSESWNNSSWSWWNE", "EWSEWSEWNSNNNSNEWEEWEEEWWWNNWESSSWEWNWSEWWSENNSNWN", "EEWWESWESNWSEWWWENWWNSNENSNWNWWSNNEWENNSWSNNWSN", "NWNWWSENNWSWWSNWWNWNNNENENW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 442;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"..Y......##..#...#....###..", "..#.#.........####..##...##", ".#...###...##.##.#..#..##..", "#.#.#..#.#.##...#....#..#..", "...##.#.#..#.##.....#.....#", ".....#.#.##....#.........#.", "..#....#...#..#..#......##.", "..##......#..###...#..#.##.", ".......#..##.....#.#.#.###.", "..#.#....###...#........#..", "..#....#.....####....#...##", ".#...####...#..##.#....#...", "....#.#.#........#..##.#.##", "....#..#...#....#..#..#....", "##..#..##.#.....####..#F..#", "#.......##.#...........#..#", "..##....##..#..#.#...#.##..", ".#....#....#.#..##...###.##", "...##....#.....#.#.....#...", "...#..#...##.#.#..###.#....", ".....#......#.##...####.###", ".#......##..##.....#..#.##.", "..#.#.#......##.#........#.", ".#.#.##....##.###...#....#.", ".#.#......#.##..#......#...", "#...#.#X#.#...##....#..#..#"};
    vector<string> commands = {"NSSNSNEESNSNNNNNSNNSWENEWENSWENEEWENWEESEWNSSNWSW", "SEWSSWNSSWENEESENSWNSEESNSESENNNSENSENWNSEESNW", "EWEEWSSWNENEWEWESENWSNSSNSWWNSWWSSEEWENSNNNNWWNWNW", "ENESSWSSSWSWSEWEENNSWESEWEESSEEEEENNEWNSENS", "EWEWWNWEEWSENNWWESSNSESNSESWENNEWENS", "SWENESEEWNEENEEWESEESENSSENWSNNSNEN", "WSSNSSNWESWSWSENENNNSEWEWWSSNWEE", "WNSWENWNNEWNSNSSESENSNWSEWNWEWWEWN", "ESSWNESEWNSNENSEWNNSNNWSSESSSSNWWSNNNEEE", "SSSSEWNWSWENWSNSNENEEWWNENSSNEENSEESENWWESNWNW", "WSNENEEENEEEWWESNEWSSSEENENWWNWSWSEEENN", "EWNNNWNNNESENEWSWNNWENSNEESSEENSESWWWNNSSSW", "WSSSENSWNSEEESWWNWESNEWSWNNSENWNSSWSSNWWSSSNESEE", "ESWESSWNSESSSSENSWWWWNENNNESNNNSSSNESSSW", "NSNWSESWNNNWNSNNNSEESSSESNWNNNESWSEWWWENWSWNWSS", "NSWSESWNSNENWWWWWWENSNNWENWWNWSE", "NSSNNWEEENSWWESWWSWESSEWWEWEWNSNSENNNN", "WNWWNWWNESWSNWWWNSNNNEWESEEWESWNNNWESE", "NNEWEWWNESEEEWNNENNSEWNSNSWWWSNS", "WEWWWWSSNNWEESWWWSEESESSNNNNNNNESNSENSES", "NEWEWENWENSEWSENESNENEWEEWSNENN", "SEENNSWESNNNNSWNNWSSESWSWENWEESESESWNWSSNNNW", "NEESESWSWSEEEWWWNNESNESSEENNWWWESWWWENSWENWWW", "EEEESWSESWWWSWEWNWEWEWEWNENSSNES", "SNEESNSSWEESWWENSEWSSESSSNENNWENWESENSSESNWWEEEW", "ESEESNEESEEWWNWSWNENEEWEEENWNESNNEWSWESENSSNSW", "SWWEEWSESNSNSSSSWSWSWWWNEEENWEEEWS", "WWENSEEWSSNNEEEEENWESEWWNWSWSWEEESEWESNEWNWS", "ENWNESEEEWSWSSNWWENNSNSSWNESENEWSEESNSEWNSN", "SNSENEESWSWNESSNSNSWSWEEWSEESEWEWEN", "SNSESWWNSEEWESNNWWENNWSWENSSESSW", "NSWNWWNNSSNNEEESNNSNEWWWWNNWWEWNSWNSSESSNEN", "SESEWENSSEENNSSSNWNSWSNESNNENESSSSSESWENEESNNEEWNN", "WEWNSNNNNSWNESSSEWSSEESWSWWWEEWSWWSWWESNE", "WSWENWEESENNNWNNWWESSSWNNSSENNWNWNNSEES", "NWNSWNNEWNSWWSNEWNNNEWNENNNEWESWEEWNSS", "WWNEWNNSWSSSSWEWSSNWESSSEEWESNSSNSN", "NEWNNWWNENWSWNEWWEWWWNNNWWNNEESNESWNWENNSNWESE", "ESSEWNSSNSWWWSSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"..#....##.###...###......#...#.#.#.....#...", "#....#.....#.###....#.##..#......#..##...##", "#.#..#...#..#...#..###.#....###..#.#.......", ".#.#...##...#.#.....##....#.#.##.#........#", "#.##....##.#.#..#..#........##.##.#..#....#", "#...#.#..##..#..#.#....#.#...#.####.#..####", "#...#..####..##..#.#...........#####.....#.", "#........#....................#........#..#", "....##...###.#..........##..#.##...#...#...", ".........#...###.##.#....###...#......###.#", "#..#.#.#...#.#.....#.#.####....###.####....", "##.##...#...#.####.....#..#.#......#...#...", ".#..#....##...###.......#...##.#..##.###.#.", ".#.......#...#.....##..##..#...##.#.###...#", "..#......#...##..#.##...##....##..##.#.#.#.", "##.##.#.#.#.#.....#....#.#..##.#.#...#..#.#", "..###.....#..#.#..........###..##.###...#.#", ".##.....#.#...#.#.###....###.......##..#...", ".##.#.#.#.###.###.#............##....#..##.", "#...#........#....#.#...##..#.....#...##...", "#......#...#.#..#....##...##..##.....#..#..", "#.#.#..#.#.##...#..####.......#.#..#...##..", "#...#.#.#.#.......#....#...#.#...#...##....", "#....#.......#...#........##..##....##.#..#", "...##..X#.....##.###..##......#...##....##.", "....#.....#...#.##...###.....#..##......###", "#....###..##..##..##...#.#..##..#..#.##...#", "#..#..#...#.##.#.....#......###.##.#.#..#.#", ".#.#.#.#..#..#....#..#...#..#.......#..#...", "...#..###..#.#.#.#...#........#....##.####.", "#......#.#..#.....#...#..#...##...#...####.", ".#.....#..#.#.#.####.##....##.#.#...##...##", ".......#..#..#.....#.###...#.#......#..#.#.", "......#....##.##...........####...#.#.###.#", "#.#...#.###.#....#.#....#..#.#..##.#..#.###", "....##.#....#.#......#.#..#....#......#....", "#......#..######.#..###..##....##....#....#", ".#..#.##..####.#.#.#..#...#..#...##.####...", ".#.#.##.....#.####.##.....#...#...##.#...##", "###.............#.#.#....###..#..###.#..#.#", "###......#...#.#.#.......#.##..#.#.#.#.##..", "#.....#.###..##.#.#....#.##.####.#...#.##.#", "#.##....###..#..##..#.#...#..##....#.#.#...", "..#................#.......#....#..#.##....", "..#....#.##.........###..#..#F..#........##", "...#..#....#..##...#......#...#..##.....#.#", "Y......#...#..##.#.....##...##..##.....#..#", "....##.....###..#..#....##.#...##..##....#."};
    vector<string> commands = {"SEENSEWNNEEWSNWSSSEWSWNEWWENSSWEN", "EWSSENWEWWNWEWESESEESESEEEWWNWSSWESES", "NNWNNSWWSEWESSWNNWWNSNSEENENSNSSESENWS", "EWNNSSNENNWWNSSNENSENESNENWNNSENWWWNEWWNWNWWSSWS", "WWEWEENNWNNNSSNWEESNNSNENSNWNENNSNNWWWS", "WSNWEWSNEEEEESNWEWNEEEEWWESSNWEEWSNEESWWSSEENNEWEE", "EWWESNESENEESNEENEENNWESESWESSWNSNSSSEWSSSEWNWEWSS", "EWEWNSESWWSNNEEESNWSEEWNSSEEESNEWW", "NWWNWSNESNSEEWSSNENSNWWESENWWSENW", "SNENNWEEENSNSWENEEEWSNEEWNNNWNSENWWSEE", "SSNEWSNNSWNESEWESESNEEWNWNSNSWEEESEWSENNWEW", "SWNNEEWNSENEENSWNEEEWEWNWWSSWEWENWNWWWNNEEEEES", "WSWSSESEWEWWSENSEENESENESNESESENEESW", "NWEESESWWNEEWSWENSESWSSENWSNSESSWWWEEEE", "NSEWNWWSSESEENNSEWSWNNSNNSSESNWWWWWESWSESEWEEEN", "NSWSSSNESSEEWNSWNSNEWNENENWENNESW", "SNNNEWNEENWSNNWNNSSSWWSSSNSWNNNNSSSEES", "WNWENESNNNNNSNEWNWESEEEWWENNEENNNNNSSNWWWENSNWNW", "ENNSESWWWNNNWEEEENSWWEEWNNNNSWEENWNESEESNEENNE", "NNWSWSNNWENNNSWSWNESSENNSSSNWSSNSESNNWWSE", "NESSWEEWENESWWWWNNSSWNEEENWEENEWESWSWNWSESEEE", "SNNESENWWNNEENSSWENNNNWENSSSNNSNEEWSEEWENNNSNSWWW", "ESNSNSSENWEEEWENENWSSNSWSNWNNWESNSWNWEEEWWWNN", "ESNSSSSNNENSWSEEENWSSESENNSEWWWESEWNWN", "WNENEEEEWSSNNSSNWWSNWSWEEWEESWSENSNWNENS", "WESWWSSEWWWNSSWEEWSWESSSWSSNNWSEEEWNWSNNSW", "SSNSSSWNWWSNENSEESNSEWSEWSSNEENSWWSEEEWWNWNEEWEW", "WSESNESNNNEWWWESEEWSSNWWSNNSESEWWSEWNSNSSWN", "ESSENNWNNSSNSEWNSNSNSNNSWSNSSSWENNW", "SSSNENWENSSNESSNWNSSWNNSSNNNEENSWEEENESWSEWWWNNS", "SEWNSWWENEWNNESESNNSSSEESWNSEEENNENWSESWEWSNS", "WSWWSWSNEEWWEEWWNSEWEWNSSNWESESSNNESE", "SWWNWWWWNESWESSNESWSWSSWESESSWSSWW", "SNEENSWSNWWNWEWNENWEWSNWWWNNWSEESWNSSNWWE", "NESNWENWEWEWWEEWESNWEWNNENSSEWENSNWNESESWSNNSENWSS", "NSEWNWWWSSNWWNSSWENEESSWNSNESWSWESWNEN", "NENWNEWNWWSNSEWWENNENWWSENEWNWSWESSWNSSSENWSSSWNWE", "NSEWNSWWWNWWNNSSNNWNWNSSNNWNSSWWWSE", "WWWNWWNWSESNSEWNSSWNSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {".#...###...#....##..##....#..#...#....#...#.#.", "..#...#.......##...#.#..#..#.#.#..............", ".....#.#.#.#.....####...#...#....#....#.#.....", "####....#.##...#.#.#.#.#.#.##....#...##..#..#.", "#..#...#....#......#...#...#.#.#..#...#.##..#.", "..#.##....###......####........#......#....###", "....#...###..#..##...#.#....#...#.#..#.....#.#", "#...##...#..##.....###.#..#.#.#..##.....####.#", ".#....#......#.......#......#..#.#..#.#...#.#.", "..###.#.#.........##.....##.###........#..####", "##.##..#....##..####..##....#.#...#.....#.....", "....#...#...#.##.##....#......#....##.##..#.##", "#..#.#..####.#.###.#####.#.#.####...#..#.#...#", "#.##..###.#..##...#.#...##..##.#.##......#....", "..#.#...#..####...###...###......#.##FY.###...", "...#...#..###.#.#.##..#..#....#..#..#..#.#....", ".##.#.#..#...#.#....#.....#.#.....#....##.....", "#####...#..#.###...#...##.....####...#.#....#.", ".#.#.......#...#.......#.####....#.........#..", "#.##.#.....#.##.#.....#....#......#...#.#..#..", "..#.#......#..#.#.#..#.#..#.#.#..#...#......#.", "..#.#...#.#.....#...##..##...#.....#..#....#..", "........##...#.#..##...#.#......#....#.....##.", ".#..#.........#.#..##.##.#.#.......#.#.#..##..", ".#.####......#.##.#........#.....#...#.......#", "..#......#....#.#.....##.##.#.....#.#.#.#.....", ".#......####..##.#..#.#....##..#..##.#...##...", "#.#...###..........##.#.#.##.###.#.###.......#", "..####.#.##..###..#............#.#.##..#......", ".#..#...####...###.###.#..###....#.###...##.#.", "....#.....###.##.X......#.#.###.....#.#..#...#", "..####.#.......##.#...#.#..###...#.....#.##..#", "......##..#..#.#...............#...#.......#..", "............#...#....#..#.#.#.##.....#...##.#.", "...#..###..#..#.....#..#.###..#.#.#.#.###.##..", "...#.#.......#.##..#..##.###.....#...#.#.##...", ".#.#..###.#..#....##....#.#.###.#.#.......####", "..#..###..###...##.....#.##......#...#....##..", "..............#.#...#......#...#.##.....#..#..", "..#.#.#.......##.#.####.#.##.#.####.#.#.#..#..", "#..#..#.#....#..#.....##...#..##....#..###..#.", ".#..###.#.##....#......#..#.#..##.####..#..#.#", "...###...#..#.#.......##..#....#...#..#.....#.", "..........#.#####.#.............##..........#.", ".........#....#.#.....#.#.##..............##..", "..#.........#.##.#.##..#.#...###........#...##", "##...###......#........#####.#......#...##....", "#..#...#.....#..#.#..#.#.........###.##.#.##..", "#......##...##........##.....#.#..#.##......#."};
    vector<string> commands = {"ENWENSNNWNEWNSSWSESSWWSNNEWNENWNWWNNWNNESSWWNWEWS", "NWNWNEWNWNNNESENWEWNEWEESSEENNNNWNESSSNSEWEESSESNE", "EEWEWWENWWESNWNSEWWENWSWNWSNSWEWWENNNEEENSE", "ESENEEEESNENWESWSSSNNSENENWWWENWENWSSENNSSESSNNSEE", "SWNWNSNSEEEENEWSWENWNSNSNWNENSNWSSWWWSSEWSWNWW", "WWNWWEEEWENSSSNSSWESNEEWENEENNSWNWWNWNSSWNWSWEESES", "WNNSENNWSNESENSNSEWWWEESWWSSSNWSSENWNEENSWNNW", "NNSEWENSNESNNWSEWEWSNEESESNWEEWSNENESEENESSWWE", "NSSESWWESEWSNENEEWNEWEWNENSNENENWNNWSNNSW", "SEENSWNNSNENSEESSENNWWENSWNSWNSSEESSSENSSNEWWW", "NNWSESNWWENWWNWWSWEWNWEWSWSENWENWESWWSENNSWWSWWWW", "NSWNENWWNSWNNWNWNNWNWNNSNNEEENWENESNEWNSNNNNSESNN", "ENENEEENNEWSNEESNWEWNNWWESWSWNSSSSSWEENSW", "NENENESSEWNSWSWNWSNSSNEWEEWWENWENWSSESESES", "SEEEWNENNNESNNSESWENEESNNWSSSWNWSWEESEEEEWWN", "NNWWSSEWWEWSESSSWNWWWWNESNWENWWSNENWWNWWWNE", "WWNWSNSSSSNSWNWESWESENEWSWSWWNESSSSSNWWWWWS", "NWSSWSENWESEEWSNNWEWWNSESEWSNNSSNSWESWWEESS", "SWWSEESSWSWWEEEWSSSWEWSNWSEESSSWEEEWSSWSNENWSNNE", "NESSWSENNEEWWNWNESEEWEWESNNSWNNSESSESSWNS", "SESSSENNENEEEWESSNNESEEEWEWNSNSEEWSNWEWENWEE", "EESSSWSNNNNSNNEWWSNSSWNWSWWESWWNEESSESEESS", "NNENENEEEESSNNWSNSEWNENWSNESEEEESSSSWSNEWNSE", "SSSWSNNENESNSESESNSNWSSWEESSESWEWWEESNNWSSEE", "SSWNWEEWWWSSNNNNSWNSWWNEESWWENEWEENWSWWSNWSNENWE", "WEWSSNNENWNNEWSSENNSWENESWWEWWEESEWNWNNWN", "SESWWNSNWESESWNWNSENEWWNNWESNWESSWSSSSNSENESSNSSWN", "WWNWNEENWNSWEWNNNWNSWWESESSESNSNSENSSWEWSENWSW", "NENWESSEWSNEENNWWESNESWNENWNEENNEWNWSWSEENWENW", "NNENNESWNESESESESENNSSNSEWWSNSNWEWENSSSWENSWEWSSN", "WWSESWESSNSWWNENWSSWWNNWSNEWWWSWSSSSNWSSSNWN", "NESSNSWEEWSESENENSWEWENNSWWSEWSSWESESENWWESNSENE", "EWNNSWNEWSWWNNWWEWWWENWSNNSWSWSENENEENSNWSESSSSEN", "WWESESSWEEWEESNNWNESWWWWENWSWSNSNSEWWWWWWSNW", "WEEEWNNNEWSWNWSWWNSWENNEWNSWWENSWSEWNNENENNENNSN", "NWWNWSWSNSWWEESNSEEWSSESWWSNSEWWWENWWWSWWWWSSWNSEN", "NESSWWSNWWWSSWWNNEWNEEWNNENNSEWSWEWWEWWEEWSN", "EENNSSESWSNEWSWNWSWWWWEWWNWWWWNESEENSNNWENSESWWNSN", "WSENEEENEEEENNWWNESNESSNNEWWWWEWWWWWNNWWNN", "NEENWSWNSEENNNNNWNWNSNEWWEENNESEEWSESNESSNWWWESWS", "SNENENWNWNSSWESWWEWWWESWWESNENNNWWSSWEEWSEE", "WENSENNESSWNWSNENEEWWESEEWEENENEESSENNNWSSESNSESN", "SWNENWEWENENWSSSWNSSNWSEWEWEEEWSESENNWNNN", "WESWWEWSWNWEEEEWSESEESNNNSWSNSEEESWSSNWNWW", "ENSNSWWSWWNWSNNSWENWENNENSEN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 669;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"#..#.#.##.##.....###..#.#..#......#...#....", "..#..#...#......#..#......#...#...#..#.....", "....#..#.#............#..###..#.#...#..#...", "#...#....##.....##......#....###.#..#.##...", "#.......#...#.##.....##.#..#.#...#...##.#..", "..#............#.#.#...#.......#...#....##.", "##.#.#.##.#.#..#.#..####...#...##.##.###.#.", "..####...#.##..#..###..#..........#..#.#.#.", ".#.#...#.#....#.##............###....#.#.##", "..#.##....##.....#............##...#.Y...#.", ".##...####..#.###.#.........##.###...##....", "..###.......#.##................#..##...#..", "..#.#.#...#.#..#..###....#...#...#..#..#...", ".###..##.#..#.....#......##...##.#......#.#", "..#.###...#...#.#.....##......#...#.#......", "#.#.......#..#....#..##...#.#..#........#..", "....##..#...X.##....##..##...###.#.#.#...#.", "##...##.#.........###..##.#..........#..##.", "#..........##...#....#.....#.####.......#..", "#........#.#.##.#..##.#.......#..###.####.#", "..###.#...#.#.#.......##...............#.#.", "#....#.......##.#..#..###.##.#....#.....#.#", ".##...#.##.#..#.####..###..##.#....##.....#", "#.#.#..........##.##..###..#...............", "##.#..#...##.##..#.#......#....#.#.#.#.....", ".#...##.###.#.##.#..#...#..##...##.####..#.", "....#......###......#.##..##.#........##...", ".#......##.#......#..#...F...#..#.#........", ".....#...#.....#.#..#......#............###", "#...##..#......#.##..#.#..####..#.#.#....##", "..##.##.#.....##.##.#..#.......#..#...#.#.#", "##...#.....##..#...#.#.#..#....#..#...#....", "##.#..#..##.#.....#.##.##.##..##..#..#...#.", "#.....##.#..#.#...#....#...####..#..##.#...", "...#####...#..........#......#...##....#.##", ".##.#...#...#.##....####.#.........###..#.#", "####..####......#..#....##..#.....##..##...", ".#...#.#.##....#.........#....###......#...", "..#.#.###...#....#.#.#.###.#.#..##.#.......", "...............##..#...#..#..#..#.#.##....#", "#.##..#........##.#.#.#....#...####.......#", "..#..#.#.#...#....#......#.##....##....#...", "............#.#......#.....#..#.#..#..##...", "..........##.##.......##..#.#.###...##.....", ".##.#............#....#.#...#......#..###.#", "##....#.....#.##.....###..##.#.#.#.#.#...#.", "##..###.#...#..#...###.#.#......#.#..#.....", "#....##.##...#..#.##..#...##.##.###...#....", "#.##......#.....##...##....#..#..#.........", "..#.###....##.##..#...##..#.#....#.#...##.#"};
    vector<string> commands = {"EEENEENEEEWSSSESESNSWESSEWENWSEEWEES", "SSSWSSSSWSWEWSWWWWWSNSNWNEEWWSNN", "NEWSNWWWSSEWSWESSSSSNESSENSEW", "EEWNENWWEWEWSEWNWWWENNSEEEEN", "NSENSSSENNNWSNNENNNWNWNNNNNWENWESWSSEENNWE", "ESEWNNSSNNEEENNENESWEEWNSNNWNEWENENSE", "WNEWENSSWNWSWNNNWEESWNSSWSWEESSSNEENWEWEWNNEN", "NSWNNNENNWNENNESESEWENNWENNESNNEENWNNNSWEWSNNSNEE", "SSEENNWWWSNENEEEEWEEEWNNNNWSWEENNNNNENNW", "WWNNNWESWWNWENWNNSENEESESNSEWWNEEENWWSWEEWEENNN", "ENWWWSNWNNWNWNSNEWWNWNNNSNWEWWNNW", "SNNNNSSWNENSWSWWSEESWSSSENSENWNWWNNSEWNESE", "SNWEWNSNNNSNWNSNEWWNWWWNWNEWNWN", "WSWSWSSWSNENWWWSNNNEWWNESWSNWEE", "NESSWWENNNSSWWNESSWSSEWWWSSNNNESS", "ESSSSSWSSSEEWENNEWEWWSWSNESW", "WWSNEWEEWSWSWWSSWNSWSEESWWWWSWWNNSENN", "NEWENNNEEESWNENESSWNWSSEWWNNNWNNWNE", "SSESWESNEEEWWENSSWEEEEENEWSE", "NESWWWSSNEESSSSWSSSNWNESSSWNNSWSNWWSENNEENSS", "SWNEESESENNWWNNSNSNWENNSENWENESNS", "SWESSNNSSWEWNNWENSSWNSWEWESSN", "WNWEEWEWSSSWNNSNNSSSWNWESESSNWSNWNSNNNN", "EENWENWSWSNSEWSNSNWWNWWSWSSSNSNWSSWEESWWEWWWNW", "SESEWWNSNWSNWWSWWWNNWSSSSWEESWSNWNWSSSESWSNSSNNWSW", "SNWWWNWNNESWSSNNWWWWSSSSEEWSESWNE", "EEEWENSSNWNSWEWWWENSESNSNWWWSNWNEWSNWEEWENWESES", "NWEWWNNWEWNWEEENENSNWWEEESESNSNNEEWNNSEEENNWSWWS", "SWWSWNSNWESSEWSNENENENNWSESNWEEENEWENNWWWENSWEE", "SSWSWEESENNSWNSNEWNSEWNENEEWNNS", "NNEESENEWWNWNNWEENNWNENNSENE", "EEWSEEEENSEWSSSESWSWESSSSENEEWNNWWSNSWSNSNEEWENN", "WENWNWNESNSSEEWNWEWWWSSSWEENSEWSEWWWN", "WNEWEWENEWNWSSENNNWNWSSNENNNNSSESNNWENNENNWWWEWW", "SESENWWWSWSEWNSNNWWEWSNSNWES", "NWEWNNWNENWNWEESESENSWWWSSWNNWNNNNWNWESSSNSN", "NNNNWWEEWWESENNWNEWEWSSNEWWNS", "W"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {".#.#.#.#...#.#....#.##.....#..##......#..#.", "#.#.....#.....#######..###..##.#.#....##.#.", "#......#.#.####Y.#..#...#...#.............#", "..##.#....##....#..###.....#..#.....#..#.##", "...#.##.##.#......#.....................#..", ".#..#..##....##..#..#..#....#..#.#.....#.##", "...#.#.#.#..#...#....#.##...#..#.......#.##", ".#..#.#.##...#.....#.##..#..#.#..##..##....", "....#.....##.#.#####..#.##......##....#...#", ".#.#.........#.#.###.##.##.#..#...#...#....", ".###...........#.##....#.....#....#.##.#..#", ".#....##.###.#...#..#............##.#..#...", "..###.######........#.###..#.#.#...........", "....#.##.##.####......###......#.......#.#.", "#.#....#..####.##...####.......#.....#...#.", "...##.##..####..#####...##......#.#..##.##.", ".#.#.....#..........##..#.........#.#.##..#", "#.##.#.....#.......#.....#........#.#.#....", ".....#..#.....###.....##......###.......#..", "......#........##.....#.#.###...#...#.#.#..", ".#..###....###..###.##.#....#.#......#..##.", ".#.######.#.##..#..#.##........#..#.......#", "..#.#..#....##.#..#..###.....#..##..#...#.#", "...#...##........##.#...###............##..", "..#.....##...#######....#..#..###....#.##.#", "......#..#.#.#.#..#...##...#.###.#..#..#.#.", "...##....##........##...##..##...##.###.#.#", "...#..#...###...#.##.....#..#.#.##.#.##....", "...###......##.##..##....#.##..#.##..#.....", "...#.#................###.####.#..........#", "##...#....#...#...#.........#...........#.#", ".#.#..#..#.#..........#.##.....#...#....##.", "##.##...####.##.##...F.....###....#..#...#.", "#....#....###.....####.....#.###....#.....#", "##.........#.###.##..#....#..##.#.....#....", "..##......#....###..#.....#.##..#.....#....", "##....##......##..#..##...#..........##..#.", "......##..##..#.#.##....##.#..#............", "..#.#..#.....#.#.###....#......#...#....#..", "..#...###.......#.#.....#.#...#.....#..#.#.", "..###.#.#.#####..##.#.#....#.#.........#.##", "##...##...##....#.#.##...#..#.#...#..#.#.#.", "##....#.....#..#.###.#......#.#......#.#...", ".##........#..#.###.###..####...#.......###", ".##...##.....###.#.#.....#.####..###..##..#", "#.#...#.##...#...#.#..#.##..#..#....#..#..#", ".#.#.......#.##..#.#.#..###.#...#..#...#..#", ".###.#.....##...######.##.#.#..#.#......X#."};
    vector<string> commands = {"SWNSWWNWSSSSWWESNNWSSNWSWSESSSSS", "EWNESENEENWNWWNSSNENNSEEEEWE", "ENEWEENESNENESSSESSESSWEEWNENNSSWESWNEEESSW", "EESSSEEENNNNNNEWNNSNNNNNWWNEEENSENSENESESEWNWESNS", "WEEESWSSWWESWESWSSWSWWNEWNWSWESSNEE", "NESESSEWSSSNWNSSESSENSSWESSSWSSWNWNNSWNSNWN", "NWWEWWESWSWENWNSNSSSNWENWWNWSEENW", "NNWEWNESWNENNWSSWESESWNWSNW", "SSNWNESWNESENNWWNWSSWNSWWNEWSESWSWSNWNNWSN", "WWSSSWWSEWNNNNEWWWWNSSWWSNNWNEWEWSNSSSNESSESEW", "NNNSESESSENEENEEENESSEWSSSNWNESEESEESEWES", "EENWSWEESNSWNSENWNNESNEEWSNSNE", "SSESWESSSENENNSESSWESESSSSNWENEEWWSWNSSSWNN", "SNWNEWWESEWSNSSSSEWSSNEESNWSENENN", "EESSEESENENSESEEWSEENSENNENNEESESEEENSSWWSWSSE", "SSSNSENSWSWWNSNSSWNWSEEWNWENSNWWWENEWESESSSSSESS", "ESNEEEESSEEWNENNEESEENW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"#....###.#..#..#..#.##..#.#......##....#...#", "...#.....#....####...###.....#...#.#..#...#.", "#........#...#.#..##..#.#.#..#.#..###.##....", "....#...#..#....#...#.#.#.....##...#...#..#.", "####.#.###..#....#.###.......#.#.#.#..#..###", "###.#.....#.#.#....#....#...#....##....#....", "..#....##...##.#.#..##..#............##.#..#", "..####...#.##..#....###..##Y....##..#......#", "#..#.....##..##.....#.###......#.####...#..#", "#.........####.....#....#.....##.#...#..#...", "#..........#....##.##.###..#.##.#.#.......##", ".....#...##.....#####..#.##...##..##......#.", "..##.......##...###.#...#.#....#....#.#.#.#.", ".#.##.#.#...##.......##...###..##.......##..", "##..#####..#..#.#.#...#...#.#.#.###..###.#..", ".......#..#.#..#.#..#.........###....#..X#..", ".#...##.##..##....##.###..#.##.....#...#....", ".#......#............#.#..##.......#.#..#.#.", "...##........#.#..#...#..#....#..####.....##", ".#...#...##..#......#.#..##.....#....#..#...", "...#....#...#.#.##..######.#..##...#.#...##.", "....###.#...#.##.....#......##.....##....#.#", ".#.......#.#.#..##..#.....#...#.#...###.....", "##..##.....#....##.##.......#.#.#..##.......", "##..#.#.#...#.#..###..##..##..........###.#.", ".###.....#...#....#....#.##..#.#..#..#....#.", "#...#.######..#..#..###...#..#.###....##....", ".#....#..##.#..##...##....#...#.##.#...##...", "#..#.###..##..#..##..#....###.#...##.##.#...", "........###.#.#...###.#..#.....##..##...#..#", "#....##....#.........#..##...#.#..#..##.#...", "F#.#..##......#....##..#.#..#......#..##..#.", "#..#.......###....#....#.#...##.##.#......##", "#.#.###...#.....##.##.....###..###.##...##.#", "..#.#.#.....#.##.....##.#........#...#...#.#", "............#....##..#.#####.....#..........", "..#.#..#..###.##....#.........##..##.#....#.", "#.#..#...#....#...##.#......#.....###..#.###", "###.#.#...#.#.#.#...#..##...........#..#####", "##.#.#.#.##..###..##.#....#....#..##......#.", "###.......#.#.........##....#..#..####......", ".###...####...#.#.....##..#..#..#.....##....", "#...#........#.....##.....#...#...##.##.##..", "..#.##.#........#.#...##.....#...#...##.#..#"};
    vector<string> commands = {"SNWNEWEEWSESSSEENNWNWW", "NSNNNENSWWWNSNSEN", "SSWNSNWWWWWESSEWSNNWWWSSWSESEWWEESWES", "SSESWWNSSWWESSSWNENNSWSSSESNSE", "SSNESSWEWSENESSEESNWESSSW", "SSWWNEENSEWWESSSEEEWESNWNSEWENNNEWNEWEENNNNENSE", "EEEENSNSNENSESSESW", "NNNSWNEENWENNNSSWNNENESENWNESNSNNEWNSEESNEEESSS", "ESESSNEWSWNESSEESNN", "SSSSSEENNNSESEWENSNSNEE", "SEEENEEWEENWWSSWEWNWNWNNSNWWEEESEWSNENNES", "SWNWNWEEESEEESEWWWSNWSSSWSNNNSS", "ESENWWSSEWWSSWWSSNSSESWSWNN", "EWSSWSWSWSSNSSWSEESSWSSENESESWESSSESSSESSEWWWS", "EWWENSWSNWWWSENSNWWWSNWWWNWNSWWESNNSSNWNES", "SEESSNEWSEEENSSSSSENEEWNENEWNSESNNNENWSSSNNWNE", "SESEWEENEEESENNSENEWWEWSNSWESNSS", "WNSNSWSWEEESSSSSESENNENSSNEEESENS", "SEWSNWSNWSSNNWNNWNWENWNEESSNENNSNEEWW", "SNWNWEESWEESNNWNEEEESSWESENNSNNESNWN", "EWESENWWENENWWNWEWENE", "WNWNSSNSSEESNWNSESSSWENWSWNSSEWWSEEWNSSWSSE", "SEENNNEENENESENEEENE", "SNWNSNWENWWNESEEENNENWNN", "NNENNEESWWNESWSWWWENSSEEEWSNWNSSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {".#.#....#.F......##..#..##...#...##...#....##", "#.#.#.####.......###.##...#...#.#..#........#", "#.....#.................#.....#....#..#..#...", "....#.#..#.#.#...#...#..#...##.#..........#..", "......##......#..#....#...##........###......", "..#.####......##.#...#.##.....##.#.....#...#.", "#.#.#...#.##.#.....#....#..##.#.#..........##", "#.........#...#..#.####.......#..##.####.##..", "#..#.....##.#.#...#.#..#.#...#.#...##.####...", "......#..#....##.##....#.#....###..#.##......", "...#..##..###.#.#...#.##....#.......##.###...", "..#..#...#..##.#.##...##..#.X.....#.#...##.#.", "#.###..#...#...##............#.##.....####...", ".#.#.....#.#....##....#.###.#..#....#...##..#", "#..#....##.#.#.#......#.....#.##.#..#.#..#...", "..........#.....###..#......##.##.....#..#...", "....#...#......#...#....#.#.#..#...#.....#..#", ".##.###.....###.#.....#.##...##..#..#.#......", "#.####....#...###....###...###...###..#....#.", ".....##.#......##.#..####...####.##...#...#.#", "...#........##.......#...#.####..##.......#.#", "#.....##..##.#.###.##..####.......#...##.#...", "#...####..##.......##...###...#..#..#..##....", "#...#.#.........#.#.#.#....#............#...#", ".##.#........#......##...#####..#..#....##..#", "#.#....#...#.#.....#........###..##....##....", "..###.#.#....#....#...###.....##.#.....##.###", "##.##.#.#..#.#.....#.##.......#..#...#..#....", "....#..#..##.....##..............#..####.##.#", "#..###..#.##..####.#........#..............##", ".#..##....##.#..#.#.....#.##......#.#...#.#.#", "..#...####.#...##...#..#.##.#.#.#.#.##.##....", "...##..#####...#.#.#.#....##...#.#......#..#.", "...#.#.....#....#..#..####..#..##.###...#..##", ".#...##....##.....##..#.#######.#.......#...#", "##.#..##...#........#.#...#..##.....#....##.#", ".#.#.#.####......##..##..##...##...#.#.###...", ".#.....###...#.#...#..##.....#.....#.##..#...", "..###.##....Y#####..#.#.#..##.....#....###...", ".##.......#.#.##...........#......#..##...###", ".....#...###...#.#..#...####..###...#..##...#", "...##........#...#..###.##.....#...#....##.##", "..#.##......#.#.#..#.#.....#...###...#..##.#."};
    vector<string> commands = {"WNWSNNSWNSEWNNNWESSNWSWSSEENENNWEENWSNESWE", "WSWNWESNESNEWNWSESEEWENSSWSE", "ENSSESSEEWNEESSENSEENEENENEEEEEEWW", "SESNWSNEEEEESWWNNSSESNENEENENWNESNSEWE", "NNNNSEEWNWEWNWWENSEESSSNNNSWEESNNW", "WNENSEWNESSNSWWNEENNSENWENNEEE", "ESSSWESEWENNSEWSWNWWNWSEWENWW", "NWWNESENWWSEWNEENSENSNNWEEWEWNWWENE", "EWSNEESEESNNESWSNSNSWESENSSEW", "WEEWESSSNNWNEENNSSNNEEWEENSNSSEN", "SENENNSENNSWEENSWNWSENSSNWEWWNSWEWWWNSESEESSNWNWS", "EWNWWENWNNENNSNWWSNSSSSNSSWEWNSEEEWWWWNEEWEENWESES", "SEENNSSWWNSNNSWWWSNWNSNSNNWEWEWENEENWESEEWN", "WSENNWNWEWWENNWNWNNWWSWWNENWEESNSSWENWW", "WNNWNWSSNSNWSNNNSSWNSEWEEWEENEWNEWE", "ESSWWSSSSESESSWWSEENSWSSESESS", "ENWWSESNSSNWWWNSSWENNNWWEN", "WWNEEWEEEWNWEWWWSNENWWWNEWSWNNS", "ENSNSEWWESSENWWNNWEEWWWEEEWWSESWNNENESSENSWN", "EWWSESSNESSNEEEENNESSSWWSSEEWSSEWW", "SESWWSNSSSEWSEEESEEWSWWNEN", "EEESESSSWSESWSNSNWWENSWNSSWWESN", "ENSSNENSENSWNWWSSSSENESEEWWNESSSWWWNW", "SEWSWNSEENENEEESSENESNSNSSSEESNSSNWNSNNS", "EEWSSESNSEWSSNESSWNSWEWEEWENN", "NEWWSEWEWEWWSSNWSSNNNEWEEEE", "ENWEWNWWNNNESESNWENWWSSESSSSWENWSNWSWNEEENSN", "NEESSEEESESNSSWWSEWEEWWSSSSNWWWSSEW", "SENNNNEENWWSESSWESWEWWWEWNSW", "SSNNWNNSEENNNSNWWNEWNNSNENEWNWNWWENNS", "NWWENNWNWSEEWENNEWWEWNSSENSSEWEESNESSNEE", "SWSWENENNENNENNNWWEEWWENSNSNEWSENSNNWSSSNWNWNNWEW", "WENEEWEWNWWWNSWNSNNNWEEESENNSSNWW", "WWEESEESSSEWEESSNSWNWNNNWSWWE", "NEWEENENNWNSSSSNWWSSENNSNEEESSWENSNESENWNEWNSEEESW", "NWNWSSENSEEWEWESNEESSEEWNNSNSENS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 988;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {".#.#.#..#..#...#.#....#........#.#..####..#", "...#...##.###...#...#.#..#.#.##..#........#", ".####.#####..#....#..#..##.#......#..#..#..", "..##.#..##..#......##.##.#.##.#..##.....#..", ".#.....##..#.##.....##..#..........#.#.#...", "..#.#####.#.##.####..###.....###...........", "##.#.........#.#...#...#####..#.##...###.#.", "#.#..#...##.................#.....#.#......", ".....##...#.#....#.#....##.#..#####.#..#.##", "....#..#.#.##..#...##....###..#......##.#.#", "..#...##....#...##....##...#.#.....#.#.....", ".##..##........###...###..#.#.#.#..#..#....", ".#.#....#..###...#Y...##..#.###.#.....#...#", "......##..#.###..#..#.#.#...##.#....#..##.#", "#.#....#...#..###...##..#.##...##.#.####...", "###.#.#..#....#..##.###.....#.##..#......#.", ".#......#.###..#.........###.....#..#.####.", "#.#.....#....#...#.........#.#..##..#...##.", ".###...#...#....##..#...#.###..#.#..##....#", "###.#.......#####....#.#...##...#.....#.#..", "...#...#..#.##.#.##...#.##....##........#..", "......######.#....#...#.#.###.#...#...#..##", "#..#.##.#.#.......#......#.#..........#....", ".###.....X.....###.....#...#...........##.#", "..#..##......##..##..#####....#..##........", "#.........#.#..#..##.....##....#...........", "..#..##...#..##...#.#..##.##......#........", "#..##..#....#.#....###.#...##............#.", "....##.#.#..#.#..##....#...#...#..#.#.#..##", ".......#...#........#.#.......##..#...##...", ".#.................#.....##...#..##....#...", "...#.#.#.#..###.#..###.......##..###..#....", "#...#.##..#..#.#.#.....##.#...#..#....#...#", "...#...####...........#....#..#..#.......#.", "#..........##..##.F....#.....#..#........##", "..#........#.##...#...#.#..##.#..#..#...#..", "....#....##....#.#...#........#...........#", ".......#........#....#....##.###..#....#...", "#...#...#...##..#..##...#....#.....#.......", "###..#.#..##.##......#.##..##......##.#..##", "###.####...##..#.#.....#..##...##..##...#..", "###.##..#.#...#.....#...##.####.....#...###", "##.......##.......#.......#.....##.#....#.#", "#....##.....#.....#...#........#...##...#..", "..#.#.............###.#........#..##..#.#.#", "##....#.##.#.....##...###..#.##..#.....#.#.", "...#....#..#...#........##.#..#.#..#..#.#..", "..#.#...........#...#...##...#.....#......#"};
    vector<string> commands = {"WESNSNWWNWNNENSWNNENNWSSWENW", "NWNEWENENSESSWENNSWWWWNWWWENWS", "WNWWNWWSESWSSNWNSSNSWNSSSNSNWSENSEWSEE", "NESNSSESNWESSSWSWEWENNEWENNENENWSNWSSWWESSWEW", "WESNSSEEWSESWSWESNEEESE", "NNEWNWENNNNNNEEESESEWSNNESSSSWNWESEE", "NSNENENSNSSNNSSENSWSSEWSE", "EWNWSSWENNSWEESWEESNNENNSNNSSNNNNWWSSWEN", "WNSNSWWNEWSWENENNESNNESNEESE", "NNENSEWEESNWNSNSEENNWNSWENWENSNWENEWSNEENEESSS", "ESEEESWEEEWEENEEENENENNENNSNENWENEEESEWWEENSENWW", "SWSWWSWWSESEENESEWWSESENSSEWNENSEEES", "WSWSSSWEWEWSSSSEWWSSNWESSEENWSESEESSEWSNEEENEWNSWW", "SEEENNSNNNNSWNWEWWNESEWNNSWSNNENESEWNSWSSEN", "SSWENNENEWNNSWNWWSNNWSNESSWNWNN", "NNWSEENNSESWWNWNEWNENSSSWWESWEWWNSWWN", "NNESWWENSWNEWEEWESEESW", "NNNWNNSNESESEWEWEEESSENSEEENE", "SNNSSWNEENWNNEENNWENNWWSWWSWESSW", "NWNEEWWWSNNENWWEWWWNSWSNNNNNWWSSWSNWE", "SWWSSSWESSWSSWSSWEWESWE", "WNWNWSSNNEENSWWWWWSSEWNNSWNWNENNENNWWEESEENE", "EWWWENNNEEWENSSNSSWSWNNNWNEEWWESSESWWSWWNNNNSNN", "ENNESNEWWWSSWNSNNNEEENN", "NEWSWSSWNWWWSWWNEENEEWWWWENSEEWWNNW", "NEWSSEENWWSWNESWENSESESSEEWSEW", "WENWSNENNENENEEEESWSWENSEWSSSSNWSWNWSNWWNW", "SWSEESNSEEWWSSEESESESNWEESESWNNSES", "EWNSNNESEENWW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"..#.#.#####..##.###.......#...#...##....#...##.#.", "..###..##....##........#..#....###....##.##..#.##", ".#####...###...##.......#...........##..#.##..#..", "...#........#.##...#....#.#..#...###.###...#....#", "#......#.....#...##....#........#....#......##.#.", "#...#.##...#.####..........#..#.#....#.......##.#", "...#.Y.#..#...#..#...#.....#......##.#.......#..#", "#.....#..#####......#..#.#.####....#...###.#.....", "..#....##...##.......#......##....#.##.###....#.F", "#..#.##.#.......#.##.....##..#......#....#.#...#.", ".##..######.###....####.##...#.##..#.##.##....#..", "..#..#...#..#....#..#.###.#.#.....#...#..#.#..#.#", ".#...........#..##.####....#.#..#...##..##.#....#", "##..#.#.......###..###.#..##.#.....#...####......", "..#...#.##..####.##.#.#......#......#.....#...#..", "..###....#.......##..#..#.#.....#.#.#...#........", ".#.#..##....#...##...#.#..#...##.#..#......##.###", ".##...#..#..##..##...#..#......#....#....#.......", "..##.#...#....#...#......#......#.#####..#.####.#", "..#.##.......#.#......##.#..#.###...####.#.#.....", "...#.#...#..###...##.###..##.##..###....#...#..##", "#...#.#...##.....#...#...###.###....#.#..##.#....", "..#.#.#.....#...##.....##.....#.#.....##.##..##..", "......##.####.....#......#.##..#.#..........#...#", ".#...#....#..#..#........#..#..#.#.#.#.#......#.#", "###.......##.##..#.#.##..#....#.....#.#..#..##.#.", ".##..#..#..#.#.##.#.#..#........#.#..##..###..#..", "...#...#...#..##.#....#...#...##...#...#.##.#..#.", "#.##.#..#......##.........#.......#....##.#..#...", ".##.......##.#.#####..####.......##.#...#.#.#.##.", "....#...........#.#.##.#...#....##.##...#.#.#.#.#", "............#....#.#.#.#....#....##...#....##..#.", ".......#.#.#...##.#.#.#...##...#.#.#.....##..####", "......#..#.#....#....#..#..#......#.#..###.###...", "#.#..#.........#...##......#.#..#.#.##..#..X....#", "##..#.....#.........#..#.#..###..#.#....#..#.#..#", "#...##........#..#....#.#...........#...#..#.....", ".....#.....###.#..#....#.......#.....#......##...", "#.......##......#.#.##......##....###..####..#..#", "#........##..###...#....#...#...##..#.....#....##", ".#.........#......##.#..###...##..###....#...#.##", ".##....#..#...#....#.##...###....#.......##..#...", "..#..#.##.#...##.....#.##..#...#..##..........#..", "......###..#...#.###.#.#.#..#..#.#.#...#.....#..#", "...####....#....#.......#.##.#.#...#.##..#.#...#.", "........##.........#..###....#....#.##.#......##.", "#....#.#....#..#..#..#.........#..#.#....###..##.", "#........#...........#..#.#.##..#....##.#....###.", "#..##.#.###....#.......#..#..#......#.#..##.#...#"};
    vector<string> commands = {"NENNSEWSWWEEWEWSSEENEWWEWSSSWNNWWNNNSWEWESNWWWNE", "NSWEESNSEWSEESWSEESEEESSSWWWWNSEWESNWENSSSWWWE", "SSSEENEEEWNWWWENWSSSSSWNESWNNESENENEWSSNWNSNESEW", "EEWNWWNESSSEWWSSENSSSEWNENWWNSSESSSENWSNWWNWNNWWN", "WSSSSESNSNWNNWSNESNNSENNSWSEENNEENSEEWWSWEEWW", "EESNNSWWEWWSSNWWSWSEWWEEWEESWSEWNSWNSENEEESSWSWS", "SEEEEWSSNSWESEEWENNNNESWNNWNNSWWENESNNWSNWWWWNW", "ENNESSSSWSWNESNWNENNSNSESWSEESNSSNSNNWNNEENWSEWE", "SENNEESENNEESESEWNSWSSESNWNSSWNEWEWSWSSNWNWSSEWN", "SNNESWENSWWSEENNEWENSWSSWEWNNWSWSESNSSSNNWNSSNES", "WNEEESEWWNNNNSNNSEEWENESNNSEEWNWWNNSNSNWNEEWSEEE", "NSWNEWEESSENWESESEEESESWNSWSWSNESENWWSWWSSEEW", "SNENSNEWSEENSSSSNWNEENWWNNSNSWWWNWNNSWESEWWNENSE", "WEENWNNSNWSWNEWEEEEWWNSSEESESENWNSNNESEWSEWWNNE", "ENSWWNSESNNNNWWNWNNSEWSSNNNEEESNWSEWNEWNEEWEEES", "SWEWNEEWEWSWENSEWSESSNWSSENSSSSESWNWNNNNSSWNSNE", "SSENNSEWSSWWEWSSWNWWNEESSESENENSWWSNESESWWEESWSWE", "WEWSESSWSEENWEESWNWSSENNWNEWWEWSENSNEWEWENWNEESNNE", "WENNNESNSESNSSNWSEWNWENNNNESSSWESWNWWNNNSSWWESNEN", "EEWEEWESEWSNSNEEWESSSWWWEEEEWESEWNSEWSWESWEEWNWWE", "SNNEWWSSWEWSESSEEESWESSWSSSSNWEWSWNNWSNSSNNNW", "WWWNWWSSSNEWWESSENSEWSWSNWNEENENNSESSENWSNSWSNSWE", "SNWNSEEWEESWENSSNENNWESSNSSNSNWSWESEWNSESEENSS", "WNSNSESWNSNSNSSESSNSWEWSWEWSEESSSWWWSNNNSWSEWW", "NSENSWSSEWWEWEWWNNNSNWESSNNSSNSSSSSENNSSWWWNSE", "SWEWEENNWNWEWNSSSEEENWWESSSENWNWNSSNWSWSWSWWEN", "EWWENNWWNESNWEWENEWNEWWENSEWWWSNEENSWNSNEESNWWSWEW", "WESENNNSESSNWNSEESENWWNNWSSESESNNNSSWEWWSNEEESESN", "SSNSESNESESWNENNEWESWWEEESSNSNESSESNSNNNSNSESSS", "SSNWWWWWWNWEEWNWSSNWSSWWEEEWEWEESWNEWSNWWSSSEWSE", "WWWEESWNWENNNEWSWNNWESWSNNEWSSWSWENEWEEWNNNNSSW", "WNWWSSWEEWSWSESSSNSWEWWWNNWSESEESNWSWWWSNWWSNN", "WNWWSENWWWNWEWNSSNNEEESNSNEENNWEENSNEEWSSNENS", "WENSWSNNWNWENEEWWSNWSWEEWNWSSENSESWSWSNSENEWWEESN", "SSNNWSEESWWWWEEWSESSSSNNNSNWWWNSSEEWSSSWNNEEWSEW", "ESNSSSWSSSWSEESSENWWSEWSSNEESSSESWENENENNSEWSW", "EWNWEESSEWNESENWSESWSNSNSSWEWWWEEWSESNSSSWSWW", "WNWEWSEEESSSSENSENSNESSNEWSNSEWEEWSESESNWNWSEEWENN", "SWWNEEWSWSNEEEEWWNWSEENEEEEENNEWNESWNSNSWEEWWWESE", "SWWWWWWEEESSNWSWNWSWEEEESWWESENENSSWNSNWWEWESE", "ENEENSEEENENWSEWESEWSESESSENEESSSENWWNSESEWWNWWE", "NSSENNESESSSWWNWEESENEWSWEWENWENNESENWNNWSWNWEWNN", "NESENNNSESSNWNNNESENNNNWNENNNSEWSENSWSWWENEENEN", "EENNWWWSESSENNESWENEWNNNESNNNSESWNSNSSWNWWESNWSSE", "WEENEWNENWWWNNEEWEENESSWSNENWSNEWWNSEEENNEEWW", "WNNNENWNSSEWSWWNWNWEENWEWNNSNNWEWSWENNENSENNNN", "EESNENNNNNNWWSWSWWEEEWSSEWNENWNWWWNNEWNWWNWNNE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1941;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {".....##.#...##.#.X...#......#...#..#...#.##..", ".#....##....#.##..#...#..#.#.........#.....#.", ".#...###.#...#...##.###...#..##....#..#......", "#....#..###.#...##...#.......#..##...#...#...", "..##...#...##.#.#..#.......##...#..###..#.#.#", ".#.#...#...#..###.##....#.....##.###..#....#.", "#.......#..#..#...##.#.#.##...##.#......#....", "#.....#....####..............#.......#....###", "...............#.##.#.###..#.##.#...#..#..###", "..#.#.......#...#...#..##...#.######.#.......", "....#.....#.#...#.....#...#....#....##....##.", "..#....#.###...##..#...####.#..##........#...", "......###.....#...######...#.#.#..#.......#..", ".##.....##......#........#..#..#####....#...#", ".....#.#....#..#.##..#.#.#...##.#...#....#.#.", "##....#..#.#.....#..#.##.#.......#..#.#.....#", ".#..#.#.#..##..#.##..##.....#.....###.#...#.#", "#.###.##.......#.#.....##..###......####.##..", "...#....##...###.........##.......#.##..##.##", "#.....##..#..#.#..##......#.##....###....##..", "....#.....#....##..#..#.#.#....#........#.#..", ".##.#.....#..##.##.#..##..#..#.###..#####..##", "..#...#.#......###.#....#.#.........#..#..###", "....F.##.####.##...#...#.#.#..#....#.#..#.##.", "#..##.##....##.......#.#......#.#....##.#...#", "...........#...#.##...........#..#....#.#...#", ".#....#.#.....##...#..#..###.##.#...#.......#", "...#....#....##...#.....##.##.#.#.#..#..#..##", "##.....#..#.#..#........#...#.#..#..#.#....#.", ".##.##.#..##.##..#..#..##.#.#....#.###.##..##", "##.#.#.#..##.....##.....#.#.#.....#...##.#...", "..#..#.........##...#.#..#.#..##.....####...#", "###..#..........#..##..#...##....#....##.#.#.", "#..#..##.#...##..........#...#.....#.#....#.#", ".......#.#.###....#..#.##....#.#..#..#...###.", ".#.....#....##....#.#......#.....###.#...##..", "..#..#.....#.#......##....##.#..#.#...#.##...", ".....#.#.#..##........#.....##....#..#..#..#.", "....#.....#....#....#..#......##....#..###...", "..#.##..#..#..#..#....#...#.....#.#....#..###", "##.#......##..#.......#.....####......#Y..#..", "#........##.#.....#....#..#...##..#....#...#.", "........#.##..####..##..#..#.#...#.#.....#...", "..#....#...........##..#.##.#..#.#..#........", "........#..#.........#..#.######..#...#..##.#"};
    vector<string> commands = {"ENENNESWEWSSNEEESNWSESNEWNNWE", "NSEWWSNSSEWNSSESNNNEWWWENNNEWS", "SNWESNNSESWWSEWWNSWWSNEWSNENNSNWSNWNSEWWNSWWSNSN", "NWNWSSSSSWENENSSWEWESWWEENSWSEESEWWNSS", "WNNWEWNNEEWSEENNEESEWSSEWNNNSEWNSNSSNESSENNNSWEW", "NSSSNSSSWNEENNWENENSENNWESENNSNSNWEWSNWWWSWWNW", "SSWSESWEWWSWESSWWESESESWSSWWWEW", "NSNWEWWEWNSWSSWESNWSWWSWWNNSSWESESSEWNWNWNWEWNENWN", "WWWSWNESWSESSSNSSWENENNSENSNS", "WEWENENEEENNNSWWSWNNNENSWSNN", "NSNENSSNEWSSWEWNWENWWSEENNEENWWNWNWEEESEEESNWWNSN", "ESESNWWNWNEWSNEENENEWNEEWNENWWSSNEEWSEWSSNEESWNSW", "EWSSWNSSESSSSSNNENNNSEEWWNSWWNSS", "SWNSSWEWWSNNENENNENWEENWSWNNSNWWNEEWES", "NESSWNSWNWWEWSNWSEEWESNEESSNEEE", "EEEWENEWNWNSENSNWWNSWEEWSENEWWSSENSNNENNESNNNWESN", "SWNENSWEEWNWSNSSNENNWENWSNN", "WNWWNNNEENNEESEEESWEESNNNNNN", "ESEWENEEENNWWWNWNNEWSWNWWWWSEEWSSENWNSNENE", "EEWENNNEWWNSNEENWWESNSENSENSWESSEEEWWNNSWNSSS", "EWWSENEESENWWENSESEWWNSENENS", "NENEESWEWNESWEWENEENNWSNNWNNNNSWNWEWS", "NWNEWNNESWESNNWWNSNWWSSNENWWNEEEEWWNWWSN", "EENSEENEEWSNWNSENNEEWSNNSSSESNNN", "EWNNWWENNWWSNENEWEWWENWWSSWENNWSNWWEN", "WSEWSNNESWSESSWEEWNWNSWNWSNNE", "WSNNWNSWWEWNWNWNNWNSNWNSSWN", "SNNSSWSENNESWSWNWSNSWNWEEWWNWWSSWWS", "NNESNWSSWNENSSWENSENSESNSSSWWWNEWSENNWW", "ESNNNWEESWNENNESWNSESENWSSNENEESEESSEESWNSNS", "NEEEENNSNSEEESNSWEWSNSNWNWNSWSEEEENEWWNWSW", "SWSNNWNWWESWWWNENWSWENSWNNNNENWWNNNSEENNWSWWENN", "ENSNSWENNWSNEENNSWNWNWEENWSWEWNEEWNS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 888;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"....#........#....#..#....#...#..#.....##..", "..........#.#....####......#..#.....##.#.#.", ".#..........#.#..##.#...#..#..##.#.......##", ".#.#..##...#...#.#...Y#.#...#...####......#", "#.#.##....##.####.#.##....#...#..###.#.#..#", "#.##...#..###.......#...#.....#..#.........", "#..#.##.#..#..#...##...........#....###...#", ".#........#........#..##.#..##.......#..#.#", ".....#...#.#.........#..#..###......#.#..##", "..#.....#..#..#..#.....#.##..............##", "####.#..#....#....######..#..#....###..#...", ".....#..#.....#.#....###...##.#.#...##.....", ".#..#........#.#.#.##...#.##.#.#.###....#.#", "....#...##..#.#.....#..........###....#....", "##.#..#.........#....#...#..#.#.#.......##.", "###.#.#.#....#.........#.##....#....#.#.##.", "##......#.###.#......#.###...#....#.....##.", ".......#.#....#.##..#.............###.....#", ".#..##.##.#.....#...#.....###..####..#.....", ".##......##....#..##..##.#.#.####...#...#..", "##.#..#......#.##.#..#..####...#..#.#.....#", "#..###...##......#.#......#..#...##.####..#", "......##....###..#...#........#.##.#..###..", "...#......#......#.##..###.......#...#..#..", "..#.#..#..####....###.#.#..#.....####X.....", "#..#.#..###.#...#.#.#.......#..#...#....#..", "...#......####...##.....##.#...##........#.", ".#...#.####...#..#.#.#.......#...#..#.##.##", "..#..##.....##....#...#.####..##.#.....##.#", "###..##...#..#.....##........##.#.#...#.#.#", ".#..#..##......##.#..#.#...#.#.........##..", ".#.###.........##....#.#..#.#.#.......###.#", "....#.#......#.#................#.##..##..#", "#...##......#..#.#...#.#.##.#.......####.##", "#.#.##....#..##.###.#..#.#.##...#..........", "..#.###.###..###.....#.#..##..#....#..#.#..", "#..#......#....#..##...#.....####..###.....", ".#.##......#...####....##.#....##....##...#", ".#....##.###.#...####.##.##.....#..........", "#...##.....###..###..#####..#...#.#.....###", "...#.####.....#.....#.#......##.#.##..##..#", "..#...#.....##..#.###..###.#.##.#..........", "..#.###..#...#.#..#...#.......###.###...#..", "..###.#..##...#..##...#....F.#..####...#.#.", "#.###.#....##....#.#..#..###..#..#.#..#...#"};
    vector<string> commands = {"NEWNWESSWENNNSEWNWWWNNEWSNWNENWWNEEEWSENNES", "NENENSEESSESNEESSWSSNWESEESNWSSSSSENNSSE", "EESNENSNWSNNWEWENNEEEWEESSNESWSEWSENWWW", "ENNEEENWENNNNNNSEEWEWWSEWENESSSWSWSSENSWWES", "EEWWWWEWSWESENSWSSNEESNNSSNESWWWSNNWWWWWWESN", "WEEWNWWESWEWESNESSWEWSEWWESNWWSEWNNSWWNNNSSNE", "NNEESEWENWNNWWSNNENNNNNNSNWWNEWSWWWNEEWNSNW", "ENESWWSWNNSEWEWESESENWWNENESSSSEENNWENW", "NNWSSSSWNEWWNNNSEWENSWNWWNWWNNEWNSWESWSESWENWWENWN", "WNNNNWESNESWWWEEENNESSESNNNENEWNSSSWWNNSS", "SNNNNSNSNWWSEWWSEEEWWEWNSWNNNEWWWSWWESNEENEWEN", "ESSSWEWNNWSSENENSSEEWNSWWSNSWESWNNWEWEWSWEESWNNNN", "ESEWNEWWNNSNNSWNSESEESENWENNNSWNWESWSWSEE", "EWEEWENNNEEESSWWSNSEWWNEESSNEWSENWSWNNWNNSE", "EENNSENSNSSEWNWESWNWSSSSEWNWNWSEWWWWEWWSWEWWEWES", "NSSNWNSNESEEWNNNWSNEEENENNESSWWNSNESWWEEEEENSNN", "SEWESSWWWESSSWEWESWWNWWNSEWSSNSEWNWNENSSWEWENWS", "NNWSSSNESEENNWSSEWESSESNEENNWEEENWSWNWSNSSSWESEN", "SNSSNENWWSNWWNSWSWWESWENNENEWSSWSEWSSNSEESSEESWWEE", "EESESNSWESSNEEEENNNNWSWSESEESNSNSSWEWSSNNWN", "EEESNWENENSEENWWWSSNSSNESEWEWWNWSENWSENEESWEENNS", "SSWSNSENWENENWNENNNENENESNWSNNSNENNNSWWEN", "EWWSWENEWSSWESEWWNWESESEWSSWWWENSEEEENWWWESWEENNS", "SESNNNEWNWWNSEESWESNEENWWWNENSSEESEEWESEEWEWESENS", "SWEWENESNWWEESSWSSNSNSSSENNSWWSEESSSNSSSSWSN", "ESEWWENENSEWENWWSWEWEESWNWNWWNSEESWSWEENSWNSSEWNWS", "EWEESEWWNNNSNNSWWWNNNNEWEEEEEENWWWNSNWSNS", "SNWWENSEEEENSNWNEWSEWWSEEEWNSEWWWWSNESWN", "EWSWNSSNWSEEEWWNWWNNENNNENEESSWWSEWNWS", "NNNSWNEENNSEWNNSESNNNEWSNWSEWEWNESENEEEWWNE", "SSEEEENWEESSENWEEEENEENWNENSEEEWWSSSEENENENWNNESEW", "ENNENNWSEWWNNWSENSENSNWNESWESNWEWNWSENWSWSN", "WWSEESSSWNNWNWWNSWEENSNESWSEENESEEWSWSWEWWWE", "SWNEWESESNWEWWNSEEWWSSNSWSSEWSENSWSSWWN", "EWSNNEENEWWSNENWWWWSNNWNNESWNNEWWSSESNWEWSSENS", "SWWNWSEWWNNNEENWNWEWEENSNWNEWWSSWSWWWEESSSS", "SSWEEWNNENSWNEWWWENNSWSSWENNNWSNNSNNSEE", "WWNEESEEWSNSEWSEEWWNNWWWSNENEESNSSENNWNWE", "WESENSNEWEENSENEEESEWSSWSNNSWWWESSWEEEWESSSSWEEN", "ENNWNSNESSNEWNSSNESWNSENWEWEEEWNNSNESENNSSEEENS", "NNESWEWSEWEEEEEEENSWEWSWSSESWENNESEESNNEWWWW", "WSWWESEESSSWWSEEWSWSSNEWWNWENEENNWESSENEWSEWS", "ESWESWE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1029;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"#.##.....#......###...##.....#.....##.#....##", "..#..........#..#.#.#.#..#...#...#.#.#....##.", "....##.#.#..#.#..#......###.#..###.#.##......", ".#.#.#..#.....#........#...#..#..##.#.X.#..##", ".##.##.##.###.#....#.#......#.#...##.##....#.", "#..#...##.#..#.#.#...#...#.......#.#..#......", "..#.#...##.###....###.....##......#####.##.#.", ".#.#.#.#..#...#.#...........#.#..#..#....#...", "..#..#...#####........#.....#.#....#...#..###", "#.###.....#..#.....#...#.#...#.....##.##.#.#.", ".......#..#.##......#...##.#.....###...###...", "#.#...............###.#...####.###....#......", ".##..##.##....#..#..#..#....##..#..##...###..", "#.......#.#.........#...#....#....#.......#..", ".##................####............#.#..#....", "##..#...##.....#.......##.####......####.#...", "..#...###...#.#..#.Y#.#....##...#....#...#..#", ".....#.....#...##........#...#..##.#.#...F...", "#.......##.....#..#.#.#..............#...#.#.", ".#.....##...#.###.....#..#...#.#..###.....##.", "#..#..##...#.#......#.#...##.#..#......#..###", "..###...#.###....##.##.###..#.#.##..#..#.##.#", "#.#..#.#........#..#.##....#####..#.###.##.#.", "..#.#................#..##...#.#..##.##.#..##", "#...##.##......#.#.....##.##..#..###.##.#....", ".#.######.###.#.....##.....####.###.......##.", "#.##..#.#......##.#..##.#...#..###...#####.#.", "..#...##.###.###.#.#..#.##....#.....#...#.#..", "##...#..##....#....#.#...##...#.....#.......#", "#.####......#........##.......#.....#..#.#...", ".....##.#...#.....#.##......#.#....#...#..#..", "....#....#..##.###.#.##..###.............###.", "..#.#...##....#......#...#....#...#.#.####...", "#.............##..####...........##...#.#.###", "...#..#..###.#.....#####..##......#..#.#.....", "...#..##.....##.....#..##..#..##..###....##..", ".#.#..#.......##.......#.#....#..#....#......", "####..#......##..#...........##...#..#.....#.", "#...#...#...#.####...####.####.#..#####.#..##", "..#.#.......##....#....#.#.........#......#.#", "...###.#....#.....##...#....#.....#.##.......", ".#...#.###..##..#.....#.....##..#..##.#...#..", "#.####.#.....##.........#.#.#......#....#....", "#..####........#.....##.#..##..#..##..##..#..", "...##.####.....##.##..##.###...##..#.#..#...."};
    vector<string> commands = {"SNEWSWNEEEEEEWSSNSEWWSSSWNEWEEWENEN", "EWENNNWNWWSENESNNNWNWWSNNN", "SEWEWENWENWWNESSWSWNNNSSSNENEWWSEWSEENSN", "WNSNNSWESWSWSSWSWSNWEWNENENNSWWNNNENEWEWNSENWNEEE", "SESESENNEEEWEWNNESNENSNE", "EEENNENSNNESWSESENNENNSSESSW", "NSWNNSENNNWWSSESSEESSSSWNNWSSN", "SWEWSSEWWSWWSSNSWSSNWWNSWNNSWWN", "SSNEEWNSENSENSSEEESESNNNWNEEWENSWEENNW", "EWSENNNWSWWWSNNWENNNWENWNWSENNEEEWEW", "SEENNNNNNSSENEWESWEENSSSEWNSNSWNWEEESNNE", "EWSSEEWWEWSWSSSEENWSNNEESEEWNN", "ENSSWENEWEWEWEWNEEESSSWWSSEENSSEESESWNSESWSWEWNN", "WWNSWNNNWSNENSNEEESNSWWEWEESWNEESEWEWSWNNSE", "WSEESSSWSEWWNWSEWWENNNNEEEEEWWNENNWNEWESWN", "ESNNNNEENWWESWWENENSWESW", "ENNWEEEWEEESSWSSESSSSEEEES", "SSESWWENNNNEESSNEESSSEESESESSNSSNENEEEWNENWEE", "NWWSWSSNESNEENWNENSENSWNNEEWSEEEENESWNSSWSNSWWNNNN", "ESEEWSSEESWEWWWSNENSWEEENWEEE", "NEEENNNNNSSNSNESWENSEESWNNWSEWNWESSWN", "NSEESNWWSSWNNENEWSWNWEEWESSENWWNNWENSEN", "ENSNEEWENNSWESNENSNENWNEESNNNNSWWW", "SENEWWSSNWWSWWWSSNNNSSWESSWW", "NNNNWSSEWNESNWEWNEWSSWWSSNENSNSENSNEEENSSEWNNNNNNS", "NSNSENNSSEENSWNSWSENSSENENNSEWNWWNENWNNENSNW", "NESWSEEWSNWSSNWSN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"..#..#..#.#........#..#.#.##.#...##..#..#.##...", "...##..##...#.#..#.##.....#..#..#.....#..#...#.", "..##..#.#####..#.##.#....#..#....#..#...#.#....", "###..#...###..#.....#...##..####.##..####...#..", "..##.#...#..#.##..#....#.......#.##...#.#.##...", "#..#......#..#..#....#..#.##.#...#.....#..#....", "..##...###..#..##..#.##.........##.#...#.#.#.#.", "#.##..#..#......#.#..#....#.....#.##........#..", ".........#..##....#...##..#.#..##..#.#...#..#..", "...##....#..#.#...##...###..#...#.#..###...#...", "....#.#...##..#.###.....#....##..#.#.#.#.......", "..#..#..#.....##.#.######...#.##...#...#....##.", "##...#.....#..##.##.#...#.......#..#..##...#.##", "...#.#......##....#.####.....#..##......#.##..#", "...#..##...#.#...##....###.#...#.........##....", "..#.#.#........#...#....#####.#..#........#..#.", "#.#....##........#..#...........#...#........#.", "#.....#.#.....#...........#...#..#...#...#....#", ".#..###.....#..#.###.#..##.........#..#.##....#", "##.......#..##.....#..#..#..#..........##......", ".###.####...##.....#......#......#.##......#...", "##..##..##.#..#.###..##.......######........#..", "##........##......##........#..#..#.#.....#.#..", "...F...#...#..#...#...#....####.###..##...##.#.", ".##..###.#..#...............###.#.#...#...##.##", "....#.##..#..#.#..#..#......##.####.......#..##", "##.#...#.##......#.##.#....##.###......#.......", "##.....####.#..#..#.#..#...#.....#.###........#", "###.#.X..#..#.#..........##.....#..#.........#.", "..#.#.....#...................###.#....#..#....", ".#.............#....#.#.....##........#...##..#", "...#.#...#...#....#.....#..#.#.#..##......#.###", "........####.#...###.......#.#.###.#..#..##....", "..#.....##..#..###..#.###........#.###.........", "##....##....###.#.###...#...##......#.........#", ".#.#..#.....#.###.....#.#...#.#...##........#..", "#..#..#.#...#.#....##....#..#..#.#...#.##..##..", "#.#....#..#####.##.#.#..#.#...##...#....#..##.#", "#......###.#.....#.#....#..####..##..##.#..#.#.", "#....#........#..Y......#....#...#.##.....#.##.", "#....#...#..#.#.#..#.......#..#.#.#####.####.#.", "##.#.....#.#......#.#....##......##.###..#..#.."};
    vector<string> commands = {"WENNWNEWESNNNSWNSWEWSEEEWSNNWSNWSWESWWNSE", "WWWSWNEWWWNWWENSWNSWSNEWSNESSSSWWSWENEWSNNESNES", "SWEEWWSESWNSNNNNSESNNWNWNNWNNSNESNEEWWWNSSS", "SSESNSSNNNSWENEEWESEWSWWNNWNSESNESESSEEEEWSSNSWSN", "WSENNSWEENSEWNEWESEWNSNSEEESSSSEWNWSWESSESEWWSNNEE", "SSEESNWNEWSEWWEENNWWNSENWEWSEENWENN", "ESEEWNWSNEWNEEESNENNSEEESEWNWSWESSS", "NESWEESSNESWEWSESNENEESWEWNWNNNNNEWNWENENSSNW", "NWSSSEESEWEESSNNWENWNENSSENESWWSSEESNSSSWENNNNN", "WNSEEEWSEEEWWEWNESWNWSENSSSESESSEWSWSSEEWENSSS", "WEENNSENWWSENNESSWSSSNWNENESEWSNWEWNWNSNNSWNWSSEEN", "SSWWWEEEEEESEWSSENNEEESNWSESSSEESEENWSSNSWNWN", "NNENNESEWSWWEEWEWSSEENEWNNWEWENWNNNNNEEENNENESNESW", "NEEWNNNNWWNNNEEEESEEESNESWEWSSEWENE", "WSSEEENNWWWNENENWEEWNWWWENWWWSSNWEEWNNESNENESWSS", "NWNSNESEWEENSNNENNSEWESSENNESNNEWNSNSSWWSSEWE", "SNSNWNENWEWSSSSSENNESWSSESNSNWNWENWNSWNSEENW", "NSEEWWEWNNSSEWWNWNWSWWEWSEWENSWSWNEWNSE", "NEWWESWSWSWESEWENNWEWEWSESNEWNNWNNNNNWNWNWENEW", "WWWNWSNNSESSSSWSWNESENNSEWWWNWWWWSW", "WSSSWSSWSNSEENSEEESSWNNEWNWESSWSNNNNSWSNW", "EWESNESWNSSESEWENWNNNWSESNSENSWSSSEE", "NSSWEWENSWEWWEEENSWSEENSWNWNWESSNSEWNEEESEWWNNNN", "SNNSEEWENENNSENNENSSWESNSNNEWWSEWENSW", "NEWEENEENWWNWEEESWNSWNNWSWSNESENWWSWWSWS", "ENEEWSNSWSSEWSNSSSSNWNEESEWWWEEEEWWWNWESSSE", "WWWWNENSEWEENWNNNWWWSWWSENNEWWWNSNENESENWNSNNEW", "SWSEWWNSSSWENWWNWEENWSWWWNWSSEWSWSNEEWSSWNE", "NENEWEWESEESSWESEEEWEWSWEWWNEESSNWSSENSNEWNNEN", "SENWNSEEESSNESSEWNSNSSWNNSSSESWWENESSWNNESWES", "SNWSEWWNSWSWEWEWSESSWESNEEWNNNWESSENNWNEWW", "WWWSWWWSNNWWWNWWWWSWWSNSSESSSNNSNWNNNW", "SWNWENNNEENSWESWNWWSENWWWESSESWEESSWESNSNSN", "EESWSSNWSWSSSWSENSWNSNSNSNNNEWWWWWNNEWWSSWEW", "SESSWNSSSESWNSNENWENWNSNESESNNNWWWWNWSWSWNEWW", "SSEENSEWSWEENWWESWWESSNWSWSNWNNWWWESNENNSWSEWWWSE", "NNENWSWEESNSNESESESSENEWSEENSSWNESWNNNNEWNNNS", "SNEEEEWWEWESSSSNSSNNNNEWWNWNNNENWESEESNNEWWNW", "NWENEWNNSSNNWNSSEEWNEWNNSESWENNWWNNSE", "NWEWNENENWNEEWSWNWNWWWSSSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1321;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"...##.........##.....####...#..#....#.##..#.#..#..", "##..#...#......###......#..##.........#.##.#..##..", ".....#.....####......##....#.F.##.#.##.#..#.#.##..", "####.##..##......#.##..##...#.###.....#.......##..", ".##.#...#..#.##......#...........#..##.##...#...#.", "#.......#.#..#.#...#..##.#.###.#..###...##.#.#...#", "..###...##.#..#.##....#..#..#.#.......#.#.#.#.....", "...#..#.#..##.##....#.#......#.##.###..#.#......#.", "...#..#..##...#..............##....##......#......", "####.###.........#.....#.####.#.........#......#..", "....#..###............##..####..#.#..##.##.#.##...", "##.#.###..................#.#.#............#.#.#..", "..#.###.....#....#...........#.#.#......X.#...###.", ".#..#....#.#..##...##..#....#..#......#...##...#.#", "...#..#...#...##.#..........#.#....#....#.##.##...", ".#..#.#..#......#.##....#.#.#.#.##.##....###....##", "..#..#..#.#........#.######.#..##.###........##..#", ".#..#...#...#....#.#.#..##..#.....##..##.#.#.#..#.", ".......#........#..........#.###.#..#.##.##.....#.", "#.....#.#............Y..#..#####.##....#..#....#..", "...#.#...#........#.#...##.#.#....#..#.#......#.#.", "..##........#.#....#........##.#.#..##.####....#.#", "##.####....#.#.#.#................##...#....##.#..", ".........##....##..##..#..###....##..#.#....#.##.#", "#....###..##.#..#.##...#..##..............##.#####", "..###..#.....#....##..###.#.....##..#.....##.##.#.", "##...##..##.##.#.#...##..#...#....#...##..#..#.#.#", "..#......###.....##.....#...#.#.#..#........###.#.", "..##..#..#.....#.....##.#..#.#.#....#..##...#.....", ".#..#.#....#...#..#..............#...#.#.#....#.#.", "..####..##..#.#..#........#....#..##..#.###.#.....", "..#.....#..##.#....#..##.#...#.#.........##....#.#", "...#.#..####.....#...##.#...#.#....##....#..#.##..", "..##.#.###...##.....#..##..#.....#......##..###...", "..####..##.#.####....#..##.##.........#....#....#.", "..#.#..#.#..##..#...........####..#....#..##......", "........##...#.###.#.....#....##.#...#.#....#..#..", "##..#..##.#.#......#....##...........#...##.#....#", "####....#..##.............#.####.........##.......", "...#...#..#####.#..####..#..##...##.....#...##.#.#", ".......#..##...#....#.#..#.#.#.#..#.....#..#......", "#....#....##.........#.....#...#..##.#...##...##.."};
    vector<string> commands = {"WSSSWENSENSWEESSWWESWSNNSWNSEENWEWWSNENEEENWE", "ESSNWSNNESWWSNNWWEESWNNWNWSNWWWWWESEWENSWSSWSNESN", "WWWENSSESWNNEENSSESSSSWSSSSWEESWSEEENNW", "ESEESWSWWEWNSWNWWSESESWWEWWNSWWESWEN", "NSNNEESSNSNNSSWWESWNSSSSSSWSWWNSWWEWSNNES", "NSWSWESSSWSEEEWNEENSSENSNWWSSWENWEEWW", "WWNENNSWWSWNSWWNWWWESNNSEEEESEWESESSWNSSNNNENE", "WENWEWWSSNENEWNNWWNSWSWSNWWSWNNNSNWS", "EWWSWNEWNESWSNWNNENNWNENSSSSWSEWEWNNWWSEWSNW", "WNENSNEWNNNWWNSNNNEEENSWSESESSWNWSSENEES", "SNESWSSNEENWNEEWNENWSSNWSENEEESSEENN", "ESEESSWSESSSNSSEESEWSENSSWSWSSENSWEEWSWEN", "NEWENENNWENEEESSEESEWENNEENNEENSESEEENESESWSEESNNN", "ENSESEEWEWEESEEWWSNENWEENWNENEWEWNWEWSENNNNNNENE", "SEWWNSWESWNSNESSNNNNNWNESSNEESSNEWNWWSSEWSEWSEES", "SWWEENSSNNEWSSSNNSSSEEWSESEWENSESWWSN", "NEEEESEESNSWNEEWENEENEENWNESEENNWNWNNNNESSWENNSNNN", "ENSNENNENNEESEWNNSEEWWSSEWWSWWSSSSWEWNSSSSWNE", "SWSWSWSWENNEWEWSSNWSNNWSSENEWENWSEWNSWWWWNSNN", "SEESENSSEWEENNSWESSSSENWNWSSSESNNWSN", "SWSEESEESSENWSSNSWWEEENWNWNNEWSWEENNESS", "ESESESENNSSNEEEEWENWSWSSWWNSSWWWWWWN", "SESSSEWSNSSESNSENNSWWWWSENNESSWSSWSNWNWESEEW", "ENSSEWSSEWNSNSSSNESSNWSWWNSSWSWNWSNWSWSNN", "ESSNNSENSSSSSWEWEEEWENSSSNEWEEWSWSNSWNEWW", "SWNWWNEWSSNEEEEESWWENSESSNSWEEEEEWWENSSEWEEESNES", "EWSWESSSSNSENNNSENWEENSEEWWWWWEESWESN", "SSEENNSSSENSENWNENNNESNNNENENEESSSSSNSEENNN", "NNESNENWSEEWESNNWWNEWNSENWWSSNEEEEWWNNW", "ENWNNENNNWESEEEENENEESNSEENNSSNNENWWESS", "WWWWSENSNENNENEEEWENNENNWNWNNENWSNWSN", "NNSWWSWEWSNSSEWNNNNSWWSENEWEWNENSNWNSNWESNNSN", "WWNNSSENWNSNNWSNWSNSNEWWWNSSEEWESEEEWWWWEESSN", "WESSWNNSSSENSNWNSSNNNWEWNNNESSESEWEEW", "SENNENWEWSWSEESSESESWNSWESESNEWWNNSSWESSWSNESSWNES", "NESSENSSENNWWWSENSENNSENNESWSSEEWSESNSSEEWENNW", "NNNSWEENWWNNSNNWWEWSEESNNNSENNNWENNW", "WWSNWWSWWESESENNNNSNNNESNNSENENENENNNS", "NESNNENEWSNEEWEWWWWSWNNNENSWEENWEWWNEWWSNSNENWSWEN", "WNNWEWSWSNEWSNNSEWWNENWSEEWSWNENSWWWNW", "SSEWNSSWNNNENNNSENESNSWSNNNWNNENNSNNWNWSWSWENNNEE", "SNENSWSNWSNENNEENNEEESNENSEEEEEESSNSSWENSEWWNWSSEN", "EEEEWNENN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 660;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"#......###....#.#.###.##.#.#.......##......#.#.", "###....#.##.#.....##.....##.#.###.##..#........", ".......#.#......#..........#..#..#.##.#.#.#...#", "........##..##..#....##.....###.....##...#####.", "..#.......#..#.##.##.##....#..#.#....#.#...#.#.", ".....#...###.....#...#.##.#..#..#.#..##..##...#", "......###.#..#.#....#.##.#..#..#....#.....#.##.", ".##.#....#..##...#...#.#....###....#......#.###", "#..#.#..####...##...##...####...#.....#..#.#...", "...#.#..#.##X...##..##..#.....#..#.###.........", "###...#.####....#....##.#.###......#..#...##.#.", "#...#..#..#.....#..###...#....#.##.###...#..##.", "..#..#.#...#....#...#.#..#..#....###....###.#.#", "...#.#....#.....#........#.#....#.....#.##.....", "..#.......###.#####..##...##.#....##...##....#.", "##...#.#..#.....#.#.....#....#.#.#......#....#.", ".##.....#.#.##..#..#.#####...#......#....#....#", ".#.#...#...#...######.#......Y.#..#...#.#.##..#", "..###......#.#....#...#...#####..##....#.......", "...#....#...#...#..#.#.##..###.#...........#.#.", "....##...#.#.#.#.#F....###..#........#.....#...", ".#..#...#.#..##......#..#..........#...#.###...", "##.............#.........##.....###.....#.#.##.", "..#..##...#.##.#..#.....#.##..##.#...#..#.#...#", "...#....###.#.....#..#..###.#.....##.#.....#.#.", "......#...#..#.#...##.#........#.##..#.#.......", "....#....#.#....#..#....#...#...........###...#", ".....#.....#..#..###.##.........##...##.##...#.", "#..##.#.....#.#.....#.#....#.#.##..#...#.#.####", "...#.........#..#...#..###....#...#..#.#.#.#...", "....###......##.#.....................###.#....", "...#...##........#.#.#.####..##..###..#........", "##....#......##........##.#......#...#.#......#", "#.#..#....#.#.#....#.....##...##..#.###...#....", "..#...#..#...#...#....####....###.#..#...#..###", "##.....##...#.#...#...#....#......##.##.#.###..", "..#....##............#.##.#.#.....###...#...#..", "..#......#####..###.#..#######..#..#.##....#.##", "...#.#...#..#..###..#.#.....#..#...##...#..#...", "....##...#.#.#..###..#..###.....##.#..###.##.##", "......###....#.##.#.#...#.##.#..#...##..#......", "##.#.##...#.....#.###..#..##.#......#..#...##..", "###..#...#..##...#....#.....#....#..#.#..##....", ".#.#....#....#.#....##.#...####.#...##..#.##.##", ".............#...#....#.###.##..#...#...#..####"};
    vector<string> commands = {"EEWWEEENWNEWWWENSNSWWWNEWNEWEENENSESWNSWWEW", "NEEWSNWNESESNNSWSEWSSWNWWWNSSWNSNNESNWSESNE", "ESWWWENNWNSNWWSWEESSEENWWSNNNNSEENES", "ENESWWSNSSWSSEENSSWSWSEESEEEWNNNESSWSSWSWSSWEEES", "NEWEEEWWSNEWWWWEWWESWSSWSWNSEESWENE", "SNWWSNSEEWNEEENWSWNNEWNWWSSEESSNSWWWSWNN", "WNSWSNWSNSSENNSWWNWNNSNENEEWWNNWENSNSNWWWWNNENS", "WEWWWSSWSEWNWSESNSWNNNESSWEENWESENSNN", "WNNSWNWNSSWESEEEENWWESSEEWSSNEWNNSENEEE", "WSESEEEWNWSWSWNENWNWEESNNSWSWESSWNNEN", "WENEWSSNNEESEWWSSSSSSNNWWEWEEWENSSEWEWSEWNWEWES", "ESWESEWESSSNEESESENWESESWWSNNWESNSWESSN", "NSNNWEWWWNNENEWSWWEEWWESENSNWNWSSNSSNNENWSSE", "SNSNEEEWEEWSWSNNSWENEWSNWSSEEWEESSE", "SWNNEEEESNENEWEWSESNEWNNNNENESNENSSWSSEWE", "NSSEWNWWEESSWSSSSSSSSWSNENSNSNEESSSEWN", "EEWSEWWWEWWWENEEWWEENSNWENNESSNSWNSWWEWEWSSSNSSEEE", "NENWESSEWNSNNSWSNSSNSESENSEWSNWENSEESE", "SNNSNSWSNNSSWNWESWSNNWWSESNENNNSNWSESWES", "WSWEEWNNEWNENNSNNWWSNESNWESEWEEENWWW", "SWSESEENSSENENWSSESNNEESWENWESENEEEWEE", "NEWWEENSNNWWWEWEWWEESWEENSNSENENNSSNSNWEWENNENWW", "NENESWEWENNEESNSEEEEWESSNWWESSWNNSNESNSSNWNNSSWE", "NSESWEWEEEENNNWESESNSSSSSESNWENENNSW", "WEWEEWEENWSSWNWWEEWWWESNNESSWEENWNNEWEWNEEN", "WWEENSNENSNWESESSWNEWSSENESWNEEEESSWWNSNNSWSN", "ENNESWWEWNEESNWWSWNSEWEENWNNWSWWSESSWSSWSNWWEWSSWS", "ENSWENWSEWNWWSNSSNWWSNWWSWEWESWWWWWS", "WNEEENWENSSSNWWWEESENNENSWWWNSNESNSWWWEWNNS", "SWEWWSESSWENSESEWWNSWSNEWSSWSWNWSNSSENEENWNSWSWNE", "SSSWWEWNWNNWNWENSENNWSENEESNEESESEESSNWWENENEWWW", "NNSWNNWWENSWWNSWNWWNNNSNESNEWSESSENWENNSWSESN", "WNWSSEEENNNSWENSSSEEWSNWEWEESNEEWSSWWSSE", "ESSWWENNNSNNWSSSWSNNNNSEWWESNSENESEESWSSNWSWNSW", "SWEENWENWNWWWNSENWNWEEEESNWESWENEEENNNSWNEWWNWSNEN", "WENNSEEWWWENSWSNNWSSWSWNSSSSENSNSWEWWNSE", "WSESWNNNWWEWESWNENWENSWNENSNEEWSNSNSEWNE", "SNESWWSNWNEWNWWENESNWNWNNWWEESNENWEEEWESSSNW", "SESNSEWSESNWWWSEEEENSSWEWSENESWSWSSESWS", "ESEWWNSWSSSWSNWNNNWSWNNWWSENENSNWEN", "NSSSSWENWSWWEWWSNSEWWWWSNWENESWSSWSNWSNWEESNSWNWN", "SSNN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1074;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"....#...#..#.#........#.#..##......#.#.##......", ".#....###..#...###.#.#.##...#..#.#.#.#....#.#..", ".........#...#.#...##.....#....##.##.......##..", ".#.....##..#.##.#..........#.###.#..#....##...#", ".######....#....#........#..#..#..#..#.#..##.#.", "..#.....###....####.##.#....#.#.......#X......#", ".#.#..##.....#.#..#...#.......##..####.#.#....#", "##.#...#.#..#..###......###..#.....#.#....#....", "..##.#.#...#.#..##.###..##...#...#.......######", ".Y...#.#.....#...#....#......#...#.#.###..#..#.", "#.#..#.#.#....##.##.#...............###.....#..", "#.#..#.##.#.##..#.#.##..#....#.....#...#.....#.", "#.#.#.#.......#..#......##.........#..#.#.#..##", "#..#...#.......#...#...#....##...#..........#..", "...##..#........##..#..#.##..#.#.........##..#.", "...###.#....#...###...#..#.#..##.#.#..#..##....", "......#.#.#....#..#........#.#.##.......##.....", ".....##...#..###....#.#..#..#..#.#.###..##..#..", "........#......###.##.......#.###..##.##..##...", ".#.#.#..#...#.#....#...#....#....#.....#.#.#.##", "#.#.##.....#....#.##.##..#.##...###....#.......", "#........#.#.......##...#.#.##..####....#...#.#", "#..#..#.....#.##..###....#...#...##....#.......", "...#......##.....##.#....###....#...#......#...", "###.#....#####....##..##.##...#..#..##......##.", ".#....#..####....###.#.###.#......#..##...#.#..", "#..........#...#....##........#.#.....##...##..", "#...#..#.#.#....#..#.....#..#.#..#....#....#...", "..###...#...##.....#.....##..##.###....#.#..#..", ".#..##...##..#.#........###.#....###.#..#.#....", ".#.#..#......#.#...#.#......##.#...##..##.....#", "......##..##....##.#...##.#....#..##........#..", ".#..#####....#...........#......#......########", "....#...#.....#...###...#....#.#.#.#.......#.#.", "..#.###.#...#...........#.###....#.#..#..#..##.", "##......##.....#...####..#..##...#..#..#..#..#.", "##...#.##..#....#....#..#.###...####...#..##.#.", "###..#......###..#..#...#..#.#.#..#.#..#.......", "##.##.....#####..#.####...#......#....#.#...#..", ".##.#.....#..#..##........#....#...........#...", "..##.#..##...#...##.###.#.#..#.....##.###.##.##", "####.#.#.##.......##.#..#..###.....#...#.....#.", "###......##.#.....#...#.###....#....F........##", "......##......#...#............#.....#..#..###.", "#..#.............##...##...#...##.....#..#..#.#", "#....#.##........##.#.#...####........#..#....#"};
    vector<string> commands = {"SWSSSNSSSWSESNESWNSWWNEWSEENNEEEE", "WNEEWSNNWENSWEEE", "SNNSNENEWEEES", "SWNNSNWSEWEWNNNEESNWS", "NNEENSSEESESNSE", "SNWWWSWWSWSWNEES", "WNEWNWWNNNNWWSWWNEEENNNNNESNESSENE", "SNWWNNNEEEESNNNWWWESWWWWEWNSNSNWSWENWEESWSNSESE", "SESENNNWWEENSSWWWSESS", "EWSSWWNSWWWNSS", "EEESSSSWWSSEWSNSEEEWNNSW", "EWNSSSEEEENSSSNNNSSWEENNNNEESWSNWNENNWNNSWS", "WENWWSSENNNEEWNWWNNNNESNENNE", "WWWNESENWSNNESSWWWESESEEWSESWEENWNEEENENEENESSSESE", "SESSWSENEESWWESE", "NNWSSSSESENNESWESNNNNSNNWNWWENE", "SENESENNSSEWESSENSEEWSESSS", "ESSWESEWEEENNWNENW", "NNNNNEEENENNWNSNWSNEWNNSNSWENWNNEENNNSNNNE", "NSWNWWSNNSNEWNWWENNEWENNENEEENSWNWENSEEE", "WWEEWNNWSENENNNWNENWSNEWE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"#....#................#....#..##..#........", "..#.###..##.#.##....#..#.###...#.#...#.###.", "#.....#.#..#.###.##.#..#...##.###...##..#.#", "..#..#.#.....#....#.....#........#......#..", "......##...##....#.....#.#.###...########..", ".##..####..#....#..Y#..#.#.#.......#....#.#", ".#..###.#...#....#..#..##...#...#.#....###.", "............#..................##.#....#...", "##..........##.#....#.#.##........#...#....", ".#.#..####.#..###.#.###.#.###.#.##..###....", "..##..#..#..##...##...#..#.###.....#.##.#.#", ".#.......#.##.......###....#...##.#...###..", ".#.#.....##......#...##.....#.#...#......##", "##.#..#............#..#..#.##...#.....#....", "..#..#....#.##...#...#.......##.#...#.....#", "..#..#.#.#...##..#..#..###........##....#.#", ".##..#####....#..#..#.##..#..#.##..##......", "..####..##..#.##.#..#.....#.##...##..###...", "#.......#.......#....#..#...##.#...#..##...", "....#.#..#.......#..#..........###.......#.", "..#..#......##.#.#.......##.#.##...##.#....", "#...##..............#...###..####...##.....", "#.#.....#.............#..####.#....#..#.#..", ".###.#...####..###...............#..#....##", "..#....#.....##.#.......#..##.#....##.#.#..", "#...##.....#..#.#....#.....####..........#.", "..##...#........#..##.......#.#...####.....", ".#.###..#...##...#....#..#.###.###..#.##...", "......F.#.###..####...##....###.##..#..#...", ".#.##.#.#...#.#..#..#.#...#...##.###.......", "##.#.###..#..#.#..#....###...#..#.....##..#", "#..###..........#..##..#..#...###.#...##..#", ".......#.......##...##....#.........##.##..", ".##...#........#....#...##..#..#...#.#.#...", ".#....#...##....###.....#.#.#.#.....##..#..", "...#.#.##..#..#..##.....#....#...#..##..#..", "#....####....#...#.#..#.....###.....#.....#", ".##..#........#....#.#..##.........#.......", ".#..###..#.##.......#..##.##.....#..#....##", "....#.##.#.#.....#.#.#....#.#..#......##.#.", ".##..#...........#.#........#...##...###.#.", ".##...#.##.###.#..##...#....#.#....#..#...#", "..#..#.##.#..#....##...##...##.#.##........", ".....##......#....#..#.........#.........##", ".........##............#..##.......####.#.#", "....##..#....X##......#......#.....#.#.....", "##.#.#...#...............#..#......#.#...#."};
    vector<string> commands = {"NSSNSENWWSEWWSNNWENWNSESNENESSSEWNNNNEWESNWNNNWEEE", "WWEWNSEWNNWENWENNESEWENSESNNEENNWNWSSNSN", "NSWNEWNENSWNNEWWESNNENENWESEWENNSEWSNWEWESWNNESN", "SENESENWSNSNNWSSNWESWNNENSSSWSNWSWENENSSWNSSWNNS", "NWNENWSSENNNEESWWNSEESESENWEESESWSSWWSNSSS", "NEEWNSSWSWSSENEENSSSEENNWSEENENWEEWWSNWENSNEW", "WWENEWESNNSWESWSEWNWSENEWWNWEEENSWNEEWNNSNSSN", "WESWNSSWNWSESSNEWNNENWWEWSSNNNENEWNSSWEESWNSSEWWNW", "WEWNSSWESEWWWSEWESESENWNSENSESEESSESEWSEEWESNSNSS", "SSWEWEEENNEWSWNSWWSEESSEESESSEENSSSWEEESSESEWNEE", "WWWSWENSSNSSWSWWEESESNEWSNWWNNSSSNNESESSNEN", "SSNEWSWSSWSEEWSSNWWSSWWNESSNWWWESSSNSWWNSNWWSWW", "WNSSESSSSNSWWSWEWNESSNSESWSNWSESENWSWSWWNW", "NSESNNWSWSSSWSNSSSNNWSSNWSWWWEWWESNNSSS", "WEWWNSNSWWENEEENWNNESEEEWNESNNNENNSWSWEEWEWENWS", "NNSSSWWWNNSNSSWSWEWSWNSEWSWNSWWEWSEESWNENSNWE", "NESENWENSNSNEWSSNWWSWSEENWSEENWNWSWENWWNWS", "NNEEWSNENNEWWEWWWNNNSENWSSSSNWWNENEWWNW", "EWNENSSWNWSWSNSWWWNSENSSNWWWSEESENWEWNWWEESESWNSEE", "ESEWESWWENWEWWNEWEENNSEENSESWEENSNSESWN", "EWNSWNWWESSNSSESWESNSWNSENSNNSWSEENWNSENSW", "NENSEWENNWEWNWWNEEEWEEENNNWWNWWNWNESENEENSNEWNEESE", "NWWNSESWSESEESWNNEWESESSEEWWNSNWSWENEWEESNEWSENWN", "EWWWSNEWSNWESNEEWEESWWSNNNSWNWWWSWEWSWENNESNWWS", "SEWSESNNESWWNSEWNNNNNWNNNESNNNNWWESENWNEE", "WSNEEEESEENNEENWSEESNSSWENNNNENSNSENNENWNEENSSWSNE", "SWSESSSEENESWENNEESESENSENNEEEESESSNNSWWEEWWNSWSS", "ENEENSWNESWSWNSENNWSNEESEEWEENEENSSSSEEWSEWE", "ESWEWWSESNSEWWESWEENWSENEESEWESSEEWWSEEENNNESSEWN", "SSENEWSNNNWNENWWSSNSSSSNNWWWENNSWNSEESWSNSEWW", "EWSNSSWSWWWWNEENWEEEESSWNENSSSSSSWSNESWWEWN", "ESSWSWSSNSESSESWNWNNWSNSSSWWWSWWSWESWEENNW", "EENSWWSWESNWWENWSNWSWSSEEESESWSNSSEWSSWSWWW", "WWESWSNNSWNNWNNEWSESWNWWSWNSNSSENSEEWEWESEWWSW", "WWWNWWNWESWWEWNSWNWNSWNEWNEWWWSNNEEENWSSEWNWNEN", "WSEESSNSNNSNWSWNWSWWSWENWWNSNSWSNESSNWWWNWS", "NWSNSSNESEENNESWWSNEENNEWNEESEEWWWNNEESNS", "WNNWENSWSNEEEWWWWWWEWESNEWWEWWWEWEWWSENEWE", "WNEENNWSSWWEENESWWSNSEWNSWNNNNWNSESSEESWNWWE", "NEEESSEENSWWESESNNWSSSWEEWSENWNNWNNSEEESESWWNE", "WEENSSWWWNSSSEEEESSWSNSSSWSNWSEWEESNWWSNN", "ENWWEWSSNENNEWEWSESSSESSWWWSNEWNENNWNSSNWW", "ESWNNWEWWNEWENWNNNNWESENNENWESNESENS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"..#..#.##.###...#......#...##......#..#..#.#.....", "#....#..##.##......#..#..##Y....#...............#", "...##...##....###.#.##..#...............#....#..#", "..#.#..#...........##.#..##.##.....#.##....#..#..", "#...##...#..#.#...#..#.....#####.#.#.............", "#.#.#..#....#.#......##.....#..#.....#..#....##..", ".....#.....#.#....#...##.#..#...##......#.##..#..", ".....#..#..###...#.#.##..##...####..####.#.###...", "#...#..#.....#.##..#.....####...#...#..#..##....#", ".#.#..##.####..#.#....#...#.####.#.#.#......#..#.", "..##..#......##.##...#..#.#...###........#..#.#..", "..#....##.#..#....#.#.......#...##.....#.#.##....", ".........#.#.#..#.#.##..#...#..#..#.##....#####.#", "##.#.....#.#.###...#........#....#....#....#.#...", "........##...#..#...#.#.#..#.###.....#....#....#.", ".....##..#.#...#......#.....#....#.######...#....", "#.#..........##......#...#.....#.......#.#...#.#.", ".#.##...........#.##......#..#.....#.#...#.##..#.", "...#.#.#.#.#.....####......#..#.#..#.##..#......#", ".....##.....#...................#.....#..#.##.#..", "..##.##..#....##.###.##...#..#....#...#..#.....#.", ".....##.#..##.....#...####..#.#...#.#..####.#...#", "#..#..###.....##.......#.#...#....##........#...#", "..#.#...#....#....#..###.##..##...##..#.......#..", "...##..#.##.#......#.......####....#.#.##......#.", ".##......#......#.#.#.....#...###...#.....#....#.", "F.#.#.......#..............#.#......#.#.#..#.##..", ".#..##..##.#.#.#.#..#.##..##.#.......###.#.#..#..", "..#....##..#..#.#..#...###..#.####...#..........#", ".#.....###.##.##..##.#.......##..#....#....#...##", "#.#.##..##..#..#.....###.#...#..#.#.#.#...#..#...", "..#..###...###...#......#....#.#..#....#.#..##...", "....#.#....#....###.#.#......#........##.##.....#", "...#..#...#..#.#.##..X.#..####........##.#..#....", "####.####......##.#...#.##........##............#", ".###....####....#.#.#..##..##..........#......#..", "...#.....#...#....#...##..#...##.##..#..##....##.", "........#.#.....##......#...##..#...###.##..#....", ".#.....##.#..#.###...##.##.........#..##..#.###.#", "###.#.....#...#.....#...##.##....#.###..##.......", "....####....#...#.##....##..#.#.#..###...#....##.", ".#..#.#..##......#.#..#####....#..##.#.#...#...##", "..##..##..#.#.#.#..#.##..#...#.#####..##..#..#...", "....#.......#....##....#....................#....", "......#.##..#.......###...##.#.#.#...#......##..#", "#...##....##.#........#.....#..#......#.#..#..##.", "#....###....#...###..##...###.#........##.....##.", "....###.....##........#.#......#.#...#.......##.#"};
    vector<string> commands = {"SSWENSEWSENEWNNWWNWEENNSENESWSESSNNWSEWNSENENS", "SEENEESNSWESSNSSNNSENNWEEEWNEENESWEEEWSNWSNEESNES", "SNNWEWNNNSNNESSWWEWWNSNENNNESSEWWENEWWSESNEESEES", "WSESNSSENNENESEWWSSSSSESNSNNESESNWWSWSEESEEESWESEW", "WSNWNEWNSWEWSNSNWSWEWSEEWESSSSSNWESNSEEEWEEWSEE", "NENWEENWESSESESENSWEWWESEEWEENNENWSEESNSEWSNWSNNNW", "NNSNENENSNNSNNEENSNESSWWEWNNEWNSENENENESENNES", "NNWWNSSEWEWWEEEEESNNNNESWSESNEWSSWSNSESENWSENWS", "SWEWSNWEWENNSNWSNESSWSEENNSESSWEWESENNSSENSSNWS", "WNSWEWSSWEWWENSNWSNEEWWENSESWWEEWNSESNWSNWWN", "WNEEWSWWNSWESNWNWEENSESNWWESEESEWWNWSWSSEWSSSW", "SSSWSWEWENSNNSWNNWNWEEENWNWNEENESSEESENNWNES", "ESWNWEENNNNESNEWSESSNSNNSWWWWWSNSNWSEWNWESEENSNNE", "EESNESWWWNWWENESSNWSNNSESEWSWWESSWNNWEEEESESNNSS", "WNSSEEEWWNENWESWNSSENWSNEESSESWWWSWSWSESSSWW", "SWWEESWWNWWESNNWSWSWSNESSWNENSEWWWSEWSNSENSWNW", "WSSESNWNNWNNSEWEWESWWENEWENENSNSNNENWWWEWEESSS", "ENSNWNENWSENNWSSSWSESWSSWNEWWEWWWWEEEWEEENEESN", "EEEEEENNNWWEWSNNSNENNWNNSEWSSWSNEWESSNENEWNSNNEW", "SSENSSSENSWNWWEEWESSESWWEWSWNSNNNNSNWWSEESSWEW", "ESSWSEWEWEWNWWSEEWENEWSESESWEWNNSWSESSSWSNNWES", "SWSEENEEEWESSEEWEEENNWENWWSWENNWEWSSSNWSWNENWEWS", "EWNWSNNSENEWNEWSEWWEESEENNSSNESNEESNSSNSEEWESWE", "NWNEWWNWWNNSNWSWEWSNSSNNENSSEEENSNEWWWWNWEWSWSSWWE", "EWEWNSWNWWENNWSESWWEWESSNNSSWNSSESWSSNNWEENN", "WEEENNSSESWENEESSWNSSWNNWWSESEWENSWWWENEWSNNEEENEW", "WSESWEEWSNENNWESNWNEWWNEWSENWWWWEWESNENSSWSNNWEEN", "SWWESWEWEWWENSSNSEWNSWSSNSENWWNSWESNWSNEWEEWEE", "WNESWSNWWSWWSNWWSWWESNEWSWWNWWEWWSSWNWNNENNWN", "WWWWEWNENEWSWSEWWEENWSEESEEWWNESWSWNWENESENE", "WWNNSSSWSSEWNENSSWESNSWNSSWSEEWWSWSWENNEWWNNWSNNNE", "ENEEWNWWSWESEWSSSSNNNNEWWNNWWSNEWNEENWWENNWWEW", "SNSWWESWNEWEWNSNSNSWNWESWNSSENNEWSWSNWWWSEESWEWNW", "NEWWWEWWEEWSNNNEEESENWWESNEESNWWSSNEENWNWNSEW", "ESNSSNEWSEWSENSSSWEWSNSSWEWNNNNWNWWSNNSNWWSESS", "NESSEENESNNEENEEEWNSNSENNSWWNWNNWWSWSEENENSWEES", "EWENSNSNWNSNWEWESWWSWNNWNESNWEWNEWWSESNNSNSWNSWSW", "SSNSWSNWWSNNWSNNSSWWESWNWSWSWWEWWSSSSNEWEWWWWSS", "WWWWSWWEENSESEWWWSWNEENNSENEENSNEEEEEESWWEENENSN", "EEWWNENSWNESNNSSNWWWESNSSEEWSWWNWSESNSNNSSNSWESEN", "NSEEWNNENNSNSWNNNWSSWSNSWWWNENWESWSWWNNSSNNWESW", "SWSSSEESSNSSEWWWSSENEESEWSWNWNEEEEWNESESNNWSSE", "EWEEWWSSNWSNEESWSSSEESEEWNSWESEEESNESWEENSWNEWESW", "SNSEEWSWNNSSWNEEWWSWSWNSNWNSSSNWSSNESWWNSWEWESES", "EENEWNWESSWWSEENSSNNSNSNESSEENNESEEWSNSNSWSENEEN", "EWSNWEEESSWSEESEWSNSSENSEWWWENSWWWSWESEWNSNNNW", "EENNWEEW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 924;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"#.#.#..............###.#.####.#.#.#.#.#.....#", "..#.......#.##.....#.####.....#.....##..#...#", "...#........#..##....#.#...........#..#..#...", ".##........#...#.....###...#.#.....#...##..#.", ".##...#...#......#........#.#.##.#.#..##...#.", ".##.#...###......#........####..###..#.###.##", ".....#.......#.#..#......##....##.....##...#.", ".##..#.....#.#....#..##....#...##..#.....#.#.", ".....###.###.##....#..#......###..#.##...#...", "...##..#...........#...###.....#..##.###.#...", ".#.#....##..#.....#.....#........##...#.....#", "#.#....##...##...#.####.#.##.#..#..##.#.....#", "#....#....#....#...#...#.#.##...#..#..###.#..", "###..#..#.##....#......#..#..#...#..####..#..", "##...#..#...#.#..###...###........#..#...#.##", "...................#######...#...#.##...#.###", "##.#.##..#....##.......##..###.....#.......##", "##.........#..##...#........###..............", "......#.##.......##....#...#.....#...#..###.#", "#........#..##.##...##....#.#....###...###...", "#...#..#...##........#.#......#..###.....#...", "...#.#.##....#...#.##.....#..#....##....###..", ".....#......####..#...##...............#.....", "..#..#....#..........##...#..#..##.###.#..#.#", ".##.#..##.#..........#......#..#.....#....#..", ".......###..##.##...#.....#.##.#..#.#..#.....", "###.....#....Y.##...#......##..#......###.#.#", "#...##..##....#..#.#.#......#.#.#............", "..##..#....#.#.#...#.....#...#...#######.#.#.", "..#...#.#......F###....#..#......#...#.#.....", "#.....##..#.#........#.X........#.#.###....#.", "###..#..#....###.#..###...#.....###...#.#....", "........#.##.#.#.#.#..#....#.#.............##", "....####......##.....###....#......##......#.", "....###....#....##...#....#...#.######...#..#", "..###.#......#.#....#.#.#........#.#.....####", ".......##...#.#.......#.....#......#..#.##...", "#.##.##......#......####.........#..###.#....", "#....##......##......##.#.#..#..##..##..##.#.", ".#..##.##..##...#.......#..#..##.##......##.#", "......###..#.#..##.#...#..#.##.#......##.....", "...#.....#...#....#......#....#......###..#..", "#.#.#.######..#.....###.###.####.#...#.#..#.#", ".#.....#.....###..........#.......#..........", "#.##...#..#....#.##...###..#.....#.#...#.....", "#..#..#.#....#..#.##.####..##....#..##..#..#.", "#.#...##..###..##..#....##.#......#..###...##"};
    vector<string> commands = {"ESSWENWEWWSNEWWNWWSNNEEEEWSSWNWWNESNESWNWWWNNNSNS", "NWWEWEWNESEENSSEWSWWWNNWESEEWSEESESSWEESWSNNEWE", "EESWSESSESSWNNWNSSWSSWWNESEWWSSSSNNSNWEWEEW", "WNSWENEEWNWWWEESWWSENWESSWWWENWSNNNSWNSSWSESEWN", "SSWNWSSESSWSNESSESNNEEESNWENEEESWSWNEE", "NWNSWNWWWWWEEENSWSWNNESNWNWEWEWWESNENSENEWSNE", "WWEEENEEWWENEESNSSNESSSEWESSWSNWNSENNSEWNENNN", "SSSWNWEWNSESNEWNSENSNWENNSNWSSWWSNSSNSWEWNE", "SNWNSNNEEEEWEWNNNWSNEWNENSNNESNWWNSWEESESNE", "SWENSSSSWWEESWWWWESNSWSNENESNWWWSSNSEENNS", "NESWWNNWEWNWWWWNENNNEWSNNNSWNWSNEWSSNESN", "NEENNWWEEEEEWNENSSWEWNSNWWNEENEWNSENNWSWSESS", "EWENNSSSEWWNEWENWNENENWSSNENNSSNEWNESESNNSENEENEE", "SWENNEWSSNEWNNWSWNSWWEWEWEEWSNESNNSSSWNEE", "WEWNNSWNEESEWEWSNNWNNWWWWEESENNEWWWEEWNWNNSN", "WEWESESNWEESSNENSNENESWWWSNEWENESESSWSWEEE", "WEESNEEEENENNEEESNEEWWWENNNSEWEWNNNESW", "SSWWNSWWNNSNNSWWNNWNENENSNWWEWENWEEWNESEWSWSWNWENS", "WWNSEEEEEESENWNWSNNSWNWESSENNSSEWSNEEESNE", "WNWSSWNNWWESSSNENNSSSESWWNWEESWESENENSSE", "NWEWWENSSWWSNEWENESNNWSESWWESWEWWSNNSSSWNSSSWEN", "WWESWNNWWSEESNESWWSSWENNWSSSSSWSNWEENWN", "WSSSEEWSNWWEWWWWWSNENNNSSNSNNWESENENWNSS", "EENEEEWSEESSSSWNWWWENSSWSEWNEEEEENEEENWWES", "SWNNSWSNESNWSEEEEWNNEESNEESNNWWWWNSEENNWNEENE", "NESWSENWNEWSEWSEEWNENEENNWENWNWENNNNSNNSWEWE", "WNWSWESESENENESWSNSWEWEWWWWNNENNSNSEWS", "ENENEEEWSWWSNEESWNEEENSENNWESWNWSNEWWNWWSW", "EWSSSSNSESSWNSSSNWSWWSNNEWEWWEWSNSSSNWWNWWNN", "NSESSENNWEWSNWSNWNEWENSEENSEENNWEEEWSSENSSNEEENWN", "NENENSSWNNSNNSWSEWWWENWNSEESESSNSENEWEWENSEWNW", "EWSSESSWNENWNNEENENEENWSENNWNSWSESNSWSWWEEWEWES", "EWWSEEWSSSSSWSNEEENWNESNWENWSSSSNSNWWSNNEESESENN", "WNEWWSEWENWWSESSSSNWNNWWEWWWWWNWNWSSNWESSWWE", "WSWSWSWWSNEEEESSEESESNSENSEESENSSWWNSWES", "EWNWNSNWNSWNSESWNSSNWWSWESWNSNWWNWSSEWSESSEEWSS", "NEWSWNNNSNEWSWNNNNSEWWEWESNSSWENSSESSNSEWWSNNNW", "WNNSESWWEWWSEWSNENWWNNNWSWSWSNWSWNWSWESSNNWSWSESN", "NWSNWNENENNENSSEWWSNWESWSWEEWSSWWNNSWEENNEWW", "NWSSWNWWSSNESNWWSWENNSNESWWWENSEEWENEEWWEW", "SNSEWNENSWNSENWSNSSNESNNENESSESWSWSSNNNWSES", "NSSSSNESSNNSSNNWSSSEWSNWNNWEEESWEENWNSESEESENSWNSS", "WNSNNNN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1353;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"..#.#.#..#..#....#.#.#..#..###...#.....#..........", "###.#..##.............##.....###.#...#..###.##.#.#", "#.#...#.#............#...##.#....#..#..####.#.....", "..###..#..........####.....#..##.#.#.....##.#.#.#.", "..#...#.............#.##.#....#.#...##.#..........", ".#..........#....#...#.......#..#.....#..#...##...", "###......##...#..#..#.###..##..#.#.#.#...#..#.##.#", ".#.###.....##..#..#.........##..#.#.......#..#..##", "....#..#......##..#.##...#.......##.#......#.##...", "##..........#.##..###.#...###.##.#.......#........", "..#..#..#..#.###.##.......#...##...#........##....", "...###..#.#.....###..#...#.#...#.....###.#.#......", "...#...........##..#....#...#.#..#.......##.#...##", "##..##.#####..##........#.#..#.##............#Y#.#", "........#..#.#.#.#....###...#...#..#...######..#..", "....#..#...#.......#.#.#......#.....#.#..###.##.#.", ".#.#..#.#.....#..#...###.#...#.#....#.#...........", ".....#.##......#..#...#..#......#..###...#......#.", "###...#.##.##..#..##..#...#..#.#...##..##...###..#", "#.###.#.#.#...#.####...##...#..#....#...#.......#.", "..##.#..###.....#...#.#.##...#.#.#...#..##.....#..", ".........##....##.##.#.....#.#.#.##..#.####.#..#..", "..#....#.........#...#.#......#...#..##.......#...", "......#......##...#....#.....##.#....##.......#...", "....#....#........#...........#...#....#....#.##.#", ".###.....#..#..#....##..#...#.#......#.....#......", "....#...#.#.###..#.####..#..##...#....#....#..#...", "....#.....##..#.#....#.....#...#.#......#....#.###", "#.#.....##...##.....#.#....#.#.##....##.####......", ".#.#####..#.##.#.....##....#.#..##..#......#..#.#.", "...#...####..#.....#.#.##....#....#.##...##..##...", "...#.......#..###.....#.........#.#.#..#.#....#...", "#....##.#.#.##.F..##...#..####..#.#........###.#..", "#..##.....#..##...#..#....#....#..#..#.###....#..#", "..###.#.......##....#.#..#...#.#.#...#...#..##..##", "#..###.........###....##.#.##...##....#..##.#..#.#", "......#..#..#..##.#.....###.#...#.....#.....####.#", "..#..####..##.#.##............#.#......###..#...##", "..##..#.#.......#......#...#.###X#...##....##.....", "....##...#........#..#.##.#....#...#.##.....#####.", "#......#.#.....#.......###.....#...........#...##.", ".#..#....#..#.#......#.##..#............#..#......", ".##...#....#.#..##.......##....#.####...#.#....#..", "..#.....##.#.#...........#.....#.#..........##..#.", "###..#....#.#...#....###.#.#.....##..##.....##....", "......#.......#......#.....##...##.#...##....#.###", "##......#.#......###...#....##.###..#...#..##..##.", ".#.##..#......##...#....#.#......#.#..##....#.....", "..#..#.......#...#..........#....#.#......#..##...", ".##...#..##.#...#.#....#.........#........#.#.#..."};
    vector<string> commands = {"NSWNNEEENWWWSEWSWWNSENWWEWSEENEWSWS", "WNSNESEENSWSWWWSEESNENSEEESEESSWNWSSWWN", "NNNNENNESWNEESEWENNNNWN", "SWWSENEWSSWWWWNWNWWWSNSWWWEWEWSNNWWNWWNWNNEN", "WNWNWNWSWNWNSENSWWSWNSWSNNWWS", "ESNNWSWEWSSSWEENWW", "SEESSWSWNNWSNWNNWWESSWSSSW", "NSWNWNNSWSEWWNWSSWENNSNSWSSW", "WWENSENNSWNWWNNNWNSWNSEENNSESWSSSSEWEWSSS", "WNSSEWSESNENWNWSSWNEEWENEWES", "EENSEESEEESEWSESNNSSWEWSWW", "EWEWWNSEWESSSWSEESWSS", "WESNESWNENNNENNWSEWENNESENSEWENNNEEWE", "SESEESWSNNSENWNSS", "NNWSWSSNSSWNSWESN", "EEEESNNEEESNSEENNSEESEWEES", "ESEESNNEWNNESENNWSNENEENENSWWNNNESNE", "WNWNEESSNEEEEESSSSEESNNNWNWWWSS", "SNWNNWWESNSWWNEWNENNNEWEWNEESSSESEESSESENSNSESESNE", "EEENSNSENESEEENWEENWEWSSWNESNNS", "WSEWNSSESSWNEESWSWWEWSWW", "SSWWSSSWSNSSNSSSEWESSSSSSWSSNEWSSSWSSS", "ESENESEEESSWNWWWWWSSSEES", "WSWNWWWWSSWSSSSSNEWNEWSNSSWSSW", "WSNENWEWESSNNWSENNWNW", "EEWSWNWWSNWSWEWSWESESNEEWNEWNWWSNSWNSSSEWNS", "EWESSWEWEWEEWSWEWNWWWNNEENNNSW", "WN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {".#.....X......##..#..##..##..##.......#.......#...", "....##..#.........####..#..#....#..#.#..##..#..#..", "......##.#.##.#....#.#....#.#.#..###...####.###.##", "#.####.#.#..#......#..##.#..#...##.##.#...#.....#.", ".#.##....##..#...#.#......#.#......#..#...#......#", ".#####.......##.##...#.##...##.###...###....#...##", "....#....##..##.......#...###....#....Y##...#..#.#", "..#..###...#..#..##.......#..#...##.....####...##.", "#..#........####...#.#..##...####.#...#...###.#...", ".####......##.#....#.#........##..#.......##.#.#..", "...#.....##..#.........#.##.##...##....#...#..#.#.", ".#.##.####.#.#........##.#.#.##..#...#..#..#.#..#.", "..#..#....#.#.#...#.#.##...#....#.##..#......#....", ".###.##.#####.######....#.#.#...####..##.#...#....", "#.......#..............##..#..##.#...............#", "....#.#.....##....#.......#..######.#..#.#.#...#..", "..........#.....##.#.##..#..#...##.####.#..#.#.#..", "....#......#....##...#.####..#........#.....#...#.", "##...#.....#.##.##..#......##.#.#..#.....#..#.#..#", "......#...#......#.#.##....#..#..#..#.....##.#..#.", "#..#..##..##.....#.#.#.#........#.................", "##...#...#.###...........##.#.......##..#.....##..", "#........###.##.....#...#.....#.#...#....#..##..#.", "#.....##.#.#..#.#..#.#........#...#.#.#....##..#.#", "#....#....#....#####..........#.#...........#.....", ".###....#.#.###..#......#.#..##.#.#.....#....#.#..", "#............##..#....#.#..#....#.#...###.#.###...", "##................#...........##.#......#.....#.#.", "..#....#...#.......#.....#...#.##.#.#...#.......#.", ".##.....#.#.....#..#....###..#......#.#.....#..#.#", "...........#.##..#.....#.##.........##.#..#..#..#.", "...#..#.###....#.##.###.#...#...#..........#...##.", "....#.#.#.#.###.........##..#.......#..#.##..##...", ".....#......#....#.#.##...##..#.####...#.#.#.#....", ".##.##.#.#.#..#.....#...####..#...###.##...###.#..", "#....#.........#...###.........##...#.#....#...##.", "......#.#.....#...#....##........#.......#.#..#..#", "......#.#....###............##...#.....#..#....##.", "....#.##F.##..##.#.#..##.#...#.#.##...##...#..####", ".#..#.............#.###...#....#...#..#....#..#...", "..#...#..#..#.#.......#.......#.###.##.....#..#...", "..#....#.........##.#......#.#.#.###.......##..##.", "...##...#..#.....#.#.#####.#..###......##...##..#.", "####........##.##......#.###....#.###.#.###......#", ".......#.##....#.##.......#..#.........##...#..#..", ".#...#..#..#...#....#.#.#..#...#.#......##.#...###", "...#...#..#..##..................#...#..#........#", "##.####.##.#........##..#.....###.#.####....##.#..", "....##..##.#.......#.#..#..#.#.###.#..##.#.#.#...#", "..#....##.#.#.##.#..#........##..#....#.##.#...##."};
    vector<string> commands = {"SWSESWWEEWWWEEWSWNSWSNSWSEWSSSWEWSNESWEWSNEESSWWN", "WWNESEWEENENNWWSSSEEWEWNNSSSNNNWEESSWNNNESNWNNW", "SSSNSSSNSSSSWWEWNEESNESSENNSEWESSWSNSSWSWWSNWEW", "SEENSESSSNSSWEEEWWEWSWEWWEWWWESWSWNSSEWESWENSEE", "EENWEESWNEENWNWENSNSNWSNNNWEENWSSEWNNSEESEESSSEN", "WSWEESWWENNSSWENSNWWWESWEWESWEWSENNSSNWSWSNNSWE", "NWSSESESNNSNNENWNNSNEENSNSNEENSSWWSESEWSSWSNNWWWW", "SEENEWEWWNEEENSSNSSSESESNNSNENNSEESWNWNSNNSNNNNNES", "NNESEEWSEWEESESSENENWSNWSSSSWNWESNWSWNNWENWNWWSWE", "NWSSWWSSENNSEEWNEESNWESSNNSENWSNNWWWNEEENNWEWWSENN", "WNEWEWEWSSNNSSESENSEWEWNWNENSEWSWSSENEEEEWSENENS", "WSWSSEEWESWSWSNESWSNSSWSEESSSSSSESWSSNSWWWESENW", "ESSESWSSESNNNSWNSNSSSESSNSSENWSWSSESESWNENNEWNEEN", "EESWENNEEWENSWSSNEEWNWESSNEEEEWEESENEEESNEWSSNE", "EESENEWNSWSEWWSSSNWWWEWEEESNSNSNEESWWNNEWWEWNNE", "WWSNWNWWSNNNNSSWNNSSWNNEWESSEWWENEWNNWNESWESEEWN", "NWSNENWWEWEWNNWSEWWNWNSENWWSSWNWNNESENNSEWWNWNS", "SNNESNNNSEEWSNWNEENEWNESWWSNNSESWESSEENSSSNNWWEWS", "ENNEWSSSESNSESEEWENENSWENENWNNWEWEWWESWNWWWESSS", "WWWSNEESNNNEEEWWESSESSNNSWWNWSNWEESESNNNENNSNNN", "WNWNSEWENNWNEWENNSSWSSSESWWWWSWEWNNEENWWNWSNWNNWSE", "WWWSESNWNWWSENSNNWWSSWESEEENEWWESEWNNNWEEWNWSNN", "EENENSNWSWNNEWNNEWESWNESSWESWSSNWNWWWNNWNWNNEENSEN", "SESEENNESNNNNEWEWSNWNNNEENWNWNWWWSENWWWSSENNSNW", "NSWWNENWSESNNSSNWENWNWNNEEWWSWWNWNSWNSESSWNSNEE", "NNENWWNSSWNWNSESNWESWNNSSSSNSEEEEEEWNESSNEENWWEN", "NWWSWESWESENNWEEENWNEESEWNNWNNNWNNWEWNESENEESESNNW", "NNNNNWWWEWSNWEWWSEWSWWNENWWWNWESNNSESWNEEESESEEN", "ESWNWNWWESESENSSNWSSSESESESSWNNSSESWESSESSEEEESEES", "ESWNEESENEESSNSWSSWWSWEESNWEEWSWSNESEWSNNSWSWNNW", "SWNEESNENWSSSWSWEEENESWEEWENWEEESEESSWSWNWENEEWE", "ENESSESWWSSNSWEENNENENEWNWSSSSSWEESNNSSNNWWEENN", "SNSEWEWWWWSEWNWSNSNSNENWSWESSSSWNSSNWESNNSWSSWN", "WNENNENWESWNSSWNWNEWNSEWEEENWESWENNNNSEWWWWSSEN", "ESWNWSWEWWSWNWNWEWWSNNWSSWEENNNWENNESWEWNNSESWSNEE", "NEEENWWESSENEWENNSWNENWENSNEEWNESNSNWWNSWSNEENESWN", "SNSWSENWSNSSWWWWNENNWNWSNSSWSENENSWSEWENNEESSNSWN", "ESWEEEEEEWSWNNNWSNENWWEEENNEWWWSWNWNWSNNEWNWWSSN", "WWSNESSNWWNWSNNNSWWSSSSSNNWWEWWWWWNEENNENNESSWNNNW", "WWWNEWENWWESSNWSENNSWSWSWSESNWWNSSWWSNSWWWWSWNW", "WWESWWWWSNWWWWEWNWSNWSENSNENWNESNEWEWENSSSNNNNWWN", "SSESSWNESEWEEWSESEEWENNWNNEWENWSNSESENENNEWESWNWE", "SWEEESEESSSNNNWEENNWEWEESSNENNENWSSNWSWESWWESWNS", "NWWWWNENSEENEWEESSWEEEWSNNENNNESEWNENWNENNNNNNWNNW", "SWSSNEEWSWWNNEEWNWSNSNNNWWWNWSNEWWENESENWSNESNE", "WNEWNWWNWNWSENNWNNWSSEWNWNSNESNSEENSWWEWNSSWSWNEE", "SENSNWSNNNNSEESWWEEENWESNWSNNWEWEEEEWSNSNNNWWNWNWN", "WWWNNEEWNWWNNESWENNNWENSWEWWNSNWSWNWENEWWWENNNW", "WWWWWNNWEENWWNWSWWWEEWSNNSSNWSNEN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"##..###..#.#..#.....#......##..#..#...#....###..##", ".####.....#..#...#.##..#.#...#.....#.#.#...##.#..#", "......###...##...#..#.#........#..#..##.#.##..#..#", "..#.#.....#...#.#...##.###....###......#.##......#", "##.#..#..#.#...##.#...............#.###...#...###.", "#..#.##..##....#.##....#...##..####....#..#...#.#.", ".#........#......##...#.#..##....##..#....#.......", "..#..##.#...#........###.....#...##.#.......#.#.##", "...#.......##.##......#.###......#...#......#.....", "##.###.#.###..####..#.#.#....#.#..##...#......#...", "##.#....##..........#..###......###..##......#...#", ".#...#..##.#.#.#..#....#.#....##....#.##...#.#.#.#", "#..#...#.##.#.....##.#..#...#..#...#.###....#....#", "...#.#.......#...#.....##.###.#..##....#.#...#.##.", "..#.#....#..#.###....#..#.....#.................#.", ".....#....#...#..#.......####.##..#.#..#....#.....", ".#.......###.....#........#.....#........#........", ".###.##.....#..##...##..##.#.......#.##...##......", ".##.##...####..##.#.##..............#..........#..", ".####..#####..#..##...#..#..#..##..##.#.#........#", "........##.#...#.##.#.##.#......#...##...#....##.#", "....#.##.....#.....###...#.#..#..#.....#.#...#...#", ".#..#..#........###..#.#.##....##...........##....", ".F.##....#..#..###...###...#....#........#.##.#...", "...##.#.##.#..###..##.....#.......###....#..####..", ".......#...##.##.#.............#.....#.########...", "#.#...#.##.....#..##.#....#.###.#####..####....#..", ".##....#.............#..........#...#.#.....#.#...", "#..#..#..#.#......#.........##.....#...#...#..#...", "......#.....#...#....#....#.####.#..###..#.#.#....", "..........#.#....##..#.##..##...#.#.....#.......##", ".#...#...#####.#....##....#...#.#...#.#.#.#......#", ".#.#...#......##..#....#.....#..#.#...#...#...###.", "#.#.#..#.####.###....#..#.#..#..#.#.#.#.....#....#", "..#.#.#.#...X.......##.#.##......#......###.#.###.", ".#.#.#...#..#...#.#..#..#....#.#.....##.......###.", "#.#.###...........#.......##.#.#.#...#...#.##..#..", "#...#..##.#.###.###.#...###..###........####.#.#..", ".#.#.#..##.#.#.......##...........##....#..#..#..#", "..#.....#.##.#.............#.....#....#...#..###..", "....#..#.###....##.....#....#..###.##.........#.#.", "..#..##.#.#.##....##....#....#.#..#.#.#...#..#..##", ".##.....#...#.##.##...#..#...#..#.........#.#..#.#", "..#.#......##.##..#..#..#...#..#.#.##...##.#....#.", "....#####...#.####.#.#..#.#.###.Y#......#....#....", "..#..#.#...#........#..#.....##..#.....#..#...#.#.", "#.##....####.###.#.....#...##.........#.##.......#", ".##...##...#..#.#......##.#...#..#.#....###.#..#.#", "..####...#..##...##.#...#.#....#..#.##.#...##.#..#", "#..#........###....#..#.#.....#....#........#.#.##"};
    vector<string> commands = {"WSWNSWSNSWSESWSEEEEWSESSWWWSWSSSNSWNS", "ENNWSWESWWSNWEENESNWSNESNWNENW", "SSSNEENSWEWEENSWENNSENWEWNEENNNWWSWS", "NSNNNEWSESNWEWEEWNSNNSWSSEEEWNWSSSNSNEWWENWEEEW", "WWEEWNNWSENSESEENSNWENEWSESEENSWWEEEEEEEENSSSS", "SSSNNWWWNNNNWSWSENSWWNSESSEEWSEENNSEEWWNNNNEW", "NESNNNWSWWSEESEENESWNNSSENWENSNNEN", "NEESNNNWENWNNEWNNNESWNEWNNSWNEENNENE", "ENWNNEENWNNSENNNNWNNWSNWWWSEEENSWSESEN", "EESWSNSSWSSENSWWNNSSWSEESEEENNENNSNWNSSEEENNWNE", "ESSWSNESEWSSENWESNESEENNNNEEWWNSNEWEEW", "EWENSNWEENNWWNSSSNENSNSNWNNS", "SEEWNNSEWSENWSWSEWENNEEWWNSSEWNEWWNWES", "NWWEENEESEEWEWSESEWWSWNNESWNSE", "NWNNEWWESEWSEWESWNESNNEWEWNWWNNNNNWWEWSNSN", "SSNNNNNNNEESNNEENWESNNSNWESWWEWWWSN", "NESSWWWESSSNNWWSWSWWSWSSNWSEWSSSSWEEWSWWSE", "NSNWWEWWWSNWWWNNWSWENSENWWEWWSWWEWNNWNNNWNNNWE", "SESWNSNENSNEEESNENWSWNSWNSWWNEWEES", "NNWNSEWSEWNSNWENSWWSSESNEWWNSEESSSNS", "ESNNNWSESSNWWNNNSSSEEENWSSNSSS", "WSEENWWENNSWSESWWSSESWWWNENEEEEE", "SSWWSNSENNNEWNWEWSSSSESNEWSW", "NSSWNNSWWSEWWEESWSWSNSEWSWESWESWNSNSNNESE", "WNEWNSSWNWEWENWNWESNSESWNNWWSWWWNSSS", "EWSEWSSNNSSWSNWWESWSEEESNESENSEE", "NNENSWWSWWNSSNENENNNWWEWNWWNENWWWSWWWWNNWSSWWWWEWW", "NSEWENWNSSSSSENENNSEWSEEWESSESWESSENNS", "WSEENESWNSSWNWEENNNSWSNSEWWSESEESSNNNESESEE", "EENNENNSSEEENENESSNWEENNNEENEEW", "SESSSSEWWSSESNWWSEWNESSESNWWENSSENSEEESWSESSSNE", "WWNEEWNEWNNENESNEWNSNENWWNEWWSSSWWNESS", "WENSSWESNNSWWNEWWNWNEESSSSNSESSW", "SNWEWWEWSESSSWWNESWSWNSNEESWESWNEWWN", "SEWESWSSNSWWWNSWWNSSEEWNWWWWNSWN", "WWEWWWNNSWSWNWNNNNWWWNNNNWSWESWENWWENSESWNNEW", "NNNWWEWWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 918;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"..##..#..#.#....#..###.#..##.....##...##...#..##.#", "##.##.#..#.#......#..#.##.........#..#.##.........", "#.....#....#...#........#.#...#.###.....####......", "................#..##.....#.......................", "..#.###.....#..##...#..###...#...........#.##.#...", "..#.#.....##.##...##.#...#...#...#..##..#.#...#...", "#..#..###.........#.###.###...#....#....##...#....", "###..#..##.###...#....#.##..##........#..##..#.#.#", "..#..#.....#.#.##...#..#.#.#......#....####..##.#.", "##..#.###.....#..#......#..###.##.......#..#.#....", "#..##.#.#.##.#...#......#.####...#........#...#...", ".###....#..#..##..#.....#.#...#...#.#....###.#....", ".##.#.....###....#.....##..#..#.....###.....#..##.", "....##...#.#.##....###..#.......##....#.#.##....#.", ".#.####.#...#...#..#.......##.#######....#...#....", ".#..#..#.........##.#.............#.##.#...#.##..#", ".......###.#....#........##.#.#.#......##.###...##", "##.....###.........#.#........#.....#####.#.....##", ".#..##.#..##.######..F#.##...##..#.....#.##...###.", "...###...#..#...#..#..#.#.....#.#...#......###.#..", "..##.X...##..###.#...........##....#.#..#.#..##..#", "....#..#......#........#......#..#....##.###.##.#.", "##..#.##.........##.#..#.#.#.........#........##.#", ".....#.#....##......#..##..#..#...#..###..#.#..#.#", "..#....##.##..#..#...........#......#..#.##.....#.", ".####.#.....#...........##.##.....#.##.##...##....", "......#..#.##.#.##.#.##.#......#.#.#....#.........", "..#....##..##..#.#..#.#.##.#....##..#.##....#.....", ".###...####...##.#......#...###..#.#.........#....", ".#.#.#....#....##.#.#...#.#....#.#.#.....#..#.#.#.", "#.##..#..##..#.#.###...#....#....#....###.....#.##", "#.###..#...#....#.###.#..#...###.......#...#..####", ".###.#...#...#...##.....#.#..#.##.#.......#.#...#.", "...#....#...........#....Y#..##..........##....#.#", "..####..#.....##....##..#.....##..#.##..#..#####..", "##.#.#.###..###.#.##.##....##.....#.....##........", "...#.##.#....#....#...##..##..#.........#......##.", "....###...#....###.#.##..##....#####..#...........", "##....#...##..##..#.........#...##...#.#.##.#.....", ".#...##...#.............#...#..##..#....####...##.", "#...#....####....##.....######.......#.#.#.#.#...#", ".#....###.........##....##.......#.#####..##..#...", "......#####.........#..#..#.#....#......#.#....##.", ".##..#...##..###....##...#...##..###.#.#.####....#", ".#........#.#..........#.....###.#...#......#....#", "....#.#..###...............##....#...#...#.#...#.#", ".#.#.#......##.##.#...#.##....#...#.###.....#...##", "...#....##......##.#..#.#...#...####..#....#..#.#.", "#.##.#..######...#.#.#....#.#....##......###.##...", "#....#.....#.#...#....#.#.#..#.#...........#.#...#"};
    vector<string> commands = {"NSWEEWWWEENEESWEEESWNWNSEWWESSWSWNSNWESEWSSESESNNS", "SNNNNWSEEEEWEWSEENEESNEEEWSSNNSWENESENNN", "ESEEEESESWENSWEESSNEWNWEEWSNSENSNES", "ESENWNNWWNNWEEWWEEWSNSNNWNSENENNSWENNWENSSE", "ESNNSNENENWNENWEEEEESSSSNEWEENE", "WEWNESNEEWEEWWNWSSEWNNNESWSWESEEENENWEN", "ESSSWESSWNSSNEWWNESSESWSWSWNWNWNSNWNSN", "WSNENWNSSNNNSEWEWSESWNWSEWSWSWWWEWEESSS", "WSNEEWNNWWEENNNEESWWWNNENWENEWESWNNNSNEEESWEESEE", "NENEENEEEEWWEEESENENNSWNWSWNWWNEEW", "ENWSNWWESSSWESSESESWESSESNNWSEWSENSWWNEWE", "NESNEWNNSNSNNSWNSNWNNEWWWENEWWEEWSEESS", "WEEWSWSSSNNSWEEENNESSWNSWEWWWENSNWNSNWWSSESSENN", "NWNNWSNSWNNSWNSSWSENNWEWEWWSWENNESNNNEESNWWEN", "NSNEWESSEWNSWSSSEWSEWNSEEEWENESSS", "ENNEWNEWNNNNEWSENESENSSNSSNSWWSWENWNESNSSE", "SNESNNENNWESWWEWNNNWSSEWNNWWWSWWWNWWSSWESSWSSESENS", "EWSWNSSNWSNSNNSSSSNWWNWSWWNNNNSW", "SENWENENWEWNEEESNWNWWSWEWEWSEEWSSWSSWSNSNNWWENE", "WSNESWWENEENNSSEWEWSNENNNEEENSSENESSNWWWN", "NEESSWEWENNWWNSWWWNNEWNSWEWEWWWWSN", "WEESNENNSEEWEEWNNNEEWESWEESNENSEES", "NNSNNSESSSSWWESNWWNENSNNWWESWNWWNWWWESWNNSNSWWE", "NNWWWEWNWWNEWSNWWNSEWWWNNNWSSSWENWENSSNNNSS", "NEENEWNSNNNWSEWNWSSNEEESWNWENNNSWWEEEWNSSNS", "SWWENNEEWSENEWWNNNEWENWWSWNNWESN", "SSESWWESSNWWNNWEWWWSWWNWSWEWEWWSSNWNWESESESSS", "NESNSESSWWWNWWSESSEWSEWNWSSESEESSWSEWEEWSWWS", "SEESEEWWWNNWWSEWNWSWESESSNWESNENW", "SSEWWSNNWWENEEWWWWNNWSNWNWWWWSNEEWESEWSWSEWNWSW", "EWSSSWSWSSEWWESWNNSNWWNSWSNNSNN", "WNNEWENWWNNNSEEENNWNSNEWWWENWWSSNNNESESEENEENE", "WSWNSNWEWEEWWENNWNEENWNNWNESNNWWWNW", "WNEEWNEWWNWNNEWWSWNESSWEENNWWSWNWNENNSEENSEWNWWWNN", "EWNSEWSEENNWESNSWSSWWNWESEEWENWNWNNESENWESENNEE", "NNSWNNEWNNWNNNENWESENESNEESWNSN", "ESEWWWNNNEENSNWWWSSENSSEWESNSWESSWSENNSNENSNSEESW", "ESEWSEWNWSWWNSWWENWESSWSEWEESWEENSNEN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1285;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"#.#.####..#..##.#...##.#.....#.#...#.....#.#####..", "#...#..###.............##.#.#..##..#...##..#..#...", "......#.#...##....#.#.#...#.#....#.##....#.###....", "#..#.#........#.#####....#..###.#.##.#.#....#.....", "#...#.#....#.....#.##.###.#.##.#.##...##..#..##.#.", ".....#..#.#.#.##.#.....##......#.##.#..#.........#", "....#...##..#.....#...#.#...F...#...#...#.#...##..", "..#.#.###......##..##....##.##...#.............##.", "###.##.#.#.....##.#.#...#.#.#.#...........###...##", "...#...#.#.#....#...###...#..#...##.............#.", "..#...#.##.#....##.#........###....#..#..#.#.#..#.", "..#..####.......#..#...#......#...#......#....#...", "....#.....###.#.#.######..#.#..#..#..#...........#", ".#.....#.#...#..#.#.#...#.#...#.##.#...#......#.#.", "#.#..#......#....#...####...#..##...###.....##....", ".#...#...#...#.##.....###...#.##..#.##...##.......", "..#.......#...#...#.#...#...#.......#..##.#...###.", ".....##.#...##..#####.....#....#...##....##..##...", "......#......#.....#...##..#.#...#......#..######.", ".#..#.#..###........#...##......#...##..#...#.#...", ".....#..#......#....#........##.##.....#.#.#..####", "#........#..##..##....#.##.....#.##...#...........", ".........#.#.#.#...#.#.#..#..#...#.#..........#...", "#......#....##..#...#.#.....#.....#.........##....", "#..#.#.#.........#...#.#.##......#........#..#...#", "###..##.......###.#..............#...#..#..#....#.", "...#......#.....#.#...#.....#.#..###.....#...#...#", "##...##....#.......#..#....#####....#.#..##.#.#..#", ".##....#.#.#.##....##.#..###.........#...#.#.#..#.", ".##.......##.....#.#.....#.....#...#.....##.....#.", ".....####.##...###.#..#..##..#.##...##.#.####.##..", "##.#...#....#.....##...#..###......##......#...#..", "...###..#...##.....#.#....#.###...#.##....#.##...#", "##....#.#...###.#...####..##.#.##...#.........#.#.", ".##.....#...##...#..###.#.#.....###......##.....#.", "..#.......#..##.#.#........#..#.....#.#..#......#.", ".......#..#...#......##...#.##..#.....#.#..#.#.#..", "....#.#....##...##.#.....##.#.......#...##......##", ".........##.#...#.#..##....#..##..##.......#.#.#.#", "....#..####...........##....##......#...#.#.#.#...", "..##....#......##.#.....#......#.....#.....#......", "...#.X.#..#.###.#...##...#...#..#...#..##..##.#...", ".#..##.#.#.#.#.###.#.#..#.#....#.....#.#..........", "#........#.....#.#.##.#...##..##.#.###.#.##.##....", "...#...........#..#..#.#.##........#..#..##......#", "#.##..#.#..........#....#....#.#.#.....##..#....##", "#.#..#..#..#.............#....#....#..####.##..##.", "##.....##..#.#.#..##..##.#.....#..#....#.##.#....#", "...###..........#........###.###...#..#..###..###Y", ".###...#.#..#......##....#...#.##....#..##.....#.."};
    vector<string> commands = {"NNENNEESWESEENEEWEWSNWNNENSNESESSNWESSSWSSEESSE", "ESWNNNENENNWSWESWWWNSSSESWSEESENEEWSEWSWEEEWWS", "ESSNNSNESWNWSNNSNWSSSEWSNWSNNNWWSENEESEENWNEEE", "ENNEEEWNENWNESESSWSEESENWNWSWWNWSESNSEWESNSNSNWNE", "SSNENNEWENWSEESEWNSWWWSNNSSEWEENSSNEEEESEWWESNS", "SENNNSEESSENSNENNSESEWEESSSSWSSNSSNSWWNNSNSSW", "SNNWSSWWSWNNEEWWENWSNNEWWNEWESEWSENENNWESWEEEEEWE", "SEWWSSNWSESEWEWSEEEEESNNNSSENWEWWENNWSENEW", "WWWSESNWENWSNSSSSWENEENWEWWWNWEESSNENNNNNNSWNS", "SWEWWEWSSWNEWEWWNENNNEWSNWSNNENSENSNESNEEWEWSW", "WWSENWSWSSWWWEEENWSESEEWEEENWNENNWENWENSNNNSSSSW", "WWSNNNEESSWENNWWWWNWWNSNEWESWSEEWSEWSNSSNE", "EEWENSWNNWENSESEENNESSSNNNWNEWNWEWWEENSNWSWS", "NESSENSNNSEWNWSWWNENEWWESWWSWNEWNSNNSWWSEEEWSW", "SNWSSWEEEWNWNSSSNWEWNNSNSWWSSSSSWSSNWESWENSNEEEE", "EWENNWNSNEWSEENWNEEWSSSWNNNESWEESWEEESENNSNWWNNSS", "SEESNNSNSWWSENNNESNNNNNSSWNWNWWNWENWWWSNWN", "SWNEEEEESWEWSWSEWWNNSNNWESWSEWEESWNWENSWWSNSEWWWEN", "WSEWNSWEWNEENEESENWSSWNEESSEENEESNENSSWNNWSWNNSWE", "NENEEWWNNWSSSENNNEWWNEWEESWEWNNSWNNSWNSEWNSN", "NSSSNWESSSWNWWEENWWNSNENNWWWNWNEWEEEWSWSSWW", "WNEEWSNNEESNSEWNNEWESNNWNSEESESWWNSWSWWNWNNWSNSE", "NSWWWSNSSENSEWNSNSNSNEEESEWSSEESSSSWEEESNENNE", "EWWESWWNNSEWSSNSEWESWWSWWSSWWWWSEEWSESNWENNNWSW", "SWEWNENWWNWWNESSSSSESSNNSWWSEWNENWNNENEWSEESWEEE", "EESNSSNWEWNEEEENEWWWWWSEWNWWWSNSSWSWEEEWSSSNNSNWW", "SNWNESWSSNNSWWSWSNWSSWSNNNEENEEWNESESWNENEENNWS", "WWWNWEWWWNSEWWNNNEESWENWENWSSNWENNNNWSSEEWNNSSSWE", "NEWNESEWNSWWNNNWSEWNNEWEWNWWSSEWWWNNWSNESWEESESE", "SSNNWNWSWNNWWNESSWENNNSWEEWWSWEEWWWNWSWNNEW", "SSSWWNNNSWSNNSEEESWENNENEEEEWWNENWSSEEENWWSWN", "EWWSNWNENNNEEENWNNEEESWEWNWNNSNSWENNSNNNNNEEWS", "NNSSEENWWWWWWSESNWNWWSWNNSSWSWSSENNESWWESWNWSNNW", "ENENEEWESWNNESSNSWNWNWESWWSSWNWEWSNSNNWSNN", "SWNEEWWEWNNWNNEWENEWSEEEWWWEESNEWSWNEEENWEWSWNSWS", "WNESSSSEEESEWEEEESNNSEENEEEEWSNSWWEWESWESENN", "NNENSESWEWWSWWSSSWSSNWWNNWEWSNWEWESNSEWNSESEES", "NSWNWSWWEWSENNENWSESEWWWSEESSWEWSSWWEWNWSWWEENSSSN", "ESSWENSSNWNSESWENNNWSSSEWEWWSNEEWEEWSNNEWESENSSWW", "EWNSENSSWEEWSENWNWEWSSWNWWNWENWSEEEESSNWWWESEEWS", "WENNWNWSSWSSSWNNSNNWWNNSNEWNEWSEWNWSNSNWSSNSEE", "NWWSWNSWSSSWNNWENSNSNNNSSESENSSNNWWSWENNSWEEWEES", "ENWSESNNNNWENNWEEENEEWEWSESSWSENESNWEESWNNSNE", "ESNENSENWWNWWNNSWESNNEWWWNWNNWESWSSEEESWNWSWEWWES", "EWSSESENNEEEWWNSN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"#......###....#...##............#..#.#...##.....#.", ".#..##...#.##....###...##..#...###..##...#.###.#..", "#.#.....#...#.......#.###..#.##......##.####.##.#.", "#.........#..#..###.#.#.........#.##.#...#...##..#", "....##..##.#...##....#........#.#.......###..#..#.", "#.....#.####.......#.#...#..###..##.##....##.#....", "##.##.##........#....#...#.#....###....##...#.#..#", "...###..#..#..#..##.#....#..##..#..#..#....###..#.", ".....###........##.#..##..#.#....#.#.##..#.####.#.", ".#.##.#.##..##..#.#..#..#...#.#........#.##.#....#", "#......#..#.#...#..#.#..##.....#.##........#.#....", "#..#......#......##..#.#..#.#..#.....#.#....#.....", "..#Y.#.#....#..#....#..#.#.......#....#.......#...", "..#######...#....#.#..#.#...#..#..#..#.#.##...##.#", "#......###.##......#....#......#....##.......#..#.", ".#.#.#..#.##....##.###..##.....####...#..#..#..###", "##..#.......###.........##.#.##.#...#.#........###", ".#.#......##.##...####...#.....#..####..#.#####..#", "...#.#...#..#.#....##.....#.#.....#..........#..#.", "..#.#.#....##........#........##..#.####..##......", "#..#...#..##...####..##..#.###....##..#.#...###...", "..##..#.......#.#....#.#........#.#.......#..##..#", "....#.#.......#....#.#...........#......###.#...#.", "..#..#.#..#.###.......#....#..#......#..#.##...#..", "..#...#.##.##.......#.....#.##...#.#....#.....###.", "..#.#.#..###..........###..###.##....##.##......#.", "..#...........#..#.#.....#.#....##..##......#...#.", "...###..#....##.......#..#####.#.#.#.#.##.....##..", "#.#.....#.#..#........#..#..##.#....##.#.##.##..#.", "##.#.........#..#.#.##...###.#..#......#..###..#..", "..........#...#.#F.#...#....####.##.#...#......##.", "#...#.....#.#..........##.#.......#...#.....##.###", "............#..#....#..##.#..####..........##.#.#.", "#.#.#..##...#..#.##.####....##....##.#..........#.", "#.......##....####.#.#......#..#...#......#.##....", "...##..#.#.#.....#.#..###....###.#......#.#....###", "...#.#..##.####.......#.#....##...#.....#.....###.", "##.#...#..........##.#.#...#.....#..##..##...##...", "....#.....#.#.....#.#..#..#.##.#..#..#.#.##.##...#", ".#........#..#....###....#......#...##.##..##...#.", "#.....#............###.#....###.....#...#..#......", "#.##..#.....#....#..#.#.#......##.......#..#.#...X", "..#...#.#.#.#.........#.......#.#............#..#.", ".#.##...##...#.#..#.....###.#.##.#..##..#..#.#....", ".#.#..##......#....#..#.....#..#..#..##..#...#..#.", ".##.##..#...#..##....##...#..###.....#.##.#.......", ".....##.#####.#..#....####.#.#..###.#........#....", "....#....#..#.####.....#........#.......#.........", ".#......##.##.##.#.#..#..#....#..#..#.......##...#", ".##...###.#...##.#...#.#..#........#.##.#..##..#.."};
    vector<string> commands = {"NWEENNNEESNSNNNWEEESEEWSNEESENNENEWEWNSESNWWN", "NWSSSEWWNSEEWENEWWWWWSWSNNNNSNNEEESSEWWWSWNNEWS", "ESSWNNWSEEESSESEEESNSEESEWWESWNENNSSNEEWSSSEE", "ESNENNNNSEWSENENNWSNSENWESNNNEWNEEEWSSNNNWEN", "SNWSNNWWESNNSWSWEEWNEEESSSWSWSWSEEWEESNSEWESSSWS", "SWESWEEWSWSWNNSWENSWESNNNSNWNWESWWESNWNW", "EWWSSESWSWWNWWWSEEEWWWESESNSENENSSWWNEW", "SSSWWSSSEWEENNNESEEESWWWSEWESWNNEEESWEWEEWENE", "NNNSNENSESNENENNSESSSSWSEESEEESSWEENSWSNSESEEEESEN", "WENWWNSSNNSWENNSNNSNWSWNSWEENWNEENWWNWES", "EEEEENSSSWWSNNSWWENWENWWSSESWSWNSWWWENEENSN", "NNSSWESWEWENNNNNSSNENNSNSWSENSWNNNSNNSWSENEESNNEE", "WNESEENNEWEESSNESNWEESWENSNENEWENNNEENEESENNNSES", "NNWWEESWWESWSNEWNNNNNENNWNWEEWNENENNESNWEENSEN", "WEWSEWNWEWWNNNWWSSWSNEEWWNSSEWEWNEEESEEEWWNEESNENE", "NSWWENNWESSSSNNEENNNNWWWEEEENWNSWNWSNNWSWNWSSWSN", "SNSESWWSSSSWWSSEESSNEWNSNSEWWWSNSWNSSSWS", "WNSWSWSWWEWWNSSEWNWNWWNESNWWENENEWNNSNW", "WEWWSWWNWNWSESWSSSWWWSESEESNSWSEESWSWWS", "EWSWSESWSSSSWSSSESEEEWNWEEEESWSNWSEWNSSNSEWWESE", "SWSESSEWSEESENSEEEENNSESWSNEEEWNWEWWSSNSNEWNEE", "NEWNSWSESSWNNSEENENNESEWSWWSESNNSNNSEESSSNWSSN", "WEESEEWSSNSSSEESEENSWNESESSWWSSSWNSSEWWEN", "WEWEEWESNSNSSESSEWWWSWNWENNSSEWSSEWEWWEWSSSWENSNW", "NWSWSWWNEWSNNWNNNNSNSWNSWWWWWSEWENSENNEWSNEWENNSEE", "WNWNEEWWSWWEEWNNENWENEWWSENSWNWEEWENENWNEENNNSNESS", "NSWESESWWNEEWWNSNSSWNWWNEEEEEWNWESSWSNWNNNWSE", "WEWSEWSNESWEWSWNEEWWSWEESSSNNNNSNWWNNWW", "NWWNWSWNNWNWWWWWSSSSWWSWNNENSNWEWSEEWESSENEE", "ENSSNSNNSENSSWSWNWENSNNNSSWWWNEESEENESNSEWWS", "SWSSWSWWNSWSSENNENESSSWNWENEEESEWSNSEESSWEEE", "SWNNSSWWNWEWSSWEWEWSWNSWSEEESEENSEWWNENEEESN", "EEENSSEEEEEWNEEENNESSENNEENNNWESNNEEENEEENNEESNN", "WESSWWESSWSSNWESSWWSWESNEENEWESWESSESWESN", "WWSWNSSNESESWWSEEEEEESESENEEWSWSEWSSEWWNSNESW", "WWWNSSENWWEENNWWWSWSWEESEENNNSENESSWEEWESSNWN", "SSWSSWWSNWSWSENESNENWEWWSSSNENEWWNEWWESSENE", "WNWWWNWNESWSNSEEENSNSSESSNWSWSESSSNNENEEEE", "WEESSWESNWENSNSSSWNNEEESWSSENEWWESWWSWSSSE", "WESEESESSSESSWSEEEEESSEEWNENESEEEENNENENSSEEWESE", "ESWNWSEESWEEESNNEWNSNEENWSNNEESWWNNNWNEWE", "ESESNSEEENNNEWENESEWESNENESEWSWEWSSEWNNSENNSEWNESS", "SSEENENEENNNNNWNWSENSWNNESEWSSNENWNSEENN", "EENES"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"..####........#....#.##.#.......#.##..#........##.", "...#.#...#....#..#...###..#....#....#.#..#..#....#", ".#.....##.#..#....#.##...#..##...#......#..##.#...", "..#.####..#...###......#.#..#..##.##...###..##.#.#", "....#...#.##..#...#..#.#..#..#..............###..#", "#..#.#..###.#..##......#..#.#....##.#...#.#.......", "....##....##.#........#.#..#.....#...###.#...##.#.", "..##...#.#...#.....#...#...##...##.#.....#........", ".##.#.....##..##....X##.##..#...#.#.#.##..#.##.#..", ".#...#....##.#.#.#...#...#......##.##...#.#...#..#", "#..###......##.....#.#.####...#...#....#...#.#.#.#", ".#.....####.##.#...##..#.#...#.....#.#..##.####.#.", "#....#.#.......##.##....###.#.#.##...#........#..#", "..#.#..#..#..#.#.#..#.##.............##...#..#.#..", ".......#..#....###....#..#.####....###.##.###.##..", "..#......#####..##.....#..#.#....#...#..###.#.....", "..#..##.####.###..#.#.#.#.#..#.....####.#.#.#.....", "....##.......#.##......####.#......#..#.#.##......", "..#....#..##.#......#..........##.#.#....#...#.#..", "###..#.##.......##.#...#.#.##..#.##.#.###.###...#.", ".....#####.#...##.#.#...........#...#...##.#.#..##", "#..#....##.#.#.##..##...#....#...####....#....#...", "###...#.##..#.....#..#...#..###.##.#.......##.###.", ".#####....#.........#..#...#...#......#......#..#.", "..#..##......#...##.###.###.#....###.#.#....#..#..", ".....##..#.....#.##.........#............#....#...", "#...##...##...#...#.###.###...........###.##.##..#", "..#......#.....#####.#....##.......##.....#.#..#..", "#..#...#.#.##....#...#..#...........#.#..#...##.#.", ".#....#.####..#..##.#..#.##..#.##..###.#......###.", "....##.#..#..........##.....##.....##..#.#........", "..##..##..........#.....#...##...#..###...#......#", ".....#.#.....#..#.#.....#.....#.##.###..##.#...#..", "#.#........####.#.##....#####.#.#...#...#....#..#.", ".#..##.#...#..#.###.#..#..#...#.......#..####..##.", "..##.........##.....####....#.#.#.......#.#..##.#.", "...####..#......#...#.............#.###...##.#....", "##...#..##...#..........#.#....#.......#......##.#", "...#.#...#........###..#.#...###.#..#..##.F.....#.", ".#.##....##..###.#.....###.#..#........#.Y.##.....", "##....#....#..#...##.....#..#.#.##..#.##.......#.#", "..#.#.#...##.#.........#.....#.......##..##.......", "##..#.###...##..#..##....####...#......####.#..##.", "..###.....#........#.....#.#....#..###.....###.#.#", "#.#.#.#.....#.###....#....#.......#.#......#..#..#", "#.#####............#......#.#.#..#.#.###.#..#####.", "......##.#.......###.#..##...........#............", ".#.#....#.#.###.####..#...##.#....#..#..###.#...#.", "#..#####.###..##..#....#....#...#..###....#......#", "##...#....#.....#.....##.#...#..#..#.....#...##..#"};
    vector<string> commands = {"SSENWNEEEWSSWENESWWNWWWESENNSWSSNNWWWW", "SSEWSWNSNNNSWWNNNWSNSNWWWESSSE", "WNNNEWWENSSWNNWWWWWWNEEEWWWWWNNN", "WNNSNWNESWWWNWSNWSSWWESNEEESWWNNNES", "WNWSEWEESESNENNNWWNWSNNWWNWWNSNSSSEENSSNWNN", "WSSWNWSWNSSSWWWSWNSNNWENWWWNNWEWNNWENESENENE", "WWEEWSEENESNWEWNWEEWSNSESNS", "SWWEEWSSWEWSSSSNSESWWEEWWWSNW", "SESSNSESENEWWEWSSWNNWSWENNENWWWSSWSSWW", "SEWWWWSSNWENNWWNWEWSWSWNN", "NNWWNWSESSWWSNNWSSNSSESSENWWWNSWNWNESWWNENWEW", "NENEWSEEEENWSNWNSWNNNSNNSWEWWWNWWENEE", "NNNWNENWSWWSESESNWWWEWNNNWNWNNNENEWENE", "WSWESESESSWNSNWWSWNSWSNNSWNN", "NSSWNSSNSNNWSSWENENSSNEEENEN", "WWNNENWNNNNWNESEWSNESSSENENWEEWSWNNESSENSESESWSE", "EESEENNNEESEEENSNENNEWSEEENEWN", "NSSNSNSNENNENWWESSEENNENNEEN", "WEWNWENEESNNSEEESENNSNSNEWWEWNSWWWNSS", "NNESWSENNNNNSNWNSWEEWENSNSSSNENWNSWSWEESNENSES", "WNWWSSESWSNWSNEWNWSNESENWWEWSEWSENNENWWNWNNWSWWWWW", "NNSWNSNEWSWNWWWNSSNNENSWWSW", "SNNEWSWWNWSWWENNEEEENSNWS", "WSESNEWNWNWEWNNNNNWWNNSSWWESWNSNWEESNNNSNWWWW", "WWNWSWSNSWWNNWWESEENNSEEEWNNNEWSWWSWNNWESNNW", "ENEWSNWEEWEENENEEEENNESESESN", "SSESNNSEENNWWNWESNSWSSESSEE", "SWWWWNNWNEWEENNWNENSSWSENNS", "WSEENNENWENESSNWEEENEEESEEESSEWENSS", "EWNEEESWNSNEWWNESSWEENNNEEENNEWENWENENSEESNESWWE", "ENEWSNEWEEWWSESNNEEWNWNWW", "EENWEESSSSNNWEWENNSNNNENN", "NENSNNNEWSWWWWENNWNNWESSNSSSNWSNESNEWSENNNSWNNNNW", "WNWENEWWENEWNWWEENSSNSEWEWSN", "WWNEWESESSEEEWWSSEEESSWSNEESW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 339;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"..##.......#..#.#.##.#.#..#.#....##.#....#......##", "##.#..###.....#...##..##.#....#.#.#.#..#.....###..", "..#...#...#.#....####.........###..#...#.#...#..#.", "#.##.##.......#.#...#.....#.#.#........#..#.#.....", "#.#.....##.#.#...#.#######.........#.##....#####..", "..#.#....##.##..#......#..#.........#..#...#....#.", "...###..##...#...#...##...#....#####......###..##.", "...#....#..#....#.#..#.##....###..#.#.#....#.###..", ".#.#..#...#....#.###.##.##...#..#......#..#....###", ".....##.#######.#.#..#.##..##..#.##.#.#...#.......", ".....###....#......#...##..#.#.....#..#.#.#.#..###", "#.......##........#.#..####..##....##.........##.#", "...###.#..####.....#......#.........#...#..#.#.#..", "..#...##..#...#....##.#..#.......####..#.#.#...#..", "..#...##.####.#.##....#.#..#..##...##.....#..##.#.", ".###.#......#............#..#.#...#...........#...", "..#...#..#.##.#.......#...#....#.#...#....##..#...", "...#.#.#..#..##....###....####...##....#.......##.", ".......###..#..#..#.#.....#.....#.......#.#..#.#..", ".#.......#...#.#...#.....#..#.#..##.##.....#.##...", "#............##..#...#...#..#..##.#....##..#.##..#", ".....#.#......#.....#...##....#..#..##.....#...#.#", ".....#..........#.#....#.#...#......#...#.####...#", "##.#...###....#.............#....#.........#.....#", "....#.#..#........#..#...#...#####..##..#...##....", ".#...#Y.#.........#....#..##......#..#..####......", "..#.#..##.#..#.#..##....#..#..#..#..#...##..#.##.#", "#...#...##..#....##.#.#...#....###....#...##...#..", "......#.....##...........#.#..##.......#.#.......#", "#....#.##...#.#.#...#.#..##..##..##..#..#..####.#.", "..#...#...###...###.#.#.#..#.......#..#..#.##.###.", "..#...#..##..##.....###..#..###.##..#.####.#.#.#..", ".#...#..........#......##...........#.##.#.##..###", "#...##.##..#..#.#.#...#..#......##..#.#.#####..#..", "....###.#....#..#..#.#..###.#..#..#..###.#.#....##", ".##..#..#.#......F..#...##..#.....#..###..#..#.#..", "##...........#.#..#.#.....#....#...##.##....#.#..#", "..#....###....#..##..#...#.....#.##.#....##.......", "#..#.#.......#..#..##.##...###.....#.#.#.#.....##.", ".#.....######....#..#..#.#.#..##.#....###.#..#..#.", "#.#......#..#...#.##.#..#....#.###..#..#.#.##.#.#.", "#........#.#.##.#..#.#.#.#..###..#........#...##..", ".#..#...#...#...#...#.#.##..#..#..####X###....#.#.", "....#.....#...####...#..#.#.#####....#..#..#.#...#", "..........##....#....##....#..#.......##......###.", ".###.#####..###.....#.....#....##.....#..#....#.##", "...##.......#.#.#.......##...#.#...##....#...#....", "..##.##...##.#....#..#.#.#..###..#.##..#.#....#..#", "#..##.#.###....#..##..##........#.#.##..##..###...", ".##...##..####..##.....###.....#..##..##....###..#"};
    vector<string> commands = {"NSWESSSWSNWWSWWWWNEWSWESEESWEWEENWNESSEWWWNSSSEWS", "NNNWSNWEWWWEWSNNEENENWWEENSNSNESENNSNEWEWWWWNEESW", "NNNNEWWESESSSWWWWEEEWNWESSWEWNNWNWESSSSESNNNNWN", "WENNNWENNWNNSSSSWWSNSNSWEWNSNNWWNENNNWNWENESSEE", "NEESSNNNNEESNEWSWESNWNEEENENENSNWEWWWSNNEEEWWEWS", "ESEEWWEEEWSEWWENWNEWSNSNSESENEEWSNEWNNNWNWSNEE", "SWSWNNNWESWNENWEESWNSSWEEENWEEENSSSWNNSESESNNSEE", "NWWNWSNNWESSWNNEESNNEENWWESEEEEEWSWENWWSWESSWSS", "WEWEENSNENWWSENESNNSNESNNSENESEEESSSENEESSSWEEWW", "SNEEWEWNSESNNSSNESSNEWEWWSESSNSNNNWSWENEWSSEEWW", "NWNWWNNNNNSWNNSNSWNEESESESESSNNNNENSWWWSWWWSWNN", "WWNNWWSWWEWESNWWWNESSNNSNEENESESESNWNNWNSSESESS", "NWESNSWNSNWNEWSWWNWWWWSSSWSNSSSESNWSSEWEWESSNWN", "NNSNSWNSWWWESEWSWNSNNWNWWWWENWEWSNNSNENENNEWWS", "SNEEENSSWEWNWNESNENWSEENWENWSSEENWWNWSSWEWNNSNNS", "WNNSSSEWENEWESNSENWWSNEWSSSESSSENSSESNSNNWESSNNEEW", "ESEEWWSEWWNNEEEWSESENSNSWWNWEEENWWNEWSSWSWNSWSSWW", "EWWESSSWNENSEENESNNWESNSSNNWSENNENSNENESNSESEN", "EWENWWEWNENNSEWSNWWENNWENWWSWSEWSNNEWNWNWNENEWE", "EWNEWEESWSNSSNNNSNWSWNENSSSNWESNSNWSESSNSESWENSSWN", "EWNSWEWNNWSEEWSWNEEWNEEEESNNWNEWEWEWNSSSSWNENESEEN", "NNSNWNSWENESSSNSESWWESEWSNSENSNNEWNNENENWSSEWWESN", "EWNNNWSWENESNEWENNESNNWSWNNESNNESSNESNWEENWSSWESWN", "NEESESWWENSWSEEWWESESWEWSNSSEENNSNSSENNSESNWENSSN", "WENENEEWWWESSNSWSEWWWSESESWSNWEWWNWSSEEESNSWEWSS", "SSSWSWENWNNSNWENWENNNSSNWEEWNSWESNENESWWSESNEE", "EEEWNEENSENSSSSEWENEEWNNSESSSWSNNWNNWEEESWEWSWWWN", "NSNNEWNESNNNESNESWESNWWNWENENWENSSEESWSEWEWNSNNWS", "SNWWNNNESNNWSNSWENSWSSENEESNNENWEEESNEEEESNWNSWWS", "EEESSNENWNWNESWSEEEWSSSSENNWSNSESNENNWSSENNEENWN", "EENNEEEEESSWSNNESNSSWWNSSWWWWWSWSEENWEESNSESSSEN", "NSSNWWNEWNEESSNEENSSEESWSNWNNNWSSESEWNEEENWWWS", "WESEENSNWSNSENWWNNEWEENNSSSSEEWSWEENWWESWENWWNW", "SWESEWNSENNSNSSSSNNESWSNEWSEWNEESEWESSSSSEENEWWES", "EEENNSSNNESNWSEWNNWNENSSSSSWESWENWEEWWNSWSSWEW", "EWNWWESNSNWWEWWWESWWSSESEEEWWSESSSESNENNEESNENN", "WSNSWEEEESEWESSWWSNESWESNESWESSWWWWENEWSEWWSNEN", "SSNNWNENNSSSWESSWEWNSNNWNNSNWNNESSNSSSSSENWNNWSSNW", "EWSWENSSWWWSEWEWWNEEEWEWWEWWSSWSWNESSWSEWSWSWN", "EWESSESSWEWSWENEENEEWSEENENWWSNSNWEWSNNESNWSEEEEE", "WNSWNSWWWWWSENSNNSENEEEESENEWEEWSWESENEESSNWEEN", "SSESSWSSEWEENWWSWSWENENWEEWNSEWNSSSSWEESWNENESEWS", "WNWSWEESSNESNSWNNNEWESNNEWWWNNSENSEEEENENEWSSWE", "EWENEWSNSEESEESEENNNNNSNSSENESNWSNESEWSWSSWSSS", "SWNNNWWNESEWNESEWNNNSNSNEEESESSESSNSSEWENEEWNENSW", "SEWWEESESEWESWWEWWENSSSWWWNWSEEWNSWWENESNNSWWSWSSS", "WEEWNSNESWWEWEWSNNNEEWESSNNWEWSSENNNWWENSNSENW", "WNSWSNESWNSSWSSWSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {".###..#..#.##.........#.........#......#..#.......", ".#Y.#...##..#..####......#.##..###.....#..#.......", "....#....##..#........#..#...#..........#....#....", "..##..........#.#..##.###....#.###....#.......#F..", ".#.#..#..#....#..#......##....###........#.....#..", "....#.#..#####...#...##.#.#..####..#.#..##......#.", ".#....#............##.........#.##..#....###.##.#.", ".#....##...#.#.........#.........#.#....#..#..#...", "..#...#..#.#...#.#...........##....#....##..#.#...", "####.#.#..#####.#..##...............#....##..#...#", ".#...#.#..#....##...#......##.....##.#...#...#...#", "...#.....#......#.#.#.#..#..#...#..#...#..#.#.....", "..#....#..#.#..#.##..#.....###..#.......#..#....#.", "#..####......#.......#.##...##......#..#......#..#", "##.####..##..#.........#.###..#.#.#....###.##.###.", ".###.#.......#..##.#...#.#..#......#..##....#..#.#", "#...#....#.#.#.#.##..##..##..#.#....#......#.##.##", "..##.........#.#..#...##..#...#.#.###..........#..", "#.....##.#.....####.#.#.#...#.....#...#......#...#", "....##..#..#......###......###.....#...#.......#..", "...#..#...........##....#....##.#.......##.###.#..", "###.#.......#..##.#..##..#..#...#......######.#...", "##.#......#....#.##..#..#..#......#.#.#.#.....#...", "###.....#...#......###..#.#...#.#....##.#.###.....", ".#...#.#...#.....#..#...#.##....##..#.........#..#", "..#...##...##....##..#..#..#.#....X..##.#.#.....#.", "####...##.#.##....##.....#.#.......####.#.##.....#", ".#...........#...#......#.#...#..##.#........#....", "..####.##...........#....#.#...#...#......#.##.###", "...#.#....#.#..###..#...#...#...#.#...###..#.....#", "#..###....##..##.#.........##........#.#......####", "...#..#.#.#..##..#..#.#.........###.#...#..#.....#", "..#...#..............#...##..###....#.#....##.#..#", "##.#.#..#...#.......#..###...#....#.#.####...##...", "##.###..#.##..#...#....#.#...##..##.##......###...", ".#....#...#...#....#..#.##..#.#.#.##.........###..", "..#.#.##...##.#.....#......##.....#...........###.", "#.##......#..###.....#....#...........##.#.#.##.##", "#..###..#.#....#.#......##.#..#...##..###.#.#.#..#", "...#.#.....##...##.#.....#...#.....##...#..###.##.", ".#...#....##..##......##......#...#...#..#####..#.", ".###..##.....##....#.....###..#......########.#...", "...##.#....##.##.#....##....#......#...#.#..#...#.", "...#.#...#..###.#.#..##.#.#..#...#.....##...##....", "..#.#..#.#.####..##....#....#....#.....#...#......", "..#......##...##....#...#....##.....##.#...#...#.#", "...........####...#.....#.####....#..#....#..##...", "#.......#..#..##..#......##.##...#...#.........##.", "............#..#.#.........##...##..##.....##....#", ".........#.#..####...#..#...#...#....#.....##..#.."};
    vector<string> commands = {"EESSNEWSSNNENSENSNSWNWSSWWNWEENSNNEESNWSWWSWNSWSNE", "NEWWWWNNSWSESESWNEWWWESWEESWNEWWEWWEENSWWSNNNSSNNN", "EENNSNNEEWEWNWNWEEESSWNNSWWSSNWEESWENNWEWNNWSWSSSN", "ENENSENWWNNSNNNNWWWWSWEEWEWESWSWWENENNWWEWSESSSWE", "SEENESSWWNEWWNSEWEWNWWNWEWWWNSNNNNWESEWSNWWSEEESSS", "EWWSWENWSNNNSSWNSNSSESNESSWSSSWSENNNNWEWEEEWSEWEWW", "SWWWNSNWWSNWWNNSWNNSNSWWEWNWWWSSNNSEEWWEWNEESWSWW", "SSESEWNWSEEENSWSESESNSWEWWENNWWWWEESWSEWEWESWWENEW", "SSESWWEWSENSWENENSNESWNESNSNNESSSEEWSNNWSWNSSEEESN", "NESWWNENESWWESSESESEEEEEWSEWSNSSWNEEEEENWESSWWWNN", "EWSESNESEWWNWSSNSEEENSSSSESEENSSESSSSSWNWWWEWSENW", "WWESNESSWNENEENWEENESNSWNWWEENWWEWENNNWENEWEWSNWNW", "NWWSSSSSWSSEWNWSWWSSENSNWWSWENSSSEESNESSNSWSSNWWSN", "SNSEENNNSWWWNWSNEWNEWNSSWNSNWEWESNSWEWWWSSESSNWSW", "NSSWSESWNSNSEWNNEENNENSWWWSSNNSSSESESSSNNESSNESWSW", "ENSENEWNSNEEWEENNSSWWSSSWWWESEWEENNNWWNWEWWWENEWNW", "EEENSWEEEWSENWSNSESSWWEEENEEWSSNEWSSESSSNWENNSNSN", "WEESEWEEWWWSWNNENSSNWSSENNWWWWNESSWWSWSEESSWENENN", "SESNENSWEESSNSNESENWNSEWNNSSWEEEWNWWWNSWNWNSWEESNS", "SESESESESEESNSEWEESWNENNNSWESWNWESSESNSSEENNSNEWW", "EEEESSWSWESNNNSNSENNSWNWSESWSWSNSSNSEWSSEESWWWNEEN", "NENSNWEWNEWNNESNNWSEWNNENNEWNNNWWEWSENNENENENWWENE", "SNNNWSNSSNEESNSSEEWSNEWSNSWNENNNSENEESWSNESNWEWWW", "ENENNNNNNSSEEEWSEWNNENSNWSSWESSSENNESSWEEENWWSNEES", "NWSENSSENEWWESSWNWEWESENESNESNWNWSENEWNNWSSENEWEE", "NEWESENNEENNSEENSWENSWENNNENESENNSWNSSEESSEWWEESE", "NSNWWWNSSSSESSNNSNSSNNNWWNENEENNENSNENWWNSWSWNNEE", "EENNEEWENNWENEESNWNWEEESSWNSESSEEESWEEENWEESSNESN", "WENWWENSSSWNSWSWSWWESSEWSWNSSWWSWWSSWEENEEWSSEWSSW", "ESSWSNSSWSSSENSSNSEESWSSEESNEEWNSESSENSWSSSESWSWN", "ENNSSEWSEWWSNSNNSWESWSWSNSNNWSEWNNWSSESSSSSESWESS", "NSESWESNWESSEESWENNSEWEENNEWEESNESEENWEENNEEWENNEW", "WEWENEWEENSWNNEWWNNNWESEWENWSESSNWSEWNSSNNNWESEEE", "SNWSSNSSWESSNSEWNSSWSNESWWEWWNNSEESENNNENWWENSNSS", "ENWWWNSSENNSESNSWNWSESWSNWWESEESNSENNEENWSWWEEESWN", "ENWNWEWSSNSSWNWSNNEWNESSNWEENEEWEWNSSEWWWEENEWENW", "SEEEEWWWWSWSWNWSWNEEWNWSWESNWNSEENSNNNNNWNNSENNESE", "WNWENWNNNNENEESNENSNNWNESWWNSSSNESEWNENSNWWNNESNN", "NNSSENWSEEENWNEEENESESNNNNSWWENWSNWNWWSWSWSNESENNW", "NWNWNEWWENNNNNENNNWNEEWSNSENWENWSWNWESENESSSWNESN", "SEWWWEENNNENWEWSEWEEENSSNWEWNWWSSWSNSNSSNSENWEWEWN", "NWESNWNEWNSENESWNESWWESESSNESWSNSSSSSEENNNENWWSWWE", "NNWWNWNSESSENESWEWEWEEESSNEENENNNWNSSESWSWWNEWNNN", "EEENEEENEENWENWNSSNWESNWEWSWNENSWEWWENWWENESWNESW", "SENWSNEWNWNESNNEWWSENSWNSSNWSEENEWSEWSSEWESNWWWEN", "ENSWSWNWWNWNSESSESENSSNENSESNEEWSNENENSSSWWSENSES", "NENESNENSSWNNNNNWNESWSWNWSSENSEWSNSEWEWNWNWSSEWNN", "WSSNNNNSNWNEEWSEWNESSNWSEESWENWNNSENESNNWSWWESSNSW", "SESSSNESSEWNNENNSNWNWNNWSNNWWEEWENE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"..###.......#.#..#....###..#....#.##....###.#.....", ".##...#.#.#.#...#....#..........#.##............##", "...#...#.#....#......#.#.##.#.#....##.#.####......", ".........#...#...##...####.....#..#.....####.....#", "....#..#...##.#..#...........##......#...#.#..##..", ".#.......#...#.......#........###............#....", "..#..##..#.......##..#.##.#..........#...###..#.##", "###..#..#..#.......#..............#..#............", "..#....#....###.......###...##....#..#..#.....##..", "..##....##..#...#####.##.####.#.#...#...##...#.#.#", ".....##....###.#.#..####...###.......##..##...#.#.", ".#..#...#....#....#...........#.#.#..#.........#..", "#..####...#...#..##........#....##....##..##..##..", ".#.#...##...#.##.#....#...###.#.#........#...#....", "#...#....#.###.#...........#.#.#.#.###.#.#.##...#.", "...#.#.....#....##.....#..#.##.##.#...#.#...#..#.#", ".......#....#..###.###......#.......#...#..#..#.#.", "#.#..#...##..........#..#....#.....####.#.#.....#.", "....#.#...#........#.###...#...........#..........", ".#.##...#..##.#.#.#.##..##.#...#...#...#.##...#...", "..#....##.........######.##..#.....###.##....#..#.", "......###..#..###.#.#..#.....#.#....#.##....###..#", "#....#..#.#..#..#.....##..#...#..........#...#.#..", "#.....##.....#...#.#.#.......#...##..###......#...", "..#.#.####.#....#...#.#........##.#..#.#.#..#..#..", "..#...#.##..#..........#..##........##........#..#", ".#.#.....#...##.#....#....##..##...#...#..#....#..", "#.#...............#.##..#.##......#.##........#..#", "#.###........#..#.#..##.#..#.#..#.####..##.#..#...", "##.##.#..##.......#.##..###..##.#...##.#....#..#..", "#.Y##....#..#.#####......#.#....#......#.........#", "...#.#....#.#..............#...#....##..........#.", "#...#...#..#........#.#..#.#.....###.#...#..#..#..", ".##..#..##......##..#..##....##.#..#.###....#.....", "..#....##.........##....#...#.#..#...#...#.#.#....", "..#.###.........#..##..#.#..........#....#..###...", "...#..#.#....#...#...##......#.....#.#.##.....##..", "#.#.#.#.#....#..........##...##.##....#....#..#.##", "###.###...#..####.#....#..#......#.##..#.........#", "....#..##..#.#....##....##...#...#..#.##.....#...#", "..#.#.....#.#.#....#.##.####.#..#.#..#.#..##..##.#", ".#...#.##...#..#...#..#..#.#...#.....##.F#.#.#.##.", "#.####............#..#...##.###....#.#..#...#.##..", "#....#....##....####.#..#.X..#..#.##.....#..###...", "...###.#....##.#.#.#.......#....#..#......##..#...", "......###...#...#.##.....#...#.#...#.###..#..#.#..", ".......##.##.#..#...#..#..####..#..#..##.#........", "##.......#.#..#......##.#..#.#......##.......##..#", "#...#..###....#..#....##....#.#..#.......#.......#", "..#........#..#..#..#...#.#..#...#..###...#......."};
    vector<string> commands = {"NSWWSSNESWEESWNSENSWSNSSESWSNSWWWWSEEEWNSSNWWSEWW", "WSSESESENSNENEEEENEESNNNNENWEEWWSWENNEWESSWNWNNWWN", "SSSWNWWSNENEEWNWENSENEEWNWWENNWNNNNSEEWNNEEESSWENW", "SNWSNSENSSNEWNEENNWESESWSEWWENSNEWNSWESENENWWWWEE", "SENSSNNNESSENSNEWWWWWWNEWEESSNWWNEEEWWESEWNSWWEWEE", "NSSWWSSWSEWEWSSWEEWESSNENESESWNSNWWSNEENESWNWSNSW", "SNSNNWESNENEENEWSEENSNNWSWNEWEWWEWWSNNNWNNNSSSWWS", "SWNWESEWNNSSESWWNENWEEESSNNWNNNNNENWNNEWSNEENSNNNE", "ENESNWWWSNWSNWNEWNSNNSNENEWWWEESWSNWEWENWNEENEWENN", "SNENNWNENNNSWNESNSNNSWNSWENNWNWWNENNEENNEEWEENSEEN", "SEWEENEWWNWENESSEWNNNSWSNWEWSWNSENNEWSWSWEESSSWSNE", "SNWNSNNSWNSSWESWEESSESENWENWWEWWESESSENSNNEWSWWNE", "SNSWSESNEWSEESSWNWWNSWESEESSSEEEWSSWSEENWSWESNEWN", "NEESSNNNSENESEWSNWNESEWESNNEWNNSSWSESNNSSWSESNEENN", "WWENSWSEWEEWWWESNEESNEWEWEWNWEESNENSEEEWWSSWWESESN", "SNSWENWNWNSESSNENWSNSSESSNSESSENNSNESENEENESSESNNS", "ESWNEWWNEWNSENNWSWWNSSSNEWWNSSESSWNNEEEENSNEEEESS", "WENNSEENNSSSEEWSEESSWNEESWSNSESNWNNWSNSSEWEENNEWN", "EEWEESWEWNNESENWSSNNWSEEENENNSWWENWSWNNEWWESSSSNEE", "ENSWNESEEWSSSNENSWENWSSSEENSNWNSENNSNSSNWWWWESWSS", "NNSSSWENWWSWWEEWEWESWSENNWSESNWNSSSSSSSENSNEENSWSW", "WWWSWNENNEWSSWSWWWSNWNEESWWWNWNNWWWESNSSSENSSWWSS", "WSNEWWESSEWENNWESNSSNNNSWNEWWWNWENSNSENSWWWNESWNNN", "WWNWSSNWWNEWESSNSESSSEWWESWESNNEWEWNNWENNSSSEESNE", "SSSWNWNWNWSENNWSWWWWWSNWNESSNENEESSWESEWNNSNSESNNS", "NEENEESNNWWWWNSESESWSNSSNEEWNEENNWEEENEEESNNNSESN", "WENSNEEWWNEWENEENENEWSSNEENWESEWNNEWSSWWNNWNEWWSSS", "WSWENEWWEWNNNESSEWEWSWSWSSENNSENSWESSNNENEWNEEENWS", "WNNNEWEWENWSWWEESSEEWNENNSWWSENWNSENESWEEENEWWNNES", "ENSSSSNSNNEEWNSNWWENWEWESWNEWNESEEENSNWWSSWNWENSEE", "WENWEENEWSENNNWWWESNWNEEWSEWSSNSWSWWEWNENWWEWSESW", "EEEEWNWWENSSEEEWWESWESSEEEWWWWSWNSENNWSWSSNWSNNSSW", "ENNENEENEENWWESSNSSSNNENWENNNSNWNWSSNSSEWNSSWEWEE", "NSWWSEWSSSSWEWENWEENWNESWWWWWWWENWSNWNEESNWNSWEWW", "ESNWNWEESNESSWWSWEESEENWWSENEWNSESNWNSEWWENSESENW", "NSSENSESEWWWWWWSNESNESWNWWNSSWSENWSENSSSENEWESENSN", "NSNENNESEEESNSWNENWSSWSSSEWSSESWSSNWNEWENESWSSESE", "NNEWEEWWSSSWESWWNNWEEESWESNWWNEWSEWEWSESWWSWWWNNN", "WSSWWWNWWNNWNSNWEEESNESSNSSWNSENWSSWWWSSEWSSEEWSEN", "ENEWWNSESEESSSWWSESWNNWNEEWSWWENWNSWNSNSWNWWWSNWS", "SWNWWNWNEWSEWESWNSEESWWEENSWEWEWEESEESNSESNWWEEWS", "WNSEENSEEWWESSWWWSENSWWWEESENSWWENSWWENEWESEENWNNE", "EWNWSSNEESESNESWWNESSEWSNSNSESNESSWSNEWEWEWNNWENSE", "NEENSEWNSWNNWNWNEEWNWENNSSWENNENSNNEWNENSSWSESNSNN", "WWEWWEWSSSWSWWWWSNNESWWENEEEENSSEWEWSSSWSWEENNNEWW", "SSEEESNNSSWWNWEENSSWEWSEWNWWESNNEEWWWWNSSNSESNENNW", "EEESNNSSSNWWSNWNWNWNSSESWNWSNWWSEENSSEWEENWNNWNNE", "EWWWNESNWEWNWEESNSEWWEWNWNWNSNSWWWEWWENESESNESNEEE", "WEEWSWSSWNNWNESSNNWWWSWEWSWEWWESSSSWSSSWNESWENNWEW", "S"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 735;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"#.#.#...###...#......#..#...#..............#..##.#", "#.#....#...#.#...#.....#..#...#....#..........#...", "..####.#.#..##..#......##..##..#.#..#.....###.#...", ".#..#...###.#.#........#...#...#..#......####....#", "##..#.#.....###.....####....#.##.#..#.##..##......", "##.#.#...#.#.#......##...#.....###.#...##.####...#", ".......#####.#..#...#.#.#...##......#...#...##.#..", "..#...#####......##.......##..##..#.##.#....#####.", "#.....#......#.Y#.....#.##..#.......#......#.....#", ".#.#####..###.###.##.#.#...##.##...##..#..###..##.", ".#.#.#.##..#..#.###..#..#........#.#....#....#..#.", ".#....#...#.#.#...##..#...#...#.##.#.#..#.##.#..##", "#..####...##.....##..#...#.....###..#...#.#..#....", ".....#.###.#.#...#.##.#..#.#...#......###.#.#....#", "...#..##.......#...###.#..#.#.#.#.....#.#....#....", ".......#..#...###..#.#.#...#.#......###...........", "..#.#..#.##......####...##.#..##....#..###...#....", "..#......#.##.......##...#..#...###.#.....#.....#.", ".###.#.#.##..#....##.###.#.#.#.#.....##..#.######.", ".##....#.....##.....##...##...#...###.....#..#..#.", "..........##.##.##.###..###....#..##...##..###.#..", "........#####.##.....#.#.#.#.##....##..##....#...#", "###..#..##.#....#...##...#...#.###..##.####.....#.", ".#..#.#...#..##....##...#.#........#.##.#..##..#.#", ".#..###...#.#....#..#.#.#.#.#..#.###.#..........#.", "..#...#......#..#..#.....##..#.###.#....#........#", "....#.##.###...##.....#...#......##.#.#.#.##.##...", "..#..#...#.....#.#..#...#...##......#..........#..", "...#....#...###...#.###......#.##.....#...........", "....#...#..#...#.#.#.#...###.#.##........#..#..#..", "..##.#...##..##.#..#X...#......##.#.#.#......#.##.", "#..#.###..#...##..#....#....#.####.##.##.###......", ".###......#.#...#.#..#...##...##...#.....#.....#..", "......#.......#..#...#.....##...#..#.#.....#.##.##", "#..#......#.....#..#.........#..#............##...", ".#........###......#.#..##.#...#..##...##.#.###.#.", "###.......#......##..###..###.##.....#.....#.#...#", "#....####.....#....#..##.##.###.###.#.#..#....#...", "..#.#...##.#.#.##..####.#...####.###......###..#.#", "..##.##.##..#....#.#...##..#..#.....#.####..#.....", "..#...#...##.#......#..#..##.....#....#....#..#..#", "#..###..#......#..##.#...#..#...#...#.###...#.....", "...##...##.#.....##..##....##.#.##..##..##.#.#.#..", ".#.......#.#....#....#.#.##............#.#.......#", ".##.#...#..#...###..##..#....##.##.......#......#.", "#.............##.#...#....#...##.#......###.##.##.", ".##..#...##.......#.#....##...#..##..#.##....####.", "..###.....#.#..#......#..###..#.#....#....#...F.##", "..#...##..#...#.........#..##..#..###.............", "#......##.###.#..#.#.#.......###.#..#....#....#..."};
    vector<string> commands = {"EEWEEWNWNEWSWENSNSSSNWSEWEWESWEWENSENNNNSNNWWSWE", "ENSWSWEWWNESSNSNEESEEESEEWSEESNNEWWWNNWSSENSWSWE", "NEWSSSNWNNWEWNNNNWSSESNENESWNNWNSEWWWSNEWSSENENSW", "EESWNWWSWNSNWNNNSNWWSNNWWSNNWNWNSWSEWWWENSWSSENESN", "NNENNEEEWNWSWNWNEWENENENWWESENNSNENSNWWENEEENNWN", "EESNSNNSSESWWWSWWESEEWSSNESSSNSNNWEWSENWSWWWENNW", "NWNSNNSSENESSWNNNENSNNWSNWNWESNNNWSWSESNNSWWSNE", "EESNSSSWSENSWNEESEEWEWWSSSNESSWNWWESSSSESWWEENN", "NWESNWSSNNWEWEWSENSSNNWNESSESSWWNSWWWNESNWEWNWNEWN", "NWSEWESSNEEESEEWEWSSSSWWNESNEWWSSNSSEWWNWSNWNESN", "SSEESNSNNEWWWSWNWSEEWESSSENSSNWSNWSNWWNESNSNSNNN", "NNENNEWSNSNNNNNENNEWESNSSSSSNESNEWWENWSWENEWEWS", "WNSWNWSNWEWNWSNNWWEEENEWWESSEWNSESESSWSWWESNENWS", "SEWWWNESSSNNNSSWNEWWNWEWWSENEEEWSSWWSWSNNWWEEES", "SNENSSEWSSENENEEWNESSNENEESNWEENWSESNSNSESSSWEESE", "SNESESENNEWWWNWESSSEWSNWSNSNEENWWNSWEWNWENNEWNW", "NNENWWSSWWNEWWNSNESNSSWWWEWNWEWNWSWNWSSSSNWSSNEEEW", "WEEWNNSEEESEWENWWSWSWESNWNNSWENENNWWWESSNSNSSSSN", "SENEWEWEWNWSESEWWENEWWSSWWWNSNSNEEWEWNNWSSSNENE", "ESSWWENSEEENSWNENNSSNSENWWEEWSSNNNSSSEWWSSEENSN", "NESNEWNWWWEEWSEEEEEENNWEEENWSWSSNWSSSEENSSSEWNS", "NWSWWSENNESESNSNWWNEEWWSNNWEESEEEESESWNSNWSNNWNENS", "WWSSWNWNNSSWWSSENEWNEWWSNNNNWNENNNWWWWWNWWSEWWWW", "SEWWNNSWWWNESENSSNSENWSSSNSWWSWEWSSWEWSWEWSSESS", "SSEWSSWEWESWSESSWNNEWSWNWSWWSWESEENSNWEWESWWWSESEN", "EESWWWESWWWWEEEWNSNSEENSSNEWWSNSWNNESEWEESSWNNW", "SSNSNWSWNSNWWSSWENWEWESNNEWEWWSWNSWESNSWENNNWSESNN", "NNWWEWSNSEENSSNWESNNSWNWENWSWSSWNWEESWNNNSWWWEE", "NWNEENSWENEWWESSSNSSSNWNESSEEWSSNWWENNNSWWSEEWS", "EESNSNNEENSSWWEENNNEEWWNWNEESSSSSNESNNENSNNWESNSSE", "EEWEESWSSWWSNSEESEWWWSNSWNSWWEWENNENESNWWENENNEE", "EWWWNSENWWWSWNWESWSSEWWESNSSSNNNNWWSWNSSNSWWNNEWNN", "NNESEEENEWWWENENEWEWWENESNNSWWWEWENSWSSSEENSWSSWNE", "EWSWNSSEWEWNSNSNEESNNNNWSNSSNWESENWWSWNSNESEWNNSES", "EESSENEENWWWENEENSWNEWWWESESENNSNEWESSENENNSWSWE", "NSNWNEENSESWWESWEWEESNSWENWWSENNWWSNWNWNWSSNNSW", "SNEEEEWNWEWSSSNWWSSWWEENWSSWEEEESEEWWSWSNNENENSSEE", "ESWNNSEWWWEWWNEWENENWEESSNEEWNWSNSSSWNESESEENSNS", "NWEEESESEWEEEWESESNNEENNWWWENESWWNNWWNESSWSNNENEE", "NESSNEWSWSWWEEENSNSNWSWWNNESWNWNEESWNEESSNEESES", "ENSNWWEWNSNENSNNNSSESSNWSSEESENWWEEWWWESESNWNNEEEE", "SSEWSWSNNNSWWNESSEEEWSNWNEEWEENESESSESNWSSENSSN", "SEWNSSWEWNESESESSWWNSSWWNNSNNNEENWNSEWSSWWEEWNE", "ESWWNNNENSNWEWNEEEENNEEEENWWEESNSEENESENWNEEENENNN", "WEESWNNWNNWNNWNEWEWNNSWSWWWWSWWNSSNSWWWSWWNSNNSE", "WESSSNEWWESNWESNSEEENSWNENENEWENNNNWEWNSNNNEENNESS", "EENENSENSWWNSSSWWSWWEWSWESNWNSWENEWNEEEWNNWESNN", "NNWSSWENSNWSWSSNNSSNSSSENNWEWSNNNEW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1818;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"#.....#..###.##..#.###.##..##..#..##.....#.#.###.#", "#.#..##..###.....#.......#####.......#..##...##...", "#..#..#........###....#...##....#.##..#..#...#..##", "#.............##....##..#..##.#...#.##.###.#.#.##.", "##..###..........##....###.....#...#.#..#....####.", "...#..#..#.#..#..##....#.#..###..#.##.#....#...##.", "..#.#.#..#......##.#.##.##......#.#....##....#.#.#", ".......#.......#......##.......#.#.#.#..#......#..", "....#...#..#........#.#..###.##.......#...#....#.#", "#...##.#...#...#...#.###.#...#.....#...........#..", "#.......##..#....#.#.#...#.#..####....##.....#.#..", ".#.#..........##.#.#.####...#.#..###.....#....#...", "#........#....##..#.#....#..#..##.#...#..###......", ".##...#..#.##....##.#..#.#......#......#.......#..", "##.....##..##......#..#...#..#.#...#..........###.", "####...##....#....#....#...#.....#.####.##........", ".....#.#..#..#.####.#.##.###.##.##....#.#.......##", "..#.#....#..##...#...##...........#.#.##...#.#..##", "#.#.#.#.#...#......#..#.#.##..#...#........###.#.#", "...##.#...##...#.##.........#..#.#...###..#....#.#", "##.###..#.######.#.###.........#....#.#..##.##..#.", "#...#.....#..#...##.#..#..##.#.#...###.#..........", "#.#..#...#..#.#..#......#........#..#.#...#...#.#.", "##...#..##.###..#....#.#..###..#.#..###.#.#..#..#.", ".###......................#.##...#####......#.#..#", "#.###....#..#...#.#.###.###.#......#...#...#....#.", "..#....##..#.#.##..##...#..#.....#.#..##.....#..#.", ".##....#......###....#.##.#.#..#...#...#......#.#.", "#...#..#..##.##....###....#.#....#.###.....#......", "..#....#.###....#.##.##.....##...###.#....#...#...", ".....#.###...##..##..#..#.#....#...#...#.#...#....", ".#.#.#....#...#.#....#.#........#......##.#.#.#.#.", ".#.#....#..#.......#..#.#...#...##.##......#...##.", ".....#.#.##..###........####..##.#..#...#...##....", "#.#......#.#....####.#..#.##.........##..#...##...", "#.#..####..##..#..........#.#.#..##.##..#.####..##", "##....#....#.#.......#.....#...#.....#......#.#..#", "......#....#...#.#...#...###.###.....###......#.#.", "#....#.#..#.#..#...##.#....#..#.#...###.#.##......", "...#.#....##.####.......#.XY...#..#...#...#..#....", "......#..####.####..##.#.#F#...##.....##.#.....#.#", "#.#..###.#..#...#..#...#...#......####.##.#.....#.", "#.....#...#######..#.###......#........##...#...#.", "#.##............#.##..#...#.#..##....###.#....###.", "#.###......##...###...##...#..#.#..#.###...#.....#", ".....#..##.#..........#..........##.#.....#.##.##.", "..##......#.#.#..###.##.#....#..#..###.#.....#.##.", ".#.......#..#...#.##.#..#......#....######..##..#.", "..###..##...##.......#####..#.......#....#........", "........###.##..#.##.....##...#.###.....#........#"};
    vector<string> commands = {"EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENEN", "EENENEENENEENENEENENEENENEENENEENENEENENEENENEENNW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 2499;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"...............###################################", ".#############.##.............................####", ".#############.##.###########################.####", ".#############.##.###########################.####", ".#############.##.###########################.####", ".#############.##.##...............####.....#.####", ".#.........###.##.##.#############.####.###.#.####", ".#.#######.###.##.##.#############.####.###.#.####", ".#.#######.###.##.##.#############.####.###.#.####", ".#.#######.###.##.##.#############......###.#.####", ".#.#######.###.##.##.######################.#.####", ".#.#######.###.##.##.######################.#.####", ".#.#######.###.##.##.#####..............###.#.####", ".#.##......###.##.##.#####.############.###.#.####", ".#.##.########.##.##.#####.############.###.#.####", ".#.##.########.##.##.#####.############.....#.####", ".#.##.########.##.##.#####.##################.####", ".#.##..........##.##.#####.#########..........####", ".#.##############.##.#####.#########.#############", ".#.##############.##.#####.#########.#############", ".#.##############.##.##....#########........######", ".#.#####..........##.##.###################.######", ".#.#####.###########.##.###################.######", ".#.#####.###########.##.##..................######", ".#.#####.............##.##.#######################", ".#.####################.##.#######################", ".#.####################.##X....................###", ".#......................#Y####################.###", ".########################.####################.###", "..........................###############....#.###", "#########################################.##.#.###", "#########################################.##.#.###", "##........................................##.#.###", "##.#########################################.#.###", "##.#########################################.#.###", "##.####.................................####.#.###", "##.####.###############################.####.#.###", "##.####.#########################....##.####.#.###", "##.####.######....................##.##.####.#.###", "##.####.######.#####################.##.####.#.###", "##.####.######................##F....##.####.#.###", "##.####.#####################.#########.####.#.###", "##.####.............#########...........####.#.###", "##.################.########################.#.###", "##.################.########################.#.###", "##......###########..........................#.###", "#######.######################################.###", "#######.######################################.###", "#######........................................###", "##################################################"};
    vector<string> commands = {"EEEENNNWEWWSSWWWWNWWWWNWNWWWWWWWWWWSSEEEESEEEEEEEE", "EEEEESSEEEEENEEEEENNNNNNNNWWWWWNWWWWWWWWWSWWWWWWWW", "WWWWEWWNWWWWWSNSSESSSSENEEEEEEEEEEESSSEEEEEEEEESEE", "EEEEEEEEWEEEEEEENNNNNNNNNNNNNNNNNWWWSSSSWWWWWWWSWN", "WWWWWWEWWWWWWEWWNWWWWWWWWWWWWWWWWWWSSSSSSNSSSSSSSS", "SSEEEEESSSEWEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EENNNNNNNNNNNNNNNNNNNNSWNNNWWWWWWWWWWWWWWWWWWWWWEE", "EEENSNWNWWWSNWWWWWWWWWWWWWWWWWWWSSNEWEEEEEEEEEEEEE", "ESSEEEEEEEEEENNNNNNNWWWWWWWWSWWWWWWWWWWEWWWWWWWWWW", "WWWWSSSSSSSEEENEEEEEEEEESSSESEEEEESEEEEEEEEESEEEWE", "SEEEEEEENNNNNNNNNNNNNNNNWEWWSSSWWWWWWWWWWWWWWWWWWW", "WENWWWWSWEWWWWWWWWWWWWWWWSSSSSNSNSSNSSSSSEEEEESSSE", "ENSEEEEEEEWEEEEEWEEEEEEEWEEEEEEEENEEEEEEEENEEENNNN", "NNNNSNNNNNNNNNNNNENNWWWWWWWWWWWWWWWWWWWWWEEEENNNWW", "WSWSWWWWWWWWWWWWWWWWWWSSEEEEEEEEEEEEEESESSEEESEEEE", "EENEENNNNNNNNWWWWWWWWNWWNEWWWWWWWWWWWWWWWWWWWWWWWS", "SSSSSSESEEEEEEEEEESESSSENEEEEEEEEEEEEEEEEEEEEEEEEE", "NNNNNNNNNNNNNNNNWSWWSSSWWWWNWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWSSSNSSSSSSSSSSSEEEEESENSSEENEEEEEEEEE", "EWEWEEEEEEEEEEEEEEEEEEEEESEEEEEENNNNNNNNNNSNNNNNNS", "NNNNNNWWWWSWWWWWWWSWWNWWWWWWWWEEEENNNWWENWSWWWWWWW", "WWWWWWWWWWWEWSSEESEWEEEEEEEEEEEEWSSEEEEEEEEEEESNNN", "NNNSNSWWSWWWSEWWWWSWWWWWWSWWWWWWWWWWWWWWWWWNWSSSSS", "SSEEEWEWEEEEEEEESSWSEEEEEEEEEEEEEEEEEEEEEEEEENNNNN", "NNNNNNNNNNNNWWWWSSSWWWWWWWSWWWWWWWWWWWWEWWWWWWWWWW", "WWWWWWWWWWWSSSSSSSSNWSNSSSSSSSENESEEEESSSEEEENEEEE", "EEEEEEEEEEEEEEEEEWEEEEESEEESEEEEEENNNSNNNNNNNNNNNN", "NNNNNNNWWWWWWWWWWWWWWWWWWWWWWEEEENNENWWWSWWWNWWWWW", "WWWWWWEWWWWWWSSEEEEEEEEEEEEEEEEEESSEEEEEEEWEEENNNN", "NNNWWWWWWWWWWWWWWWWSWWWWWWWWWWWWWWWWWSSSSSSSEEEWEE", "SEEWEEEEEESSSEEEEEEEEEEEEEEENEEEEEEEEEEEENNNNNNNNN", "NNNNNWNNWWWSWSSWWWWWWENNWWWWWNWWWWWWWWWWWWWWWWWNNW", "WWWWWWWWWWSSSSSSSSSSSSSEEWEEESSSEEEENEEEEEEEEEESEE", "EEWEEEEEEEEEEEEEEEEENEEEENNNNNNNNNNNNNNNNWNNNNNWNW", "WWWWWWWWWWWWWWWWWWWWEEEENNNWWWESSWWWNWWWWWWWWWSWWW", "WNWWSWWSSSEEEEEEEEEEEEEEEESSWEEEEEEEEEEENNNNNNNNWW", "WSWWWWWWWWWWWWWWWWWWWWNWWWNWWWWWEWWWSSSSSSSSEEEEEE", "EEEEEWESESSEEEEEEEEEEEEEEEEEEEEEEEEEEENNNNNNNENNNN", "NNWNNNNWWWWSSSWWWWWWWWWWWWWWWWWWWWWWSWWWWWWWWWWWWW", "WWWNWSSSSSSSSSSSSSEEEEESSSENEEEWWWEEEEEEEEEEEEEEEN", "EEEEEEEEEEEESEEEEEEEEEEENNNNNNNNNNNNNNNNNNNNSNNWWW", "SWWWWWWWSWWWWWWWWWWWSSWWWWWWWWWWWEWWWWWWWWWWWWWSWN", "NNENNNNNNENNNWNNNNNNWNSNNNNNNNNNNNEEEWEEEEEEEEEEES", "SSSSSSSSSSSSSSSSWWWWWWWWWNNNNEEEEEENNNNNNNWWWWWWWW", "SSSESSSSSSSSSSSSSSSSSSEEEEEEEEEEEEEEEEENENEEENNWNN", "NNNWEESENNNNSNNNNEEEEEEWNEEEEEEESSSEEEENNNNNNNWNNN", "WWWEWSWSSSWWWEWWNNNNWWWEWWWWWWWWWWWSSSSSSSSSWSSSWS", "SSWSSSSWWWWWWWWWWWWWNNNEEEEEEEEENNNNWNSNNNNNNNNNNN", "NNWNNNNEEEEEEEEEEEEEEEEENEEEEEEEEEEESESSSSSSSSSSSS", "SSSSWWWWWWWWWSSSEENEEEEESSSWWWWWWWWWWWWWWWWSEWWSSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1721;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"#....#...##...#.##.#.#..#.##.....#..#...#....#....", ".#...##.#...#.....#....#..#...##...#..##.#...#....", "##.#.##....####.##....#..##.#.##.#..#..##..##.#..#", "#..........##.....#.######.....#....##..##..#.#...", ".##.....##.#........##........###.....#...#..#.#.#", "##.#.##...#.##.#...#......##.....#..#.#..##.##.##.", "...##..#X.......###.#.#.#.#....####.....#.##....#.", "##....#..#...##..#.##.#......##.............#.....", "..#..#.#....#.......##F#...####.#.....###...#..#..", "##.#.###....##.#.#......#.#....#...#.##.......#...", "......###.......###....##.#....#.#.....##.#####..#", ".........##...####...#..#.#..#.#.....##..##......#", ".#.#...###..#..#...#.#.............##.......#.....", "..#.###.............#..#..##..#..#.#.##.#....#.#..", "......#.#.#..#.#.......#.#.....#.#.##.##..##..#...", "##....##.##..##..#.#..#.###..............#..###...", "....#..#.#....#....#..#..##.##.......####........#", "..#..###.#.#...#.......#........#....####..##....#", "#...#.#.#...#.#....#.#....#..#..#..#.##.#..#.##.##", ".##.#...###....#..#...##.......##........##.#.##.#", "##.##.#..#..##..#..###.###.....##...#.##.#.#....#.", ".##.##.###..#.#....#.....#.#....####.#....#...###.", "#.#.#....#..#.....#.#....#.#..#.#####..#.#....#...", ".#...#.....#.#.#.....#.#.......###.#.#.#.#...#.#..", ".....#.#.####.#.#..#.#....#...###...####.#.#.#....", ".....#.#..#....##..##.......#....#..#.#.#...#.#...", "###.#..........#....##.#.#.#..#..#..#.##.#.#..#...", "...#.....##.##..........##......##.#...#.#.......#", "..#.#....#.....#...#....##..#..##....#...#..###...", ".....##..............Y..##...##.#...#...###....#..", "#.#..#.#....#.#..#..##........#..#..........#.##..", "#..#.......#..#.#.#.#.##.....#..#....#........##.#", "..#......##.####...##...##.#..#..#.....##..###...#", ".#.............##..#.#........###.##....#.....#.#.", "..##.###...#.#.#.......#.....#..#.#....##.###.##.#", ".....##......#...##.##....#.....#..###........##.#", "......#.#.#......##........#.#.......#..#..##.....", "#..#.###.##.......#.##..##.#......#....##.#.#.#...", ".....#...#...#.#..##...#..####.....#...##........#", "#......#...###.........##.#..#...#....#.#.........", ".##..##......##...#.....#....#..#...#.#.#...#.#..#", ".........#...##....#........#..........##.#.#.#...", ".....#.....#.#.....###...#..##.##...#......#.#....", ".#....#.#.####.#...##.##.##..#.....##...##...#.#..", "..#.......#.#....##.#..#....#....#.......###.##...", "..###...#..#.#.......#.#......#..#..##....##.#.##.", "......#.#......###...####......#...#.##.#..#.#...#", "...#........#.#..........#...#.##.#....###.....#.#", "#.#..##....#.......##.##.##...#...#..##....#..#...", ".#...........#...###..###.....#...#..#.........#.."};
    vector<string> commands = {"WEWWSWWNNSENSWSEESWSSESNSSWWESNNSSWESWSWSNESNWEWES", "WWNSWEWSENSENEEESEEESNEWEWSEEWEWWSSWEWENNEEWNWWESN", "NNSSEWSNSEESWNNSESNEENWNWSWNSWSSSESNESNWENWNSSSSNS", "EWSSWSESENNESWENNNWSESNWWENNSNSEESEESESNENNWSWWWWN", "SNSWSEWSESNESNEWSWNWWWESWSSSESSSEWSWWWNEWSSWNNEWSS", "ESEWEWSNENWWWSSNEWWWNSSNEESSWESNSWSNEWWNNNENWSEEWW", "SESESWEESNWWWWESWSSSNWENSSWWWEEWWWWWSNENEESENNEWWW", "WSNSEWWEWSWWNWENNNNEEWWESNSSSSWESNWSWNNWENNEWENNEE", "WSESWNNWNENSWWSSWENNWSNWNSWWNEWSSWWSEWWSEENEWSNNWS", "ENESEWSNSNEEENEEEWNNSNWWNWWNEWEEWSESSSWWWSESSEWWNE", "SEESWEESSENEWESWENNESSWWENEWSSESEWNWNESSSNSSEWSNNE", "EEESWNWESNEEESENEESENSWNENWEESEWNEWWSEEESWWSWWSEWE", "ESWWESSESNEWNNSESNNSWEWWNSENEWSSSSNESSNNSSNNSEESNE", "EENSEESESSSSSWSNWWWSWWSWWNSENESWSSWNEEWWSNWENENNEE", "NNSNNWSSEESESSNSNESNSENESNWESWNSESSSNWSENNNEWENSWW", "NWSENEEWEWEWNSESESWSESNSESNWSSENWWENEESENEWSEWWWES", "EWNNNEENNWNNESSEWNSWWNSWNWWNSWSSSWWNNEWSSWEWNWWESS", "SEWNWNWESSNSNEWESSNWNNWWENSWWNSSNNNNNWWEEWNSNNWNEN", "WWSSEWNSWSWWEWSWSWEEESNNSNESWNNNEENENWWWWEWSWNNWWS", "NWESESENEWNWSWWEENWSSSSSEENNWSNESSESSESSNWEESNSEWN", "WSSESSESENSSEESENSNENEEEESWSEESNWWEEWWESSNENEWWENS", "SSEWNNEWSWWWNSEWNWNNWWNSSNSSEWNEWWWSWSSSNNEWNSWNNN", "WNNNEEWESEWNENNWNSWWWSNESNWSWSNSNESWWSSESSSWNNWSES", "NWWSNNSSNSSWWWEEESSWNWNSWNNSWSEWSSWWSEESESNNEEESNN", "ESWENWSEEWNSWNESSSWNNENSESEWWESNWSSWWSNENWENNWWWWE", "ENSENNSNSSWEWWSEEWNESSWSENEWSEWWNWWESWNENENWEWWNWN", "SNWESWNSNNNENWENNESWSSSNWWWSSWSSSWNEENWWENNWNNNNSS", "WWEWSNNNWWWSEENENSWSEEENNWWESSEEEENWSEEENWNSESWEWS", "SNWSESESWEWSNNSNSEWEEENNEEEWNENEESWSEEWSNWSWSNNESS", "SSSWSNSNWESWENWWNWSEENWWWWNSNNNSNNEEWNENNNSWSWEWNE", "NENNESNWSWWSWNESWNNEWSNEESEWENWSNWSWWSEWWNNNWWWNEE", "SWEEEWEEWWWNNSNNNESNEENENNESNWEENEEWWNSWWNESNNWNSW", "SNWNWSENWWNWNNWSNSENESNNSNEWWEENWEWEESNEEENEWSWNWS", "SEEENNWNNNEENSSEWNESNEWWSNWSENNWENWNWNENNESESSSNNN", "SEWNWNENSEENSNWESWNSNENSEENNSSENWNNNEWWSWENEESESWN", "NWNSSWSNEEEWEESNENWSESSSSSNSSENWNWNNEWWENNSNWWESNW", "NESSENSNWWEESEWNNWENNSNENWEWSEWWSENNNWSEWENEWWNNWW", "EENNNWSENNNNWSSEWNSEWWEWWESWSSSEEEWSSESWSNWWSSNEWW", "NENENSSNESNNSWEWNWEWENSNNNSSESSWNENESNEENWWSNEWNSS", "SNNWNWENSENESEENEEENWEEEWNSEWSNNEWNNENEENEWSWSWWSE", "WEWESSNSWEEESNSWSNNWENEESENNWWNWWNNSNWWNNSWENWESNW", "SNEESNWENEENNSENSEWESWWNSSENEWWNESWEWSSEEEENNSNENW", "NNNNWWNEENSSSNNEWWSWSNESEEESSSNSNWWENESNSESEWESESE", "ENESSNESNWWNNSEENNEWWENWNWNESNNESWSWSNWSNENSNSNESE", "ENEWWEWENEEWEENSWSSEEWENWNEEENNSSENSWEWNNSWWENWWEN", "NEEWNWNNWNNSNWNWSEWWWESNSENEESWWNNWSESWSNSENNESWNE", "NSWNWSNWSNWSSWESWEWWWEWNEWESWEWSNNNENSSSEWSSNSWSSN", "WSESNWSESNESEWWESWWSNNEENWNESWWNENNWWEESESENNSENWE", "NENENEWWWWWNWSNENWWEWNENENNNWWEEWESNWWWSWSNSNSSWSN", "EWSWWWWNNNWENEEENEEENEWWNSWNNENENNWWWNWWEWWNWSNEWW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1678;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"#............#.....#..........#.....#.##....#.#...", "..#.#..##..##...#.##..#..#....#......##.#..#....#.", "...#....#..#..#..##...#..#.....#..#.#.#..#..###..#", "........#...#.###.#...##.#.#....#.#####.....#.....", ".#..#....#.#..............##..#...#...........#...", "...#.....#...#.#.#......###.##.###...#..#.....#...", "...#.#.....##...#..#..##.##.#...............##...#", "#....###.....###...#.#...#.#.....#.......#...#.##.", ".#...#....##.##....#..##...#.#....##...#.##..##...", "#...#.#.#......##.#........#.##.##..##..#.......#.", "#.......#..##.###...#Y.#.#.###...###..#....#.#..#.", "#.#...##..#...#..#.#.#.###...#..#........#.....###", "...##..#.....#..##.#..###.#..#..#.#...#..##..##..#", ".#....#...##.#..#.#.#....##....##...#...#.....#...", "#..#.#.#.......##.#.......####.#.#.#....##......#.", ".#.##.#..##.#.....#..#.##....##.#..#..#.X.........", "#.#.......#.#...##..#..#.##....##.#..####........#", "#...#.#...#....#..F...#..##.#....##.......#.#.....", ".#.#.......###....#.#.#..##.............#....#....", ".#..##..##.#..#......#.......#.#..##..##.....#.###", ".#......###......###...#....#..#..##..........#...", "#......#..###..#.#...#..##...#.#.###.......###.#..", "...##.#..#....##..#..##..####....##..#..#....#..#.", "#...##..##.....#...#.#.....#.######..#..#.....#...", ".##...#...#...#.#..###..#......#..#...##.##.#.##.#", "......#..#.#..#.#...#.##.#.....#.#..#......#####.#", "####..#.....#...##..#.#......#.#..#..........#.#..", "#..##..#......##......#.##.#..#..........#...#.##.", ".#..#...##......#.#...#.##..#.#..###..#...##.####.", "##.##..#..##.##....................#...##..#...#.#", ".#####.#..##.#.......#..#.##.##.##.##....###.....#", ".#.#..#.#.#####...#...#......##..##....#...#...##.", "..#....#..#.#......#..#.#.#...#......###....###...", "#..#...##...#...#...#....#.#.#..#..#....##........", "#.......#.......##..#####.#..........#.....#.....#", ".#....#.###....#..##.#...#..#.#....#..##.##.#.....", "#...##..#..####.........###.....##.......#.##..##.", ".#...#..#.#..##..#...#.#.....#.##.#...#..##.......", "....#...#......#....#...#...........#.#..##.......", "###...#.........#.##...#......#.##.#..##......#.##", "...#..###......#.#..##...#..##...#..#...#.........", "...#.....#....#...#...#.....##.##.#.....##.....#..", ".#..##..#.....#.#....#....#.......#..####........#", "..##....#.#....#....#.#...#...#.##..#.#....##.#..#", "..#.#.#.#..###.##....#....#.#....#....##...#....#.", ".....##.#..#......#.....#.#.##..##...##..##..##..#", ".#.....#........#..........##.....#...##.....###..", "..##..####....#.......#.#.....#.###....#.#...#.###", "....#.#..#....##..#...#.#...............##..#.#...", "#....#...#....##..#......#......#.......##........"};
    vector<string> commands = {"ESENWWSWSEWNWNESWSWWWSSEWESWSENWSSEWWEESESWSNEWNWE", "NWNWNEEESNENWWNNNNSWENENWWSWEENNNEENWNENEWENESWSNN", "SENSSENESNEESEESNSENNEWNSEWSENEEENSWWEENEWENNNNSWW", "EESEWEWESENWNWSWSWSSNSNNWWWNSWEWESNNNWWWSWWNSWSEWE", "SESEEWWWWWESNSWSWWSSESENEWSEEWESNNNWEWSWENSWWSNENE", "SNWWEEWWWSWNWESEWSESSWNSSWWSSSWSSEWESWSNEEWSSSWWEE", "NSWWWSNNWWNSNSENSWSEEEEWEESESNEEWSNEEEEESSESWNSESS", "WSSSENWWWESSEENSSNESEENEEEEEESSSWSESSEESWESNSSNSEW", "SESNWWWWSWNESSNWNWWNSEWSNWSESNNNNSESEEESSSESWNEWWE", "ENWSEENWSEENNWWWESESEWESWWEWSWENSEWEEENWWNSNESESSS", "SNSSSNWWWENEWWSSEWEWWSNEEWWNNWENWWESEEESSWNNEWSNNW", "ESESEENWNNWSSWSESESWSSNWSSEESSNSSEEWWWESWSWSSWSSEW", "SWSNEWEEWWSENENWWSNEWSEWWENENWNSNWWNWWWSWNWWENSSWS", "SSWWSNWSSSSNNNSSSENSWWSWSSWNSEWEEESNNESNEEWWWEWSES", "SNWEEENEEENSENEESWSNSSEWSEESENNSNEESSWWSENWNWNSWNN", "SWENSNEWWNEEESNSNSWEEESWSEEWENNWWWEWEEWSEWNSEEEEWE", "NSNWENENSEWEENSWSSNSSEESWSEEWSNSSWSEEWWSEWWESWWWEN", "NSNWWNNENNNEEWESNEWWNEEWSWESWSEEWESNEESWWNNEWENNSE", "NSWESNSEWEEEWSSSWENSENESESEESEENENENEWSNWEEWESSWNS", "WNNSSSSNEEESESENSSESSWNENWWSEWSNSSNEWEENNNEWESNSSS", "NNESENNSWSWWEWEEWSNWEWEWENNSNENSWSSENSENWSNWWWEWNN", "NNNSWWWNWWSWESESESNWWWNNSEWSSEENSSWWSWWSWEWWNWNWWW", "SWSSNESWNSSEEEWSWSESNESSSESENNESWNWNWWSWWWNSESENSN", "ENNENNSWEESNWSWSNWSWSEWESSNWESESENSENNEWWNWSNSWESE", "NNWNNEWWSWSWWNENNNEWWNSWSWEWWSWNWESEEWEWSNWSNNNESW", "NNESSSSSNNWNWEWSNNNNENNNNNEESNSSENEEWEESSWNENSEEES", "EENEWNNSNENEWESEENWWEENWWNWSESENEEWWNEWNENNNESEWSW", "WWNSWESWNNWNNNWWENWNNWNNESWEEWWNWSENSWNNWWWWNWWENS", "NSNEWNSSNSSNNWWSSWSESNWWWWNEWWWNWSWSWENESEWNSWWNNS", "SSESSWEEENSNNWNNSWENNEWENWNNEWWNNNSWNNNWWNEWWEENWN", "ESSNWSNNWWSESEESWSSSWESSWSNNSSWWSSNSSSNENESNWENNEW", "NENNWWENEWSEESEWSWWSEWESNNNNWNWSSNESNNNWNESNSEEWEN", "NSWSSSSNWNWSNSNWEWWWWNWWSWNWWEWESNNEWWSNWNEWSEESES", "ENENNSWNNENENNESSWWSEESEWESEENSESWSEENENENWSWNNWES", "NSSNSSEEENNNEESWSESNNNSSWNSNWEEEESEESNWNNWENSWNSNN", "SNNESNNENEEWWWWEWSESEWWNSENSWWNSEWWESENWNEWEWEENWN", "EEEWNNWNESNNSNNWNNNENWWSEWWSNNWNNSEEWWSNNWWSNNNESE", "WESESNNSWWSWEEESWNNENWWNWNENWSNWSWSEEWNENNWNWENSWN", "NWENSNEESWSSSWWWWNSNNNWWENNSEESNNSWSNNEENENWEESWSW", "NWWWWWNENWWEEESNEWNEEEEENEWWNEEESWEWESSEWEESEEWWWS", "EEWWNWEWSNWNENSENEEESWWWWEESWESNWESSWNSSNEWSESNWES", "SNNNSNSNNWSWWSENSSWESENENNNWNWNSEESEEESNNEWEWWESNW", "SENSEWNWEESNSWNSSEEEEEENENNWEEWENWSSSSENNEWNEWSNSE", "SNEESSENNSNNWSEENNSEWENSWNWNWSSESEWNSNNSNNWNWEWNNN", "NSENSNSNWSSWNNSNENSEEESENNWEWEWEEWEENESENSNEWEWSNE", "EENNEEEENSWENENSWEWSNNNNSNNWWWEENSNSNEWWEWSNNSSWEE", "WSWENWWWNESSEENEWEESEWESSSSWWNNEWNEWWSSSNWEEEEWNEN", "EESWEWNNNSENSNSWSEWWEEEENSEEWWEWNNEWEEWSNNEESSWEWE", "NSEEESWSESESNWESENSSSSNWEEWSSEESSSSWWNWSNNENNENSSE", "EWWSESSWSNWSENESSNSNESSEWWEENEENSSNSWNEWENWWNSNSWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 975;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"...#.#..#......#...........#.##.......#X#.........", ".#.....##....#.##..##....#.#.....#.###....##...##.", ".....#..#...#.##.#.#.#......##...#..###..#..#...##", "....#..##....######.#.......#.........##.......##.", "#.#........##..#..#.#.#..#.####...##..#..#....#.#.", "#.#.##....#.#.#.##..##.#..#..#....##.#.#.....#....", ".#.....#..#.#.#.#..#.#...#..###...#......###....#.", "..##..#...###.#.....#..##.......#..#.#......###.#.", "...####..#...##.##.....#####.#..##............#..#", ".#.#..#........#..#.#....#...#....##..............", ".............#....###.....##...##.....##.##..##.#.", ".#..............#.#..#.##....#.#.#..##..........##", "#..#.###...#..#.....#....##...###...##.#.#.#.#..##", "..#...####.####.##......##....#.........##..#.....", "#.......##..........#..##.#.#......####..####...##", "....##......#...##.#..###..#....#..#..#.##...#..##", "...#.##............####.#...##...##....#.##.######", ".....##......#.....#.##.#.............#...........", "#....#.###.#...#..#####..##F..##..#...##...#....#.", "##.##.........#.....#.#...##...#..###.#....#..##..", ".##..#....#..#.#...#..#....##..#...#.......#...#..", "...#...#..#.#...#....###.##..........##........#..", "..###.#.....#.......#.#......##...#.#.#.#....#.#.#", ".#.............#.#...###..#.#........#....#..#....", "#.####..##.#......###...##.##.......#.....#...#.##", ".....##.#.##......#.#..#......##...#...#.........#", ".#.#...#.#..##.....#...###..##........#...#.#.....", "#..##...#..#.#..#...#.#.##........##.###........##", ".#..#.##......##..###.....#..#......#....##.##.#..", "..#..#...#..##.##.#......##.#...#.#..##.......#...", "#.#.....#..#.#...#.###.#.#...#..##.#..##......##..", "##..#..#......#........##.....#..###..#.#...#....#", "##......###.##..#.#........##.......#.#....#......", ".##..........#.....#....#.#..#......#....#.#.##..#", ".#.##...##...#........#...###....##.#....#..#.##..", "...#......#..##......###....####.#....#....#.#....", "..#.#.#.###.##....##.....##.##..##....#....#.....#", ".......#....####..#.#..##.#...###.#.#.#..#.#......", "##.##......#....#..##.#.###..#.##..#...#.#....#.#.", ".....#.#...#..###.####..#..##..#.#.##.##........#.", ".#...........#....#.#.##..........#...###.....#.#.", "..###.......#..#...#.##..##.#..#....##...#...#...#", ".#.##.##.#.#..#...#.....#.....#..#.##...###.#..###", "..##..#...##.#..#.........#....#.###....#.#..#....", "..####..#..#.#.....#.......##........#.#...###.#.#", "......#..##.#...........#####...#..#...#.#........", "...#...###.........#...#.####....##.##.#....#.##..", "#.#..#.....#.#.#...#.###..###..##....####.###.....", "..##..#.##...#...##..Y......#.............#....#..", ".##........#.#....#..#.....#...#.##.###...#...#.##"};
    vector<string> commands = {"EWWNWSWNEWSWEWEWSESNNNNWENNSENNWWWSSWWESNSNNWWWNNS", "SWWESSNSSSESEEWWNSNSWNEWNWNENSNNNNEENSNWENNEESSSEW", "ESSEEESNSEENWNWENWNWWNNNSSSWENESWWESWSNENNSWNSNNSE", "EEEWNNWNESWEEESSWWENSNWWENEWNNWNEESNEENSWSNSSNNNWS", "SNEWWEESSSSWEEESWSWESNWSWNEESENESEENWNSEWEWEWNNENE", "SNSESWNEWSNENWNEEESEWNESSWWENENNEENWNNWSSSNWNEENES", "WEWESNENEEWNEENWNEENWNNNWWNSNWNWWSNSWNSWNENWSSEENE", "ENEWESEWWSSESWNSSEWSWNEESEEWWESENENNNNNEWEESENEWSS", "NWEEWEWNNWSNNNNNENNNEEWNENWNNENNNSENESWWENSSNSSSES", "SNWNNWNNWNEEWNNNNWSEEEENEWEEESENNWNWEWSWESSENNSNNW", "NSENSEEWWSSSSSEWNEENSWSEENNEWWNEEESNEEWNSWNNSENSNW", "EWEWNWEESNNESNEWSSSESWNEEWNNESSENWEWWWSWNNWWNNESNS", "SENNEWWSEEWWNWNESNSSSNENNWWWNNSNWSNSWENWWWSNSWEWWN", "EWNENENENNEEWNWESSNWEWNENNNENNESWWSNEEENENENNSSSWS", "NWWSWWWWWNWSWEWENESSNWEENWEEWWEWWWNSSSEWEWENWWNNEW", "EWSSNESWENNNWWEESSNNNWWENNSENESWWSEWSWWEENSNSWSNEE", "WNSWSESNWSSNWNWWSSWEWWENSNENSSSESEENNSNEWENENNNEWW", "NWNENSNWEWSESNSWWEWESNNWWESSNNWNWENEWWNWEEESSESSNE", "SWSWNSWEESSEEEENEEEWWSNEWNWNENNEEESSWSNWSEEWWEESNW", "SEWNNSNSWSWSSWNSEWENENSSNEWWWNWSENSNESSWSENNWWESWN", "NNWESWSSNWWSWSWWEENENWEWNNSEWESWWSNSWWSWESNNWNSSWN", "NENWNEESNSESWNWEESSWWEEWSWESSWSSWEWEWNNSNENWWWNNEN", "NWNESNSEENEENNEESSSENEESSSWNSNENEEWEWNEESWEEENEWWW", "EEWWSSNSNNENSNEWSWEWWWWSSESNWNNSESEESWNNSWNNWESESE", "ENSNNNWNESNSEWNNWWSWNNWWNNWWSNEWWESNWSSWESSNNSNESN", "EESWWNNWSSSNNNSSWSNWWNWSWWWWSSNENSWNENSSEENNSWSNSS", "NWWESSESSWSSSNWEWNNSNSWNSWWWEWSSWSWNWNWNWNESNWENEN", "NEWSNWENWSWEEEEWSWSSEWWNWENSSNENWSEEESWWSSSENNWWNW", "NSNSSSENNENWNNSSSEWWESWWNSEWWENNENNNSEENSSEWNSNNWE", "ESENNENWEENEESWSSWWNNSWSNWEENSSNWENNNENENWNSNNNENE", "SWNWWSENNWEWNNESSSWNSWSEENENWWNESNSSNNWSESESWSNNSS", "SNSSNWENEWENWWNEWNENEESNEWNWWWNNWENWEEWEEEWSEWNWNW", "NENEWENEWENSSNSSWSEENNNSNEENSENSSSESSNSNWSWWSNSESW", "ENSSWNEWNSWEWNNWSENNNEWWSEWEEEESNNEESWEWEWNSSNNNWS", "SNSEENNNSEWNSWWNESSSNSESWWESEWSNSENWWNEWNNENENNENE", "WWENWSEWNNNWSWESWNSEEWESEWENNWSESNNESNNESSNWNEEWES", "WSSSSWNNEESESWEWSSEWSEEWWNESEWWSNSSESSNNSNWEESENEE", "NNNENSSNENNESWNNEENSSNESSSWNEWWSESESWSNENNSESENSSW", "NWNEEEWWWEWSWSWENWNESWSENNESENSNSEEEWNSWESNESSWENN", "SENEENNWSWNEEEWSEWWSWSEWENWSWNSSNESSSWSNNWNNWEEESW", "ENNWWWNNSWEEWSENWNESENSWWNNWSEWWWENENSSSEESWSEWEWN", "SNNWSSNWWNNNESNNESWSWNWENWSSENEEWSNESEENNSEEEEEESE", "NWNWESEEENNNNWNWWWNESWSEEEWSNSNWENSNSEWWSENWWWWENN", "NENWNNWWNNEWSEEEENSNNEEWWWSEEWSWWWWWSWNEEWENEESEEW", "SSSNWSNWWNEWWEESSNEESESSEESWSNWEESWNSWNEEEWWNNSWEE", "WEWNSWNSNEEENWSEWSNNEWSNENEEESWSWEENWWESWENWWNWSWE", "SEWWSNNNENWNEWNNWWWSWWWEWNEESWWNSNWSEENNSESSEENSNS", "ENSSWSEWENWNWNNNNNSSWENEWESSSWNWSWSWNNSNNWWNWNNSEE", "NWWWEWWWWWWWSSESEESSSEEWEEWSNNNEWNENNNNNSSENNWEENW", "WENNEEWWESSSNEWWESSWSENWENEWEWNNSWNSSNNWNENNSSEWWS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"#.##..#....#..................###.......#.#....#..", "#.#.###..#...#..##....#..#....#....#..#..#.....#..", "#.#........#..#...#....#.#...#.##..#..#.#..#.###.#", "...##..#.###..##..##.##..#...#.#.#.....#####...##.", "...#...#..####.....##..#.#..#..#.#..##..#....##.#.", "#..#..#.....#...#.#.#.##......#.##..#.#..##...##..", ".............#.#.##....####.#.........##.#.#....#.", "..#..#..#......#.##F...##...#....###.........#....", "#......#......#.###..##..##..#.#.##....###..#..#.#", "..#..#..#....##.#..#.#.#.###.##...#......####...#.", "..#....#####.###..........#.#.#....#..#.##....##..", "##.#....#.#..##.###..####.#..###..#.##...##..##.##", "...#........#..##..##......#..#..#..#.##....#.....", "#....##.......#.......#..##..#.##....#...#...#.#..", "#.#...#....###....##..###.##....#..#.#...##...X##.", ".....##....#......#.#...#...####......#..#.##....#", "..##.#....#.#......##.#..#...#..##......###.#.....", "..###...####..#.........#.#..#.#.##.##....#.#.#...", "##.#...###.#.##.#.......#..#......##.#..#.......#.", ".##.......#.#.....###.##......#.#.###...#.#.####..", "..###..##..######.#.....##.....#...#.....#..#...#.", "#..#.#.....#.##.......##..###.##.#.......#...#..#.", "##.....#.###.....#.......#...###.#..#......#..###.", "..#.#..#...##.#....###....##.#.##.......#....#..##", "...#.#......#..##....#..#.#.##.#.#.#.#....###..#..", ".#.#.#..#..#...##..#..#..#..........#.#..#...#####", "...##.#.#......#.#..#.##....##..#...#.#..##.....#.", ".#.#.....#....###...#..#...###..##.........#.....#", ".##....##....###..#.#.##...#.#.#...##.#..#......#.", ".....#.#..#...##..#.#..#.....##...#.###....#.##.#.", "####.##.#.###....#....#.#......#.#.#.....#.#.##..#", "#.###...##...##....##...#..#..................#...", ".#.....#..##..##..#.#.#.##..###.#..............##.", "....##............###..#.##..#..#....##..####..#..", ".#....#..#.##.##..####..#..#......#...#....##.##..", "#......#..........#..#..##....###..##.#...##...###", "......#....#.....#......##.#...##..#...#.#.......#", "#..##...#.....##..##...##.....#......###....#....#", "..#.........##...#.#Y..#....##.#.#..#....#.##.....", ".....#.##.#.#.##........#.##...##......#.....#..#.", "...##..#...#....#.......#.###.#.#.....#...#.#.#.#.", "....#.#..#....#.#..#....#..#....#......#.........#", "...##.#..#.##..#..#.#.###...#.........#..###....#.", "#....#...#.##.....####.###.......#..##...##....#..", ".#..#.....#........#.###.#.#...##.#..#........#.#.", ".....#..#.#....#.....#................#..#.#.#...#", "..#....#..#.#.......###....#..........#....##..#.#", "#....#####....#..#..#.#..#.......##....#...##.....", ".#.#...###...#.##.....#..#..#.#....##...........##", "#.#..#...#.#.###..#...#..##..#.#.##.....#..#......"};
    vector<string> commands = {"NWENESEWNEENEESESEENNENSWEEWNSEWWEWENWNSNWNSWNWNNN", "NSSNNNSENWWSNENSEWSEWWSSWSSSSENSEEWWEWNSENESSEWENE", "SNENWNWEWEESSWSESESNWWNEEWSEWWWESSENWSEWSSNWWSWESS", "NESWSWNNEWEENSESNWNWSSWNSWNWSNEWNWWESWWNNENNSNNEWW", "SEWWNWNWSSSNEWWWSNSSWESSEWNENWWNWSNESSNWNEWNNWNWWE", "SWSEWESWSSSSSESESSSSSWWESNWWWSEESNWWEWENNESWWSSSSS", "SSSSEWSSSWSNNNSNEWEWWSNEWENSWEESWNESEWSEESESWSWNNN", "ESEWSSSSSEWSSNWNSESEWNSSSNWNEWENWEEWEESNESNNSSWWSS", "ENSSESNNNESNWWWESNSNSSSEEWWENEENWEWSSNNNSSSSSWENNS", "NEWWSWWEENWNSEEWWNWNNWESNEENNEWNSSNSSNENEENENENNNS", "ENSESNWENSWWSNSEEWNNEENWSEEESSWSEEEEESWENWWSSSENWE", "EEEENEWNWNNWSNNNWSSSEENNWEENENNWWSWNNWEWWNNWWNSNSS", "NENWNSSWNNNSNSSSNWSNNENSSNWNSWWWNWSWWSWEEWSEWNSSWE", "ESWNEESWWNNEESSEWESNWNNSWNWEEEWEWENEWWWEWWESNNNWSN", "NNSSNSEENNESNNWWNNWNSSNENNESWSWEWWWSWEEWWWWNWNEWSW", "SWWNSWENENWENSNSWESWENWNSWNSEEWENSWEENSNSWSEWNWSES", "EWENEEESNSEEWSSSNWEEWWWWESNENNWESWEWNENNEWWNWESEEE", "NWSWSENENWSNEEWSESNSESESWESSSWSWEWSNSSNSWSSSNNNWEN", "EWSNEEWENNSESSSEEWNNSENNENWWNWWEEWSWSWSSNWEEENSSWE", "ENEESSNEWNWENSWSEEWWENEENSENEENSNSWWSSSESSNSNSWNWN", "ESSNWEWEENSSESNNNSSNNWWSSNWNWENWWSNWWENWNSSSNWWNSS", "SWSNWWEEEWSWSWENNWNSENNSEWENWSEENNSSENSESWSNWWSWSN", "NSEEENWNNSNEWWNNSESEWESNWWWWWWEWSENSEEENSWNESESWWE", "SWWESSNNNNWNSEENWENNNNWNEEWSSNSWSWSSSESNESNENWSNWN", "NWWSENESSWNWEENWNNWSEWEENWNNSWSENSNNSESEEESSEEENEW", "EESSESNNENWNSNWNSSWWENNSNWWSEWSNSNWSWSWEWWEEENSWWN", "ESNWSSNNESNEWNWSENSWWWWWENSSWWNWWWNNSNWNNEWSNEESWW", "WSSEWNWNSENWNEESEEWENNNWEWSSNWEWEWWNNNNESENWWWNSEW", "SNESWNSWEENSWNWEWWWNENSEENSNESNNEESNNNNWSENENNSWWN", "NNEWSWSSNSSEEWSWWWESWENWWEENNSEWSNSNESSEWWEWESSSSS", "SEEWWWNNSWWNENSSWEESEEENNWWSENWEEENNENNEENEESSEEES", "NWNEWSSWSSSSEWSWESESSEWENSEENNSSSSSNSESWWESENESEEW", "ENENESSWNSSNENWNNNSESEEENSEWNNESWWNWEWNWWNNENEWSEW", "ENEEWWESEWNNWWSWWEWWSWSWESESNSWSSWWNWWSSWEWENSSEWN", "EWNSESEWSSNNENNNWSSNWESWSNNNNSWSSSEEENWSNNSEWSNWWN", "NNWWESEENSSNNSSWSEENENSSWNSENWNWEWNWNSWSSWEENNWWEN", "SNSEEENNSEESWNESESSSWEWEWWWNSSNWENWENENWSEWWNSSWNN", "SNWSSNNSNWESNSWEESSNENENESSEESNSESEEEWEWENNWEWESEE", "EEESNWENWSEEENNSNEENWSNESSWENESWNEEEEWWNNSNSNWWWWE", "WEWENNEENWSSEWWSNNSNWWESNNWESSEWNENNEESNSSEWSNNNES", "SNWNWNWNWNWNNNESWNNSESWSNWEWWWNWWSNNNWWNEEWSSNSNWN", "ENWWENNWESSWNWWNSWWWNNWSWEEWEEENSNESEWENENESSSNSSN", "EEEWENWNSWESWWEEESWNWESESSEEEWESNWSSEWEEWSNSSSWWSW", "NNWSEEEESNESSNEWEENEESEEEESSESSNESWSSESSSENNENEEWW", "ENWEEWSNWWEESWSWSSSEENESSNSESEWSNNNNWSESNSSWWNSSEE", "SWSSNWWEWSEEEWNWESNEEEWNSESSWNNWWSNNNESENESWSSEEWS", "SNSWENEWENSENEWEESSSSWEWSWSWESSWWWWWEWSNSNESSSSWEE", "NNSWESEESSWSSENWWSSENENESNENESWENEEWNSEWSNNEEEWNSE", "NSSENNSEWWNSENEWWSSNNWEENWENNSESNEEWESEESNSSSNSEEE", "NWNESWEESWNEEEWNWWESEWNEWENNSWNWSNWWWNNSSNWWSWEESN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"##..####........#...#.#.....###.#....###.#....#..#", "#........#..##..#......Y#.##.....#.....#..#.#..##.", "...##..#........#....##.#......#.####...#...##.###", ".......##.........###....#.#......#..#.X..#.......", "#..#.....###.##..##.##..##.###...#.#.#...#.#.#....", "..#.#.#.#...##.#..#...#......#..#....#.##...#.#...", ".....#....#.#.#..##..#.......###.....##.#........#", ".#............#...###..#..##.....#..#..#####......", "...#..##.##..#.##.#...#.#..#......#......##.#.###.", "#...#....#.#####.##..#.#...#...##.#...###..#....##", ".............#....#.#.#.###.#.....#####..#...##...", ".#.#...#F#..##...#......#..##.##...#..##.#...##..#", "...#.#.##..###....###.###.##.##.#.#####.#.#....#..", ".#...#.#.##....#..#.#...................#....##...", "###.....#..#.##....#....#...##.##..#.........#.#.#", "............####.......#..#...#..##.##.#...#..#.##", ".......#.#..#....#.#..#.#.#....####.......#.##.#.#", "#.###.###.##.#....###.#.#.#..#.##...#.#...#...##.#", "##.#.....##.#.#...#..#....#.....##.#...#.##..##...", "#####........#..#......#...#...#.##.......#.#.....", "...#..###.#..##.#.##....####....##....###...#.#.#.", "#.###.##..#..##.#..##.#..#..#.....#...........#...", ".##............#..##.....#......#..#.##..#.#...#..", ".#...#.##...#.....#...#.##....#.###...#...#...#...", "....####..##......#.#.###.##.####.#..#.......#.#..", ".###....#..##.........#........#.....##.##......##", "#...#.#.#..###.....#..#.##....#..#..#.#...........", "..#.#...#.###.##.#.......#.......#.....##...#.....", "....#........#..###...............##.#..###...#...", "#.##....##.#.....#...#....###......###.....#......", ".#....#.#.#.##....#..#..#.#..##..#....###.....#..#", "..##.#...#.#.#.##.#........#.#...##..#.###...##...", ".#...#....#.#...#..#.........#.###.#.#...#......#.", "..#...##...#..#.#.......##...##.#.#.#..###...#..##", "..#.#.#.....#.#.....#.###...###.#.##.#...#......#.", "..#....#.##..##......#..#....#......##...###......", ".######.#.#.........#...#.#.###.....#.#..#..#..#..", "..####.....#...###.....###.##..........#..#...##..", "#........#.....###...#..##.###.#..#..#.##.....####", "...##...#..#.#.......#..##....#.#..#.###...#..####", ".###....#.#.##.##...#.#......####.#.....##..#.#...", "..............##.........#..#.............#...#...", "#.##.#...#........#...###...###.#.##..#....#..####", "#.#......#.......#..#....#.#.....#...........#....", ".......##.##....##.#.#.#.###.#...##.#.##..#..##...", "#####.....###...#.##.#.###........#........#.#....", ".##..##........#....##..#.#.#.####.....#.#..#.....", "..#.#...##.#...#.##.#.#...##.#............#...#...", "...#....#.##...#.....#......#......#..###......###", "#.#.#.#.#..........#.#.##.#..##...##.#.#.##.#.#..."};
    vector<string> commands = {"WWWWNWEENNWWWESWNENNSWNNWWNNSNNSENSWNESWNWESNNWSEN", "SWSSSWWNESNWSSEEESNWSNWNNESNNSNSNEWENWWSENNWNEEEWE", "EENWEWWNNESESNSNNSWNWWNWWNSWESSSEWNWWWNNENWWNNSSWN", "WSNEWEEENWEESSWEWWSESENNEEEWWSESESWSSEENWESSWNEESE", "NNWNEWNWEEWWWSWSWWWSSWSESWENWWWNEEWWNSEWSESESWESWS", "ENWNESNESNWSWWESNSNSEENSESWWWSWSSNEWWSESSSSSWSWNEE", "WNWSNSNWNESSWEWWENNSWWEWEENEWNSSEWSSWSWNSWWNEENWEN", "WNSWWENWWSNNNEESEWWWENEWWWWNWWNNSWSWNEENWNNWNEESEE", "EEWNSNSWNSSWNSENSSSEEESWNSSEEESSSSSNSSWSSSSWNNESSN", "ESNNNSEENWEESSWNSNEENWWWWWENSWWWSNEEWWWSWNNSNWSESN", "WWNEESESNNNWWESEEESNSWWWNESNSNNNWNSWWWNWSSEEEEWEWW", "NNWEESSENWSNSNESWNENESSNWNSSEWESEEEEWSSSSENNSWESSW", "ESWNSENWSEENSNNWSENNSSEEWEENEEENESSNSWNNSSEWNSENES", "NSSSEWSSEWENNNSSNESNSWNNNSSSSWWENWSESENENSSEWWNESE", "NWSNNWSSNWSEWESWNWEESSWWSNWWWSNSESESSNNENNNEENNWNW", "ESSEENNSNEEENWNNSEWNNWSSEWNEESSSSSNNSESSSESENNNNWS", "NEWWSWSSESWSEESSESNNESWNWEWWNENNNNEEWNWESNEWWNENNS", "NEENWENEENSSWSSESWNNSNNESNNEWNWNNWSNSENEESEEWSNEES", "ENWEWWENSWEWWWNWSEESNWEEWEEENSEESEESEWSSSEWSNEENEW", "NEENWWNENSNSSENEENENSEWESNNNESSSENNSSEWNENSNWWNNSS", "ESSNNWWSEWSWESSESESSSNEEENNEWNEEWWEEWWENWSSESSWNSN", "SNNEWENWNESNSSWSNWNEEENSENESWWESEWSWENNWSWESEWWESW", "SSEEWSEEEEEESEWSEWNSEEWSSSWSNWENWESNSWENNNEEEWENSW", "EESEWNEWEESNNNNWWENSNWEWNWNNNSSSWNEWWEEESSNENSSWSS", "WWEEWENNENNENEWSNWENNSESNSSEEWSWWEEENNSNNENNENNNEN", "EWNNENNNNSNNNWWNWSSSEWSWSSSEESWWEESEWNNEWSWEEESNWW", "NWEWWNSESWEESSEEWWNEEESWESNEEESNSSSSEWWNESSNWNWNEN", "ENENENSSWWNNWNSEWWEEESENWNNESSEESSWENSEWESSWEEWNWS", "SWSEWWESNSSWESEWNNEEWNSWWSWWWESESWSSNEEENWSWSWEENS", "WEWESENNWEENSNESEESSESEWNNSSEWNEWSEENNWWENNEWEWWEE", "SENWSSWEEWESSSNSSSEWWENESEWNNNSNEEENSWESWWNEWSWSSS", "ENWWWNSENSNNNEEEENSEEEWNESNNENSEENNNNWNENNSNSWENWW", "WWWWWSNSSESEWEWESEWWWSNEWWWNSWNNEWNNNWWNESNNWNNNWW", "SEWNSNNSSWNESENSNWEWWSSEWESNENWSWWSWSWSSWWSNWWSWSE", "EEWENSSENSWSWEEWWNSSESNNWNENSESEWEENNWSNNEEEEEEESE", "NNSWSNNWEWESNENSSNWENEESNWEWEESWSNSWNENEWSNNWSWSNW", "WWWWWENNSSNWNENSENWESWSENNNSEWEWNSSEWNWNSWNWWNNNNS", "SWNSSEWEESENWNNNWEENSNNEWWESNENEWESWNENEWEEWSWEWSS", "SSNSSWESNNSWWSWSWEWSWEWWENEWNNNNEEWWNEESSSSEEEWENW", "SNWWWNWSWWNWNSNNWWEESWSNSSENNESNWNWNENNSSNNNENWESN", "NSWSSEWEESNENSNNNEWEENEEEWWSSWSWSWWSWEWSNWNNESWSSW", "WNSNEENESWESESESEWNNNWNNNNEENESNEEENEENSNSNEWSNWWW", "NWEESNEWNWSEWNSENWSNENNWEWWNNNWNWNWNSNSWNNNNNWNESS", "SWESNEWWWENENSEWNSEESWWENEENESWENNSNNWEENSNENSWWEW", "SWSESWEWNWWENWNSWSNNWSWWNWSESSENEWNESSNEWNEESSSNNS", "EENNNWNNSEWWSEWEWSEWSWSSWWNEEEESESENNSEWEEEWWNNEWN", "WNENNEENESSWESNWSWNWNNWSNNNNSEWEENNWWSSSEEEWWNSWNE", "SENEWENSSNWEEWNNNNNNWSENNNWWEWSEEEWNWNNWNWEWEWSWWS", "SWESWWSNWSWSSWNWWWNWNWSSNWWSNNSSENNWWSSWNWNWWSSSSW", "WWWSWWSWNESWWEWESNNSWNSWSNNWSENSWWNNNSNWNWEENESWWE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"....#.......#.##....##.##.####..#####......#...#.#", "..#.##........##...#..#.###...........##....#.#...", ".#..##.#.##.###....###..##..#.###..#......##......", "...#..#.#...#.###.##...#.#.#.###.#.#.##.#####..#..", ".....#.#.........#.....#.###....###....####.##..#.", ".####.#.#..#.#.#..#...###...###.#.#.##.......#..##", "....#.Y..#.#.......#.##..#..#.#..###.......#..##..", ".#....##..#.........###.#...##...#.......##.#.....", "##.#.#..#.......##.#.........#.......###...#.#.#..", ".##.......#.....#.##...#...##..#.##...#..#.##.....", "...#.#.#........#.#...#....###.#....#..#........#.", "..#...##..#.#.....#....#..#..##..##....#.#...#####", "#.#.##....#....#...#...#.#.#.#..#.#..#.....#.....#", "........#..#....#..#######....##.#.........##..##.", "...##.#.....#.........#.#...#.#..#..##....#.##.##.", "...#..#.##..#.......#...#......##.....#....#....#.", ".##.#.#.##.##..#....#......##.#.##..#....#......#.", ".###....#.#.#........#..##..#.#.#..#..#....#...#..", "##.#.....#................#.##.##.....#..#....#..#", "###.#.......#.....#..#......#.#.###.#...##....##..", "#......#....###.#....#..#.#......##.#.#..#.#.#....", "....#.##.....##.##..##..###...#..#...#.....#.#.#.#", "#....#.....#....#.##.#....#......#..#.#...#.##.#..", "#.###..#.#.#.#.#....###.#....#...##.###....#...#..", ".##....F.#....#....##.###......#.......#.....#.#.#", "###..#.#.#..#.....#....#...#.#....#..#......#.....", "#.......#.#..####.###..##.#.##...#....#....#.....#", ".....#..#..#..##.#......#.##.##....##..#.#..#..#.#", ".....###.#..#.#...#..#..........##...#.#..#.......", ".#...#.###........####...#......#......#.####.....", "#..#...#.#....#.#..........##....#.#..#..#........", "..##..#.##...#.#........##..###..#...#....#.##....", ".##...#.#.##.#...#.......#.#...#..##..#.........##", "##.#....###.##..#..#.#....#...###..##.###...#.....", "##...#.#..####..#####.##X.#..#.#.##.#..#..#.#....#", "..###..#...#...###..#..#.#..##...##...###..#.##..#", "##.###..#..####.#.#.....#.......####..#..#..#.####", ".....#....#.##.##...#..#........#.......#.....##..", "#.#.##...#...#.#.............#.#...###......#.#.##", ".##.#....##....#.#...#.#..........#..#..#.......##", ".##.......#..#..###.#.........##...#..####.....##.", "#..#..##..#.##.#.#..#...#.#.#.#.#.#.#...........##", ".....##.##..#.#...######..#.#..........#.#..###..#", "#...##.......##....#.#.#...##.......#..###.#..#...", ".#....##.##..#..#.##..#......##...#..##......#..#.", "##.........#.....#.#..#....##...#..##..##..#...#.#", "..#.....##.#..##........#.###.###.#.#........#.##.", "#.#....#....#..#..#.#..##.#.##..#.##...#.#...##.#.", "###...#.....##....###..##....###..#....#.#...#....", ".##....#..#.##.###...#.#.##...##.......#.#..#....#"};
    vector<string> commands = {"EEWWNWEESSSSSWEWNWWEWWSNWESWWWWENSESWNWNWSNWNWSESW", "EENSWWSENEWNWWNSWWSNEESEWENSNSWEESSENWWSSSESSSSNWN", "WESSEEWSSNEWNEENSENSEEWSESWENSSWWSWWWSSNNNNNEWNSNS", "WENEWSWWSSESSNEESEEEWNEWNSSWNWSWNEWSWESEEWSSESESNE", "SSSSESWSWSSSWENWSNWSSENESESWNEEESWNSWEWWNSSWNSENNE", "SSNNNSEEENSWEEENWEEESEWEWWWNEESESSESNWNEEWWWSSESNN", "WNEWNSWWWSENNSENENSENSEWNWESNENNWEWEWWWENSSWSWENWS", "EEWWNNSWWWEWWEEEENEENWEWEWEEEESSEWNWNNSEWEEEWNWWSN", "NNENSNEEWWNSNNWNEWSESNNWSENWEWNSSEWSESNWNSWSWNNNWS", "ESSWEWNSESSSENSWEEWESNWESWWSNNSNNSSWNSNWNNWWWNWENW", "SWSSESNENNSSNNENEWEEWNSSWSWNENNSWSSWNWSSSWEWNWEEWN", "SESWNSESENENNNNSNNESSWSNNNENSENEENNWSNNESNNENSWESS", "NWNSSWWSSSNNESNWWNNNSWSENWWSWSENEWWNWNNSSESNEEEENW", "ENSSNNNSNWENWWSWSEWWEENEWWSNSWEEESSNWWNSSEWENWWNES", "ENESNSESEENWWENESWNWSSNWSEEWNENNWSEEWNSEWNNWNNSSWN", "ESSWESWNWNNENENESNNWEEEESEWESNSWWNNWEEENWEWWNWSESE", "SEWNSWSNWEWSNWEENSNSNNNWESEENESSNESNEENWENEEWNWWEW", "SESNSSWENEWNNSSSNNESEWWEENEEEENEEWWWWNSWNNNWESSNNS", "SEENSEESNWWWWEEWENNEWEWNEENSENNNESSEENSENEEEESESNE", "SWSEEWENNNNWEWEENWWNSNWSWSWNWWENENSENWNWSNENNNSESE", "SEESSENENESWWNSNWSESSWSWNSEESNWWENSSNNNEWEENSNEENN", "SWSEWSWNWNSNENWENNSWWEEESWEWEESNESWWNEEESNSNEESWEW", "ENESNWSNWEWENWNWSWSESWWSEWWWWNWNSEWSSEWSSWENSNWSWE", "SWSENWWSESENENSENEESNSWWENEWSSNEWNWESSSNWENNNSEESW", "SWESNWWSWWSSESSENSNSNEESNWSNNEEEWENEWSENESEEWWWEES", "NWWWWWSEEEENWNEESWNENWENNEWSNNEEWSNSNESSWESNESEEWN", "NEENNEWNSNESNSNSSNENESNWESNESWSSNNEWWWWSSEWEEEEEWW", "WSESWNWSWSESEESESWSEWNENENSEWEWNEENWEENENWNESESSWE", "ENENEEWSWWEWEWESENENEWNWWSESWSWESESNNWWNSWWSWNSEEW", "NNSEESNNNWWENEWSSWNSSESWWNSEENNNSNNWNNNNWESSWSNEWW", "NEWNNEESNWSESNWENSWNEWNWWSSSWSWENEESWSNNEWEESENWSS", "WSESWNNNSSSSEWNWNSWWSWNESSWEWENWSSSNWSSWWESSSWNNSS", "SSEEEESNEWSEWSWWEWESESEESNWSSENWWSWNWESSEWENEWSENW", "ESESEEEENWNENWEEWSSENWNEWNWNWNWEWNNNWNNNSSWWENSWNS", "NNWSWENSSSESWSESSWNEWNNSSEESEWSSWNNNESEENSNWSNSSNS", "NNWSWNEWWWESNEWWNNESWSNNESSSNSNNEWEWESWNWSSENNSNWN", "NWNWNNSNWSSSNNSNEENEWSSWWSSEWWSNSENEWNWSNSENSENESE", "NWNNEWSSSNWESSEWSEEEESEWNSSNWNSSWWENEEWSSEESWENSNE", "EEEWEWESWWEENSESWSSEWEENSEWWWSNWWSWENEEEWESWWWNSNW", "EESWSENWWNNSEEENSENESNEWWNEWNWSNNNWNSWNNSEENENNNWN", "NSWNNNNWWNEWNWSNSSWWSWENWEWENSWENSNWSESNWWSWWEENWW", "WEEEWEEWSWNSWSSSENEWEENWSWEWEWSWSWSWEEEWWNWSSEEEEE", "SNWWSSSSESWNWNNWWNESNSWNWWNNWWSNEEWNWWNWNNNWNWEENS", "WSEWWEWWSEEWSEWWEWWWNEEENENSNWWWNWNWENSWSESEWSSEEN", "EESWEWNWNNNSNSENSWWESEENNEENWSNSWEWEEENSWWWNESSNWS", "SWSWSESWSWEWNWNSNNSEEESWNSWEWENSEWENWNEWSNWNWENNES", "SSESSEWSWNEWENWESEENEENNEENNEWWEEEWWESNWSESNNNEESW", "SWESSWWSSSSNENENEENEWWNEESNEWWNWSENNSNESWNEEEEWENW", "WWNSEESENSSEESWWEEESSSSSSSNEWENSEWEESSSENNSWNWESEW", "NEEENWWSSNEWEWENNSNSWEWNNNSESWEWWWWESSWNESEEWSWSEE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"....#...#.#.#.......##......#...#...#....###.#.##.", "..#.###..##.#...........##.............#......#...", "....#.##.###...#.#.##..#............#........#....", "...#.......#........#.#..#..##....#.#....#.#.##...", "#.##.......#..##...#...#.##..#...####...#...####.#", ".......###.#.........#..##.##.....##..#######..#..", ".#.##...###..#.#....#..#.......#.............#...#", ".#.##...#..#...........####.#.##....###....#...#.#", ".##...#..##....#.###...#.#.#.#...#....##.##..#.#.#", ".....#..##..........#........##...#........#.#.#..", ".....#.#..#..###......#....##.#..##....#.##......#", "##...#.###.....#.####.#.#.....#.#..###.#.#....#...", "....###.#.#........#....#...##...............##..#", "#...####.....#.#.....###.....##..#...###...#......", "#..##...#.#...#....#.....#...#..##.###...##.#.....", "...##.####......#..#.##.........##....##..####....", "...#..###.#.#......##.#....#......#....#.########.", "...#.##....#.....#....##.#.#.#...##..###.....##...", "#.##...##........#..#..#.....###.#.##.#...#...##..", "....#.##..#.##.#####..#.#.#..##...#...###.........", "...Y.#..#...##.#.#...##.##...#.....##.#.......#..#", "....##.#...#.....###.#.##...#...#.#....#..........", "...#..#.#..#.##.#.#....#..#..#....##..#...##.#....", "....#....#..##..#....#..#.#..###..##.......#.####.", "...#.#..#.#.#.....##..#...#........###...##.#....#", "......##.#.##..##.....#.#...#..###.....#...##....#", "..#...#F.#.#......#.##.#.#.###.#.##...##.......##.", ".#.#.#...#.........#....#.....#####.#...........##", "..##...#..##........####.#..............#.....####", ".#...#.###.##..#..#......#.#.#...#.##..####.###...", "#.##...######..###....##........######..#..#.###.#", "#..#.#####.##......#...#..#.#...####.###......#.#.", ".###...#.##...###....##.......#.X#.....##.......#.", "##..#..##....#..#...##...#.#....######.#...#....#.", ".....#.#..##.#..##..###..#.#..#...##.#....#..#....", "....#.......########.##..#....#..##.#..........#.#", "#.#..#...#####....#..#..#....#.#.##.###.....##.##.", "..#...#.......##.#.######.##..#.#..#.#...###..#...", ".#....#.#.#.#..#.###..##.#.###....##..#..#....#..#", "..##.##......#.#....##....#..###.#.#..##.#....##..", "#..#...###....###.#.#.#..##......#......##..#...##", ".#..###..#.......#.####.#...#.#..##..##.#....###..", "#.###......#......#..#.....##...#..#.#.#...#...#..", "####..##.##..#..##........#...##..#.##..#.##......", "..............#..#...#.#.......#..#...#...#.#..#.#", "..#...#......#.#.#..#.#.##.....#...#...##....#....", "#.....#...#..........#.#...#..#........##..#.#.###", "..#.....#.##....#.#.#..#.....##.....####.###.#..#.", "#.....#.##..#.##.......###.######...#.#........#..", "###.##.#......#####..........#.........#.#..#.#..."};
    vector<string> commands = {"EENNEWWSSNNENENSNWWEWSNEWSWSNSNNEWSWWEESWSESSWEWSW", "SWNWEESWSSSENEENNWNSNSWWNSEEWSSENSWNEWNNWWWWSNWNWN", "SWSNSSEWEWNWWWWNSEWSESWWWSNEESSENSWENSSWNESWSWSEES", "SWNSEEEEWESWSNSWWSNWWSWEENSEEEWSWESENNENNESNWWNSWS", "SNEWESEENNSENNENWSWSNSWNESSNWNEEWNEESWWENENSSEESWW", "EESWWNWWWEWSESNEESEESNEEENWWEENEEWEWWEWWWWSEENSNNN", "NENSSWSEWSESNEWNEEWWWNESENSENWWNNEWSSSWWNNWSSWEENN", "ENSEENEWWNSSWNWWWEWWSWWNWWNENWSNWENENNNNENNWSESSWN", "EWSEWWEWEENWWNENENNNNNNNNESEESENSSSSENWNSNESSNENSW", "WNSEEWWSEWESSESNSSWNWNNESSEEWWNSWWEWWENNNSEWSNESSN", "EWNWWSWSEWSNNEWENEESWNNEEEEEWEWSSWWEWSSSWWSEESNWEN", "NNEWSWENNWSEWNEWESNEEEWNWSSNEWSSSWWWESNNNNWSSEWSNS", "NNWEENSSNNNEWSWNESSNWEWEEEWSNWESNSNSWWSENNENEWWWSW", "NENESSWNNSEESSWWSENNWNESEEESSNNWSENESSNNWNESSENNNS", "SNWSNEWEWSSESNWWSNENWSSESENNNNEESWSWNENWNSSNEENNWE", "SEENNWWSWWWWEWWESSNENSSEENESSWSEEENWWNWNWNSESNNWES", "NWNSNNWESWSEEWWEWWEWWEEWWWENSNWNSENNNEESSSESNNWNES", "SESSWSNNWENNNWEEWWSNWNNNWSNNSWEEEWWNNSWWWSNEESNWSS", "NEEWWEESESENSWSWSSNSENESWEWEWWNNSWSSWNWSSEENNNENSS", "SENEEESWWNENWESWNENNEEWWSNNNNNENSNEWWSSWNEEWENWWWN", "SWEEEWWWNSWENEEWWEWEEWWWESEEWSEWSSWEWNSEWNESWSWNNE", "WNESWEWSESSEWNSEEEESWWEWWEENWSWWENWEWSWNSEENSWWEWW", "SNSENENENENSNESNEESENNSSWWWSWNESWNNWNWSSNSSNEESESS", "SNWSEWSWNSNWWESEESENENEWWWWNNEWWWESNNWWEENEWNNSSSE", "SNEEESNNWNNSNWENSNESNWSENESSNSEWESNENNWNENEEWWSWSS", "NENNEWESNSENWNWEWWSNSSSNESSENEWNWWNSSEEENWENSEWENS", "SWENSEESESSSNNSWENEWNWEENSESSWWENSNSSESESNWWNEWSNN", "NNSENEWSWSSSSENNESEWNNSNSWWSENNESNWSWSEEESSSSEWSWE", "SSWSNWWWNENNWWESNWSSESWEESWWNEWSNNEWEEWNSSSWNNNSSS", "NSEEWWNSSENEEEWSENWSNWEEWSSWSESWEWNWNSSWNNEEESNEWE", "WWSENWSSNNSNSSNNEWNSWSNNWNEWNNENSSWEEESSESNENSESWW", "EWWSSSESNSNSNNWEWNNEENNNESNWENWEEEEENENSWNESSNEWNS", "NEESEENNSWESENWSNESEESSNWSNWENNESEWENEWSENSEEWENWE", "SESWNSSESESSNENWNWSNNENSSSWSSESEWNWSNSSWWWWWWWNEEN", "EWEWSNWSWEESWWNWNWEWSESNSSWSNSEEWWNWEWSSNSSWWWNNSW", "NSEEWNNWSWSSSESWWWSSSWWNSEENWESNSNSSWNWWNNWSENSSEN", "WSWNSNSSSNWWESEEESSWSNNESEESEWWSSWWWEESNESWWENWESN", "ENNWWWNNWESWWSNESWWWSSWNSENSWNWSENESSNSEWSWWWSWSSE", "SWSWNNEWNSSWEWSESWWWSWSNSENNWSSESNEWNEENSEWSEWENES", "WENENSNSNNWNNNWNWNSNSNEWSWESEWNWNSNNWESNSNSWNNWNWE", "WSNESEWEWWSWNWSEESWSSWWSENNEENNNNNSNEWSWSWWWNWSWNS", "ESWSESWSEENWNWNWWENEEEEWEWNSSNEEWNEENWWEWEWWSSESSN", "SSSSENSNEWWESSNESSSWWWSEEWEEEWSWNSESWNNWWNSEWNWNWN", "SESSNSWSESSSSNSSSSWEWESWWWWSEEWWNWNEWWEESWSNEWSEEE", "SEWWEWSSNWNWSNWWSWNSSSNEWWSWSENWESESNENNWWSENSESWE", "WSWWSSNNSNESNSSSWESENSWNEEWEWWENWSWESEWSWNSSWWSSSW", "NSWWNWWEESWSSWSNNSSEWWEESESSSWWNESSSEEEEESWEENWSSN", "SEWSNSNEWSSENWEESSNNENNESWNSWNWEESSEEESSESEWENNEWS", "WWEWWSNENNNEEEENSEESSNSEWWWWEEWEESWWWWEWWNENESWWSE", "SNENWSWNWSSEWWENWWENESNNSEEENWNEEWWSENEWEEESNWESSN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1653;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {".......#...####.#.#.#....#....#......#...#....#.##", ".#..##...#.....#..#.....#..#...####..#.#.##..#..#.", ".....#..#...#.....#.....##...##.##.#.....#..#.#.#.", ".#.#....#.#.....###..#...#.....##.#....#..#....#..", "##..#..#......#.#.#..##.#....#....#..##.......#.#.", "..##...#...###.#..........#..#.....#..#.###...#...", ".....#.......#...#...#.##.#.#.....#......#..#.#..#", "...#.#.....##..#..#....#.#.#..##.......#.........#", ".X.#.#..#.#.##.......#...#......#.............#.##", "#...#.......#.#...##..##...#....##........#..#.##.", "...#....##.......#..#.........##...##...##......#.", ".......###...#....#.##..#.#........#...##..#...#..", "#.##..#......#...#.##..#.#...........#..#....#....", ".......#..####..#......#..#.###..##.##...###....##", "#..#.....#.....#..#.#.#..#........#.#.......#..##.", "..##.#....###.#............#.#..#..#.#...##...##..", "...###....##....###....#.#.#..#.##........#....#..", ".#.#####.#..#...#.........#.....##.....#...#...##.", ".#.##........#..#.#...#...###.#...#...##....###..#", "....#.....#..##.#.#.#.......##.....#..##.........#", "#..#.##...##...###.#.#......##.##...##...#.#.##...", ".#.##.##.#.###..###.#..#...#.......##...#...#.....", "..#.....#.#.#..#.....###...#.#.#....#............#", ".#.#.#.#..#...#.#.##.##..#.#...##..##.##..##.#....", "##.##..#.##.##.##.#.#.............#.##..#.###..#..", ".##.###..#.##..##.....#.###...#.##...#..#.#.....#.", "#.#........#..##.###.#.#..#.#.#......#...###......", ".##.#.##.#.#.##.#.####.#.##.##..##....#...#..##..#", "..#..##.##..###....#.........#.#...#..#.#.#..#....", "...#..#..###.##.##.....#.##.##.#..##.#.#.#........", "...#...#.....##..##...#.##.......#..#.#.......#.##", "#..##...###..#.#......#.#...#..#..#..#...#.#.#....", ".#..#..#.###...###.##..#.#.#.....#...............#", "#..#.....#..#.#####...##...#....#.#.#..##....#....", "....#.#.##.##..##...#..###....#.##...##..#.##..#..", "#...#..#..........##.##..#...###.#...........#....", ".....##..##..........F##.............#####..#.#...", "..#..##.#........#.#...#.#...#....#........#.##...", ".#.#...#.#.#......#.#.#.....##.#....#.#..###.#...#", ".##.......#.#.#.....#..####.....#.#......#.#....##", "...#.#..#.###.....###..##.#....###..###...#.#..###", ".................#....###.#..#..#..#.....###.##..#", "##.##....#.#...#..#.....##.#........#..##.#....#..", "..#....#..#...####...........#..##..##..........##", "##...Y......#.#...#..#.#.......#.#...###.##.......", "..........#.#.#..#..#.#.......#.#....#...#..#.....", ".#..#.#..###.#.#....#...#...#.##.......#..##.#.#..", "...#..#..##..###...#.....##.......#..##.....#..#..", "..#..##.##....#.#.##.###...##.#.##..#.#.#..##.....", ".........##.##...###....#.#.#.##.##.#.......####.."};
    vector<string> commands = {"NWNSNWNEENSWESWWNEWEENESWNNESSNSNSNWNNWESNSESWENSW", "NSNWSEEWNENNNESNSSENNSNEWWEEWSSWNSSSSSNSSSWENWWNWN", "ESWWNSNWNWEWNNSWNWSWWWSWWEESNSNSEWWEWWNNWSEWSENWWN", "WNWNSSSSENENNWEEEWNSNNSESEWNWWSSNSEEEEWSEENESEEWNE", "SWEWSSWNSWWNNSNNNSWNESNWNNWEWNSSWSSEWNNENNSEESWSEN", "ESWSSNEENEWSWSSEESEWWSNWWNENNWNEWNWSSSWEEENSWENNEN", "ENNWENWNNWWNNNESNSNSSEEWWSWEWNNESEWNSWWENSWSSWEESE", "SENWWWSNWNWWNSWSNNNESNEWEWWNNWEWNWWSENEEEENSNWEEES", "NESWSSWNEESNSSNWEEWNNEWSNWNNNESESWSSSWSNWWEEWEWWNN", "WENNNNEWNSNSNNEENEWNWESSSEWSSSSNNWSEWWSEEWNNSESSNE", "ESSWEWNWENSNNEWWESNWWEESENSNSWNEWNSWNNWWNNWWEWWEES", "SNSENWSWNWWNEWNSNNWSNNEEESWEWESEWNNEWENNSSNEWWNWES", "NNEEWNESWNNEWEESSNESSSSNEWEWNNWEENWNSENWENNNNSWNEE", "SEWWSNEWSSSWNWNWNSENSEESWSEEENWSESENWNWENWESSSSWNW", "WNWEEWWSSWWNSEWEWEESWSNENWNNESWEESSWENSSENWEEWEWWE", "NNSNNWSSWNEENWENNNNWENENNEESESSNNWWWNSSEESWENNNSSN", "ENSNNNNNENSSSNSWNWWEESWEESWNNEESNSWWENWSSSNNNWNWNS", "SSNENSWENWNSSSNWWSWWEEWEWWNWNESSNEEWNSEWNWWEEENSNE", "SNNNNWNNWNWWNNNNWNNSSSNNESNNSNSWWWNENENSSSWWENEEWE", "NEWSSWNNNESNSSWEEEENENNSEWNWSWSNWSWENSEWWWNNENWSWS", "EWWSWNWNENENNEENSENWNSWNWNEWNNNNEWWENSEEWNWWEEWEEE", "EWSNNNWSNNNWNENNSNWNWNWWNNEWESWNNSESWENESSNWNSSESN", "NWESENEWSWNWWNWWWEWEWWNENENEWSSNSEWWSEEEENWNWWSWSE", "WNNSNNSSNNESSNENENNNESSSSWSNESWESSWSNNNSNEWNEEEESW", "SNNWEEENSWWESWNENSWSSNEEWSEWSEWWEWSENNWEWSNNEWSESS", "WSNEWSNSWSSSWNWNEWEWWSNESENSENNWWENWNNNNSNWWNWENNE", "NSEWWEWSSWNNNWESENWNEEEEEWNNSNNNNSWSWWNNESENNSWWWS", "NNSSWSEWEESNNNNWENSNSNESNSNNNNWSSESEWSEEEWNESNNWNE", "WSESSEWWNENEWWNSSWNWNWNSENSESESNNESEENESESNWESNNWN", "WEWSEENWNEWENNNNNNNWWSNSWSEEEEWEENSESNENSNNNWWSWEN", "WESWSENWWSSWWENSWSNSWSWEWSSNWSWSSWNWSWSNWWWESWWNWE", "WNNSSNSWESENSSNSNEEEWEWSESWESENWWEENENWSWNEWEWWSSN", "NWNWSWNNWWNWWSNNSSWSSENEESSESWEWSNSEWSENENNESENWEW", "NSESNEESWWNNNNEEWENEWENWENNENNSEESSWESWENSWSNNEWWS", "WENEEEWNWWSSWWWWEEESENSENNWWEWSNNSESNSWEWWWWWWNEWE", "WWWENSSNESWEESNWSWNWNENSSSNEENWWWWNNESSNSSEEEWNSWW", "WWSNNNWENNWNESSESNENWWSESENWWSEWWWNWNWWNEEWNNSSWES", "NNEWWNNSNESNESWNNWWWWSNSESWWSSEEWNWESWNSWWEWNESWNW", "ENNSNWNNSSNWEWENSENWESNENNSNNENNEWWNWNEENESSWEEENW", "SENWENEEEWSEEEWSSSNSEWEENSNSWWSENNNSENNNNWENEWNESE", "NWEESNEWWWEEESWESWNEESSWSWWEWWSNWSWEWEWNNWNNNNNNNN", "WNSWWNWSESSESNSSSWSWENEWWSSSNNNNNWSWWNNSSSNWWNWWWW", "SNNSEWSWNSEENEWWNSNEWSSEWEEEEWWWESSESSNSWEEEWNWNSW", "WNSNENSSENNWSWEWSWSSSNSWNNEWNEWWESSWSEWSWNSNWSSEEE", "WEWNEWENWWSEWWESSESSSEESENWNESENSNEWESNWSSWSNSWENS", "WEEEWNNWWWEWWWWSESSESSNNEWESNWEWWSNESNSSNNSWNSEENE", "WESNNWNNNNNSSENNNWWNNEWSNSNEEWEWNNENEESWWWNESSSENS", "SWSWEWSEEEEEESWENWSWSNENEWSNENESWSEWWENWWWSWNEWWWN", "WWEWWSNWSWWEEWNEEWEEESNWESWSNEWSEESWSNWSWEENEEWSWS", "NWWWEWSSSWNNWNSSSWSSNWSENSSESWSSNWSEWEWSESEESWSSEN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
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
    vector<string> board = {"....#..#...#...##..#..##..#..##..#...#...##....##.", ".#..##...###.#.##.#..##..#...###.#..#...#..#..#...", "#.....#........#.#####....##..#...#..........#..#.", "........#........#.#####..##..#.##.#.......#....#.", ".....##.####.#.##.########......##.##.........#...", "....#..####.....#...#....#.####........#......#...", ".#..#..........##....#.##..#..#..#..#.##.#....#...", "#.####...#####.#.#.##..#.#.........###.......#.#..", ".#...#..##....###...#...##......#.###..#.....##...", "..##....##..#.......####.......#..##.##..#........", "#.#.#.#...#.........#.........#..#.....#...#......", "##......##.........#.#....#.#...#.####.###.#..#..#", ".#..##..........#.#.###...#....##..####...#.......", "..#..#..#..#...#.##.....#...###.#..#.......#...#..", "##..#..#.#####..##.....#...#...#...##..####...##.#", "..#....#.##....#..##...#####.##.......#.#.#...#.#.", "#.##....##.......#...#........##.###..#..##....##.", "...#....#..#..##...####.##..#..##.#.....#...#.....", "..#.#.####..#.##.......#..#.#..#...###.##.#.#.#.##", "#......#..#.#..#.....#.#..#.#.#.#.......##.#......", ".#...###...#......###.#......#.#...#..#..#....#.#.", "#.#.#...........#.#.....##.#...#..#...###......###", "..##.......###..#...#......#..#.#.#..##...#.#...#.", ".....#.#.....#..##.......#..#..####.#.............", ".....#.###...#......##.#.#...#...####......#.#...#", ".......#....#...#............#.##..#..#...#......#", ".#...#.##....##.#...#.#....#.#.#......#...#....##.", ".##..#....#......#.#####.##..##.....###..###.#....", "...#......#.#.#.#.#..##...#.###.##.........##...##", ".#............#....##.....###.#.##.X##....#.#...#.", "#..#..##..#...##......#.#.....##.##.##...##...#...", ".#...###......#..#...#...#...#....................", "#..#.###.F#...#...#......#..#..#..#.....#....#..##", "##..##....#......##...#..#.#.#.#........#..##.####", "#..#..#....##..#..##.....#....#.#...............##", ".....#.#..#.##....#........#...#......##.....#..#.", ".###...##.####........#.........#.......#.#.#...#.", "#....##.####..##.##..#.##...#.#.........#..#.#....", "......#..##...#...#..#.........##.##.....#....####", "...#.#.#...#..#....##...##..#....#.##.#.#.#.....##", "..###..#####..#..#.#...##....###.......#..#.#.#...", "#...#####.....#..#........#.....#.#...#.##.###.#..", "..#........#..#.##.#...#.##...#...#..#..#..#....#.", ".#............#.#.#..................#...#....###.", ".#.##.....#...##...#..#.#.....#.#..###....#..#...#", ".#.##Y......#...#....#.#.##...#.##..#.##.###..#.#.", ".#.##..#...#.....#..#..#.....#....###...##.#...##.", ".#........#.#...........#.###..#..####.#.####.....", ".#..#..##....#.##...#.###....#...#....#..#...##.##", "...#.#...#.##..#.......##.........##..##...##....."};
    vector<string> commands = {"SSWSNWNWSWSNEWWWSNNNSSENWENNSSNSEEWWENENSWNWSESSNN", "ENSWWWESWESNWNSNESEEEWNEEWNEWWNNEESSWSSWEWEESSNEEN", "WSENNEWWSSSNSSWNNSSWWSNNNNWNNSWEESWSSWNSSSWENWWEWS", "ENWESESNSESWSSWEWNEWSNSSSEEWNEEESEEENWSEWEEEEWWSNN", "EENWEWWSNNWEWSSSNNWESEWNWNNESSWSESNENNWSWEWSEWNWNE", "WWSNSNNEWNENNNNSENNNSWSWWWENESSSWNSSSNESWEENNNWWWE", "SNNSNSNESNENESNSSWNWWEESSWNEENNNSNSWWSNNWEWSNWSWEN", "NWSEWSSWEEEESNSWWWWNEESNEENNSWSWWWESWEENWEEESSWESE", "WESEEWWSSEWWESSSNEWNNSWWNEENNEEEENWWSSNSESWNNWNNEN", "WSWEEENSSNSNNNWNSWNENNNNNENWSEWNSNWWSSSNESEEEENNWN", "NEWENWSNNENNSWSNNSWSESSNNNEEEESSWWNENEEESNNWNSSNNN", "EWWENSNSNWNSESSNWEWSESESENSEESWESNESEWSESWNESWSNSS", "SWSESNWEEWWWNWWESENNWNSWNNNEWSWEESWNNSSNSSSSNNNNWW", "EESWWSSWNWEWNESNEENNSEESSENSENENNENEEESWWESENWWSSN", "SNSSSWEEWNNEWSENWEESWESWENNNNSENWNEWWNNNESNNNSSEWN", "SWNNSEENNENEEWNWSNSESEEWNNWWNNEWESEWSWNEEESEEWWWNN", "WWSWSWSENWEEESNSWWENENWSWNENWWEWSNWEWSNSNENENNWNNE", "NSNWWEENNEWENEWEESSEWNSWWNSSEWWSNSWSNWESSNEWEWWEWE", "NEEWEESWWSNEESEWENENEENWEENNSEWNNEEWENNENWESESSSNW", "ESWSEWSSSNSNNNEWEEEEWESNSESSESNNSSNWEWEWNWNEESSWES", "SWNWWSSENNSNNENNENESSWNSNNSEEESWNNNESNNWESSENSNSWW", "NESENEWSNNSESNSNSWEWNSWNEEWWWNEEWNSESWSWEESNNESSSN", "SNNSSWWNENESSEWEEWSNENSEESWNEEWNEWESEWENSNWSWWWWSS", "ESESEWSNNWWESSNSNWWENSESSEWEWESESNNSWSNEEWWESWEWNS", "SNSSNESNNSESNSSESWWWEEESEWNESENWNEWWESESSWWNENSSNS", "NWESNSSSEENWNSNNSNNSNNSEWWSEESWNWESWWESWENSNWEWWWW", "NNEEEEESWSSWNESNWSENSSSENSWNWWEEESSSSNWENEWNSSSNSS", "NSESEENWSESWWWWSWENNESESENEWWWEEEESNWSNWNSSNWEESSS", "NENSNWWESENSSNNENNNWWSEEEWNWWWESENWESNWNNSNNWSENSN", "NSWNWSEENESWEEWSNESNESNNEEWSSWSNEWWEENNSNWWNWWNNEW", "NSNESNSNENEESWSWNEESENSENWWNNNWNENNSNSSESWWNWWNNWS", "ENNWENSWSNNWNSESSESWNWSEENWSSWEWWWNNNEEENNSEEWNSNE", "WNWNSSSNSEENWNSWWWEEESENESNEWSNWSEWNEEEWWNNNSNSEEE", "ESWEWSNEEESEEWNEWSWNNEWESSEWWSEESSNEESSSWNSWENWSEN", "WWSSSWESSSEEESSNWEEEEESSENENSSENNSNSESSSNSNEEEWNWS", "NSSNSESEWNWSSEWEESNWESEENESEWESWSSSWSEWNENEWWSENNN", "NEESWEWSNESEESNSSSSNWSWWWNNWESWENSEEESESESNSEEEWSE", "WWWSNENNNNESWWWESSNEEEEEESESNSENESNNSWWWWENEESSSSW", "NSNWNWWSENESWSENSSSESEWENSENWSNNWNEENSEWENSNENEEES", "WSSNNENEESWNNWWNWWSENEWNNSNEWNNWNNWSEENENESEENNNWS", "NNWEWWSSWWEWSNSWSENSESSSSNWNWEEESENWWNENSSEENWSNSS", "NENENESENWWESEESNWEESSNESNWWENNEWENSWEWEENNESWEWSN", "WENEWSEWSWSENSNEEENNWEWENNENSNWSNEWEWENWSEEEEEEWNS", "ESSSSEWEWNWWNNWNWWSNSEWSWESEWSWNSSWEWNESENWWSNNNWS", "NWWEESSWSENWESWENWNSWSNSSWSNSWSEEEEWEEWWNWSNSSENNS", "NNENESEESWWENNSSNWWWWEEEWEEENSSNSNNSNWWNSESEWEWWNN", "NENEWESESNENNEESEWSENNSEWWWSSSNSWWNWSSSESWSESWESSE", "NNSWSWWNEWWNNSWWSEENEWSNWWWSNSSEEWEENNNENWESWSSNEN", "NNNWNNWWWNENWEWWEENNNSNWNSSNENSSSWSSEEWESEWSWWSSEW", "SESWENWENWSNWEWNSENSEEWNWNEEWNNSSNESWEWSESNESSNNEN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 789;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"#..###.#..##.##....##..##.#..#.##........#.....#.#", "...#....#..#.#....####...#..#.##...#.#.....##.#.##", ".....##.####.....#..#.....#.##........#.......#.#.", "...#..#....##....#...#......#.#..#...#.#...#.....#", "..##..#..#....#....#..#.....#....##..#...#.#.#.##.", "..##.##..#......#...##...##....#.###..#####.......", ".####.#..#.#....##..#..#..##....#.#...##.....#....", "..#..##.......#...##....#.....#.##....#...#....#.#", "..#.#..#...#.....#...#...........#......##..##.##.", "#......#.#.F#.#..##.###.#..#....#....##..#...#....", "#..###.#.#...###...#.#.#.#.##.#..#................", ".#.......#...#..##.....##.#..#...#.##.....#.......", "##...#...##....####..#.#......#..#.##.#......#....", ".....####.##.#..#.#.##.##....#..#.#....#.#.#...#..", ".##.##...#...#.......##......#####..#.#....##.#...", ".#..#.....####.....#.......#..#.............##....", "###......#..#..#.........#....#..#...#.#.####.....", "...#.#...####X...#.#...##..#..#..#.#...#.#...#..#.", "..#..##.###.....#...#.#...##.#...#...##.##.....#.#", "#.#..##.#....#.##..#.##...#.##...#.##.#..###..##..", "#..#.#.......#..#.#.#....#.#####...#.#.###.#..#...", ".#...#...##....##...............##..##...##.#...#.", "#...##...#..#.#..#.#.....#...#.#..#.#...#.#.....##", ".###.##.....##....#####..........#.....##.##.#.#..", "#.....##.#.#..##.#.....#..#......#.##..#...##..#..", "...#..#..#.#.#........#....###.....#...#........#.", "#..##.##..#.####.#####.###.##.####.......#......#.", ".###....#####...#..#......##.#.#..#..#..#...#....#", ".####.#....#.#...##...#..#....#.#..#####..#.......", "#..##........#.......#...#............##.#......##", "#..###.###..##..##..#.##.###.#.#....#..####.......", "..#.#.##......#.#..##...###.....##............#...", "##...#..#..#..#...#...#..##....#..#..#.#..#.#....#", "...........Y#.......##...#......#...#..#....#...#.", ".#..........#.......####.#.#......##....#..##.....", "#......#.#..#...#..##....#..###..........###...#..", "...##.....##.###....#..#...#.......#.#..##........", ".##.....#..##.##..#......#....#........#..#..#.#..", "..............#......#.##.##.............###...##.", "..#.#....#.....#...#.......##..####.#.....#.#.#.#.", "....##.......#..#...#..####...#..##.#....#####....", ".#....#.##...#...#.......##.#.....#..###...#.....#", "##......#......##......#...##..#.#.##..#..#..#....", "#.#.#....#...#..#.#.........#......#.#..........#.", ".....#.#....###.........#..#..##...##....#..##..#.", "....#.#......##...##...#.......#..#.........#..#.#", ".###....#....#.....#..#.###...#......##...#.#..#.#", "..#....#...###...##.#.#.#...#...#..##.....#.#..#..", ".##.###....#.#..###......#...#.#..#......##.#.....", "#...................#####...##..####...#.#..#.##.."};
    vector<string> commands = {"SSNWWNWWNSEESWSEENWWSWEEWSEWWSSENWNENNEENSWNSSNSEW", "NESNESNENWNNSWWWSWNSSWWWESSWWWSWNSNENWNSSSESNSESNW", "ESSESSSSSWNEEEWWEWSSSNNENSWEWSSSWEEEEEWNNWWWNEESSS", "SWNESSNNWEWNWSSENNEENSENNNNSNNEEWSSEESSEWSWSNESWWE", "WWWSENSWWESWESWNEWNEEWWSNSENSSNEEWESEWESNEENSEWWES", "NNENSESEENESESEEESNESNSESEWSSEENWWNWSWSNESEWSNNSWE", "ENNWWNESESESWSWSWWNSNESWEESSWWEESEESSWNNWENWWSENWS", "SWEEEEWENSNESWNWWENSSEEENNNWWNWNNENENNEWEWNNWSEWNW", "NSSNENEWSNNSEWSENEWESEESWWWNWWENSENWESWNSSWSNEWSES", "NEEENEENWEWNSEWNESENEWNESWEWWSWNWWEWNSWESENNNSNNSS", "WESWNWNNNWSNENNNEEEWEWSNNESESNSEWNEEWNSEEEWEESNSNN", "NNSWNEEENESEENWNNESWWSSWWSNEENNWEWENSENEWSWSESWNNS", "WSNSWWEEESWWEWWNNSWNNWWSWSWNWWSEWWWNNEWNWEWNWNNNNW", "EEWNNNSESSWESSNSSNEEWNEWESSNWNESSSNNENEWWWSNNSNWWS", "NNNESWSSSENWSEWSNESNSWNSSWNWWWNWNESNWNWSSSNWSNNWSE", "SNNEESNWNSEEWEWEENSSENSWSSWNSSEEESWNNNNENEWESNWWEN", "SNWEEWESWNNSNSWWNEWSSSSEWWEWNSESSSNNNWEWEEEEWESEES", "EEESNSNEESNESSSWENEWWWWNNNSNNNEEWNNWEWENESNWWSWNNS", "WNNNNNWWNNWSNWSWSWSSWWNSESWEWSNSSNWWEWNEESEENESENN", "SNESNEWNENWNNWNWSESWEEWNEENNWNENWESESENSNEWSSWSWWE", "SESNSNSWESEENENWEENNWESNWSNNWENEEESSEEEENENWSEWWWN", "SWWENWENSWWNSEEWENSEEWEWSWNNSWSSEWWENNNEWWWWEEWEEN", "WNNWESNWSNNSSNWEEEWWWNENWWSESSWSSWSESWEWEEENSWWWNW", "EWEESNNSWENWEWEESSNEWSSWSEENWNWWENNWENNWNNNSNSSSWN", "WWNEEWNSNWNNWSWWENNESESWNSESENSNEESWNEWWEESSNSSSWE", "WSNNESNSWNWWESSSWNSSENWSSNSWWSWNESSNSWWEWESNWSSWES", "NENEWWEEESWWWESNNENWNNNNWENNSWNWNSSWNEENEWWNWEWWES", "SSWSNWEWWESWEEWNSEWNWENESSSWEWNSWWSEWNWSNNWSNNSNSE", "EWSNSWSSSWNWEWESWWNNNNEWWWNEWWNWWNNWWNEWSSNNSENWEE", "EWWWNWESWWNNENEWWESEEESSWNSENSNWNSNNNWWSESWWSNSSNS", "SNSNSSWSNSSEWNEESSSWNSWWEEEESSWWSNWWSWEWWEWENWSSNN", "SNESWEEWNNNWSNEESWENNNNSEEESNESSESWNENEWNWNNWSNWEE", "WNEEEWWWENWWSSSESEEWNWNENSSNEEENWSNNSSSSSENNEENWWE", "WEEWNWENENWNSNWENWSNSSNEWNESWSWNEWWSSEWNSWSSESWWNN", "NWSWWSNWWSSNSSEESEESSWEESSWENWSWEWWEENENWSWSSNNSNS", "NSNEWSSNWWEEWSENWSWSSSSEWNNWWWWSWSSEWWNNWNSWNWNWWS", "ENNEWEEESSSWSNNSNWSESNWWNESWNNNSWWSESNEEEWWWESWWES", "EEWENWESENEEESSWNSNNWWENEEWSNNSSSNWNSWWSSSNNNEWWNS", "SSEEWESNESNEWSNSNSWWSEEWNNEEWESWNNSEWWENESNWWEESWS", "NWNEWEENNNENNWEESSSNNSNNWSEESNNSSWWWENENWWNWWWWWSW", "EWNNNENWESWSWEENNSWNEWWNWEWEESNWWNSNNNSWSEEEEWSNNN", "EWSNWNWWNWNWNSNNWWENWEESNSWSSSSNWWSSSEEESWWWWSNESS", "SNWSWNSNWSSEEWWNSWNSNNNEESEENWSESENSWSEWNEENNSEWEN", "SSESWEWSNWSEWEWNENNEEEWWNESNNESNNEWEESNWESSNESESWN", "WSWNWWSSWEEENEEWESNESEENNENENWEWWNNEWSSSSEWWWNWSWE", "SSWENWSEWWWWSWSWSSSSWEEWNWWSNSEENSNSWNSEEWSSSEEWWN", "WSEEEESSESWENSENEWENWNNESWWSEWWEWSESENNESNEWSNNEEW", "WSENSNENEEWSNENWESWNNEWSSESNSESSENSSWSNNEWWNNENEWN", "WEWSSESNWENWSSEEWWWENEWNSSSWWWENSNENNEESESEWWEWEES", "SENNNWSENSSWSNEEEWENESNNEWWNEENWSESEWSNSWEESNEESNS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"..#.#..##.#..#...####......##...#..#.......#.#....", ".........###..#.....#...#.####.#.......#....###..#", ".........#..#............#...........#.#..#.#..#..", ".#####.###...#.#.#..##.......##..#..#..#.#..#.#.##", "#.#.........#....#.##.....#..#..##....#...#..#....", "...#.####...##.......#.#.#......#......#....#...##", "..#...##......##.#......#.#...#.#..........##...##", ".....#..#.##...#....##.#.#...#..#.#.#..#.#.....#..", ".#.#................#..##.##...####.#...##..#...#.", "..#.#...##.##..##...##........#....#...#..#..#....", "......##.....#.....##...##.#..##.....#.###.##.....", "..##.#.....#.......####.....########.#..#..#.#....", "#..#.####.....#..#..##.#...#....#.#....##.#...#...", "#.#.###.#.....#.##.......#...#..#.#....##.#.###.##", ".....#.##.#.....#.##...##.#....#..##.#...#....#...", ".##..#..........###..#..#.#...##.#.#...#..#......#", ".......#..##.##..###.....#.##..#..............#..#", "#......#.....#.##......##.#........#.#.####.#.....", "#.#.##.....##....##...#.#.##.#...#.....##..#..#..#", "###..#.#..###.#..#.#.##..#.......#...#...#.#.#.#..", ".........##.#.......#.........###......#.##...##..", ".##.....#..#..##....##..#....##...#.....#..##...##", ".#..##.#......#...##.......#.....#...#.#.#..#...#.", "..#.#..##.#.###..#.....#....#.####...#..#..#..#..#", ".....#...#####.#..####....#..###...##.....#......#", "...#......##.###...#.#....#...#......##...#..##..#", "#...#...###..#.......##..##......#.....#.###.#..#.", "##..##...#.#....#.#..#.#.........#.###.#.#.##..#..", "...#.......####..#..##...#......##......###..##...", "###.##..###....#......#...#....##...#....#..#..##.", ".#...##...#......#....#.#.###...#.###.####....##..", "..##..#......#.#.##...##..#...#.#.#..#....#.#.#...", ".##.#.##.....###...#...#.#....##.#.....#.#.#..#.#.", "...#...###...........####.....#....#.##...#....#..", "##..#..#.#....#..#......#..#..............#...#.#.", "...#..#.#.###...##..##..#...#...##.....#..###....#", "...###.#.###......##..###.......#.......#.##..##..", "#.......##.#..#...#.........#.....###......##....#", "..#..####...#..#.#.#..#..##...#.#........##.....#.", ".#.##..#..##..#.#.#..##....#.#####....#.#......#..", "..#...##........#...#.###..#...#...#...#.###...##.", ".....#..#.#.#..####.##........#...##.##...#......#", "........#..#...##......##..#............###X..#..#", "#.##.F.......##.#......##....##.#........#.##..#..", "#.#....###.##..##.#.##.#.......#.##..##.....#..##.", ".#...#.#..#..#..##.#....###.#.#......#........###.", "#..#.Y..#..##.#...#...#.#...#.........##.......###", "###....###...#...#....#..#...#.##...#.##.#...#.#..", "....#.##...#.###...#.........#.......#..##..#...#.", "#....#......#......##...#......#....##.........##."};
    vector<string> commands = {"ENENNNEESSSWEEWENWWENEWWWSNEENNESESENNEWNWENENWESE", "NNENNNNNENNNSWWSNESNNSESEEEWNNWWWEEESEEWWSEWNNENNW", "NENNNWSESWWNWWSEEWWENENWESSEEWWNWNNWWNNSNWSENENWWE", "EWEWESNWWEWENNWNSESENESNEEWNWNESNNWWNNWSSSNWWNSWEE", "ESNNWEWSNSNWWWNENEENENENWNWWNNWESESNSNNSNWWWWEWNSW", "ENWSSEWWSSNWNESWWSSWWNWSWNNWEENWNWEESSWWSEWNNNWNNW", "EEESWWWESNWENEWSSSWNEESWNWNNEWNNENSNENNNNWWWWNNWWN", "ENWESEWNSNEEENNEEENSSNWWNWNWWNNWNESNSWEWWNNENNWNNW", "ENSSWEWWEESNEWNSESSSWWNSNWEWSESSNWEWWNWSSSNWNWNSNW", "WNWEENENENWSSSSWENENWNNENWENNNSWNNWWSNNNEESENEENNE", "ENESNENNENSSWESSENWSNWNWNNSSEESWSWESNSWWENENESWWSW", "WNSENEEEEEESSNSSWSSNWNNNENSNESNSESEWENEWENENNEENEN", "ENSSWNSESWWWSESWWWNSNSSEENWESNNEWESNWWESEWNWWNWSNN", "EENESWSNNSSWNSWWEEWNESEEEEEENSNNSEEEESSSSSSNSNSNES", "ENSSNENNENEEWWWNSSEEEWENNEWWSSSSEWNSNWNWNWNSNNWSWW", "NSNSSWEEWWESNSNSNSSENWESENENWNESSSNWSSNNWESWSSENNN", "EEEESEWNENNNWNNSWWENNSWSENEWENEWWEWNSWESNENNSWNEWE", "SWNWEENWWWNSESWNNWNSSSNSNNENSWNESEEWNENWSSSSENWNEE", "EENSESEESNNSWEEESSSSSSSENENESSSESENWENNEWENEWENSNS", "NEWNEESEEWNWNSNWNWENWNSNNENSENWWESNEEENESEWSNNEENN", "ENWSNWSSWSSESWWEWNESWSSWEESSSNWENENWEWSNEWSESSWWEW", "WNNNSWNNENNNWWNEESNENNSSEEEEEWSWWSENEEWENSWSNEEEEW", "ENENWWSNSNNWWEEESNESESEWEESNEEWENEWSSWNSEESWSWWNNS", "NNESWSEWSESSWSWWSSWWSSSSEWEENSSEESNEWESWWWSESSWENE", "NEWEENSENWNNSEENEEWENENEWENWNESNEEESESWNNEWNWNENSW", "WNWWSNSEWWESWNWSWSSSEEEEENSWSEWNSNWESNESWNWNSSNSNN", "WESEWSENWESWNENNENEWEENNESESWENNNNNNENNESEWEENWEEE", "SEEEESNWNWNWEESSNNEENNNESNEWEWWSSNEWSNSEWNNNSEEWNS", "ENENNNEESESNNNWNNWWWSEEWEWNSNNWNSWWSNWSSNWSWENSESS", "WWWWSWENSWWEEWWNESNWSSNWEESWWEEWSWEWSENNSWWSSWSWSS", "SNSNSESNWSSSESWSNESWESENENNNWENEESSSSWEWNSEENSNWEN", "ESSSENWSSNWWSWWNSSWNWWWEESNEWNWSSWSSWWNWNSNNWENSWN", "WSWWNSWWWSWNEEESSWEWSENSNSWNWSNENSWEWESESESWSESWSN", "SWWESSESSWNNNSSNWSNEWSNWWNNEWNEWENSSNWENSSEWWSEWWN", "NSEWWSNWWWEESSSSWNNWWWNENWSSSSWSWWNNEEWNWENSSWWWEW", "ESSNESEEEENSEEEEEENWNWWSNNWWEWWEWNWSNSWSSWNSSWWENN", "WSESWWSSWWWESESSSESSSEESWEWESWSWEWWSNWWWNNNSNWWNNW", "EWWSNSWSNSSWNSNSNWWESESSWENWESNENESNSSWSESWEEWESEE", "NESSEEEESNENSSWSEEENNENEENWNSSEWWNSNWENENEENNEWSWE", "NNWWENSESWNSWSSENWEWEENNEWEEWENESWEESWEEEESNSSSSWW", "NNNWSWSSWSESEENWESWSSWWSSSEWSESSWWWEWNNSESWSNEWSEW", "EESESSNESWESSWWSWSESWEESWWWENNSEWWWNWSEWESESSNESES", "WSSNEEEESWSNWWEENNNENWWWNSNSWWEWSWWSWNNENNNNEEWWNE", "WNESEENNSSSEEWWNSWSWSWWWSNEWWNEWSWNNWWEESWSSSSSSNS", "WSNNSWNENNESWWNEWSESNNSNENSENSSNSNSNSENEESNWWWSNSW", "EESWEWSWESWNWNWEEWNENWWNSNEEWEWSESESESEWNSESSENNNW", "EWSNSSENEEESWWEWSWNWENNEESESNWNWSEWEWSEESWNSEWEEWE", "ESWENNWESNSESNSWNSEWNEWNESSENESEEWWSEENNSESSWSSEES", "ENWNEWWSESSSWENSNENNEWSENESNENEWWNWSWSESNNNWNEENSS", "WNWWNWSNENNWEWWNNNSSWSWNNNSSSNESWNESWSSEWNESENWSWS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"#.....#.....#..#.#....#.#........#...........###..", ".......###........#.......#...#..######.....#....#", ".....#.#.#.#..#................#......#...#.###.##", "..#.#.#..#.##...###......#.....##.#....#.#........", ".....#..#..#...#...##..#..#........##.##.#...####.", ".........#.##...##...#.......##..#.#..............", ".#.....#..#.#..#.#............#.....#..#.#......#.", ".#..#.##....#.#..#..#.....#.##...#.#..##.#....#..#", "..#...#......##.#..#F...#.........#........##...#.", "#..#.....###.#.....####.#.#...#..#.#.......###..##", "#....#.#...#.#..#.Y..##..#..#.#.#.#..#.......#...#", "........#....#.....#.#....#.#..............#.####.", "...............#..####.#.#..#....##.###....#..#.#.", "............##...#...###....#.#....#.#..#...#....#", "........#...###.##.##.##....#....##.#...#....#.#..", "........##...#.#......#...##...#........##..#.....", "....##...#...##.#......##...#..##................#", ".#....##...#......#.......#..#..#.##..#..#.##.#.#.", "#..###....###.#.#.#....#.....#.#...#......#.#.##..", "...#..##..#...##.......#..###...##..........#..#..", "#.#.....#......#.###..#....#....#.......##........", ".#.#.......#.#.#.....#.#..#......#.#.....##..##...", "#..#.###.#....##.....#.....###.#.##..##...#.#...##", ".#....##...............#.#..#.#.....#......#.#....", "...#.........###.#.#..######.#..#....#..##.#.#..#.", ".#...#.#..#.#.######...#..##..##.....#.....#...#..", ".#..##..#.....#.#.##..#...#..#....##...#..#...#...", "..#..##.##...###......#..##......#.....##......##.", "....##.#..#.#..##.####...##...#..#.........#......", "#.......#.........###....#..#.##...#.#.......##.#.", ".##..###.###.#..##..#...#.#.....###.......#.......", "....##.....##.##.#.#..#..#.#...#.#.....#..#.......", "..###.#...#.##...#....#.#.#.#.#.##..#........###..", "##.##.#.#....#.##...##..#..#.#....#....#..#.#.#.##", "...#..#.###.#..#..#.......#....#....##......#...#.", "#.##....#..##........##.#.####.#......#..##...###.", "..#....#...##...#...###.#.#..##.....#..#..#.##...#", ".###............#..#....#.....#...#..##....#.....#", ".#..#.........###..#........#.#...#..##.......#...", ".##........#....#....#..#.#...###.....#.#.......#.", ".......###.#.....#...#...##..#..###..#...###...#..", "#..#..#.#...#....##.#.##........#......#.##.#....#", ".##........###.##.##.......#.#...#...##..#.##..#.#", "#......#.#.....#.#...##..##...#.#..#..##.##..##...", "#...........#.....#....#....#..#.#...#..#...####..", "......#...#.#....#..#..#.#.#.......##...#.....###.", ".#.#...##....##....##.#.#.###.#.#........#.....##.", "##...X.#.#.#....#.#....#.#.#....#.....#.#.####...#", "..#...##...#.......#...#..#...........#.#...#.#.##", "...#..##.#.....##....##..#..##...#.#.##..#.....#.."};
    vector<string> commands = {"WWSWEENEWWWSWNEWENEEEEESESEWWENENESWSNNWNSEWWWSESN", "NSSWESEWWNESWWSNWSENNWSNESESNWSSNSSNENNWWNWWWNENNN", "SWENEWSESNWSWEEWNSSNWWNEWWWSEWEESWEEENSWEEESNWSWSW", "ESNSWENSSNSESSWWSSSWWNSEESNENENSESNSEWNNSNWWNWWWSW", "WWNSNWSWENSWWSSSEWEENESWWWSNSESNNSSSNENSSEEWSWSESE", "SWSWWNEESNWESSNSWESEENSEWWNEENWSENNNWSNSNNSNEESWWE", "WEWENNWENSWENWSENNESSWEENNSWSENESEESSENEEWNSSWSSNE", "SWESENWSENESNWNNWSSWNNWWSSSSNNSENEWESENESEWEENESSS", "EWESESSSSWSNEWSWWNWWSSWESSEWWEESWENSNNWWWSNWWNSNWS", "SNENNWSNNNWSSWENEENENWSWEENWNEWSEWEWSNNWSSSWNENWNS", "WSSNNSSEWESNESEESNWNEWNESNESNNEENSSWEENWEEESNNNENN", "ENWNNEESEEENENNNSWNSWSEWNNWEENENSWEENSSNEWSWEWWNNS", "NSEWSEEENNNWNEENNNENWNNWNEEWESNENENEEENNSESSNNENSE", "NWSEWWNENNSNEESSEWESESNNNEENSSSSNNSNNEEWSSSSESSNWN", "SSENNSESWESNEWNWSNWSWNSSWWEEEWSEEEESSEESWNWENEENSE", "NNWWEEWENENEEENSNWNEWWNSWENSWNEWNSNNNWSSSSNNNNSSSW", "EWENWESNSSWESSESEEEESSNESEEWNSWNNWWNSNNNNWENNSNSSN", "NNNSENSNWEEWNEEEEESNEEENWESNSEESEENNSEENWENWNWNEEW", "NESSNEWSSSNESWEWSNESSWWSENNEWSSENSNESEWNWNNNWENEEE", "ESSEEEEEWWEWSSWSWNWSWSESESWNWEEESSSSESNSSWNNWWEEEE", "SSSWNWNWEEWSEESNEWNWEWWWWENESWEWNNNNSNWNEEWNSWWWNW", "WEEWESNWNWSSSSWSENESWWEENWSESSWENNSNENESENWNEESWWE", "WNSWNWSENWSSWNWEEWESNSWWNNNSNEEENNWENENSSNESNWESSE", "WWESESSSESENNSESWNSNSEWWWENNEWSSWEWWWNEEEESSSNESSW", "ESNEEEWSEESSEEEEEEWESEEWSESESNEWSWWSSENESWWSWSWSEE", "NSNESSNSSWEWWNEWWNWEWSESESWNNSNEEWSSWNSWWEWEENEEWW", "NEESSSNSESWENNESNSSSNWNEWNEENEENWWNWSWSSNWNNWESSWS", "ENWEWSEWSEESWNSESWWESWWWSENEESWWENESWSENEWWWNSNSWN", "SSNWSESWSSWWSEESSSEWSEWNSEWEWNNSWWSESENWWESWSSSENS", "WNENSNSWNWEENWNSWSSSNWSWEWSSENWSNNWSWWNWSWENNENWSW", "EWSSNSESWSWNSNWNWSENSSWWSNNSSWSSSNSNNSNWNEEWSESENS", "WENSWEWSNSSEWSNNSWESNNWSWWWSSNNWSWWWSSNWSSEWNNEWSN", "NSWESNWESWNWENSSEEWESNWWWWSNESENSESNWEESEENEEEWNWN", "ESSSNNESENSEEEESESWEWWNEEESNSNSWWSNWSENWESWSSWSWSW", "WNWWEWWWWWNWENENWEWNSWNNSEWNENNNNENWEWESESWNESEEEE", "WEWSSNSENEEEWSSNSSWWNSSNEWNSWWWSEESESWEWWSEEWESWWE", "WWWWEESESNNEENSNNSEWNWEEENESWNNSWNSSEEWNEWEWSESSSW", "WENSESEWSEWSSSSNEWNNWSSSWWENNNENNNWSNWNSWWSWENEEES", "NSSWNEWWWENWNNNNEWWWNEWSEWNWNSSWWNNESWWNWNWSSSWNSN", "NSWNNEWENWNEENNSWWSWEWWNWENNWSWNNEWWWSESWENSSESNES", "SWNWWSESWWWNEWENNEWSWSSNWNNSSNWNSNNSNSWSEWWEEWNEEN", "SNWEEEWESESSSNNSSWWWEEWNNENWWSSNESESSEWEENENWSNENN", "NSSNNNSEWWSNSWSWENSENESEWEWEWSENSWEEWWWWWSSENSWWSS", "SSNSNEWESSENNSNWNNNWEENEESWSSNWNWNESNNSWEWNSWWESWW", "NNWWEESWWNNSSNNNWWEWSWWNSSWWNWNWSSEWENWWWNNSSENSWW", "WENWSSWWWNNWENWWEWNENESSSWNENSNWWWSNNEESEWWSWEEWNN", "NNESNWSNEEWSNNSSWSNNSWSWWNWWEWEWNSWSESSNSWEWWEENEW", "ESSWENSESSSNNNSESSNWNSESWWWWSWWSWSSSWWWEWENNNSESSE", "WWNNWWSWWESWSEWNSSEEESWSEWWWSSWNESSEENNSWSWWWSSSSS", "SNEWSESNENNESNENESEESWENWNSENWNWWEWSSNWNWWEENWSWSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"##.######.Y......X..F..#.......####.........###.##"};
    vector<string> commands = {"WEWEWEWEWEWEWEESSEENEENWENESWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"#", "#", "#", ".", ".", ".", "#", "#", "#", ".", ".", ".", ".", ".", "#", "X", ".", ".", ".", ".", ".", ".", "F", ".", "Y", ".", "#", "#", "#", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "#", "#", "#", "#", "#", ".", ".", "#", "#", "#"};
    vector<string> commands = {"WNENNSNWNESNNNWNSNENSNNWNSNWNSSWNSNEEEWNSNENSNWNS", "SWNNSNWNENEEENWSNEWNSENWESNWEESWN", "SSSSSWNNNNNNNNNNNNNNNNWNS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"..............................................X...", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........Y.......................................", "..................................................", "..................................................", "..................................................", "..................................................", ".F................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    vector<string> commands = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"##.#.#.", "..##...", "..#...X", "Y...##.", "#...#.#", "..#..F."};
    vector<string> commands = {"SSSNWSSSEWNSENENENNNNENWNEWESE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "Y................................................F", ".............................X...................."};
    vector<string> commands = {"NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE", "NWNEWNWENEWNEWNEWWENWENNWNEWNEWEWNWENWENWENEWNWENW", "WNENWENEWNWENWWNWENWNWNWNNEWNWENEWEENWENWEEWNWENWE", "WNWENWENEWNNWNENWEWEWWNWENWNNENEEENWEENWEEWNWEENEW", "ENEEENWENWENWENWENENENNNEWNEWNEWWWNEWNWENWENWNEWNE", "WNEWNWENEENEWNEEWNWENNENWNEWNWEWWEWENWENWENEWNEWWE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............................................##.", "...............................................#YF"};
    vector<string> commands = {"ENWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................F.", ".................................................Y"};
    vector<string> commands = {"WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN", "WNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWNWN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"FXY...............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    vector<string> commands = {"ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEN", "ENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSENSEW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 2499;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"#..#.........#..#X##..............................", "#........#......###.##.#..........................", ".#.#........#.....#.#.............................", "..###...#..##.##...#..............................", "..#.#.....#....#.#.####...........................", "#...##.##.##..#.....##............................", "#........#......###.##.#..........................", ".#.#........#.....#.#.............................", "..###...#..##.##...#..............................", "..#.#.....#....#.#.####...........................", "#...##.##.##..#.....##............................", "#........#......###.##.#..........................", ".#.#........#.....#.#.............................", "..###...#..##.##...#..............................", "..#.#.....#....#.#.####...........................", "#...##.##.##..#.....##............................", "#........#......###.##.#..........................", ".#.#........#.....#.#.............................", "..###...#..##.##...#..............................", "..#.#.....#....#.#.####...........................", "#...##.##.##..#.....##............................", "#........#......###.##.#..........................", ".#.#........#.....#.#.............................", "..###...#..##.##...#..............................", "..#.#.....#....#.#.####...........................", "#...##.##.##..#.....##............................", "#........#......###.##.#..........................", ".#.#........#.....#.#.............................", "..###...#..##.##...#..............................", "..#.#.....#....#.#.####...........................", "#...##.##.##..#.....##............................", ".##...#.#....#.......#.#..........................", "....##.#..#....#....#.............................", "....###.##.....###...#............................", "#.#.......#.#......#..#...........................", ".##....##.#.##.......#.#..........................", "......###...####......#...........................", "..#.##.#..#.#...#...#.............................", ".....#.#..........#...#...........................", "##.#....##F#.....#.##.#...........................", ".##....#.......##.##.##...........................", "..#...#..##....#..#...Y...........................", "#...........#...###..###..........................", ".....#...#..#.........#...........................", ".#...##..#.#...#..#.##............................", "#..#...######....###.#............................", "#.#.....#.......#.##..............................", "#..#....###....#.#..#.............................", "..#...#.##.##.#.##.##..#..........................", "#....##.##..........#..#.........................."};
    vector<string> commands = {"NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"X.F...............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................Y........................"};
    vector<string> commands = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWWW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"YF#X##############################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################"};
    vector<string> commands = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"....Y", "...#.", ".....", "##.X.", "F#..."};
    vector<string> commands = {"WWSSSE"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"X........................#...........#..........#.", "......................#..#...........#.....#....#.", ".....................#..#....#####..#.....#....#..", "....................#....................#....#...", "#########################################....#....", "............................................#.....", "#.#.#.#....................................#......", ".......#..................................#.......", "........#................................#........", ".........#..............................#.........", "..........#............................#..........", "...........#..........................#...........", "............#........................#............", ".............#......................#.............", "...................................#..............", "..................................#...............", ".................................#................", "................................#.................", "...............................#..................", "..............................#...................", ".............................#....................", "............................#.....................", "...........................#......................", "..........................#.......................", ".........................#........................", "........................#.........................", ".......................#..........................", "......................#...........................", "..................................................", ".....................#............................", "....................#.............................", "...................#..............................", "..................#...............................", ".................#................................", "................#.................................", "...............#..................................", "..............#...................................", ".............#....................................", "............#.....................................", "...........#......................................", "..........#.......................................", ".........#........................................", "........#.........................................", ".......#..........................................", "......#...........................................", ".....#............................................", "....#.............................................", "...#..............................................", "..#..............................................Y", "#...............................................F."};
    vector<string> commands = {"NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS", "NNNEEEWWWSSSNNNEEEWWWSSSNNNEEEWWWSSSNNNSSSEEEWSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"#..#.........#...X##....", "#........#..........##.#", ".#.#........#.....#.#...", "..###...#..##.##...#....", "..#.#.....#....#.#.####.", "#...##.##.##..#.....##..", ".##...#.#....#.......#.#", "....##.#..#....#....#...", "....###.##.....###...#..", "#.#.......#.#......#..#.", ".##....##.#.##.......#.#", "......###...####......#.", "..#.##.#..#.#...#...#...", ".....#.#..........#...#.", "##.#....##F#.....#.##.#.", ".##....#.......##.##.##.", "..#...#..##....#..#...Y.", "#...........#...###..###", ".....#...#..#.........#.", ".#...##..#.#...#..#.##..", "#..#...######....###.#..", "#.#.....#.......#.##....", "#..#....###....#.#..#...", "..#...#.##.##.#.##.##..#", "#....##.##..........#..#"};
    vector<string> commands = {"NWWSEWSSNWESSWES", "ESEEENSNWNNWSNSNWWNWWNNNWE", "NSNENENNSEENWWNSNNNNWWSSN", "EENEWNWESESEEESNNNSEENNEWNNESNEESSEESEEENENNNWSSW", "NWNNWSNWSWSSSSEEWSSWSESWWNNWWENSNNWWSSWWNNE", "NWEWNEWSNEN", "NNNEWNSWSNWESWNNNSWWNNNWWWNNEWNEEWSSWNSSWWNNWESEWS", "WSSSEESSEEEEENNSWEWWWENSENWNSEENES", "NNSNESESWNESNENSEESESWSENNESESNESNESEEW", "ESNENEENWSNS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"FY................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................X"};
    vector<string> commands = {"SNNNNWSSENNENNEEENWEWENSNNESSENNNNNEENENSNNNNNEENW", "SENEEWNEWNNNWENNNNWSSSWENNNNNEENNSNNNNNNESNNWNNSEE", "NWNNENNESSWENNNEEWNNEEENNNNNNSENEESNNNNSNWWEENWNEW", "NNSENNEWNSWESNENEENESWNNNENNNWEENNNNWENNSEEENNNESE", "ENNNSESNNWNWSNNNNENSNNENNSNNEENNNNNEENENNSESNNNNWS", "NNNWWNNNNENNSNENNNSENNNNNNSNEESWNNNWSWNNENNWNWWNEE", "ESSENSNSEENNNNWWNSNNNNNNNNSNEWEENNWNNSNNNSSNEWWNNN", "NNENWNSEENNSNNEWEENNSNNESNNNNSNNESWNSNNSSWNNENNSNN", "NEEWNWENNSSNNNSNNNWNNSNNNNNEWESENNWNNEENNWNNNENNSE", "NENESENWWNWENEENSSWNNSWENNENNSWNNNNNEWNNSESSNNNWNN", "NNWNNENNENSENEWNNWNNENENENNEENNSENENENNWEENNENNWEN", "ENNWENNENENNNEWSNNNENWEEENENNSSNSNNWNNNNNEWWSWNSNE", "NSWNENNENENNENNEWSNENNNENNENEENNNNSENNENNNENWENNNN", "ENWNNESENENWSWNNEWNNESWSNNENENENNEESEENENESSNNNNNE", "ENNNNNNNNSSNNWENNSNNNSENNNNWNNEESWNNNEESNNNSENESNW", "NNENNNNNNNNESESNNEESSNSNNNENSNENWNENEWWNNEEENWWNNW", "ESEWNNNNEWSEWNNENNNWNSEENNSNENEEENNNNESWNWEESESNNN", "ESNNSENNENNNNESNNNNSENSSNWNENENNWNENNENSSNSWESNNWN", "NNNNSNNNSWSNENNSNNNNEENENNENENNNENNNWNEEENNENWSNWS", "WNWESNNSNESENNENSESEEENNWEEWWESEENNNSNSNWSWWEENWEE", "NEENENENEENSNEESENENSENNENNWNENSSNNNNWNENSNNSEWSSN", "WNWSENNEWESEEESNNENENEEENNSSEWEWENNENEWNNWNENSENNW", "WEEEEEENEENENEENESWNNWNEEENENESNEWEENSNENNNNNNNESE", "NNEENNEWNSENNNNNEENWNWNESNSWENESESNWEESWWNNEENENEE", "SNNNNSNESEENNWSENENWSSENWEESNNNNNNENWNENEWNNESNNNE", "SWENSNENNNEEWNENSENEENNNEENEENWEWEWENENNENWENNEEES", "NNNNNSNNENSWNWNSNSNWNENEENNESNWNWNNEWNNNNNENNNNENN", "NNWNENNENNNWNENNESWENNWNNNSEENNNNSENNSSNNENENEENEE", "SENNEENSESENNNNWENNSNNWNESNENNNENNNNSWNNSNNENNWENN", "SEENSESNNWSNWEESNWWNWNSWNNNENNNNEWSNNEEENNEENSNEEW", "NNNSESNEWESESENENWNNENNENENNEEWSNWEENNESNSNNNNEWSE", "SENWNNWNWNNNSNNWNNNESNWNNEWNEWNNSESENNNNSNSWNNWSSN", "ENNNWNNNEENSNSWEENENNWNNNNNWEENENSNSWNNNEWNENNEENE", "NSENEEWNWEWNWNNNWSSWNNNNSNNNEENNWEESNWNNNNNNNSNNEW", "NEWESNNNWNNESWNNWNNEEEEEWENNNNENEENEENWNNEENNWEESN", "NWNNWEENNNENWNNSSSNNSNNNNNNNWNNNSWSNENWNNEWENSEENE", "NNNSNWNNESWNSNNNNSSNNNNWWNWNNSNNNSENEEEESNSNSNNNNN", "EEWENEENWNESNWNEENNNSNNEENNWNNNNNNNNEEENEEEWNNEWNN", "EENENSNNNNNNNWNNENSSSENEENNNENNWWENNWWWNNSEESENNEE", "WNSNNNNNWEENNENNNESSWNNNWNENENENEEENSNNNNNENNENNNE", "NNENWNSNNSNENWWSNNSESNSNENESNNENNENNNNNSWSNWNNWNNS", "WNNNWSNNSNESNENEENENWSSWNSNNNNNSENNENSNESENENESNNN", "WNNWNENNENNENWENSNNSEENNSNNESESSNEWNEWESSWNNNNNNNN", "NNSENNENNENWSNENNEEENENWNNNNEEWEWSSNEESNSEWSNNNNEN", "NSWSWNSSESNSNNWEWNWWNNNESEEWSNNNNWNNESEEEEWNNNNENN", "NNNNENNNSWNNNNWENSNENNNNENNNSNWSENSENNNNENNNSNNNNN", "NNNNWNENEWWNEWNENNNNNNNNWWNEENNENSEWWNSNNNNWSNNNNN", "EENNNENNENENNWSENNSESNNENNWNNNNSENSNNENNNSNEEESENN", "NWNENWNSNNSNNNWENNESENWNEENSNENSNEWENEWWNWENNNWNWN", "EENNNNNNNEWSENEENENNWNEWENNSNWNWSNENNWNNNNSENNNEES"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"..................................................", ".Y.X.F............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    vector<string> commands = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"YF................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................X"};
    vector<string> commands = {"NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES", "NEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWENEWNEWES"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"Y..#.#......#...#........#...#..................#F", "...#...#..##...#.....#.#.....#...........#........", "##...........#..#...#......#.......#..........#..#", "#....#...#.....#.#.........#......#....#..#.......", ".......#..........#.#..#.##.........#.........#..#", "#..#.##....#........#....#.....#..#.........##...#", "#.....#..........#.......#......#.#..#..#.....#...", ".###..#....#.#.....#......###....#................", "..............#.....#....#.......#..#....#..#...#.", "..........#.....#...#.....#..#.#.......#...#.#....", "..#.....##....#.....#...#........#.#.#.......#.#..", "#...#.#.....#....#..#...#.............#...#.......", "#............#...#.........#.#.#.........#..#....#", "...........#.#.#....#..##.....#....#.............#", "..#....#......#.#....##.#....#....##..#.#..#......", "##.##.......#....#...#..##.......#......#.........", "...#..#..............#.......#.....#....#.........", ".......##.#.#.......#....#.#.........#..#.........", ".....#..#.###....#.#..##.#......##.###.....#......", "..#....#..#............#...#.#........#..###......", "......#........#......#...#........#..#.#.#.......", "#........#......#..#..#......#...#.....#.#.....##.", "..#......##..#.##.#..................#............", ".........#........#.#.##...#...#..##...#......####", "...#....#.#........#.#...........#.#.#............", "..........#.....##...#.....###.........#......##..", "...............##............#...##..#......##....", "....#......#..#......#...........###.....#..#.....", "..#......#.....##....#.##....#.#...#...#..#.......", ".#..#..#........................##......###....#..", "...........#....#.........#.....##..#.#.........##", "#.#........##......#....#...#..##..#.............#", "...#....#.........#..#....#...#....##...##...#....", "..#......#......#.......#........#..........#..#.#", ".....#....#.#..#..#..#.#....#...#....#..#..#......", ".#.....#.#...............#..#................#.##.", "..###.......#....##....#..#..#.......#........##.#", "..#....##..............##.#.....##.#.###..#....#..", "##....#..#..#...#...#.#.....##...............#..#.", ".....#......#.#.........###.#........#....#.......", "......#.#........#........#.#.#...#.#.#.....#.#..#", "#.#...........#......#.##..............#.........#", "..####..#............#.....####........#........#.", "....#....#.#.............#....##........#.......#.", "......##......#...##.#..###.....#.#..#.#...#...#..", "#..#.....#.....#....#....#...#...###...##......#..", ".#.#.....#..#....#........##...#...#........#...#.", "#............#.........#......#....#.#......###...", "..#..###..#.................#......##........#....", "....##...............#...#....#.....#....##...#..X"};
    vector<string> commands = {"NWNWWNNNNWNNWENEENEWNNNSWNNEEEEWNENWENWSWWNWWSNNNS", "NNSNEWWENNWEWWWWNNWWNENNWWEWWEWEWNSWWNWWWSNEWWNWEW", "SENSEWNWNWNWNEWNNNWWWWWWWSNWNWNNWNNNENWEWWNEWWNEWN", "NENWNNWNEEEEWNNWWWWEWNWWEENEWWEENENWSWWWNNWWNNNENW", "WWWEENWWENNWEWNEWNWNSWNNSWWENWNWEWWWWENWENNWWNNNWW", "SWWNWWWSWWWWNNNWWENWNNWNWENWWWSWEWWNNSNWWWNWWNSSNN", "NSNWSWNSSEWENNNWNNWNENWWWNWWEWWEWWNNEWNWNWWWWWEWEW", "ENWWESNWNESWWNNEWSNNWWWSWNNWWNSWNNWNNSWNENENNESWWS", "ESNWESWSNNSNWSNNESENNWNEWWWNNNNSSWNWNWWWENWNNWSENW", "NWENNNWWNEWNWWNENWNWWSEESENEWWNWESWENNWNENNNWWSNWN", "WNNNNSSNWWWEWNWNNWNWWNNWNWSEWWNNWNWWSNWWNNNNWWNWEW", "WNWEENNWNWSNSNNNWNNNNWWNWWWWEWSWWNNNWNEEWWEWWNWNSE", "WNWEWENNWENNNSWNNENEWENNNENESEWNNEENWENWWNWENEENWE", "NEWNEEWEWWWSWNWNWEEWNNESSSWENNWNENNWWWNNEWENENNNNE", "WNNNSNEWWSWNENNEEWNSWENWSEWSEWESWWENEWENWNWNWNWNSW", "EWNSWNWNSWWWNENESENWNWEWWNWENWWNEWNWWWWNWEWEWWWNNW", "ENSWWNWNNWWNWNEWWNSNNWEEWNNEWWNNWNENWNEWENWWWWSSWE", "SEWWWEEWWNNWNWSEWWNWEEWWNEWNWNEWSNSNSWNNWSNEWEWENW", "NWNWSNNWNWEEEWNWEENWSWWSNSWWWWNWNNNNNSWNWNNNWNSWWN", "NWWWWENSNEWWNWWNNWSEEWSEWNWWENWEWSNEENWNEENNNWNNNE", "NWNENWNWNWWWNEWNNNWENNWNNWENEWWWSENSNNNWEWENNNNWWW", "NNWWWWSSWWWNNNWNNSWNNNENNNNNWWWWENNNWNNEWWWWWWEWNN", "EWNNNSWWSESWWWNWWWEWNWENSNWEWNWNWWWSWWWWWNEEWNNSWN", "WEWNENNNEWWWWEESWWWEEESWWNWENEWWWEWNEWNWSWEWNWWEEE", "WWWWEEWNWEENNWEWWWSENWNENWNWNNNEWWSNNWNENNWNWNWNSW", "WSNEWNNEWNEWWNEWWNNWENEWNNWENWNWNNNENNWWNNSENENWSN", "NWNESNEWNWNSNNSNENWNWWNNNNNWEEWEWWWNWNEWEEWSENNENW", "SWNNNNNSWSESWNNSNWNSNSWNWWWSSWWWNWWNSESWWWNNWNSEEN", "WEENENNNNNEWWSNNSEEENNNNNSNNWSNNEWSWSNWNNWWWNWWNNN", "ENWNNESWEWWSWNWWWWWNNNWEEWSNWNWWWSWEWWWWEENNEWWNEE", "NSSEWWNWSSWNNENEWWNEWSWESNNNNSSWEENNNWWNNNNWSSNWNW", "NSNWWSWWNENNNSWWNNEWNNWNWNNWWNSWNSWWENNNENENNWNNWE", "WWWEWNEWWNWNWWNNNSNNENNWENNSNWWWENNNNSWWSNWWWWWEWE", "WWWEENSSNNNEWSEWNEWWSNWWENNNEWEWENNWWSNWEWNNWEWWWE", "WNSNWWNWWWENNWWNSEENNWWWWNNNNNWSWWEESENWWNEWWNNNSN", "NNWEWSEWSNWWENEWWEWSNEENNNNNNENNNWENWWWNWNWNSWEWNN", "WNENNWNNWNEEWEWWNEEWSNWWWWENSENNNEWNNWNSEEWNWENWWN", "SNNWWWSWWENWNNWWNENNWWNNEWENENEEWSNNWSNEWWWEWENWNS", "EWWEWNNNSEWEWEWEEEWSWNWSEEWEWWWNNNEWNENNWNENNWWENN", "WWWENSWEWNNNNNNWSWWEWENWENWWWEWNNWNWWWNNWWWWWWEWNN", "NWSNWWNNSSENSSESNNWNNEWWNNSEWEEWNWESSNNEEESWWWWEWE", "NWWWEWWENSWWWWNWWNNWWNNWWEENWNEWWNNWWWNNWWWNNWNWWW", "EWWNEEEWENEWEWWEEEWNEEWWEWNNSWNESWEWWNSNWEWNNEEEWN", "WNESWWNWWNNWEENWNWENWNEENWWSNNEENWWWSSNNNSENENWENS", "SWNWNNNESNWESEWWWNWNWWNNWWNWWNWNEWENWEWWENNENWNNEW", "WSNWNNNSSWNNEEWWWNSNWEWWWWNWWENNWNEWWSWNWWWNNSNESN", "NNEWSNESNWWNWSWNWENWNNNNNNNWENEEWWSNSWNENWEWWNWENW", "WSWWNSWWWNWSEEWWSNNNENWWWWENWWWEWNNWSNNWNWNNNWWNEW", "EWENNNSENNWWSSWEWWNWWWSENSNESENWWEEWEWNEEWNWWEWESN"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = 1484;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"YF................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", ".................................................X"};
    vector<string> commands = {"WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS", "WENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSSWENSS"};
    RoboRace* pObj = new RoboRace();
    clock_t start = clock();
    int result = pObj->startTime(board, commands);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7581406&rd=9996&pm=6621
********************************************************************************
#include <string> 
#include <vector> 
#include <cstdio> 
#include <iostream> 
#include <sstream> 
#include <set> 
#include <map> 
#include <utility> 
#include <cmath> 
using namespace std; 
 
#define fo(a,b) for(int a=0;a<b;++a) 
#define pb push_back 
#define foreach(it,c) for(typeof((c).begin()) it = (c).begin();it != (c).end();++it) 
#define mp make_pair 
 
#define lint long long int 
#define VS vector<string> 
#define VI vector<int> 
#define VVI vector<VI > 
#define iss istringstream 
#define oss ostringstream 
 
int m,n; 
string s; 
int memo[51][51][2500]; 
VS g; 
 
inline bool valid(int x,int y){ 
  return x>=0 and x < m and y >=0 and y < n and g[x][y] != '#'; 
} 
 
string dir = "NEWS"; 
int dx[] = {-1,0,0,1}; 
int dy[] = {0,1,-1,0}; 
int inf = 1000000; 
 
int doit(int x,int y,int a){ 
  if(g[x][y]=='X') return a; 
  if(a >= s.size()) return inf; 
 
  int & ret = memo[x][y][a]; 
  if(ret != -1) return ret; 
 
  ret = doit(x,y,a+1); 
  int d = dir.find(s[a]); 
  int X = x + dx[d]; 
  int Y = y + dy[d]; 
 
  if(valid(X,Y)) 
    ret <?= doit(X,Y,a+1); 
  return ret; 
} 
 
class RoboRace{  
public:  
int startTime(vector <string> board, vector <string> commands) {  
  g = board; 
  m = g.size(); n = g[0].size(); 
  fo(i,commands.size()) s += commands[i]; 
 
  memset(memo,-1,sizeof(memo)); 
 
  int mx,my,fx,fy; 
  for(int i=0;i<m;i++)fo(j,n) if(g[i][j]=='F') fx = i, fy = j; 
  else if(g[i][j]=='Y') mx = i, my = j; 
 
  for(int i=0;i<s.size();i++) if(doit(mx,my,i) < doit(fx,fy,i)) return i; 
  return -1; 
}  
         
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/