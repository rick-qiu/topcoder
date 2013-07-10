/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12044
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

class FleaCircus {
public:
    int countArrangements(vector<string> afterFourClicks);
};

int FleaCircus::countArrangements(vector<string> afterFourClicks) {
    int ret;
    return ret;
}


int test0() {
    vector<string> afterFourClicks = {"1 2 0 3"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> afterFourClicks = {"1 2 ", "0 3"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"0 1 2"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> afterFourClicks = {"0 1 2 3 5 4"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"3 6 7 9 8 2 1", "0 5 1 0 4"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> afterFourClicks = {"0"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> afterFourClicks = {"0 1"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> afterFourClicks = {"1 0"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> afterFourClicks = {"0 1 2"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> afterFourClicks = {"0 2 1"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> afterFourClicks = {"1 0 2"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"1 2 0"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> afterFourClicks = {"2 0 1"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"2 1 0"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"1 0 7 5 6 3 4 2"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> afterFourClicks = {"3 2 1 0"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> afterFourClicks = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36", " 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 5", "3 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 ", "70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86", " 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 10", "2 103 104 105 106 107 108 109 110 111 112 113 114 ", "115 116 117 118 119 120 121 122 123 124 125 126 12", "7 128 129 130 131 132 133 134 135 136 137 138 139 ", "140 141 142 143 144 145 146 147 148 149 150 151 15", "2 153 154 155 156 157 158 159 160 161 162 163 164 ", "165 166 167 168 169 170 171 172 173 174 175 176 17", "7 178 179 180 181 182 183 184 185 186 187 188 189 ", "190 191 192 193 194 195 196 197 198 199 200 201 20", "2 203 204 205 206 207 208 209 210 211 212 213 214 ", "215 216 217 218 219 220 221 222 223 224 225 226 22", "7 228 229 230 231 232 233 234 235 236 237 238 239 ", "240 241 242 243 244 245 246 247 248 249 250 251 25", "2 253 254 255 256 257 258 259 260 261 262 263 264 ", "265 266 267 268 269 270 271 272 273 274 275 276 27", "7 278 279 280 281 282 283 284 285 286 287 288 289 ", "290 291 292 293 294 295 296 297 298 299 300 301 30", "2 303 304 305 306 307 308 309 310 311 312 313 314 ", "315 316 317 318 319 320 321 322 323 324 325 326 32", "7 328 329 330 331 332 333 334 335 336 337 338 339 ", "340 341 342 343 344 345 346 347 348 349 350 351 35", "2 353 354 355 356 357 358 359 360 361 362 363 364 ", "365 366 367 368 369 370 371 372 373 374 375 376 37", "7 378 379 380 381 382 383 384 385 386 387 388 389 ", "390 391 392 393 394 395 396 397 398 399 400 401 40", "2 403 404 405 406 407 408 409 410 411 412 413 414 ", "415 416 417 418 419 420 421 422 423 424 425 426 42", "7 428 429 430 431 432 433 434 435 436 437 438 439 ", "440 441 442 443 444 445 446 447 448 449 450 451 45", "2 453 454 455 456 457 458 459 460 461 462 463 464 ", "465 466 467 468 469 470 471 472 473 474 475 476 47", "7 478 479 480 481 482 483 484 485 486 487 488 489 ", "490 491 492 493 494 495 496 497 498 499 500 501 50", "2 503 504 505 506 507 508 509 510 511 512 513 514 ", "515 516 517 518 519 520 521 522 523 524 525 526 52", "7 528 529 530 531 532 533 534 535 536 537 538 539 ", "540 541 542 543 544 545 546 547 548 549 550 551 55", "2 553 554 555 556 557 558 559 560 561 562 563 564 ", "565 566 567 568 569 570 571 572 573 574 575 576 57", "7 578 579 580 581 582 583 584 585 586 587 588 589 ", "590 591 592 593 594 595 596 597 598 599 600 601 60", "2 603 604 605 606 607 608 609 610 611 612 613 614 ", "615 616 617 618 619 620 621 622 623 624 625 626 62", "7 628 629 630 631 632 633 634 635 636 637 638 639 ", "640 641 642 643 644 645 646 647 648 649 650 651"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 92639029;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> afterFourClicks = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36", " 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 5", "3 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 ", "70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86", " 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 10", "2 103 104 105 106 107 108 109 110 111 112 113 114 ", "115 116 117 118 119 120 121 122 123 124 125 126 12", "7 128 129 130 131 132 133 134 135 136 137 138 139 ", "140 141 142 143 144 145 146 147 148 149 150 151 15", "2 153 154 155 156 157 158 159 160 161 162 163 164 ", "165 166 167 168 169 170 171 172 173 174 175 176 17", "7 178 179 180 181 182 183 184 185 186 187 188 189 ", "190 191 192 193 194 195 196 197 198 199 200 201 20", "2 203 204 205 206 207 208 209 210 211 212 213 214 ", "215 216 217 218 219 220 221 222 223 224 225 226 22", "7 228 229 230 231 232 233 234 235 236 237 238 239 ", "240 241 242 243 244 245 246 247 248 249 250 251 25", "2 253 254 255 256 257 258 259 438 261 262 263 264 ", "265 266 267 268 269 270 271 272 273 274 275 276 27", "7 278 279 280 281 282 283 284 285 286 287 288 289 ", "290 291 292 293 294 295 296 297 298 299 300 301 30", "2 303 304 305 306 307 308 309 310 311 312 313 314 ", "315 316 317 318 319 320 321 322 323 324 325 326 32", "7 328 329 330 331 332 333 334 335 336 337 338 339 ", "340 341 342 343 344 345 346 347 348 349 350 351 35", "2 353 354 355 356 357 358 359 360 361 362 363 364 ", "365 366 367 368 369 370 371 372 373 374 375 376 37", "7 378 379 380 381 382 383 384 385 386 387 388 389 ", "390 391 392 393 394 395 396 397 398 399 400 401 40", "2 403 404 405 406 407 408 409 410 411 412 413 414 ", "415 416 417 418 419 420 421 422 423 424 425 426 42", "7 428 429 430 431 432 433 434 435 436 437 260 439 ", "440 441 442 443 444 445 446 447 448 449 450 451 45", "2 453 454 455 456 457 458 459 460 461 462 463 464 ", "465 466 467 468 469 470 471 472 473 474 475 476 47", "7 478 479 480 481 482 483 484 485 486 487 488 489 ", "490 491 492 493 494 495 496 497 498 499 500 501 50", "2 503 504 505 506 507 508 509 510 511 512 513 514 ", "515 516 517 518 519 520 521 522 523 524 525 526 52", "7 528 529 530 531 532 533 534 535 536 537 538 539 ", "540 541 542 543 544 545 546 547 548 549 550 551 55", "2 553 554 555 556 557 558 559 560 561 562 563 564 ", "565 566 567 568 569 570 571 572 573 574 575 576 57", "7 578 579 580 581 582 583 584 585 586 587 588 589 ", "590 591 592 593 594 595 596 597 598 599 600 601 60", "2 603 604 605 606 607 608 609 610 611 612 613 614 ", "615 616 617 618 619 620 621 622 623 624 625 626 62", "7 628 629 630 631 632 633 634 635 636 637 638 639 ", "640 641 642 643 644 645 646 647 648 649 650 651"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> afterFourClicks = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36", " 37 38 39 40 41 42 43 44 45 644 47 48 49 50 51 52 ", "53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 510 6", "9 70 71 72 73 74 75 76 77 78 79 80 582 82 83 84 85", " 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101", " 102 103 104 105 106 107 108 109 110 111 112 113 1", "14 115 116 117 566 119 120 121 122 123 124 125 126", " 127 128 129 130 131 132 133 134 135 136 137 138 1", "39 140 141 142 143 144 145 146 147 148 149 150 151", " 152 153 154 155 156 157 158 159 160 161 162 163 1", "64 165 166 167 361 169 170 171 172 173 174 175 176", " 177 178 179 180 181 182 183 184 185 186 187 188 1", "89 190 191 192 193 194 195 196 197 198 199 200 201", " 202 203 204 205 206 207 208 209 210 211 212 213 2", "14 215 216 217 218 219 220 221 222 223 224 432 226", " 227 228 229 230 231 232 233 234 235 236 237 238 2", "39 240 241 242 243 244 245 246 247 248 249 250 251", " 252 253 254 255 256 257 258 259 260 261 262 263 2", "64 265 266 267 268 269 270 271 272 273 274 275 276", " 277 278 279 280 281 282 283 284 285 286 287 288 2", "89 290 291 292 293 294 295 296 297 298 299 300 301", " 302 303 304 305 306 307 308 309 310 311 312 313 5", "24 315 316 317 318 319 320 321 322 323 324 325 326", " 327 328 329 330 331 332 333 334 335 336 337 502 3", "39 340 341 342 343 344 345 346 347 348 349 350 351", " 352 353 354 355 356 357 358 359 360 168 362 363 3", "64 365 366 367 368 369 370 371 372 373 374 375 376", " 377 378 379 380 381 382 530 384 385 386 387 388 3", "89 390 391 392 393 394 395 396 397 398 399 400 401", " 402 403 404 405 406 407 410 409 408 411 412 413 4", "14 415 416 628 418 419 553 421 422 423 424 425 426", " 427 428 429 430 431 225 433 434 435 436 437 438 4", "39 440 441 442 443 444 445 446 447 448 449 450 451", " 452 453 454 455 456 457 458 459 460 461 462 463 4", "64 465 466 467 468 469 470 471 472 473 474 475 476", " 477 478 479 480 481 482 483 484 485 486 487 488 4", "89 490 491 492 493 494 495 496 497 498 499 500 501", " 338 503 504 505 506 507 508 509 68 511 512 513 51", "4 515 516 517 518 519 520 521 522 523 314 525 526 ", "527 528 529 383 531 532 533 534 535 536 537 538 53", "9 540 541 542 543 544 545 546 547 548 549 550 551 ", "552 420 554 555 556 557 558 559 560 561 562 563 56", "4 565 118 567 568 569 570 571 572 573 574 575 576 ", "577 578 579 580 581 81 583 584 585 586 587 588 589", " 590 591 592 593 594 595 596 597 598 599 600 601 6", "02 603 604 605 606 607 608 609 610 611 612 613 614", " 615 616 617 618 619 620 621 622 623 624 625 626 6", "27 417 629 630 631 632 633 634 635 636 637 638 639", " 640 641 642 643 46 645 646 647 648 649 650 651"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 683760795;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> afterFourClicks = {"247 64 181 30 134 289 81 148 116 395 127 235 72 31", " 529 26 109 160 421 277 512 427 294 496 426 463 75", " 103 491 508 332 323 303 151 497 542 369 454 304 1", "74 61 532 498 436 473 384 0 265 420 130 439 191 40", "0 507 464 111 409 94 169 192 92 93 196 286 522 8 1", "63 401 504 477 494 540 282 313 190 327 91 338 166 ", "246 80 261 23 46 543 530 175 417 119 493 11 14 260", " 489 241 287 407 34 412 376 457 467 213 438 281 45", "2 525 441 177 35 182 534 102 295 321 408 523 171 3", "11 299 165 145 368 47 79 208 100 374 19 300 147 36", " 458 54 90 488 519 245 316 236 462 358 121 16 539 ", "227 141 233 128 255 203 404 371 118 334 216 188 26", "4 350 524 173 231 48 424 195 83 415 6 38 204 361 1", "01 139 541 2 67 176 184 114 262 298 526 221 516 97", " 104 115 85 472 1 490 251 249 266 32 425 17 381 45", "0 267 212 305 69 482 279 353 229 280 330 290 135 2", "15 200 291 167 278 538 170 378 189 44 132 250 82 5", "28 443 331 230 20 447 363 49 434 63 225 272 113 56", " 419 202 389 410 444 254 399 41 500 168 537 185 24", "8 53 65 483 252 98 210 392 297 256 45 373 318 499 ", "386 377 509 228 89 356 77 461 527 15 131 359 391 1", "44 156 336 337 514 108 172 5 422 42 355 535 146 31", "2 243 533 502 205 475 481 366 253 164 162 319 487 ", "335 138 214 218 492 142 293 234 430 136 357 125 43", "2 120 29 107 307 352 347 302 296 372 58 9 428 423 ", "24 393 105 506 59 375 194 137 207 276 324 198 501 ", "520 431 413 354 322 178 259 416 449 220 518 12 25 ", "133 74 468 310 418 154 480 448 397 414 33 226 269 ", "275 123 315 18 284 531 13 536 471 511 403 152 183 ", "129 348 10 66 309 21 271 199 110 263 43 257 238 50", "3 411 99 117 222 351 396 76 479 87 155 445 122 470", " 346 211 57 398 27 485 406 224 86 306 60 453 197 4", "84 383 476 364 68 388 478 106 7 193 341 367 201 51", "0 433 70 283 78 71 150 239 223 339 370 50 446 455 ", "301 159 140 161 465 73 437 88 343 22 240 326 232 3", "28 345 340 3 258 314 308 505 288 515 273 495 186 9", "5 37 365 521 157 39 180 380 270 217 379 187 440 24", "4 517 268 442 28 344 84 486 237 242 126 451 390 12", "4 96 158 52 206 466 474 51 317 153 112 274 329 513", " 4 405 285 382 459 209 342 179 219 460 143 394 402", " 333 149 349 362 435 360 55 292 469 325 320 387 42", "9 456 62 385 40"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 53231327;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> afterFourClicks = {"431 188 112 361 294 232 226 306 34 286 253 430 56 ", "331 152 110 93 275 316 263 218 195 432 419 121 271", " 405 346 28 396 191 49 480 33 72 82 3 259 413 107 ", "15 305 452 207 59 299 422 175 256 131 60 287 366 5", "3 339 423 245 125 359 293 440 25 258 477 277 401 8", " 337 13 437 248 368 398 353 466 444 246 355 289 0 ", "123 104 81 229 393 376 114 167 133 370 179 143 22 ", "243 57 95 454 403 10 79 273 318 146 340 417 214 16", "0 172 202 447 449 382 199 310 260 196 210 216 138 ", "61 122 302 304 159 303 373 126 100 24 438 193 194 ", "338 427 124 280 463 36 255 134 1 221 238 462 120 4", "11 47 237 397 234 365 233 395 173 217 328 384 161 ", "354 99 85 412 469 90 336 170 5 264 450 387 369 178", " 459 301 212 102 70 321 409 389 326 180 351 103 22", "7 43 105 27 399 231 108 187 35 68 435 241 478 283 ", "265 347 205 197 434 222 479 164 476 300 190 324 12", "9 235 254 379 77 9 176 475 410 276 211 267 141 408", " 20 436 98 158 189 317 349 63 374 66 464 375 220 1", "28 295 136 426 37 78 209 314 470 474 76 251 311 30", "8 247 155 482 278 392 156 383 38 21 213 400 457 43", "9 281 116 42 12 83 465 327 109 230 101 415 252 30 ", "168 174 404 262 87 282 74 448 96 142 332 225 54 41", " 371 91 185 323 388 451 64 127 341 44 456 418 390 ", "18 290 364 345 14 274 52 261 298 208 357 433 113 4", "21 312 73 7 92 145 86 236 460 406 360 330 65 441 1", "30 362 165 26 313 429 89 284 420 171 151 250 343 4", "53 2 219 416 348 473 67 201 367 372 75 186 69 118 ", "88 204 363 307 215 270 320 228 144 291 242 333 244", " 19 257 97 377 16 106 461 292 394 39 169 140 322 7", "1 279 198 266 51 149 139 407 350 23 46 428 29 414 ", "45 483 249 424 458 385 471 40 455 391 50 181 224 3", "2 269 315 148 309 137 329 147 84 48 344 4 55 240 4", "25 192 17 342 132 184 80 177 119 335 6 443 162 386", " 352 206 358 442 468 296 381 94 62 200 115 297 11 ", "445 268 272 183 153 135 402 288 285 481 58 239 163", " 157 182 467 380 356 203 446 472 325 117 111 223 1", "50 334 378 319 166 31 154"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 958004148;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> afterFourClicks = {"290 229 423 447 109 559 212 384 466 410 110 84 234", " 218 37 521 273 75 371 206 14 440 159 312 44 100 3", "3 503 294 457 34 175 305 26 46 274 282 415 39 324 ", "259 257 301 500 27 306 289 246 52 196 129 243 333 ", "380 231 545 439 376 502 202 227 144 186 526 350 11", "4 327 96 539 554 352 179 82 330 118 240 311 63 241", " 291 0 3 49 1 261 497 449 167 469 418 219 453 556 ", "284 20 315 480 48 134 280 331 168 91 518 461 456 3", "69 348 351 387 534 425 504 154 395 377 473 283 424", " 533 221 444 553 335 57 53 160 399 215 523 155 13 ", "551 309 141 28 171 483 413 173 310 435 281 429 329", " 139 463 321 452 364 269 194 145 176 494 272 60 39", "3 233 320 522 161 542 537 487 6 40 115 203 68 476 ", "210 407 512 222 24 492 361 496 211 87 181 482 5 39", "4 328 92 187 184 516 304 85 192 318 277 349 342 52", "7 392 332 474 30 529 42 510 244 9 414 491 209 530 ", "191 458 151 436 322 408 149 147 172 396 549 123 40", "9 353 302 524 127 372 74 242 164 555 193 341 488 5", "50 47 354 498 455 299 21 338 199 446 43 339 308 45", "0 397 477 239 4 230 288 426 182 205 427 509 214 10", "3 420 69 41 386 157 266 260 146 83 130 263 253 552", " 543 121 198 10 561 460 548 207 38 285 67 264 223 ", "195 292 11 228 532 296 375 112 99 389 153 224 286 ", "563 200 373 45 417 566 443 276 448 169 538 515 520", " 441 404 80 156 431 337 102 403 254 252 248 398 55", "7 235 36 73 226 317 93 185 411 360 95 98 381 197 4", "16 72 303 344 107 7 419 362 137 89 467 506 508 464", " 258 546 544 346 116 382 432 18 438 50 279 133 262", " 268 79 485 19 355 64 378 505 124 180 314 406 401 ", "451 366 385 15 237 495 519 326 183 471 370 507 94 ", "565 174 59 421 513 365 51 125 475 62 22 128 390 40", "5 204 189 345 489 106 562 178 113 238 32 468 400 5", "8 430 319 111 499 298 201 12 140 177 56 249 343 54", "0 564 511 412 220 484 478 383 316 445 367 213 442 ", "188 81 8 535 517 363 148 255 501 236 54 428 165 27", "5 142 190 379 119 166 297 29 170 120 138 300 225 4", "37 336 143 271 470 208 105 267 101 340 265 256 247", " 136 70 250 454 388 525 325 368 61 479 232 117 76 ", "97 528 323 334 459 66 490 55 486 434 108 150 287 3", "47 547 65 357 16 131 422 251 35 531 560 356 217 25", " 135 71 465 402 472 122 270 245 374 158 86 433 88 ", "23 77 536 90 132 359 307 295 216 558 493 104 278 3", "58 313 391 126 78 541 31 152 2 162 481 163 462 17 ", "293 514"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 77223686;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> afterFourClicks = {"211 113 184 409 244 441 96 372 143 550 280 542 81 ", "584 460 222 414 489 322 103 267 206 424 401 567 38", "1 348 98 354 150 7 214 85 593 527 293 362 196 225 ", "560 141 25 474 407 563 539 545 437 342 8 433 41 36", "7 219 520 390 42 272 510 125 365 503 571 283 374 1", "2 40 88 523 331 198 493 265 192 121 566 403 557 61", " 29 131 95 166 124 4 506 358 153 47 483 548 117 33", "3 157 191 65 302 231 504 536 71 89 75 311 268 134 ", "406 501 86 146 524 97 343 591 220 52 179 400 455 9", "0 239 217 269 463 574 63 148 336 427 108 496 568 7", "3 556 174 423 458 258 377 286 344 310 5 589 513 37", "0 561 154 136 68 313 39 350 421 435 199 412 133 58", "5 50 83 425 376 173 200 538 216 446 17 151 240 38 ", "123 285 529 382 135 212 475 517 509 78 209 359 558", " 581 420 565 554 599 398 402 366 292 114 185 360 7", "2 0 332 534 176 443 578 296 34 122 55 64 276 223 7", "0 229 101 491 575 466 304 147 351 551 312 190 341 ", "158 555 245 559 144 298 595 430 183 394 522 405 34", "9 250 540 353 477 60 235 241 300 14 590 120 119 11", "6 260 58 465 361 31 482 188 375 429 512 339 207 53", "7 109 30 282 274 391 462 21 205 468 238 388 107 25", "2 297 533 345 438 295 457 197 59 442 518 130 170 4", "48 499 340 284 156 178 451 410 215 182 177 138 84 ", "383 519 543 74 140 76 13 478 395 66 495 530 79 180", " 404 335 246 396 294 155 452 11 384 445 251 598 42", "8 386 573 161 290 320 347 195 454 43 363 16 237 69", " 544 175 46 387 301 318 564 449 431 327 514 227 24", "7 515 172 579 490 129 552 541 323 167 444 168 243 ", "132 546 317 262 507 307 264 473 450 321 326 547 22", "4 497 27 51 48 278 253 228 479 305 106 102 261 583", " 316 145 508 255 525 164 15 62 594 234 456 521 373", " 592 273 127 271 582 10 303 193 484 597 426 467 10", "4 233 319 324 505 500 201 357 516 9 289 152 461 11", "1 580 159 432 118 218 277 67 356 1 142 440 535 259", " 471 186 36 149 553 488 208 419 257 487 392 469 94", " 24 126 28 226 137 417 355 352 485 82 45 498 434 3", " 337 481 315 549 35 480 287 413 569 329 203 309 21", "3 308 275 399 54 26 364 22 254 411 587 77 19 139 5", "86 408 128 110 266 221 181 380 87 570 393 418 562 ", "325 379 202 385 53 459 330 249 163 6 453 306 23 44", "7 422 346 588 270 369 105 502 256 80 577 397 291 5", "26 528 189 416 57 37 18 492 210 112 115 299 248 56", " 415 194 232 576 531 171 93 596 572 464 169 263 31", "4 33 92 230 389 281 532 328 32 486 2 476 160 204 2", "88 436 472 279 236 334 470 20 371 378 511 100 99 4", "9 368 439 242 44 91 187 494 338 162 165"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> afterFourClicks = {"32 330 514 34 592 404 535 262 122 460 552 142 355 ", "326 444 325 378 496 383 207 22 201 490 448 247 358", " 6 382 403 391 334 286 449 555 465 437 132 323 192", " 414 396 54 333 227 549 64 117 591 503 182 237 423", " 376 546 478 505 222 504 567 389 296 312 172 421 1", "60 427 244 301 180 236 257 99 409 239 587 127 432 ", "536 371 234 425 141 392 431 184 493 9 130 26 578 3", "75 299 353 428 150 412 483 344 11 120 395 471 59 5", "81 65 477 527 309 204 316 594 277 143 306 219 561 ", "522 93 49 137 453 260 369 540 161 98 53 436 102 25", "1 417 585 495 558 196 165 293 134 474 261 339 458 ", "125 574 116 84 55 393 190 109 482 400 226 402 469 ", "274 408 532 415 66 557 253 568 215 511 388 129 228", " 144 240 58 267 133 564 87 194 41 545 166 202 40 6", "0 351 223 443 255 225 480 248 429 156 492 554 191 ", "405 356 119 96 124 582 520 89 249 338 365 551 158 ", "521 77 233 489 579 517 320 149 287 275 595 588 571", " 407 185 39 48 50 387 397 295 74 547 451 10 525 51", " 171 69 501 273 159 113 85 419 280 457 238 112 24 ", "308 17 317 304 178 524 198 271 335 468 420 276 559", " 18 101 447 370 288 362 5 79 173 103 177 164 381 2", "24 111 499 278 155 487 577 350 454 1 479 512 528 5", "63 290 15 268 163 488 220 230 430 441 440 123 434 ", "13 497 35 29 380 229 500 73 131 246 386 252 81 390", " 297 342 186 214 179 319 151 314 349 0 241 537 264", " 91 82 170 452 508 531 340 205 553 221 526 285 78 ", "357 385 75 213 416 263 25 38 373 218 484 565 118 5", "23 189 433 23 4 435 439 327 216 138 272 86 157 368", " 3 283 108 590 97 203 352 106 83 217 298 20 279 30", "7 110 265 115 121 270 575 486 315 466 128 544 539 ", "359 63 530 80 68 475 193 126 318 337 294 187 543 4", "98 324 542 148 33 291 310 529 206 56 413 14 174 70", " 37 418 147 30 209 36 100 210 442 46 92 153 467 50", "2 570 52 140 341 67 76 345 181 43 104 145 343 406 ", "533 507 12 322 162 136 519 71 105 146 513 331 311 ", "463 363 481 361 232 197 366 135 374 336 461 95 139", " 562 446 462 152 31 281 176 580 28 154 518 464 515", " 208 107 258 510 494 377 372 398 169 426 424 188 2", "12 175 360 211 235 438 183 284 455 364 7 282 47 41", "0 254 57 44 259 321 329 300 94 516 472 576 168 491", " 411 459 256 347 401 470 584 243 506 550 560 88 48", "5 445 354 302 313 231 292 266 61 384 399 250 566 4", "56 473 42 541 422 346 72 450 45 62 2 583 27 200 47", "6 289 242 199 328 556 534 538 573 269 114 245 332 ", "19 16 21 305 367 572 548 569 586 379 394 167 589 3", "48 8 593 195 509 303 90"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> afterFourClicks = {"226 467 437 94 334 358 309 199 279 276 411 494 214", " 218 20 525 45 579 142 16 221 212 68 10 141 193 11", "5 361 591 502 422 544 440 260 64 258 236 293 154 1", "20 277 82 369 35 331 265 50 186 217 12 554 341 166", " 569 36 452 183 179 349 473 225 161 588 233 416 16", "9 198 333 274 457 371 318 475 338 246 294 327 578 ", "549 461 495 164 436 128 287 135 210 57 234 314 61 ", "17 9 223 230 479 95 155 252 343 582 30 74 456 491 ", "391 346 412 536 450 415 380 518 555 180 242 545 24", "3 270 56 542 67 14 283 73 300 399 354 447 51 481 2", "19 378 496 90 321 500 332 400 6 148 526 65 32 238 ", "49 144 83 97 568 124 576 290 462 2 140 143 565 319", " 345 533 134 483 503 269 189 106 522 310 18 261 19", "5 119 131 96 453 368 126 559 531 431 92 386 172 47", "7 541 130 299 480 11 372 575 311 69 485 514 291 22", "0 89 28 21 182 162 566 72 532 498 350 278 438 190 ", "237 250 406 145 207 396 551 197 524 13 122 490 426", " 337 105 153 39 486 583 407 409 113 390 229 251 29", "7 33 381 79 515 397 377 292 104 379 435 55 63 273 ", "200 505 152 528 464 208 315 307 561 127 211 185 20", "3 41 202 19 31 326 188 487 71 129 108 459 286 259 ", "181 100 305 574 177 111 178 363 567 348 22 205 301", " 288 98 245 385 427 267 408 557 54 247 53 312 432 ", "429 228 394 255 590 284 355 393 158 340 509 489 66", " 476 163 160 118 168 540 460 365 59 482 520 75 376", " 351 123 138 558 58 535 222 184 556 553 150 501 44", "3 271 317 516 34 423 52 469 15 137 430 29 306 513 ", "275 419 282 62 320 449 8 206 572 329 418 296 254 1", "09 530 359 428 497 86 209 370 339 470 26 580 196 4", "33 146 235 324 262 117 402 463 93 107 248 60 458 1", "39 570 240 77 398 403 280 586 424 201 241 547 563 ", "465 3 112 78 527 562 425 367 373 336 344 194 167 5", "50 114 157 573 589 510 389 388 442 451 353 215 420", " 289 281 46 102 263 38 414 249 156 24 37 192 132 3", "52 224 147 347 42 413 374 298 404 99 266 499 25 38", "7 439 85 512 0 392 472 546 421 149 48 488 76 375 3", "66 504 383 581 548 519 395 174 523 47 474 264 313 ", "585 564 81 448 534 4 492 244 70 165 253 538 493 27", " 507 571 471 328 537 323 382 91 103 44 125 543 232", " 239 302 587 478 454 357 295 335 405 560 364 268 1", "73 285 441 191 80 304 539 87 84 342 484 121 584 31", "6 577 176 5 170 227 401 455 362 213 175 256 231 30", "8 468 136 446 434 511 110 322 508 356 151 43 23 32", "5 303 466 384 257 1 187 529 552 116 101 360 410 52", "1 133 216 506 444 204 40 88 272 417 330 171 517 15", "9 445 7"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 675974215;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> afterFourClicks = {"296 159 299 54 76 345 283 311 137 104 175 38 35 24", "1 412 406 237 106 278 409 74 231 370 89 316 362 98", " 220 264 77 250 180 136 133 110 99 39 400 262 430 ", "234 93 236 422 295 440 40 280 421 187 292 25 404 4", "44 179 377 18 272 165 70 313 324 433 112 145 441 1", "41 86 259 290 407 419 125 242 291 209 387 390 244 ", "33 386 210 344 363 2 6 321 247 17 206 239 71 402 3", "41 126 192 401 45 182 12 275 255 227 163 225 198 8", "8 87 14 65 337 446 382 103 119 312 426 309 347 235", " 335 315 197 303 95 184 134 153 117 364 31 258 75 ", "79 94 21 207 162 249 257 83 395 263 5 287 178 177 ", "294 351 256 442 367 161 168 82 415 188 151 379 212", " 42 330 8 113 115 232 252 7 127 147 122 306 253 28", "4 276 381 171 305 64 3 130 340 26 334 72 354 142 3", "72 323 47 208 55 124 118 19 436 181 170 443 418 28", " 336 416 301 374 356 23 32 261 132 403 90 1 322 24", "5 357 102 230 68 397 414 0 149 399 248 9 144 216 2", "24 15 302 135 58 16 46 114 160 233 376 211 238 371", " 365 405 375 438 350 107 228 271 327 417 358 332 4", "8 398 222 378 366 218 204 190 11 186 200 213 267 2", "77 100 148 195 138 297 251 129 268 282 266 56 116 ", "189 429 174 85 353 439 69 226 243 420 286 20 413 3", "55 169 349 221 57 215 84 352 326 217 434 408 146 1", "76 92 150 128 281 167 164 392 205 343 425 37 410 2", "19 199 67 265 156 427 304 203 30 183 43 152 431 17", "2 120 328 333 411 34 369 22 196 41 361 121 154 143", " 53 193 300 44 423 269 348 173 424 359 314 298 166", " 293 342 360 51 140 274 73 131 157 373 388 339 13 ", "49 384 260 78 240 191 139 389 52 10 63 202 368 62 ", "437 4 338 158 29 331 60 96 289 66 285 319 101 428 ", "317 393 307 81 380 288 229 59 325 194 435 201 108 ", "50 27 445 383 273 320 91 394 254 329 246 185 24 27", "9 61 223 310 36 391 111 385 123 318 270 80 214 396", " 97 109 308 105 346 155 432"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 978879158;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> afterFourClicks = {"3 1 2 0 4"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"0 5 4 1 6 2 3"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> afterFourClicks = {"5 6 11 7 2 1 3 8 10 0 9 4 12"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> afterFourClicks = {"5 7 0 6 11 2 22 1 8 10 23 12 4 13 17 14 21 3 19 9 ", "16 18 20 15"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> afterFourClicks = {"4 26 9 24 19 30 27 18 3 12 31 29 6 2 16 10 20 5 11", " 28 22 15 8 14 7 1 23 13 0 21 25 17"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> afterFourClicks = {"20 34 23 14 17 1 29 2 32 31 25 28 7 30 16 35 21 24", " 0 15 36 12 9 4 18 26 8 10 5 6 11 22 37 27 3 33 13", " 19"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"23 30 20 7 0 18 10 16 40 11 43 4 24 13 6 39 9 32 2", " 8 38 5 1 27 31 42 12 28 26 15 36 17 41 44 37 29 4", "5 3 25 33 46 14 35 19 22 34 21"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"37 14 57 26 60 23 2 3 24 7 48 35 49 12 33 28 19 8 ", "6 25 61 1 62 15 44 56 41 31 46 29 51 52 22 50 59 1", "3 16 4 18 45 53 36 30 47 20 32 55 42 34 54 58 0 9 ", "21 11 43 17 40 5 38 27 39 10"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"42 3 32 110 87 47 93 121 81 12 21 39 102 89 35 30 ", "100 104 34 14 16 33 107 114 120 38 82 57 105 60 51", " 108 23 99 115 72 79 37 85 67 112 10 80 55 92 122 ", "62 88 96 111 106 68 109 64 70 123 91 27 11 48 116 ", "0 98 17 54 77 86 83 15 53 2 5 24 26 1 41 22 73 28 ", "124 36 63 40 118 101 84 29 45 78 90 44 8 59 13 76 ", "65 74 94 52 46 71 50 19 9 4 117 7 97 43 25 103 113", " 56 31 75 58 69 49 66 18 6 119 61 20 95"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
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
    vector<string> afterFourClicks = {"605 2 128 493 467 608 132 189 244 136 525 548 135 ", "8 556 265 139 479 305 22 522 270 275 392 245 530 3", "99 459 73 464 611 419 329 358 389 306 494 528 213 ", "540 498 438 131 379 375 210 195 230 94 604 405 361", " 491 236 552 547 294 321 568 14 346 142 176 372 50", "0 564 29 129 212 562 203 497 43 192 352 440 10 185", " 91 499 563 357 458 45 13 204 318 401 463 539 81 6", "9 347 172 515 580 38 415 68 205 234 92 44 292 151 ", "485 248 272 291 452 436 59 268 209 426 260 130 60 ", "447 113 232 454 349 86 596 424 581 486 315 391 303", " 304 147 194 566 183 473 101 240 333 504 585 74 17", "4 66 7 266 602 388 588 70 0 477 377 590 65 505 168", " 289 40 533 122 190 390 327 123 469 253 444 26 243", " 116 449 543 614 229 537 214 166 338 343 28 527 16", "7 118 285 322 222 109 557 385 267 259 90 550 302 4", "72 77 146 427 311 323 191 53 476 584 471 262 535 3", "34 301 578 96 384 397 591 208 282 367 421 455 155 ", "281 300 416 598 218 299 402 586 21 9 398 255 36 10", "3 408 93 288 233 559 453 78 42 450 202 274 356 110", " 51 108 48 5 360 417 396 549 616 339 554 474 470 6", "13 111 594 224 219 607 54 371 173 279 55 235 326 5", "70 119 597 418 251 177 380 287 57 228 134 600 519 ", "150 227 312 171 120 521 363 179 162 350 160 247 52", "6 89 599 175 364 27 508 24 489 523 15 560 145 170 ", "273 335 62 271 593 571 409 206 468 215 331 201 410", " 413 457 164 18 612 355 124 386 362 75 490 509 368", " 87 11 58 422 488 143 169 198 492 138 330 225 434 ", "483 610 345 246 451 100 220 376 513 20 35 589 153 ", "442 56 263 216 47 159 309 606 137 393 545 242 514 ", "551 88 592 121 603 254 193 503 370 428 546 184 256", " 328 507 572 250 544 290 495 420 188 283 541 112 2", "78 157 217 465 460 601 4 320 19 64 567 475 484 569", " 25 200 33 317 404 573 30 577 107 17 241 95 382 52", "4 307 264 52 187 359 196 34 496 609 154 106 395 23", "7 80 517 502 252 296 98 383 231 277 117 348 536 51", "8 125 102 478 531 105 431 158 400 553 425 180 295 ", "439 99 446 31 3 366 462 269 433 126 582 615 369 25", "7 71 595 37 127 156 258 412 178 406 555 79 72 133 ", "144 284 148 432 487 341 276 39 575 141 512 532 353", " 374 481 529 561 516 403 280 542 342 381 324 430 4", "61 161 23 41 207 181 84 466 12 429 182 316 354 32 ", "501 197 344 411 394 61 565 445 16 76 456 579 448 8", "3 480 115 534 149 221 114 310 587 351 249 261 520 ", "365 223 199 443 186 574 82 319 340 1 510 407 373 5", "11 46 308 325 49 558 441 165 583 332 314 414 97 14", "0 286 298 337 297 538 387 313 506 437 239 482 211 ", "435 50 238 85 67 104 423 6 226 63 152 293 163 378 ", "576 336"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> afterFourClicks = {"278 362 351 448 43 143 275 546 279 152 605 412 642", " 380 353 536 118 112 172 555 93 234 506 137 243 43", "4 173 376 601 272 488 274 319 261 241 116 374 356 ", "305 316 140 117 110 4 451 445 46 142 77 157 651 51", " 101 226 393 323 256 150 58 107 311 106 355 522 64", " 507 255 422 414 562 456 166 377 317 86 136 385 48", " 523 533 80 147 221 384 276 85 74 487 156 431 187 ", "340 338 20 616 191 139 324 590 242 587 52 168 244 ", "104 105 61 59 123 515 42 425 17 408 188 419 35 41 ", "16 290 474 550 372 108 240 125 273 212 309 369 576", " 639 389 302 233 251 75 23 588 96 40 636 47 5 399 ", "346 436 81 303 511 57 337 9 334 193 598 88 49 610 ", "635 564 520 268 249 640 345 71 167 102 648 452 171", " 18 26 609 578 196 177 201 423 600 312 608 584 484", " 502 440 90 114 189 285 95 219 154 304 371 176 416", " 198 199 480 178 254 455 594 569 604 209 462 207 5", "41 493 127 489 370 326 591 559 498 192 220 82 530 ", "280 446 359 53 341 647 357 281 231 427 134 21 490 ", "413 638 271 597 124 34 99 24 103 245 407 492 392 1", "63 560 135 403 586 202 66 56 259 496 257 589 33 52", "4 611 264 475 322 267 162 495 618 238 29 126 31 6 ", "84 388 0 8 223 230 383 286 644 190 283 320 288 599", " 119 485 621 499 613 295 553 570 331 565 461 453 1", "33 148 194 38 607 547 381 128 379 60 181 593 595 4", "38 39 73 366 32 287 532 266 55 97 544 215 327 622 ", "329 330 298 554 477 153 335 404 151 92 466 91 227 ", "615 528 344 165 145 368 491 361 441 2 420 14 602 6", "2 37 229 486 225 629 349 1 516 439 458 318 542 347", " 129 214 195 122 463 36 645 27 72 378 310 13 308 4", "78 282 83 76 508 390 277 132 387 391 248 54 394 41", "1 633 561 481 144 538 558 501 252 336 409 433 246 ", "113 405 421 395 11 236 68 415 197 417 443 115 352 ", "410 67 179 424 111 479 232 428 429 617 89 527 406 ", "25 649 146 437 315 364 186 350 519 418 512 45 224 ", "460 3 483 457 44 170 301 620 203 70 450 365 518 44", "7 300 208 373 503 521 339 592 468 540 504 632 509 ", "514 120 265 646 333 382 426 200 398 482 449 184 29", "1 358 87 30 213 235 348 247 211 494 269 258 625 21", "8 293 505 402 185 464 470 500 22 65 386 472 510 14", "9 444 552 473 109 363 614 459 442 161 465 63 78 26", "2 585 543 432 343 612 222 573 321 79 583 535 15 53", "7 400 634 469 210 367 526 325 545 7 307 568 619 12", "1 566 513 296 332 19 637 579 401 217 250 397 69 62", "3 160 299 551 574 548 205 297 626 572 531 567 575 ", "130 577 175 557 580 581 627 534 183 525 253 100 13", "8 260 98 216 467 313 204 314 596 239 155 289 180 2", "8 354 641 206 10 650 306 182 174 158 263 529 294 5", "17 342 94 430 270 549 454 292 328 563 624 497 571 ", "582 643 360 630 631 471 396 539 159 141 556 237 13", "1 164 603 12 628 284 375 476 228 169 435 606 50"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 512106292;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> afterFourClicks = {"79 446 459 171 314 21 447 327 111 308 277 284 448 ", "129 39 95 255 593 610 334 445 403 552 621 178 560 ", "98 240 96 162 490 99 251 148 202 571 73 2 207 109 ", "352 40 221 518 320 32 438 243 248 90 347 266 233 2", "30 387 486 187 182 58 566 510 504 257 226 519 451 ", "208 421 529 136 166 524 155 122 545 343 85 581 97 ", "337 204 603 9 406 88 597 463 550 601 15 128 247 59", "1 582 264 261 46 280 612 491 414 508 309 587 462 4", "00 357 142 238 585 51 353 105 465 48 5 153 108 29 ", "258 28 158 623 589 430 157 429 534 62 363 539 368 ", "210 405 6 131 273 426 321 330 145 565 456 228 60 3", "89 294 276 378 216 542 351 489 469 220 72 107 76 3", "60 112 339 401 169 407 200 562 70 595 84 94 288 44", "0 181 567 53 616 19 138 417 514 364 625 74 424 600", " 629 324 176 116 310 190 607 554 12 152 476 618 59", "8 156 433 371 391 570 481 532 480 114 4 569 281 12", "1 557 628 239 300 499 505 427 586 385 561 234 217 ", "120 231 144 399 38 474 293 11 68 78 340 402 135 34", "1 425 501 367 599 436 165 609 227 624 473 441 45 1", "40 154 493 160 91 419 527 299 49 584 592 172 89 42", "8 422 118 191 306 47 86 245 205 390 7 500 192 232 ", "173 285 170 388 24 177 348 495 468 305 420 563 209", " 287 271 377 143 384 413 296 124 195 366 533 443 5", "83 256 369 594 10 110 418 543 537 485 262 301 65 2", "44 43 291 536 132 544 546 278 298 626 398 575 574 ", "503 522 506 100 13 213 219 423 464 198 61 252 338 ", "521 372 632 311 435 361 241 315 302 218 31 81 316 ", "201 125 345 507 236 431 149 318 349 437 374 496 44", " 263 56 444 224 67 137 613 523 477 471 555 41 146 ", "470 229 513 354 194 380 556 511 289 283 249 577 23", "7 540 379 250 466 290 63 356 452 203 442 317 409 3", "96 520 434 179 535 346 525 516 199 333 526 0 71 39", "2 23 150 457 615 453 332 183 606 588 313 103 381 2", "74 449 102 578 17 509 115 530 223 558 538 80 484 5", "41 130 415 362 630 627 492 75 222 553 322 590 34 3", "36 482 622 488 123 168 147 113 225 604 82 460 174 ", "188 393 370 344 259 292 458 617 331 497 211 620 57", " 286 50 568 580 605 479 37 106 282 350 358 206 119", " 279 531 270 93 572 246 117 373 272 20 83 386 559 ", "619 36 410 329 579 376 342 365 439 16 141 602 326 ", "212 455 631 215 335 161 517 101 303 1 180 608 30 1", "96 319 42 54 254 235 275 18 3 151 494 159 611 411 ", "614 185 253 312 59 397 295 126 33 328 66 186 573 5", "96 242 432 27 483 404 104 139 547 487 304 416 498 ", "175 375 265 22 412 267 189 355 25 551 548 14 77 45", "0 164 467 478 502 69 359 35 325 394 382 184 564 52", "8 461 549 395 268 269 8 576 87 512 214 515 26 383 ", "408 167 133 297 127 197 454 307 64 472 55 260 323 ", "193 52 475 134 92 163"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 660860014;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> afterFourClicks = {"233 469 16 580 99 564 20 443 448 158 467 503 403 4", "96 252 521 7 480 577 435 229 364 80 507 455 212 57", " 285 114 26 109 606 300 476 148 444 79 310 574 598", " 622 74 331 259 584 346 573 165 138 34 237 419 194", " 596 385 513 324 554 202 155 246 173 367 349 208 3", "13 358 454 433 585 254 136 203 382 161 337 319 370", " 603 568 357 567 21 394 142 325 15 150 556 434 457", " 302 197 491 320 590 422 344 33 490 262 383 400 31", "5 425 291 294 339 225 281 409 121 220 236 88 330 2", "44 198 58 406 255 112 56 395 184 377 29 5 234 306 ", "216 478 524 350 509 429 271 71 348 451 461 525 399", " 498 209 388 272 27 295 164 265 393 557 151 600 51", "9 191 352 328 39 459 558 282 501 593 87 11 540 32 ", "551 12 485 453 73 452 318 495 392 240 102 323 214 ", "489 200 402 76 612 169 326 389 518 10 522 241 129 ", "50 515 287 316 384 532 59 516 308 462 98 122 309 5", "17 205 116 592 204 359 46 604 494 288 353 379 264 ", "28 199 541 437 176 340 243 595 375 120 154 101 594", " 231 192 81 290 528 591 8 65 333 139 545 62 387 46", "0 414 536 619 64 537 549 366 363 97 44 413 493 499", " 92 380 110 381 156 421 523 529 438 436 583 131 57", "9 527 274 504 539 335 186 210 258 166 261 471 134 ", "420 488 224 54 187 361 249 135 371 52 85 482 0 23 ", "41 35 113 609 24 84 153 143 269 223 118 67 22 69 1", "75 146 481 162 621 372 512 307 562 160 586 4 373 8", "3 526 473 535 354 14 232 168 171 305 555 378 119 5", "48 106 51 410 47 511 560 18 260 426 391 159 213 2 ", "206 487 17 207 530 566 174 484 190 332 343 6 533 4", "86 181 183 396 270 167 130 416 293 625 230 404 520", " 238 82 617 479 147 547 279 411 608 401 500 445 44", "6 464 599 13 31 362 172 68 297 477 251 439 78 304 ", "96 534 468 427 449 72 544 283 256 569 311 570 201 ", "226 179 428 505 470 86 538 242 211 189 607 89 266 ", "356 610 55 273 276 40 483 611 61 100 178 418 327 1", "52 163 278 292 508 103 615 53 542 301 25 250 48 10", "8 217 620 268 317 126 329 405 170 447 124 9 466 29", "9 510 398 441 578 45 219 144 423 248 576 104 115 3", "0 94 588 289 431 70 180 177 286 275 141 506 440 14", "0 77 613 463 605 95 257 430 616 105 322 125 277 56", "3 474 338 456 502 188 492 465 345 415 227 374 397 ", "450 442 587 63 552 19 390 263 321 298 60 3 235 123", " 369 341 368 196 623 312 247 222 185 582 602 49 56", "1 182 376 228 193 360 531 218 117 543 351 128 565 ", "408 417 93 575 149 157 111 145 589 618 66 432 424 ", "303 514 132 42 75 412 386 314 127 497 472 137 355 ", "239 133 624 614 107 458 195 553 284 407 296 37 559", " 572 1 597 334 221 550 36 581 546 253 280 475 347 ", "267 91 342 336 38 571 43 90 245 601 215 365"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 872390614;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> afterFourClicks = {"504 495 81 86 170 18 72 400 70 184 106 51 99 339 2", "96 409 217 383 189 177 367 34 121 60 253 7 52 475 ", "453 318 45 267 472 328 448 76 0 273 388 345 115 40", "1 109 340 171 370 153 393 422 111 148 407 256 457 ", "10 360 163 227 209 342 174 97 246 484 144 297 126 ", "203 260 505 122 261 154 425 167 105 43 464 275 509", " 3 181 204 321 434 219 362 285 118 200 301 58 95 7", "1 344 314 454 355 376 232 486 135 54 152 346 116 1", "69 290 284 309 359 332 268 494 410 5 137 145 333 1", "42 325 196 183 327 350 216 366 33 199 447 498 279 ", "136 150 336 363 214 470 238 394 488 474 250 205 33", "8 236 500 493 491 62 143 471 85 129 369 282 512 41", "6 423 101 334 77 218 414 365 467 82 295 201 79 408", " 510 456 2 178 198 73 221 8 501 304 389 39 213 506", " 323 460 392 46 492 469 371 161 228 4 229 244 283 ", "446 403 194 96 127 303 175 477 230 114 483 123 94 ", "507 364 220 68 419 75 513 19 187 103 36 1 55 412 4", "37 320 306 459 399 156 476 462 468 119 20 149 439 ", "286 293 188 240 172 322 211 176 402 302 478 206 16", "5 458 455 248 197 361 435 63 485 395 343 380 247 3", "30 140 341 117 53 432 466 490 354 496 335 237 289 ", "375 316 190 139 353 22 372 287 180 331 93 35 48 39", "1 249 234 262 158 231 264 298 208 195 311 15 489 5", "9 159 157 300 40 387 299 443 277 499 67 12 269 207", " 452 440 420 104 215 41 390 368 358 108 508 50 310", " 482 98 166 258 481 351 133 210 503 276 487 78 202", " 25 373 436 444 396 226 245 312 89 56 233 92 11 49", " 107 223 168 14 42 319 134 313 382 173 28 110 90 2", "65 9 473 160 32 193 280 252 100 84 235 29 386 241 ", "424 352 305 147 315 357 415 13 441 132 23 191 6 13", "1 511 281 192 411 421 255 185 27 308 61 26 69 124 ", "88 225 179 38 294 251 112 307 377 374 30 418 385 1", "13 74 259 87 64 347 83 431 405 451 378 254 130 239", " 497 348 44 242 426 278 427 288 429 47 381 146 274", " 155 433 502 449 80 151 266 438 356 141 379 272 10", "2 406 428 480 31 128 463 91 120 442 224 37 465 349", " 317 222 17 461 162 65 57 445 66 16 138 326 430 41", "7 398 270 164 404 212 24 384 291 263 186 329 292 2", "43 397 337 413 324 450 271 257 21 479 125 182"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> afterFourClicks = {"288 56 577 380 88 262 163 46 218 417 533 557 381 3", "03 602 48 89 445 597 50 282 194 215 534 618 613 29", "0 612 330 410 574 106 528 274 200 190 111 43 347 3", "73 153 272 626 13 407 606 327 538 494 372 73 413 9", "3 454 31 634 554 128 192 197 123 291 452 585 87 63", "6 209 386 35 135 365 506 302 36 535 202 150 233 45", "8 472 456 632 394 548 230 505 349 243 304 608 524 ", "167 353 392 19 267 358 357 305 114 453 319 431 34 ", "591 569 180 512 22 105 166 3 159 37 447 313 118 23", "2 514 558 280 378 299 592 586 116 570 12 184 465 7", "5 154 137 529 401 497 421 599 387 479 100 390 419 ", "496 596 312 563 499 242 155 162 451 261 403 14 278", " 252 463 567 553 332 21 473 537 279 490 440 241 25", "4 383 33 112 26 446 382 461 587 415 72 580 420 24 ", "564 416 459 418 631 104 85 260 293 176 379 306 482", " 30 249 635 57 60 318 226 402 476 269 129 455 211 ", "42 82 77 568 345 91 637 207 468 68 426 519 268 263", " 273 51 322 442 121 148 422 466 561 45 300 471 588", " 208 611 231 583 550 136 412 124 525 16 388 437 43", "6 360 170 605 295 374 565 556 257 223 250 559 289 ", "74 595 301 125 107 139 320 265 627 147 225 474 63 ", "20 391 406 546 126 481 493 600 142 6 385 179 338 6", "28 579 547 444 541 607 238 182 296 228 531 351 185", " 443 216 517 39 122 76 97 158 84 509 395 144 354 3", "15 400 224 543 311 430 423 518 336 275 119 212 52 ", "44 371 485 584 101 146 151 491 71 1 175 396 326 19", "1 141 549 246 245 143 633 0 169 59 65 149 384 67 2", "76 271 432 397 462 80 411 204 229 576 495 329 83 5", "21 328 516 425 457 511 292 41 264 609 325 339 467 ", "405 183 40 255 171 484 27 500 614 581 61 617 593 9", "5 70 344 195 266 90 368 324 240 239 81 523 32 213 ", "501 356 575 222 433 160 480 298 540 439 629 536 61", "0 4 429 448 23 234 86 532 29 340 198 15 393 363 40", "8 53 450 164 314 256 214 350 625 527 503 140 630 1", "7 624 127 220 11 377 364 98 337 449 487 157 435 27", "7 193 333 96 66 201 237 307 321 603 616 152 309 10", "3 560 620 398 571 367 108 69 331 359 79 573 236 20", "6 441 317 352 520 251 102 270 54 247 62 134 545 38", " 376 64 323 601 355 507 286 341 510 409 165 177 51", "3 109 504 604 253 172 7 173 539 205 5 578 199 189 ", "623 464 414 544 219 589 370 210 622 188 181 389 11", "3 638 366 566 483 343 477 284 161 361 310 346 244 ", "259 621 488 428 227 502 138 78 526 117 258 25 203 ", "362 281 55 8 174 572 47 552 235 110 598 178 375 43", "4 342 334 470 522 562 515 217 133 460 316 283 508 ", "145 335 308 187 369 297 424 542 10 492 498 619 489", " 582 115 196 530 438 131 287 555 2 58 294 248 130 ", "132 469 221 348 18 551 28 475 615 49 156 478 168 4", "86 594 427 9 94 590 92 120 186 99 399 404 285"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 640;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> afterFourClicks = {"229 239 379 273 44 525 381 305 561 550 152 328 487", " 491 132 101 103 423 169 212 156 287 332 362 205 2", "70 123 457 387 60 6 442 262 39 319 107 47 318 426 ", "505 410 415 114 167 226 471 224 245 425 506 484 27", "7 358 257 282 80 290 576 157 108 16 492 30 321 302", " 28 259 596 564 176 20 272 474 586 5 402 538 99 1 ", "441 326 307 87 190 585 17 553 223 557 619 526 137 ", "98 554 556 144 403 466 476 83 36 52 468 378 41 473", " 186 159 372 141 433 500 310 315 148 70 369 201 62", "6 603 605 220 69 214 127 583 509 340 253 76 160 50", "2 395 182 50 222 84 158 537 12 181 535 565 421 295", " 542 540 429 470 324 355 494 138 533 0 551 520 263", " 449 424 365 243 430 563 198 51 140 67 267 628 172", " 544 163 547 436 177 617 162 165 336 578 26 462 63", "1 475 418 15 621 601 104 552 463 46 598 465 112 50", "8 111 390 183 366 573 35 40 516 72 121 139 53 291 ", "56 280 297 593 188 574 279 298 288 7 339 413 11 51", "5 135 495 133 481 153 164 327 100 417 629 446 349 ", "412 301 589 568 524 313 281 10 399 269 330 296 166", " 8 546 241 304 486 493 191 347 587 211 397 359 204", " 469 180 73 238 89 4 376 71 24 309 404 624 548 23 ", "109 275 445 120 171 529 569 606 184 375 199 129 50", "3 194 539 289 422 512 49 427 352 389 588 510 461 5", "79 255 306 126 370 357 479 440 264 597 543 367 219", " 489 244 247 536 149 361 27 592 532 325 405 497 32", "0 407 580 371 575 284 555 455 373 258 64 534 604 6", "12 458 294 616 482 581 428 528 518 124 602 477 88 ", "450 65 435 93 210 452 348 344 77 96 501 155 94 591", " 610 443 221 432 322 142 316 351 567 392 185 419 1", "75 414 215 444 439 560 514 236 615 59 168 32 408 6", "11 193 232 368 507 213 42 271 216 531 131 195 454 ", "38 343 331 118 394 451 134 63 48 303 286 364 197 3", "98 572 380 43 625 174 283 200 549 420 143 333 517 ", "341 154 627 499 438 618 607 230 106 488 386 110 31", "2 92 299 293 74 57 338 453 522 249 91 594 460 81 2", "1 231 485 115 151 105 265 208 396 130 116 609 217 ", "337 285 251 268 401 590 570 599 266 55 391 170 18 ", "147 58 356 2 577 62 242 620 102 571 513 406 192 52", "7 566 335 233 314 19 360 630 519 467 521 45 504 97", " 342 33 411 595 86 416 385 75 187 480 317 252 388 ", "207 623 334 145 256 292 323 228 400 584 248 68 206", " 545 234 278 146 382 354 128 161 61 122 346 459 27", "6 14 31 179 235 25 431 85 530 218 254 464 119 261 ", "90 496 37 117 582 377 447 246 374 209 308 34 178 4", "72 95 3 13 329 9 608 66 434 437 274 78 600 240 196", " 82 203 350 113 22 363 498 136 225 173 353 541 383", " 345 260 483 250 79 125 490 558 614 227 478 237 52", "3 202 393 559 448 613 622 54 189 511 311 384 29 56", "2 409 300 150 456"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 884729196;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> afterFourClicks = {"191 178 177 25 551 117 378 620 232 500 451 99 46 1", "04 627 455 511 454 166 608 440 543 38 298 221 567 ", "494 442 637 365 172 357 328 271 607 589 213 624 13", "6 599 574 373 316 159 277 619 460 536 572 8 576 25", "5 529 578 563 312 463 419 253 231 149 69 74 526 62", "8 148 17 394 234 468 610 45 519 550 250 36 380 517", " 465 439 109 194 6 581 425 376 472 490 245 128 533", " 181 330 368 20 225 385 88 167 327 410 354 482 626", " 26 575 613 524 175 591 300 549 561 625 23 491 50 ", "518 257 68 409 30 118 32 77 544 618 183 185 44 256", " 570 352 335 446 79 230 41 553 445 444 309 383 588", " 126 72 431 43 450 107 215 111 137 151 135 343 55 ", "150 5 24 241 375 132 113 565 338 7 384 157 227 515", " 153 121 263 62 145 10 16 216 94 428 339 141 381 4", "08 39 416 106 470 34 163 452 19 52 208 82 22 267 4", "21 404 559 27 371 212 348 432 321 71 350 382 57 63", "5 70 605 112 222 476 301 571 337 75 351 423 217 89", " 268 358 448 59 173 534 580 13 469 171 552 110 471", " 143 198 593 66 369 434 631 318 125 73 417 3 174 5", "90 188 606 566 248 538 510 344 102 478 146 324 291", " 96 363 289 397 189 527 186 592 138 443 474 531 10", "0 594 260 129 152 290 508 481 63 560 302 49 374 13", "4 420 229 133 95 122 426 288 495 156 504 236 223 2", "99 623 220 14 438 615 436 424 329 499 114 398 297 ", "226 507 292 81 246 586 616 512 370 462 165 235 415", " 520 612 204 92 11 331 214 334 201 582 535 487 399", " 523 386 387 196 611 48 359 601 182 97 569 254 283", " 412 252 598 633 503 131 274 124 308 170 207 273 6", "17 176 67 105 595 401 341 479 577 12 540 9 259 326", " 127 76 603 187 528 513 83 269 266 548 345 587 78 ", "242 413 53 418 323 247 305 276 558 447 311 332 239", " 84 240 391 521 400 555 562 144 120 493 477 285 18", "4 340 506 360 37 502 449 541 630 546 393 422 353 4", "98 356 281 347 147 362 249 407 154 179 168 336 310", " 192 303 90 467 456 58 162 367 545 219 475 554 169", " 101 85 31 427 433 306 379 251 87 556 286 488 47 3", "77 364 272 319 405 516 1 530 514 585 483 202 597 1", "5 42 206 614 91 61 497 33 243 278 199 287 108 211 ", "604 275 486 583 509 441 372 525 29 461 484 21 28 2", "94 2 224 282 130 265 522 361 158 314 123 414 160 3", "15 320 402 600 238 98 632 35 54 103 388 258 18 233", " 293 492 116 313 406 622 264 557 0 638 209 411 119", " 458 295 56 634 480 389 140 532 430 64 51 317 457 ", "261 547 602 65 437 564 435 115 403 346 279 280 180", " 284 296 609 197 228 342 453 355 390 40 60 307 155", " 270 86 596 392 262 573 542 80 195 489 322 539 333", " 485 568 244 304 349 537 466 395 501 584 505 366 6", "36 396 164 621 93 629 325 142 579 139 429 190 473 ", "210 200 237 496 205 193 459 464 4 218 203 161"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 260624893;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> afterFourClicks = {"305 59 481 233 296 444 379 605 225 173 533 595 397", " 462 251 318 477 212 279 304 508 426 113 447 309 2", "03 356 144 492 391 330 412 324 156 3 405 128 89 19", "9 21 208 435 308 335 141 76 116 18 259 348 451 40 ", "410 607 282 602 490 467 293 267 459 628 548 256 16", "4 258 189 597 46 277 62 635 184 241 544 118 479 29", "9 556 104 549 53 559 231 550 433 385 573 232 100 1", "45 574 306 541 12 599 629 4 248 155 603 87 594 534", " 473 460 69 363 336 452 0 138 565 35 523 631 140 2", "69 222 165 591 103 60 575 555 209 507 567 268 262 ", "540 41 300 466 365 106 23 496 152 81 68 339 440 58", "9 1 19 407 123 570 566 67 514 494 30 33 558 39 511", " 417 49 434 614 367 343 229 176 455 419 461 217 36", "0 439 471 557 207 341 244 264 512 344 136 200 97 2", "85 441 322 450 286 527 438 315 621 20 413 86 295 5", "72 240 515 377 468 532 228 79 213 608 291 620 429 ", "114 358 263 474 328 606 489 560 491 353 171 368 2 ", "524 381 430 416 162 192 504 561 166 392 338 432 18", "8 214 326 394 142 625 218 137 92 325 119 371 120 2", "16 633 8 506 236 174 27 553 522 261 617 80 457 61 ", "71 563 364 564 94 99 253 609 50 587 310 382 386 30", "3 375 329 135 275 422 349 255 535 312 582 406 320 ", "513 502 72 618 270 600 624 569 626 182 347 476 401", " 55 493 615 431 579 230 418 191 311 95 399 543 342", " 538 623 226 32 194 580 193 82 372 239 376 389 332", " 345 568 93 51 445 159 361 537 454 177 355 321 393", " 298 531 44 500 488 616 486 28 283 331 598 235 302", " 219 197 43 45 205 9 223 498 190 634 10 254 585 46", "9 478 170 352 374 38 547 238 271 227 54 149 370 66", " 636 17 210 314 601 196 317 65 583 577 105 525 610", " 202 88 380 484 98 265 497 373 505 340 581 57 517 ", "22 201 313 58 584 398 96 224 130 127 483 249 485 2", "42 102 252 427 47 112 179 11 154 396 246 276 31 47", "0 131 172 437 34 110 48 378 220 592 289 528 5 362 ", "91 134 157 292 290 334 117 404 421 186 436 420 160", " 247 387 316 77 125 415 294 503 78 178 619 446 274", " 388 612 519 237 448 175 472 215 108 539 250 129 3", "84 551 518 14 400 109 487 351 132 245 52 542 409 1", "15 301 390 260 297 578 590 529 83 366 552 632 369 ", "281 15 180 403 64 604 480 74 163 158 25 333 423 50", "9 13 75 359 622 516 161 70 411 168 124 443 526 278", " 148 167 146 198 319 204 627 42 234 501 6 346 465 ", "273 288 449 221 107 495 183 133 7 576 611 458 287 ", "151 482 354 521 323 402 56 147 586 425 463 37 153 ", "464 266 85 428 284 510 596 90 630 554 211 536 206 ", "414 185 84 545 337 307 520 571 588 613 29 24 475 2", "6 169 101 126 357 350 257 383 36 280 187 16 150 44", "2 327 424 139 395 181 456 195 121 272 408 143 593 ", "111 499 530 122 73 562 453 243 63 546"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 729233266;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> afterFourClicks = {"374 36 251 350 306 395 101 65 71 195 212 579 83 51", "8 449 276 516 127 331 371 553 401 575 568 19 531 4", "47 191 91 114 515 320 259 208 319 565 113 53 501 3", "63 302 585 470 233 248 70 309 194 108 45 431 356 4", "88 133 338 537 500 400 304 556 148 240 587 322 171", " 460 318 354 378 2 577 538 482 580 494 237 365 80 ", "404 167 444 177 394 554 385 86 464 17 525 81 96 11", " 229 158 31 411 314 376 382 360 446 274 421 299 34", "0 476 315 109 305 132 128 511 336 456 38 246 244 3", "75 175 384 380 231 222 412 497 407 474 508 67 547 ", "102 440 48 187 542 266 433 156 534 234 414 467 373", " 254 391 523 303 7 576 520 536 204 75 173 498 453 ", "548 510 74 462 77 296 423 438 129 10 334 33 211 39", "0 324 442 550 330 415 353 227 317 578 162 125 118 ", "489 393 198 68 180 169 496 403 3 122 562 552 131 1", "15 396 262 192 186 383 339 514 513 301 120 466 163", " 389 47 398 107 226 582 504 174 176 179 263 434 41", "0 485 66 584 124 408 103 323 377 95 185 63 112 486", " 117 140 416 479 478 160 150 586 241 58 388 325 13", "0 549 268 293 297 98 84 57 181 287 43 564 166 201 ", "277 189 346 29 295 563 541 509 22 264 69 335 437 4", "4 312 495 235 364 493 527 349 93 369 239 94 27 507", " 298 99 144 225 521 157 426 367 506 313 18 458 471", " 32 588 51 4 20 311 183 245 260 26 88 257 182 146 ", "218 327 457 37 560 386 78 199 328 333 223 292 344 ", "461 308 72 512 87 168 425 397 55 261 517 570 138 2", "43 282 197 221 255 41 358 289 430 429 420 347 557 ", "343 59 468 207 123 111 258 252 270 519 79 56 526 1", "21 172 405 190 92 567 61 583 137 155 300 539 224 1", "36 6 209 352 484 357 106 451 164 104 286 89 551 50", "3 454 535 73 424 571 439 307 76 62 206 436 23 275 ", "152 561 399 345 196 217 502 21 487 566 147 490 573", " 475 409 28 473 443 247 329 273 250 8 321 368 448 ", "12 326 278 119 463 213 228 524 480 215 9 370 272 4", "06 285 428 202 481 193 216 555 294 161 90 543 165 ", "469 281 359 291 0 50 1 530 265 545 441 284 219 491", " 413 351 499 105 170 42 432 387 348 97 452 253 159", " 546 15 82 64 60 419 505 154 279 342 544 569 450 4", "72 483 366 46 269 422 143 188 465 355 249 25 85 53", "3 572 200 232 492 13 581 283 24 153 238 149 435 28", "0 459 126 558 134 256 35 341 267 310 14 5 49 337 4", "55 40 427 271 361 290 381 110 214 445 203 372 522 ", "392 230 559 288 574 184 528 477 402 100 210 141 14", "2 54 145 39 151 379 316 242 236 139 34 418 540 205", " 220 417 52 529 135 16 116 178 532 332 30 362"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 946982783;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> afterFourClicks = {"388 480 165 2 101 463 427 285 288 476 481 187 574 ", "215 268 304 61 450 149 177 530 82 58 36 143 360 44", "2 284 382 471 477 494 254 35 92 34 229 550 248 10 ", "348 180 30 37 372 445 389 208 159 263 592 105 176 ", "516 150 337 499 251 559 305 225 230 22 467 32 77 2", "7 318 6 540 249 198 97 518 146 542 327 221 374 319", " 451 355 117 332 33 325 286 413 236 532 138 570 31", " 4 227 168 397 334 411 377 23 365 181 182 120 482 ", "188 478 296 511 91 94 583 24 479 109 399 475 89 85", " 250 566 282 199 205 299 98 416 419 435 585 262 38", "1 576 131 64 128 90 487 321 405 353 466 122 16 545", " 434 378 76 124 578 38 315 393 457 289 115 390 444", " 376 361 584 307 39 352 63 245 57 259 283 368 356 ", "349 60 591 429 45 26 579 525 392 336 468 178 160 3", "96 538 280 41 107 508 535 470 65 137 351 226 404 1", "96 446 278 261 302 243 273 330 473 269 581 279 74 ", "270 79 233 0 380 537 561 541 454 495 358 75 244 37", "0 276 113 587 73 502 395 52 277 258 84 133 564 257", " 86 497 531 375 153 507 558 17 114 402 110 366 179", " 151 438 80 169 534 430 493 369 256 237 384 515 44", "1 68 552 265 314 300 510 410 260 549 301 385 203 4", "84 557 347 436 12 186 474 553 231 316 7 240 326 29", "1 580 312 417 517 354 210 95 155 132 513 298 433 5", "77 87 501 116 386 432 387 194 59 424 136 406 293 2", "02 140 158 309 345 141 174 448 111 201 527 588 459", " 170 364 317 185 127 125 295 464 191 1 373 274 200", " 40 563 50 163 190 222 425 431 69 232 379 522 212 ", "18 118 408 520 586 206 253 183 129 420 335 415 401", " 523 569 214 320 156 106 562 344 192 461 546 217 2", "11 313 529 252 8 246 341 15 449 437 342 121 71 25 ", "488 49 521 204 560 195 533 72 400 439 310 139 14 3", "94 47 519 383 567 175 62 428 173 207 135 555 568 3", "43 371 407 55 123 209 346 142 281 197 498 11 213 4", "60 272 363 96 271 51 147 172 219 19 134 528 472 33", "9 162 81 145 331 157 13 184 216 266 126 573 440 29", "0 112 414 102 323 152 465 452 193 5 571 322 367 10", "8 491 582 306 333 458 104 455 551 311 119 166 238 ", "338 514 275 589 512 398 426 44 294 28 423 357 362 ", "54 539 500 489 412 88 264 391 161 103 287 443 3 48", "5 565 21 496 48 329 297 29 83 167 590 447 486 456 ", "218 483 223 130 544 53 324 469 303 164 490 93 234 ", "422 144 328 70 267 235 421 78 56 148 543 20 46 453", " 548 504 418 492 66 350 255 242 154 462 506 100 18", "9 536 9 292 403 505 308 67 43 340 99 509 409 241 5", "24 171 554 247 42 239 572 228 575 556 526 224 359 ", "547 503 220"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 232099950;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> afterFourClicks = {"573 88 339 101 556 316 535 353 446 18 492 96 447 3", "4 42 558 71 587 310 245 467 143 514 298 232 121 50", "5 625 601 248 259 104 578 468 13 163 61 99 290 619", " 485 102 544 513 44 335 59 68 208 602 180 555 364 ", "516 230 461 599 126 86 525 346 545 294 644 429 287", " 51 83 47 435 466 37 413 219 110 234 285 387 82 38", "3 626 567 366 67 420 100 314 483 301 444 614 124 2", "53 534 224 320 11 199 183 16 240 376 302 242 299 1", "06 198 520 70 479 609 436 258 272 31 94 41 173 141", " 262 291 372 369 400 137 496 280 146 190 345 85 51", "8 132 583 393 343 220 551 552 136 107 584 349 526 ", "217 145 579 93 522 40 324 450 481 480 191 519 112 ", "261 158 184 494 80 337 425 598 174 327 167 495 76 ", "637 437 172 117 311 538 359 125 424 396 340 463 48", "4 30 133 441 186 565 111 562 45 154 227 600 6 252 ", "642 194 549 406 499 304 440 52 454 306 635 247 48 ", "543 309 381 354 213 139 540 196 266 541 395 214 18", "2 108 574 267 62 69 192 375 58 209 531 392 250 75 ", "270 165 449 554 239 130 350 536 119 244 443 22 207", " 365 300 571 629 628 178 319 326 283 367 409 98 63", "0 90 308 344 79 527 457 115 517 478 546 640 473 44", "8 627 264 548 254 148 177 550 288 445 4 380 418 28", "6 585 564 613 528 120 590 29 537 410 510 508 215 1", "14 529 458 116 289 456 17 205 415 243 210 453 236 ", "634 477 229 486 5 317 618 633 95 606 170 168 632 2", "81 490 166 617 399 89 255 161 615 155 128 379 603 ", "123 2 50 408 397 175 263 129 60 97 19 509 241 621 ", "342 7 371 592 318 226 142 588 360 363 500 416 636 ", "293 596 389 501 122 370 212 391 547 610 55 430 498", " 595 336 211 284 176 275 282 648 570 77 569 559 18", "7 25 580 134 638 73 179 352 398 312 460 507 276 24", "6 49 405 347 586 647 156 237 411 384 72 103 307 36", "1 238 169 204 321 506 639 432 92 35 38 189 428 273", " 3 476 423 216 438 357 566 171 581 542 491 185 442", " 348 502 412 160 12 64 295 151 249 386 9 524 113 5", "60 144 1 333 338 228 511 181 422 576 222 631 33 74", " 36 26 472 455 235 150 431 313 269 274 153 152 482", " 87 493 149 315 303 39 489 331 202 10 221 8 591 27", "9 118 377 533 362 368 330 616 504 471 421 401 297 ", "358 296 251 512 43 403 200 53 268 131 572 593 402 ", "557 265 419 607 21 523 426 451 305 231 582 515 147", " 197 414 225 135 464 23 218 439 54 649 470 474 373", " 521 105 57 91 138 597 612 622 256 278 15 257 201 ", "577 575 65 325 390 188 56 604 388 605 620 334 465 ", "223 427 0 561 32 127 24 434 532 159 497 563 407 53", "0 382 292 589 323 355 140 374 378 78 624 164 81 19", "3 28 404 162 568 452 84 46 608 469 594 553 417 487", " 157 459 503 328 645 643 233 351 66 623 611 27 332", " 109 195 462 260 20 475 277 329 206 203 322 394 53", "9 271 646 433 488 63 356 641 341 385 14"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 522775663;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> afterFourClicks = {"492 183 528 479 158 602 364 538 410 173 565 284 58", "4 471 123 179 67 203 279 601 449 358 585 529 426 4", "7 104 470 418 30 334 377 143 234 389 73 206 305 38", "5 257 272 81 32 378 146 159 9 122 277 149 212 402 ", "498 421 35 192 120 208 441 163 97 18 31 169 136 94", " 137 522 317 455 499 316 533 54 356 446 57 263 392", " 635 633 157 133 239 95 516 8 541 456 363 74 285 5", "39 308 99 544 649 232 171 65 546 395 564 608 465 5", "87 331 209 606 463 401 348 10 560 100 307 526 468 ", "556 251 131 275 25 235 37 452 258 473 521 190 270 ", "56 249 530 383 3 569 154 127 550 365 425 406 42 64", "2 309 547 326 34 586 397 160 229 622 66 443 486 41", " 632 494 164 568 382 376 151 267 11 590 582 445 12", "5 626 27 46 341 557 271 367 194 351 237 513 292 62", "5 140 640 282 152 40 218 319 139 627 523 558 525 4", "31 293 386 572 400 247 464 447 199 604 453 624 76 ", "214 474 180 466 563 107 643 103 106 278 7 200 117 ", "53 108 195 347 288 461 19 187 335 240 60 52 536 14", " 294 211 165 507 553 175 144 534 22 598 371 412 28", "6 457 5 575 581 439 301 111 552 491 344 599 515 42", "7 182 264 77 419 150 238 370 399 531 391 188 570 2", "36 280 424 615 189 61 121 177 361 571 166 609 469 ", "20 336 583 306 283 262 511 274 245 342 96 485 268 ", "422 505 115 51 215 124 368 302 631 346 636 415 85 ", "78 300 92 580 423 380 129 205 559 332 548 500 109 ", "420 298 403 324 394 217 623 256 29 437 226 373 375", " 432 213 430 597 12 126 227 145 488 255 535 87 15 ", "384 23 116 566 90 261 588 168 318 186 38 518 414 1", "84 110 281 290 69 299 460 482 543 648 454 59 62 54", "0 610 360 202 435 519 596 362 501 80 330 148 321 1", "76 313 128 388 472 497 266 167 647 220 366 303 574", " 621 102 481 555 489 118 86 75 201 273 6 613 0 243", " 617 495 147 222 314 68 614 594 579 357 487 467 17", "4 451 577 252 537 162 13 230 578 629 442 502 562 6", "41 181 63 411 17 79 287 477 196 170 36 338 369 483", " 132 554 576 246 345 372 325 381 26 50 524 221 248", " 172 436 101 138 493 374 638 619 509 135 156 142 4", "62 88 153 327 480 520 225 592 438 39 416 210 45 26", "5 458 650 233 514 329 198 58 630 459 254 260 83 72", " 644 105 197 379 444 70 506 312 527 89 134 428 393", " 16 595 429 224 354 620 618 353 82 130 289 508 417", " 639 33 605 219 315 43 350 113 337 84 646 114 44 6", "12 628 191 503 333 231 496 616 409 241 178 390 542", " 259 440 340 405 112 607 549 637 64 413 291 204 20", "7 328 119 504 339 490 24 71 433 359 532 343 244 49", " 510 21 476 398 310 408 404 141 193 352 296 295 56", "1 185 228 250 611 320 434 223 355 216 91 512 645 3", "23 311 276 48 407 28 2 450 517 593 484 322 573 1 9", "8 55 567 253 551 93 4 387 545 448 591 161 589 349 ", "600 155 242 304 478 603 634 269 475 297 396"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 50661034;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> afterFourClicks = {"64 234 130 78 133 88 74 190 105 53 7 152 65 86 167", " 170 61 235 148 228 33 4 36 158 6 92 29 87 96 58 0", " 5 188 131 8 113 66 19 75 217 222 49 161 69 35 82 ", "149 168 225 117 106 134 155 229 112 95 57 151 27 1", "07 47 44 3 184 16 173 202 150 196 183 60 160 38 71", " 216 215 23 22 30 182 203 111 146 50 123 210 32 14", " 54 218 219 109 192 128 73 232 230 45 236 90 176 1", "78 42 26 181 221 80 211 99 141 126 214 24 2 206 11", "4 145 39 157 77 85 98 143 56 52 180 154 144 62 110", " 162 177 97 189 15 94 226 140 193 142 17 137 70 22", "7 207 138 83 139 9 223 197 194 175 59 55 187 76 11", "9 20 185 198 147 89 43 34 212 132 51 12 1 135 91 2", "08 108 124 40 31 122 116 165 163 67 166 156 93 179", " 159 104 213 121 46 13 199 233 21 72 101 102 79 20", "4 205 191 28 103 81 174 68 186 231 220 201 129 41 ", "63 11 25 115 118 18 127 164 120 48 125 10 100 172 ", "209 171 169 224 200 195 37 237 136 153 84"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> afterFourClicks = {"64 180 49 95 255 206 304 156 62 142 200 52 212 224", " 21 260 135 159 312 27 91 58 162 261 174 287 104 1", "89 6 308 136 241 51 278 256 218 305 309 93 194 60 ", "240 265 274 229 346 106 292 39 307 297 92 96 227 7", "0 267 310 228 115 290 317 45 89 170 243 295 276 25", " 87 303 67 203 343 150 184 321 107 137 129 163 33 ", "271 126 0 230 29 57 19 196 168 164 3 145 330 294 1", "2 272 202 82 213 8 133 13 10 325 221 337 56 214 18", "3 285 351 18 225 273 77 78 138 108 201 263 252 248", " 259 293 23 113 327 258 281 112 173 61 335 175 141", " 210 182 114 166 298 280 306 300 65 63 16 152 197 ", "244 226 30 234 193 109 179 5 236 24 324 36 282 192", " 251 50 121 83 94 20 350 75 195 254 143 178 322 34", "0 355 275 59 153 257 198 269 289 356 47 41 105 344", " 103 71 204 361 360 40 155 332 42 345 353 220 2 12", "0 54 26 148 191 169 172 31 102 147 101 242 86 125 ", "247 336 88 132 158 333 32 66 199 334 117 235 349 1", "5 359 43 284 146 328 55 140 211 238 311 222 85 144", " 131 319 245 53 302 338 299 116 123 239 38 151 209", " 84 347 111 341 277 28 181 286 98 190 128 313 176 ", "348 97 323 1 357 187 207 73 339 223 74 139 268 219", " 185 46 134 288 157 331 264 35 301 188 99 171 76 2", "49 34 4 266 80 352 205 69 329 246 215 48 320 160 1", "7 316 231 165 124 72 358 118 326 90 68 110 9 217 2", "96 100 291 314 149 342 37 167 81 154 216 354 262 2", "50 232 233 237 315 122 283 79 318 270 279 177 7 12", "7 22 119 253 208 161 130 11 186 14 44"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> afterFourClicks = {"411 98 288 333 368 171 323 230 335 441 107 443 265", " 276 258 208 85 216 444 279 430 114 359 122 438 28", "0 145 20 318 453 458 144 225 43 120 168 183 228 21", "2 277 376 385 132 235 371 289 109 293 363 182 166 ", "358 382 326 468 213 83 206 116 321 226 248 210 146", " 352 353 307 464 268 393 47 24 53 204 87 416 391 3", "57 290 322 243 229 196 12 429 142 423 467 73 177 4", "07 147 269 274 372 310 317 128 301 66 366 130 222 ", "234 304 465 271 421 396 40 331 417 18 455 127 387 ", "259 435 93 381 218 349 46 63 406 52 254 185 316 43", "7 308 138 108 315 104 309 129 378 7 158 405 284 36", "9 154 240 224 189 21 340 233 346 436 159 413 390 1", "64 79 84 125 260 388 313 395 291 96 156 215 11 410", " 155 348 412 131 37 433 178 365 249 330 221 324 34", "7 111 149 401 139 296 362 424 278 351 298 136 165 ", "339 126 456 338 77 117 0 408 134 272 329 380 434 1", "99 59 220 148 201 5 425 311 239 50 282 71 300 118 ", "181 97 354 6 194 76 350 140 461 275 242 250 312 55", " 192 163 94 267 42 151 135 320 174 452 450 173 153", " 95 253 236 449 384 176 270 356 102 3 409 446 143 ", "264 1 420 22 167 299 273 418 23 170 190 89 422 205", " 34 255 60 462 31 26 9 198 157 379 297 124 57 283 ", "119 432 78 36 454 101 448 150 48 38 375 398 65 328", " 91 180 172 285 8 58 175 110 19 337 70 137 106 403", " 56 49 246 327 238 431 244 451 374 440 466 68 90 4", "02 306 266 184 74 287 469 247 345 152 105 463 35 4", "04 61 33 188 370 364 99 10 314 133 92 262 16 191 1", "7 103 100 67 332 160 45 341 286 386 203 305 383 45", "7 232 252 459 344 414 217 439 2 367 394 292 377 81", " 336 245 263 257 121 319 241 237 200 115 72 44 360", " 186 28 39 303 231 30 294 15 342 419 169 428 25 13", " 32 113 227 427 197 62 214 281 460 41 88 334 27 25", "6 361 112 392 64 302 400 80 202 426 442 415 207 38", "9 211 447 223 161 51 54 343 75 261 82 397 373 399 ", "14 179 251 295 325 445 193 86 187 219 4 141 123 29", " 69 355 209 195 162"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> afterFourClicks = {"119 204 209 5 28 66 187 189 145 84 39 215 160 92 3", "6 110 197 122 166 52 129 2 97 101 17 56 148 174 11", "2 57 201 79 62 124 71 144 156 63 106 40 143 64 131", " 30 175 35 3 44 24 43 77 186 162 142 155 90 89 118", " 48 76 69 50 214 104 54 111 68 65 193 88 12 158 75", " 120 159 87 183 146 51 42 21 103 123 115 83 185 13", "6 109 23 29 198 25 61 18 170 180 91 133 34 98 95 6", "7 37 205 132 85 121 13 135 137 202 27 138 108 149 ", "31 165 211 141 107 179 78 171 4 86 20 151 164 169 ", "116 33 113 153 114 0 105 199 154 127 47 117 81 59 ", "213 130 38 190 7 11 200 74 8 22 152 99 184 203 80 ", "41 128 188 9 168 182 6 14 26 194 10 210 139 94 161", " 70 19 150 178 100 181 206 55 58 72 60 191 32 73 1", "67 157 15 216 1 212 49 53 46 93 207 173 147 16 208", " 195 172 196 126 45 125 192 140 82 102 134 96 163 ", "176 177"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> afterFourClicks = {"25 69 499 598 302 32 145 291 542 329 241 514 84 19", "6 92 459 425 265 608 339 128 2 356 271 419 373 467", " 367 160 110 534 85 74 197 298 248 290 636 11 573 ", "475 334 599 310 133 262 76 221 366 470 299 222 492", " 77 377 200 474 505 286 567 149 504 349 1 232 234 ", "8 167 108 327 412 480 372 101 382 390 152 53 378 1", "98 29 278 208 471 495 545 452 621 33 575 482 139 2", "09 363 448 634 263 185 503 236 166 483 20 410 281 ", "576 371 154 45 451 591 187 171 570 524 318 125 478", " 439 49 94 565 635 468 442 631 352 510 516 68 473 ", "231 540 119 337 180 379 117 140 490 386 369 411 25", "4 399 415 89 566 307 5 253 304 435 644 107 75 487 ", "581 481 283 529 57 274 569 97 607 424 41 219 124 5", "41 323 21 214 270 121 220 282 315 350 159 533 446 ", "623 293 321 305 19 578 568 553 191 100 597 144 627", " 269 162 52 488 54 413 325 250 340 43 7 629 35 391", " 203 610 194 429 496 489 527 63 549 44 210 240 122", " 457 284 335 226 577 584 158 364 408 476 376 215 1", "53 244 640 147 225 105 374 420 190 456 275 494 168", " 78 582 600 469 637 427 90 393 99 613 548 137 256 ", "500 66 389 195 365 348 347 50 484 174 23 204 237 4", "63 580 189 628 596 535 91 9 506 433 498 223 15 135", " 416 36 398 643 550 360 161 551 113 83 34 326 574 ", "639 4 537 245 6 81 586 547 647 114 193 95 178 294 ", "73 430 638 546 428 55 164 406 38 126 287 526 603 3", "84 10 351 602 560 64 614 493 595 407 520 111 205 5", "59 252 421 460 417 479 466 518 426 557 434 0 509 5", "07 233 344 616 104 438 184 17 30 571 212 292 80 51", "3 58 141 155 477 400 324 358 127 242 28 522 502 63", "2 486 60 409 328 432 588 296 641 238 370 16 251 39", "6 109 295 199 134 544 230 342 330 402 273 431 612 ", "151 306 267 170 103 555 70 156 346 618 461 403 106", " 594 375 206 280 87 288 353 521 86 319 543 508 279", " 385 202 37 436 630 362 523 112 606 531 13 169 227", " 464 465 268 395 590 394 525 150 115 564 98 260 27", " 536 368 216 192 512 218 142 146 131 26 255 422 24", "7 12 93 130 56 173 59 418 143 532 491 563 259 338 ", "443 587 211 39 556 138 392 445 633 615 314 530 455", " 172 264 440 61 261 136 40 501 246 381 165 528 14 ", "355 554 462 611 118 239 609 276 257 558 313 62 619", " 183 272 243 447 22 593 320 592 572 414 472 437 38", "0 589 303 316 423 132 235 129 67 626 47 620 332 57", "9 88 361 120 359 450 249 71 123 42 341 148 308 583", " 228 229 454 266 561 333 517 163 624 181 562 201 3", "00 182 31 585 343 258 322 277 18 96 441 444 519 18", "6 65 458 79 48 297 388 387 336 397 102 51 617 176 ", "179 331 217 625 285 497 405 604 311 177 605 354 17", "5 213 645 357 601 485 82 312 539 515 552 24 511 28", "9 224 301 646 46 116 404 449 453 309 401 72 642 15", "7 345 538 207 188 383 622 317 3"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 891599597;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> afterFourClicks = {"273 74 585 638 554 459 60 565 43 366 105 285 269 3", "64 383 100 415 109 397 213 27 478 403 448 55 504 4", "16 425 246 418 132 140 559 334 516 260 626 26 183 ", "446 413 479 86 574 332 614 322 365 152 358 212 502", " 630 68 372 93 304 56 227 12 373 21 546 412 527 82", " 539 577 344 149 117 5 357 506 400 14 454 77 560 4", "0 335 81 282 561 240 589 270 146 385 210 507 278 4", "30 33 83 513 3 237 154 110 173 382 174 23 104 279 ", "584 602 411 573 310 488 522 192 376 148 568 124 45", "8 116 181 97 54 487 101 221 402 65 266 236 611 558", " 115 381 636 6 497 24 356 466 440 316 363 632 491 ", "48 277 315 108 325 216 536 598 347 642 133 393 583", " 217 596 340 225 184 253 69 525 392 231 549 11 138", " 107 172 271 102 203 261 639 178 248 423 265 317 4", "9 368 120 570 379 451 588 94 371 131 30 442 631 36", "2 590 396 145 177 134 494 239 520 122 532 441 343 ", "314 16 57 629 137 232 615 604 540 252 473 112 51 5", "47 528 605 161 553 80 537 476 447 201 229 71 287 9", "6 337 7 394 436 84 468 242 249 1 320 635 281 171 4", "35 410 22 288 450 254 142 346 508 41 607 429 202 1", "03 238 276 185 624 562 296 187 472 575 569 189 42 ", "409 191 557 582 169 443 355 543 518 126 111 619 58", "0 422 199 616 303 627 405 298 28 0 293 581 352 136", " 594 432 426 563 197 377 483 268 609 37 206 360 39", "9 209 404 76 538 531 208 245 78 312 601 85 75 572 ", "59 20 13 354 87 606 612 19 444 165 470 186 514 548", " 125 610 515 420 119 341 414 294 58 25 195 90 331 ", "324 247 223 64 290 193 175 88 176 591 204 378 524 ", "53 168 401 160 264 205 135 32 36 519 306 47 257 48", "9 61 492 164 556 595 417 220 456 167 390 258 9 599", " 490 505 533 323 586 391 244 634 593 128 338 67 55", "5 62 233 150 250 359 162 496 153 151 280 640 52 39", "8 517 571 387 194 127 328 259 431 550 495 641 31 4", "45 592 535 2 46 427 300 567 437 336 180 99 349 618", " 39 190 262 579 292 241 307 235 141 620 243 234 30", "5 552 267 503 29 433 44 526 493 17 370 118 350 200", " 274 228 92 461 214 471 434 95 621 297 158 534 106", " 623 523 170 10 551 198 465 70 512 196 500 345 438", " 486 511 544 375 256 475 613 395 333 299 327 625 3", "69 600 545 313 182 439 34 367 4 628 509 121 218 46", "2 622 207 144 113 123 542 406 351 330 541 452 155 ", "89 219 339 157 480 263 251 424 326 380 603 222 188", " 587 576 139 408 407 45 91 38 342 72 374 477 230 4", "84 211 301 521 510 608 79 18 449 421 35 50 428 15 ", "8 481 224 147 457 348 530 633 215 388 275 63 308 3", "11 469 255 318 284 386 361 159 455 289 566 578 272", " 309 226 419 499 464 617 319 179 353 130 73 129 28", "3 460 384 291 302 286 163 482 166 485 529 329 501 ", "597 114 467 498 463 66 143 156 295 389 98 453 321 ", "564 474 637"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> afterFourClicks = {"97 415 2 198 567 207 427 544 73 561 155 372 576 51", "7 30 357 341 108 522 323 527 196 147 55 473 106 11", "7 49 568 157 265 453 284 345 593 22 312 68 139 344", " 349 253 190 504 228 309 625 477 42 629 138 308 90", " 172 290 337 297 452 98 617 394 642 62 474 512 352", " 635 597 413 192 282 531 409 356 420 325 556 262 4", "34 400 322 586 332 236 628 72 48 598 291 419 366 2", "00 229 222 163 160 38 45 58 546 605 12 254 348 591", " 588 529 320 647 39 351 153 515 578 299 227 464 24", "8 411 99 545 327 120 136 581 525 283 146 174 495 5", "33 181 287 571 210 27 104 177 78 89 502 114 301 38", "7 547 14 44 100 553 439 550 179 256 539 386 353 46", "5 235 370 219 69 230 142 438 220 56 630 148 480 54", "0 226 423 231 269 16 542 182 508 119 151 121 500 3", "81 109 646 255 416 306 188 499 86 609 521 25 10 29", " 103 15 302 199 134 17 266 600 404 274 211 156 224", " 607 91 621 131 338 264 9 203 401 406 149 1 311 23", "3 204 476 74 221 472 127 216 161 111 178 143 237 3", "42 378 173 488 52 329 501 455 497 459 468 481 128 ", "399 360 280 392 60 566 557 185 310 585 486 599 8 4", "66 77 6 80 145 225 507 460 534 176 379 498 130 518", " 334 59 11 433 240 457 260 373 437 484 54 195 573 ", "523 470 608 26 314 94 485 304 183 102 382 64 408 3", "18 487 377 76 541 447 212 526 129 407 616 36 414 6", "1 346 376 317 412 271 32 75 558 645 590 614 110 27", "6 123 469 164 606 105 137 575 535 165 34 426 440 5", "38 66 286 620 449 560 430 594 21 272 162 326 429 1", "94 367 126 632 595 405 244 298 263 335 273 51 328 ", "239 624 634 18 289 336 354 494 23 5 243 506 397 20", "9 463 432 249 519 577 482 154 513 241 450 509 234 ", "65 503 24 524 582 636 398 88 193 622 492 20 315 44", "5 218 461 159 355 410 118 350 37 13 583 623 205 43", " 549 202 479 536 184 562 28 592 361 603 436 223 38", "3 270 610 641 613 189 85 293 454 339 186 208 369 4", "89 313 358 417 451 615 19 551 307 70 300 242 627 5", "74 475 359 520 587 294 601 261 375 116 467 245 569", " 602 471 167 252 516 206 71 214 424 421 53 246 385", " 589 580 435 422 3 343 444 579 247 402 187 305 584", " 158 324 125 251 638 388 268 63 171 217 303 626 33", "3 572 364 418 141 483 543 564 393 446 493 191 514 ", "257 443 258 395 40 559 396 604 79 150 631 532 363 ", "391 46 288 537 340 168 648 31 175 140 7 101 552 87", " 462 96 403 448 232 115 362 122 213 371 47 510 33 ", "41 132 267 112 425 215 113 565 619 259 133 644 478", " 250 83 612 384 4 490 107 124 530 330 0 639 166 15", "2 82 93 316 365 295 374 570 197 319 637 505 278 92", " 389 496 169 279 35 331 596 285 431 347 442 555 54", "8 368 296 170 180 618 528 238 458 144 441 277 554 ", "563 456 84 643 633 611 281 81 321 491 275 640 57 9", "5 67 50 292 135 390 380 511 201 428"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 948111781;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> afterFourClicks = {"567 36 96 450 352 275 428 646 299 251 156 133 407 ", "247 564 27 128 243 461 478 241 16 500 124 154 503 ", "392 327 558 98 626 336 319 435 449 20 257 166 331 ", "283 301 516 227 397 650 308 367 387 300 641 451 28", "4 363 28 458 498 609 104 431 561 390 422 616 548 3", "07 419 479 518 294 382 543 107 112 416 447 37 423 ", "519 598 79 607 605 197 531 505 364 185 312 93 559 ", "404 429 202 527 280 613 2 0 485 270 460 495 633 30", "6 105 175 621 615 350 200 137 325 372 484 375 574 ", "296 602 512 585 491 266 614 610 368 131 209 471 33", "4 313 468 546 269 448 568 150 295 110 317 60 507 5", "80 349 219 420 497 76 529 401 405 135 622 26 532 5", "23 572 634 339 636 358 190 129 225 29 170 165 51 4", "64 263 180 588 293 282 153 335 445 579 443 550 476", " 169 10 344 541 184 483 524 406 459 176 160 64 346", " 444 340 455 48 440 119 206 600 45 320 238 145 425", " 289 173 57 402 252 245 298 638 13 250 386 87 278 ", "413 374 465 162 426 253 575 421 511 140 645 630 28", "8 83 74 378 69 318 396 168 553 228 473 239 125 557", " 54 347 214 152 591 196 432 187 113 199 462 181 33", " 92 55 433 341 115 203 635 480 624 130 109 24 466 ", "222 589 648 330 221 365 566 287 193 116 481 254 37", "7 581 44 442 63 213 488 592 578 430 361 540 136 94", " 114 148 8 620 163 563 393 385 47 338 452 486 18 7", "8 205 545 155 577 315 513 138 437 32 258 342 285 1", "92 383 210 373 39 453 594 274 439 632 424 49 456 3", "91 12 56 262 41 146 85 261 490 354 302 4 508 264 1", "08 499 366 271 345 314 457 587 159 381 475 311 514", " 277 356 571 647 25 494 570 143 625 234 90 220 11 ", "612 427 82 267 619 328 177 324 191 100 398 35 489 ", "1 502 501 248 236 631 604 23 17 534 438 204 212 12", "3 379 66 637 111 599 15 434 158 627 472 370 643 52", "2 73 542 58 65 144 226 400 343 141 171 198 408 38 ", "211 371 260 14 102 409 147 539 595 639 86 72 309 2", "86 538 279 208 384 560 297 34 469 178 446 415 369 ", "504 562 649 91 601 118 441 9 101 167 224 351 487 3", "88 410 242 326 412 506 596 121 399 189 19 127 603 ", "611 188 6 5 40 520 549 590 525 547 179 161 21 237 ", "573 537 61 84 565 22 290 194 46 272 515 305 240 60", "6 103 510 42 304 62 362 259 139 256 310 291 544 59", "3 359 276 186 403 395 149 482 389 642 126 230 357 ", "216 583 120 521 235 201 67 99 417 360 436 217 43 1", "82 554 533 50 418 552 470 394 556 229 623 526 53 2", "33 97 597 164 255 183 52 59 134 644 454 132 492 46", "3 640 353 231 355 332 477 629 30 80 535 195 586 22", "3 467 323 584 172 414 31 496 322 303 117 174 68 33", "7 268 244 474 617 89 81 348 582 70 509 232 281 411", " 376 7 333 142 265 215 530 618 106 151 528 608 292", " 75 95 576 71 207 218 77 551 517 316 3 88 628 536 ", "157 493 380 249 569 555 122 246 273 321 329"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> afterFourClicks = {"260 347 140 32 222 272 482 226 496 318 500 364 193", " 573 241 147 155 465 572 15 550 504 144 267 402 23", "6 524 293 75 483 45 59 240 543 50 215 150 330 11 4", "05 355 477 17 245 213 208 125 571 417 258 526 163 ", "165 123 77 458 111 450 449 194 249 349 195 252 546", " 238 261 90 317 302 286 553 366 118 451 527 84 46 ", "453 530 65 485 507 505 382 181 81 157 203 251 510 ", "393 379 581 151 557 555 389 408 354 551 247 470 79", " 93 6 391 346 177 55 128 273 574 145 146 270 518 1", "41 218 103 326 230 160 509 69 471 295 544 476 185 ", "42 120 180 162 412 56 95 66 178 313 549 237 489 49", "9 266 74 460 61 511 434 235 94 131 394 520 559 491", " 153 112 116 430 214 414 269 506 136 528 171 38 42", "8 41 425 497 424 545 161 517 475 374 523 36 58 263", " 299 331 91 392 325 387 254 488 176 358 529 164 31", " 440 353 204 516 432 357 415 277 67 37 211 43 443 ", "459 386 206 410 60 501 356 344 340 201 569 519 361", " 132 438 369 86 321 337 426 397 76 138 27 217 83 4", "95 348 239 478 139 110 383 9 115 271 137 377 259 1", "98 562 341 220 468 473 148 169 515 207 99 521 413 ", "257 409 73 498 577 290 108 514 130 122 173 435 385", " 283 362 210 167 350 143 513 209 390 219 288 3 474", " 536 246 363 287 446 197 463 13 396 400 278 134 44", "7 114 25 5 190 311 244 541 2 437 372 558 53 564 82", " 436 221 179 427 452 420 22 182 97 324 275 329 92 ", "461 538 320 52 142 294 135 7 250 455 33 345 380 37", "1 448 454 525 156 87 388 0 10 336 309 464 503 231 ", "49 196 47 552 192 406 62 280 323 40 403 407 375 11", "3 133 8 368 107 24 57 534 418 68 166 423 223 129 3", "65 327 384 255 580 395 339 80 187 228 548 398 188 ", "305 567 540 229 126 352 253 98 88 96 359 333 284 3", "51 531 1 563 175 29 39 312 533 493 301 72 154 373 ", "191 487 233 479 297 367 316 490 12 18 484 232 268 ", "561 381 85 265 152 441 34 279 28 224 291 360 285 4", "45 335 338 298 101 566 186 26 537 315 522 170 575 ", "439 539 328 466 124 576 89 14 411 200 292 401 242 ", "102 227 248 399 532 304 314 159 30 109 64 570 306 ", "20 578 16 184 78 308 565 205 419 4 535 433 212 183", " 48 100 469 444 334 429 300 117 512 378 127 274 29", "6 104 370 480 456 421 442 579 202 276 264 199 310 ", "262 542 256 492 486 119 307 422 404 71 481 556 174", " 21 416 467 189 289 158 35 216 106 243 431 303 457", " 281 462 508 149 568 322 121 172 54 234 554 105 56", "0 342 494 332 282 168 225 319 23 547 472 51 63 70 ", "19 44 502 343 376"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> afterFourClicks = {"83 566 275 515 383 417 190 499 200 58 564 439 408 ", "522 54 194 143 328 302 464 460 184 309 516 315 628", " 555 561 7 181 577 85 369 480 134 282 402 221 341 ", "580 501 525 613 473 550 387 233 188 534 494 493 40", "3 546 461 482 101 268 141 311 434 503 273 549 573 ", "518 212 130 0 565 347 433 111 265 57 558 319 462 1", "46 64 73 187 271 622 346 281 31 207 13 592 415 602", " 552 164 242 422 589 150 114 40 109 354 124 547 35", "8 102 125 506 350 442 308 174 609 203 446 68 631 4", "00 519 53 28 215 266 533 571 581 587 229 300 632 5", "2 11 545 65 538 553 321 228 179 500 173 591 598 30", "4 524 310 98 299 46 285 288 96 316 343 145 157 78 ", "72 298 389 435 253 37 44 110 160 426 368 274 25 45", "7 107 322 61 226 418 258 103 251 485 543 206 479 2", "57 536 351 261 239 306 535 450 294 161 324 183 277", " 495 360 26 165 409 530 50 116 23 244 323 105 379 ", "392 600 419 603 263 196 380 163 147 619 153 492 29", "1 236 318 331 423 270 247 122 504 140 332 56 89 61", "8 478 104 137 567 401 320 42 260 27 352 373 511 23", "5 365 375 95 99 421 395 172 384 168 410 397 170 87", " 70 560 443 606 267 342 528 517 241 59 393 202 466", " 625 333 303 127 508 616 529 470 213 12 448 314 34", "4 620 329 112 237 513 259 3 66 586 132 189 100 75 ", "47 17 353 364 431 142 520 411 483 317 45 572 339 6", "23 227 119 398 159 250 612 386 234 475 269 441 232", " 117 129 18 32 481 575 585 176 249 19 626 583 149 ", "430 437 610 491 29 131 381 551 205 447 295 427 396", " 527 599 597 84 452 292 39 79 554 624 151 456 498 ", "5 88 548 487 43 230 139 21 335 38 290 627 280 453 ", "118 305 14 289 588 231 208 361 569 563 276 76 128 ", "337 156 345 293 455 307 574 362 496 472 287 201 51", " 136 359 490 252 256 376 178 16 6 197 338 55 451 2", "78 407 80 531 465 617 224 505 297 579 458 240 167 ", "209 220 135 596 578 385 349 532 199 394 432 92 412", " 204 390 370 238 559 476 336 108 312 568 115 20 4 ", "454 169 436 541 313 283 1 186 468 582 340 544 191 ", "629 438 177 284 246 429 219 106 121 216 521 24 537", " 113 469 463 502 356 34 148 382 330 477 144 326 48", "8 30 210 248 540 595 182 489 449 15 218 391 562 71", " 33 420 593 245 399 374 445 171 444 523 155 97 86 ", "601 154 428 74 222 424 584 262 484 279 193 357 60 ", "152 214 162 542 41 497 611 36 77 334 404 605 615 5", "57 594 166 509 414 507 192 510 413 243 223 512 608", " 67 604 371 81 10 327 264 590 93 630 90 69 474 225", " 301 607 123 195 348 367 48 198 175 576 416 406 53", "9 63 91 440 49 614 355 621 366 22 120 94 388 180 5", "56 272 296 217 514 377 486 62 35 467 254 425 133 2", "11 126 459 372 138 8 158 471 405 185 378 255 82 32", "5 570 363 286 2 9 526"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> afterFourClicks = {"153 372 293 110 444 28 615 337 108 599 624 561 137", " 622 598 591 396 263 490 465 616 435 321 227 457 3", "92 239 207 438 139 10 306 119 420 601 477 369 109 ", "236 403 364 82 584 580 264 545 482 3 262 324 460 2", "52 189 165 25 11 597 612 320 318 222 424 480 27 22", "5 2 76 411 507 325 105 35 95 299 183 614 275 422 2", "14 560 555 60 548 143 296 381 427 417 178 398 240 ", "257 606 447 330 433 576 161 197 246 629 195 514 20", "0 313 259 282 547 479 468 531 285 587 335 83 269 6", "23 304 124 582 492 374 401 551 478 316 150 429 87 ", "180 234 62 408 459 38 327 51 59 404 341 394 454 86", " 593 85 393 608 368 328 229 613 281 469 113 117 46", "2 419 210 173 344 536 97 496 29 284 279 63 17 565 ", "248 485 57 405 249 493 387 187 56 481 237 128 191 ", "456 74 147 192 377 112 266 567 519 21 621 78 26 27", "4 570 556 163 563 272 140 211 298 365 206 627 151 ", "174 198 466 283 379 388 188 559 583 224 458 13 155", " 550 534 578 535 579 42 23 213 182 506 58 292 242 ", "347 255 537 526 41 223 90 577 602 586 289 164 290 ", "390 46 402 544 254 572 472 549 55 277 467 66 158 6", "36 302 542 471 474 216 8 475 106 524 415 231 620 4", "26 79 356 134 88 18 286 295 280 120 309 510 92 399", " 127 176 260 126 256 7 116 94 166 235 122 301 406 ", "461 336 446 562 391 253 40 24 373 585 362 294 628 ", "348 371 520 125 443 33 592 72 476 430 241 115 9 14", "1 177 573 376 5 351 228 439 268 589 418 509 571 14", "6 546 609 93 4 47 331 48 39 564 600 308 523 350 16", "8 618 635 203 557 99 366 157 605 160 219 319 204 5", "05 603 488 22 538 428 503 144 338 491 186 483 310 ", "181 311 528 43 634 68 199 529 142 81 273 217 45 20", "2 232 434 619 300 575 238 52 497 358 425 49 159 45", "3 518 409 382 244 65 355 385 220 432 184 131 574 1", "54 312 12 101 500 436 111 384 323 315 395 517 233 ", "61 167 610 552 132 412 413 136 169 30 32 194 71 60", "4 595 230 383 89 473 363 502 305 553 617 504 400 1", "71 346 102 437 495 380 287 484 451 243 463 98 148 ", "96 103 1 67 516 332 36 607 276 205 118 291 333 498", " 218 170 121 440 270 44 31 525 175 307 104 421 515", " 149 329 353 156 487 130 470 569 522 326 521 554 6", "25 416 541 0 179 250 162 123 91 77 114 431 450 245", " 190 540 208 84 201 352 354 145 596 508 566 267 24", "7 513 359 215 626 370 378 452 50 340 15 486 107 44", "8 568 221 303 539 397 441 172 138 357 317 19 16 45", "5 339 558 590 70 349 53 442 511 196 185 543 632 48", "9 367 464 73 251 20 212 345 261 209 271 445 360 59", "4 375 512 494 258 530 631 288 80 633 64 533 34 14 ", "69 527 54 423 532 334 343 129 265 226 314 588 637 ", "135 6 501 361 297 611 414 133 499 410 75 278 322 1", "93 389 386 100 407 152 37 342 449 581 630"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> afterFourClicks = {"508 511 30 233 500 560 608 523 439 260 305 91 291 ", "563 547 333 552 387 114 152 302 147 572 199 115 27", "0 581 2 576 144 22 551 27 135 142 634 9 491 61 225", " 146 154 190 171 276 207 440 259 51 28 293 17 401 ", "469 125 249 149 562 118 561 374 353 355 589 122 57", "1 636 517 57 307 247 7 422 598 40 311 490 95 627 2", "73 192 524 279 480 467 377 346 368 436 31 546 127 ", "231 457 324 623 66 296 65 156 515 637 582 67 446 1", "70 113 385 234 89 383 624 609 301 181 295 341 320 ", "462 82 541 133 58 184 303 310 599 197 565 454 525 ", "492 158 428 205 554 21 421 6 165 107 134 188 139 2", "22 584 164 288 78 335 314 477 420 398 283 191 363 ", "248 339 277 613 298 108 109 1 419 628 596 438 111 ", "495 253 229 549 79 484 322 83 376 240 77 593 586 6", "11 632 615 458 606 81 174 426 237 209 635 264 55 4", "55 176 148 631 407 11 200 452 472 255 502 626 411 ", "266 349 14 261 619 262 590 80 378 432 629 10 463 9", "8 381 403 224 267 434 235 493 236 449 509 404 630 ", "173 350 351 304 258 265 54 614 365 382 361 193 245", " 180 263 228 528 194 375 468 94 414 526 131 198 28", "7 337 325 437 362 423 44 417 271 487 189 397 100 2", "4 408 244 140 280 559 299 622 568 332 356 538 388 ", "241 84 162 159 345 177 466 402 360 150 238 633 574", " 195 474 4 86 494 597 530 410 395 143 218 116 460 ", "317 591 522 182 512 284 204 130 594 372 201 290 68", " 227 592 329 418 498 451 126 272 157 548 640 543 3", "06 461 430 178 416 442 167 413 394 48 50 206 63 50", "5 321 3 371 575 612 518 185 169 69 56 186 352 535 ", "536 519 348 499 587 36 105 479 578 409 297 482 620", " 312 618 226 90 603 138 213 46 208 59 503 433 202 ", "232 569 566 347 539 427 49 625 313 319 370 380 183", " 243 252 292 550 72 242 520 638 216 504 85 465 501", " 286 424 153 510 53 358 300 64 507 567 412 37 124 ", "196 429 128 294 123 96 106 281 119 431 117 406 369", " 38 179 45 379 278 309 471 8 168 282 359 136 340 5", "42 35 60 70 308 602 99 496 344 172 445 610 160 405", " 161 444 33 102 275 0 175 166 87 43 93 62 103 476 ", "221 354 400 475 42 163 326 516 239 203 73 121 485 ", "443 327 583 71 435 331 425 579 392 537 441 187 389", " 415 459 26 5 289 155 639 447 318 600 357 23 274 2", "5 555 110 481 269 230 129 585 215 257 268 18 641 2", "12 120 219 553 534 285 112 132 396 531 573 556 604", " 580 250 386 367 47 483 564 488 32 497 211 616 214", " 13 141 391 448 450 544 366 334 384 506 29 52 588 ", "19 486 336 489 75 20 617 74 399 557 151 513 217 14", "5 577 15 220 328 621 605 92 323 101 540 464 390 47", "3 533 514 34 601 558 256 39 41 364 254 456 12 570 ", "343 607 104 88 315 223 251 545 529 210 137 642 470", " 16 478 527 246 373 97 342 393 453 316 521 338 330", " 76 595 532"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 916660021;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> afterFourClicks = {"87 250 283 378 304 33 309 572 497 395 187 554 28 4", "66 397 413 291 90 542 562 536 124 484 540 9 558 59", "6 456 403 129 388 243 391 29 608 128 629 468 570 5", "46 507 321 53 58 209 506 186 298 322 551 370 433 5", "81 334 442 326 241 14 552 261 91 356 582 571 34 33", "1 237 294 429 609 444 268 181 482 384 600 471 410 ", "300 85 220 109 357 479 543 348 528 1 332 462 339 6", "6 60 120 606 114 510 569 617 172 459 553 419 487 1", "9 313 446 382 116 351 155 325 545 635 574 389 27 4", "5 539 550 628 344 363 603 636 337 436 499 440 520 ", "183 345 434 23 426 613 547 131 140 229 432 93 406 ", "427 475 366 447 415 48 597 335 358 327 274 235 584", " 178 531 412 478 634 495 143 206 301 86 586 431 73", " 74 98 249 150 493 527 367 204 373 560 107 386 355", " 393 77 602 22 20 490 541 328 638 159 588 316 174 ", "336 142 350 62 548 607 534 244 190 437 149 626 400", " 46 57 381 460 42 441 43 302 240 423 44 501 277 50", "8 453 305 84 630 162 470 624 491 573 425 314 566 2", "33 306 101 151 212 398 612 255 169 576 341 70 476 ", "257 139 360 38 394 492 454 563 530 135 405 197 205", " 198 242 192 89 245 417 627 639 231 407 633 3 439 ", "637 158 222 385 39 390 264 371 472 102 95 519 451 ", "374 246 72 494 359 509 31 164 513 296 583 67 340 1", "82 2 589 76 117 615 448 157 438 379 526 213 503 45", "0 631 224 292 469 7 104 111 489 25 604 121 83 488 ", "214 69 216 619 152 338 217 258 532 6 105 307 632 8", "2 349 387 620 24 622 502 123 577 467 148 138 61 59", "8 112 238 282 75 585 409 15 580 452 180 465 362 40", "1 611 483 303 290 263 153 176 193 71 549 354 80 11", " 191 228 480 215 424 265 49 221 284 179 81 184 167", " 579 127 207 63 333 218 118 590 132 312 51 94 486 ", "252 185 145 522 92 248 555 280 295 168 156 163 375", " 41 288 136 16 247 0 455 525 119 449 133 30 352 18", " 396 411 189 165 227 267 113 346 147 225 517 293 5", "67 428 97 533 353 10 559 40 317 146 308 365 320 28", "6 463 251 435 232 498 110 106 262 154 474 275 278 ", "54 575 161 500 481 496 299 537 565 166 477 211 408", " 270 505 330 177 368 473 108 200 523 422 529 203 1", "41 516 420 50 287 234 64 103 17 416 289 512 281 36", "4 219 52 223 137 504 601 195 32 126 430 202 271 26", "9 414 201 175 457 538 380 79 36 593 13 376 37 130 ", "210 511 461 310 35 587 279 144 610 421 208 377 568", " 599 59 230 254 55 21 347 361 199 443 276 383 239 ", "372 329 595 404 253 319 188 556 464 514 343 402 51", "5 324 68 594 5 259 323 170 399 485 369 621 311 78 ", "445 236 557 96 342 171 605 618 625 524 4 273 8 115", " 88 564 272 47 56 591 226 544 260 535 521 100 65 2", "85 578 315 592 616 318 160 458 266 26 194 418 297 ", "392 614 173 99 134 256 623 12 125 122 518 196 561"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> afterFourClicks = {"180 11 109 218 175 264 238 123 534 332 606 390 472", " 26 228 251 137 305 369 56 171 337 25 311 168 608 ", "189 153 319 314 223 55 489 406 118 555 35 152 245 ", "565 452 386 260 456 226 530 52 161 552 414 371 262", " 441 613 448 39 308 460 413 177 617 102 237 86 454", " 89 338 98 589 494 275 354 76 14 221 43 38 129 408", " 90 340 31 51 399 4 504 353 397 598 130 105 471 53", "7 184 34 3 389 248 503 443 136 44 170 216 230 368 ", "605 157 199 225 478 87 70 514 404 167 125 196 531 ", "290 18 2 591 585 466 545 336 506 154 58 271 554 39", "6 268 550 349 273 533 325 96 415 60 69 328 477 426", " 564 19 169 561 541 405 155 292 616 470 584 57 587", " 342 358 421 158 49 115 578 511 536 374 293 121 13", "4 315 401 447 501 73 17 263 357 432 244 579 81 502", " 259 360 493 576 190 20 391 126 183 603 100 468 51", "8 119 365 140 599 593 334 207 393 128 79 382 488 2", "54 431 46 209 186 481 194 596 581 88 505 306 549 9", "4 440 583 379 485 437 529 604 508 572 309 235 182 ", "278 607 256 417 367 461 255 265 162 475 28 450 7 1", "72 269 600 312 500 23 192 21 372 378 310 381 37 54", "6 286 479 356 375 203 507 61 104 181 567 8 551 289", " 609 409 301 114 586 463 618 520 588 233 85 92 270", " 298 42 512 285 425 84 476 200 187 446 205 385 377", " 429 313 524 236 418 252 394 492 532 327 29 178 27", "9 345 50 185 95 135 344 63 424 566 402 110 515 339", " 13 522 569 67 143 24 213 516 474 142 208 210 101 ", "91 473 525 575 383 462 459 380 93 407 276 64 117 2", "91 197 548 163 387 156 147 284 350 176 274 412 139", " 299 206 341 112 47 423 10 219 133 287 458 464 80 ", "243 331 217 547 324 5 231 343 66 486 120 40 12 215", " 214 250 307 321 241 113 528 131 592 295 202 594 4", "1 553 111 204 352 59 68 266 257 400 33 612 527 439", " 124 601 480 179 519 36 48 83 127 160 30 282 370 2", "7 146 355 445 224 559 159 363 410 563 495 103 229 ", "455 173 483 288 227 240 434 403 364 573 138 9 411 ", "54 590 427 570 297 148 346 453 316 78 574 361 1 75", " 539 144 72 272 496 392 318 323 436 582 106 580 12", "2 151 267 188 166 521 376 253 490 543 595 359 82 1", "5 107 433 211 22 558 303 116 302 77 74 610 198 467", " 556 141 398 469 329 242 108 193 322 281 165 304 4", "38 428 351 416 280 451 65 491 317 294 195 510 335 ", "430 395 419 212 6 614 150 487 484 384 249 348 320 ", "457 540 201 388 174 482 557 71 535 220 526 465 330", " 234 191 283 499 513 97 542 571 373 544 0 597 498 ", "232 300 164 442 523 577 258 538 517 568 296 611 26", "1 435 509 53 497 132 366 62 615 602 560 145 239 32", " 347 562 449 326 149 99 246 333 422 45 222 247 444", " 362 277 420 16"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 222246141;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> afterFourClicks = {"110 533 293 146 167 215 414 83 333 150 605 264 550", " 373 494 106 49 272 423 523 54 438 297 294 204 300", " 314 497 207 103 489 353 50 169 544 481 218 112 43", "9 509 521 334 160 499 58 5 330 561 91 263 92 33 23", "8 225 443 428 542 68 470 619 13 590 599 468 250 12", "8 313 567 560 477 364 159 559 469 102 518 198 351 ", "256 425 325 47 57 562 303 67 148 618 236 451 202 5", "20 114 223 471 205 532 258 597 19 76 505 359 327 3", "78 419 609 316 319 515 472 277 478 193 196 418 172", " 216 357 265 324 487 396 138 347 194 456 360 388 4", "85 99 495 291 349 621 424 137 311 268 1 261 133 45", "8 267 192 598 537 467 305 257 38 231 69 592 507 28", "6 420 203 608 81 563 613 339 177 295 189 84 64 376", " 59 536 170 104 308 149 362 182 553 230 242 255 11", "7 164 228 384 433 586 415 20 348 417 579 588 596 3", "74 620 323 386 211 435 143 116 538 90 577 262 259 ", "144 570 141 446 304 525 427 254 447 269 452 614 34", "2 252 331 404 10 156 547 379 448 355 73 441 201 22", "0 2 498 584 188 161 501 543 260 184 241 387 271 41", "2 445 233 301 457 280 393 573 287 197 397 199 400 ", "416 37 243 464 392 623 307 465 611 453 290 338 85 ", "321 405 186 266 62 529 369 352 88 571 30 273 113 5", "16 503 408 21 185 46 298 121 56 484 270 488 511 57", "5 86 394 312 278 283 136 366 123 244 154 26 322 17", "1 219 413 502 555 449 276 72 151 426 615 510 249 3", "91 429 6 508 22 493 75 593 79 474 616 24 480 365 2", "10 483 381 95 120 166 389 549 227 213 382 134 145 ", "71 221 476 328 183 111 200 139 285 40 473 604 191 ", "279 7 432 320 237 65 431 437 15 361 3 600 574 344 ", "517 318 539 119 326 98 66 275 572 341 310 491 368 ", "42 460 281 587 306 94 28 450 409 564 108 82 589 39", " 87 406 402 36 101 569 462 122 479 43 78 226 475 4", "96 190 526 16 581 175 209 410 399 622 93 506 214 3", "02 354 109 583 288 80 44 181 442 345 582 124 440 3", "63 41 383 289 367 610 173 551 390 337 500 253 45 9", "7 135 23 48 32 371 309 591 176 540 157 522 401 25 ", "12 350 53 490 70 96 403 89 329 434 31 208 61 370 3", "72 29 77 459 140 340 52 607 127 158 299 292 535 37", "5 358 229 595 492 585 212 545 594 11 580 27 248 14", " 60 576 482 565 251 436 531 206 617 132 35 430 546", " 346 566 380 131 224 602 552 568 126 377 239 235 2", "40 296 519 163 105 195 530 51 222 421 541 548 601 ", "165 284 274 527 187 246 603 356 444 63 461 558 395", " 578 152 486 17 234 142 118 422 74 385 4 513 162 1", "29 612 463 332 398 55 282 454 245 115 554 504 336 ", "411 514 232 557 34 217 512 556 147 178 18 179 407 ", "0 8 315 247 524 335 343 606 317 9 180 155 455 125 ", "100 107 466 153 534 130 168 174 528"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 704323121;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> afterFourClicks = {"590 206 102 609 8 324 458 523 470 532 331 0 124 42", "8 610 576 584 521 296 554 341 149 289 608 564 5 34", " 533 73 422 385 131 40 99 16 163 583 279 221 352 2", "19 593 150 361 182 205 178 423 132 137 59 612 388 ", "193 413 605 139 128 588 76 127 348 566 511 237 574", " 105 103 375 329 46 378 570 147 311 31 192 164 365", " 357 305 444 611 560 603 347 74 108 578 591 350 24", "1 184 30 25 630 239 572 307 119 175 248 432 106 40", "4 327 536 486 545 162 118 2 351 472 112 189 335 22", "4 500 160 497 551 271 406 123 477 623 499 3 57 614", " 353 142 161 496 561 602 531 509 567 617 265 606 6", "21 465 632 191 51 476 148 208 312 446 596 165 291 ", "420 70 12 493 589 492 443 464 303 487 125 468 63 1", "34 484 242 616 442 287 398 346 471 89 233 598 284 ", "6 177 363 211 488 38 322 141 624 10 310 427 377 30", "1 13 396 82 66 223 35 454 56 429 71 633 355 212 21", "8 158 362 172 395 383 19 290 129 257 159 15 522 31", "5 535 64 433 426 246 188 403 198 104 281 174 595 1", "22 344 222 525 187 524 217 58 437 91 638 249 325 1", "45 299 309 587 146 274 94 461 384 101 167 272 143 ", "245 419 438 201 300 520 440 11 243 262 581 387 202", " 382 7 54 439 318 32 459 140 216 580 367 601 390 3", "70 544 215 456 547 42 61 405 337 44 506 573 214 56", "5 542 490 585 424 157 115 113 21 316 537 600 397 9", "0 338 356 313 504 288 37 190 415 79 228 293 199 97", " 332 22 594 194 213 515 304 411 98 153 156 60 555 ", "282 28 636 87 204 292 18 264 254 252 414 389 604 5", "19 227 229 41 78 14 358 553 77 586 260 334 323 368", " 364 400 294 253 67 306 230 68 258 452 618 72 173 ", "180 24 179 518 379 136 563 238 297 321 399 285 277", " 478 154 349 463 259 568 552 75 371 43 628 473 436", " 130 417 263 171 494 120 435 100 170 186 26 416 57", "5 409 559 49 448 111 451 336 622 62 197 343 110 41", "0 503 462 501 116 275 401 88 513 425 256 548 449 1", "07 86 45 402 195 121 55 266 268 549 298 430 582 54", "6 176 510 267 27 512 17 483 626 209 52 84 155 286 ", "48 412 634 183 29 69 53 386 391 168 571 418 85 250", " 326 65 200 114 480 96 527 231 319 445 467 138 181", " 280 562 450 295 538 526 393 369 550 251 637 543 2", "03 144 339 330 283 247 381 460 354 366 557 196 302", " 505 407 151 47 50 81 276 592 479 39 9 441 631 269", " 491 328 225 340 569 620 135 185 236 627 226 534 3", "42 629 508 579 333 502 625 599 360 92 234 320 169 ", "36 541 453 372 166 498 529 317 152 482 207 457 607", " 635 33 558 261 4 126 93 95 314 240 447 278 83 270", " 220 530 80 376 117 308 434 517 20 23 380 431 421 ", "235 374 255 455 474 528 615 244 373 359 597 133 21", "0 556 345 514 392 469 475 577 619 232 507 539 489 ", "273 485 495 540 394 466 481 613 1 516 109 408"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> afterFourClicks = {"540 622 617 247 45 147 615 184 597 70 628 355 239 ", "262 323 272 69 285 349 475 579 612 215 521 117 499", " 406 267 307 598 509 385 237 227 433 539 29 602 40", "3 187 2 97 151 520 61 526 589 233 561 159 610 613 ", "543 555 134 236 64 590 608 252 214 216 4 257 81 58", "8 24 284 621 183 258 508 170 204 7 447 188 90 20 3", "39 19 250 376 50 251 255 241 538 41 72 105 457 160", " 209 436 207 161 547 481 194 353 14 624 165 220 89", " 487 191 114 18 451 537 31 377 130 95 391 438 54 3", "33 586 511 223 5 80 28 618 332 124 260 259 30 466 ", "33 104 99 464 407 399 222 350 254 313 235 584 449 ", "461 85 501 49 238 143 268 106 127 116 210 244 162 ", "367 346 93 337 388 541 542 483 592 572 263 375 84 ", "340 121 156 198 626 296 107 145 280 378 225 217 56", "8 524 558 347 371 370 557 108 63 519 283 348 197 4", "71 614 177 366 304 112 155 411 200 563 43 446 256 ", "421 458 195 186 62 502 150 295 430 83 133 380 87 1", "7 424 271 432 496 472 510 261 567 77 587 141 609 5", "7 354 163 60 144 533 503 224 312 137 423 37 453 52", " 13 94 36 51 168 148 319 477 606 505 373 138 530 2", "97 546 604 594 550 110 175 300 467 289 459 136 480", " 320 368 1 476 492 422 363 486 485 428 146 400 25 ", "582 153 479 382 566 174 450 462 27 392 103 454 554", " 504 243 322 482 386 129 123 264 474 0 559 291 523", " 56 536 431 596 361 413 374 111 409 58 329 345 490", " 16 404 46 389 465 468 311 574 44 435 38 517 455 6", "23 298 420 226 357 627 498 341 531 279 193 575 484", " 115 393 76 274 580 314 548 513 205 91 100 48 230 ", "473 460 506 448 22 266 189 113 232 369 218 132 67 ", "140 208 591 394 179 9 564 593 336 338 356 529 396 ", "39 331 154 88 182 23 362 34 288 78 556 302 410 514", " 21 416 325 181 149 419 488 42 309 65 301 292 221 ", "126 439 414 334 387 469 290 507 240 270 534 493 60", "5 299 249 185 120 585 535 358 518 528 619 128 231 ", "142 316 544 125 365 571 277 71 600 213 269 452 577", " 79 576 599 6 3 581 437 119 352 565 395 228 172 57", "8 415 73 402 463 412 343 607 625 445 360 527 68 19", "6 15 74 351 532 553 245 26 478 318 246 359 118 282", " 190 440 444 308 390 569 101 178 203 253 206 211 4", "7 330 381 96 418 489 10 131 167 426 32 570 305 157", " 53 494 12 66 429 82 315 219 545 515 583 522 560 4", "34 408 276 525 171 287 201 234 35 425 342 55 384 3", "35 456 512 442 344 158 383 11 441 495 552 549 616 ", "611 278 102 173 92 135 286 166 328 75 417 169 405 ", "317 601 364 372 294 443 379 321 122 326 164 40 139", " 293 98 491 401 8 310 470 273 303 248 152 59 620 1", "99 212 603 573 202 516 427 281 109 551 562 324 595", " 242 327 229 192 86 497 398 176 265 397 275 306 50", "0 180"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 213403415;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> afterFourClicks = {"361 565 23 95 634 92 129 443 281 85 9 602 28 448 5", "89 579 404 396 239 212 263 81 62 563 597 507 151 1", "64 94 525 375 292 72 466 510 501 220 511 427 590 2", "64 295 457 618 324 282 73 222 605 337 574 506 317 ", "243 514 578 160 409 221 370 538 449 177 456 487 48", "9 49 116 417 182 179 66 284 576 203 615 476 153 22", "6 152 38 522 36 312 43 261 393 170 429 279 143 462", " 625 603 44 627 371 527 362 130 339 276 68 419 334", " 311 631 187 518 639 469 227 407 463 547 593 217 5", "91 100 468 280 479 5 97 322 224 564 186 604 286 34", " 559 450 554 301 104 509 499 307 229 126 437 600 1", "41 421 475 325 601 508 316 533 207 171 552 89 569 ", "530 56 244 492 277 424 208 532 406 641 99 37 215 2", "5 87 210 195 176 596 154 351 303 521 537 478 266 2", "78 233 131 228 432 204 318 146 611 178 60 114 344 ", "76 504 632 234 74 213 211 391 497 528 158 545 86 1", "47 197 260 125 400 635 58 536 374 13 495 240 416 2", "31 105 230 15 82 568 494 561 11 159 33 609 17 181 ", "313 108 524 546 471 155 90 587 383 285 454 452 302", " 115 459 21 617 242 326 592 505 420 65 214 580 464", " 10 46 293 142 343 52 6 183 168 436 394 163 378 16", "1 470 595 638 541 372 588 54 298 202 573 433 355 2", "74 174 172 223 577 98 549 388 323 585 123 486 135 ", "150 477 0 327 636 610 387 364 145 70 247 47 41 439", " 93 392 198 451 550 144 192 209 584 599 329 19 30 ", "365 548 275 413 96 543 259 369 379 373 306 289 496", " 380 271 253 309 338 445 119 408 399 438 366 117 5", "3 349 341 254 485 42 367 91 572 191 241 305 357 24", " 405 18 453 299 75 523 22 633 258 342 269 425 32 3", "35 340 12 435 539 384 467 31 71 386 149 493 140 67", " 156 401 127 268 571 402 359 189 193 398 350 57 55", "1 567 124 165 594 112 562 308 4 358 256 503 236 44", "4 103 35 363 484 356 415 377 395 502 422 441 626 3", "36 529 205 139 455 619 39 346 194 122 257 442 526 ", "188 513 287 491 613 498 482 232 473 20 245 481 348", " 319 557 403 184 218 272 111 516 390 519 113 69 29", "6 3 544 225 620 623 250 235 180 121 637 133 48 428", " 331 120 83 434 431 304 134 59 321 107 500 385 246", " 273 40 583 109 474 347 418 531 488 199 77 102 354", " 136 360 55 51 553 581 78 270 249 157 614 352 310 ", "14 368 200 106 582 458 291 426 26 128 328 558 248 ", "201 167 265 45 315 616 353 137 517 414 381 2 148 5", "98 483 612 332 512 411 185 608 423 622 621 196 101", " 480 345 7 297 535 162 566 515 173 330 132 29 118 ", "570 542 262 290 376 8 333 1 238 61 461 110 63 555 ", "397 412 294 219 50 534 490 560 460 628 586 556 255", " 27 320 314 472 629 540 216 64 389 138 607 80 520 ", "190 16 237 465 440 79 640 575 283 251 630 84 252 2", "06 175 382 166 624 447 430 267 606 288 88 169 642 ", "410 446 300"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 454656953;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> afterFourClicks = {"1 2 3 4 5 6 7 8 9 0 11 12 13 14 15 16 17 18 19 10 ", "21 22 23 24 25 26 27 28 29 20 31 32 33 34 35 36 37", " 38 39 30 41 42 43 44 45 46 47 48 49 50 51 52 53 4", "0 55 56 57 58 59 60 61 62 63 64 65 66 67 54 69 70 ", "71 72 73 74 75 76 77 78 79 80 81 68 83 84 85 86 87", " 88 89 90 91 92 93 94 95 82 97 98 99 100 101 102 1", "03 104 105 106 96 108 109 110 111 107 113 114 115 ", "116 117 118 119 120 121 122 123 124 125 126 127 12", "8 112 130 131 132 133 134 135 136 137 129 139 140 ", "141 142 143 144 145 146 147 148 149 150 151 152 13", "8 154 155 156 157 158 159 160 161 162 163 153 165 ", "166 167 168 169 170 171 172 173 174 175 164 177 17", "8 179 180 181 182 183 184 185 186 187 176 189 190 ", "191 192 193 194 195 196 197 198 199 188 201 202 20", "3 204 205 206 207 208 209 210 211 200 213 214 215 ", "216 217 218 219 220 221 222 223 224 225 226 212 22", "8 229 230 231 232 227 234 235 236 237 238 233 240 ", "241 242 243 244 239 246 247 248 249 250 245 252 25", "3 254 255 256 257 258 259 260 261 262 263 264 265 ", "266 267 251 269 270 271 272 268 274 275 276 277 27", "8 279 280 281 282 283 284 285 286 287 273 289 290 ", "291 292 293 294 288 296 297 298 299 300 301 302 29", "5 304 305 306 307 308 309 310 303 312 313 314 315 ", "316 317 318 311 320 321 322 323 324 325 326 319 32", "8 329 330 331 332 333 334 335 336 337 338 339 327 ", "341 342 343 344 345 346 347 348 349 350 351 352 35", "3 354 355 356 357 358 340 360 361 362 363 364 365 ", "366 367 368 369 370 371 359 373 374 375 376 377 37", "8 372 380 381 382 383 384 385 386 387 388 389 379 ", "391 392 393 394 395 396 397 398 390 400 401 402 40", "3 404 405 406 399 408 409 410 411 412 413 414 407 ", "416 417 418 419 420 421 422 415 424 425 426 427 42", "8 429 430 423 432 433 434 435 436 437 438 439 440 ", "441 442 443 431 445 446 447 448 449 450 451 452 45", "3 454 444 456 457 458 459 455 461 462 463 464 465 ", "466 467 468 469 470 471 472 460 474 475 476 477 47", "8 479 480 481 482 483 484 485 486 487 473 489 490 ", "491 492 493 494 495 496 497 498 499 500 501 502 48", "8 504 505 506 507 508 509 510 511 512 513 514 515 ", "516 517 503 519 520 521 522 523 524 525 526 527 51", "8 529 530 531 532 533 534 535 536 537 528 539 540 ", "541 542 543 544 545 546 547 538 549 550 551 552 55", "3 554 555 556 557 548 559 560 561 562 563 564 565 ", "566 567 568 569 570 571 572 573 574 558 576 577 57", "8 579 580 581 582 583 584 585 586 587 588 589 590 ", "591 575 593 594 595 596 597 598 599 600 601 602 60", "3 604 605 606 607 608 592 610 611 612 613 614 615 ", "616 617 609 619 620 621 622 623 624 618 626 627 62", "8 629 630 631 632 633 634 635 625 637 638 639 640 ", "641 642 643 644 645 646 647 648 636 649 650 651"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 949905720;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> afterFourClicks = {"8 7 6 5 4 3 2 1 0 9 10 11 12 13 14 15 16 17 18 19"};
    FleaCircus* pObj = new FleaCircus();
    clock_t start = clock();
    int result = pObj->countArrangements(afterFourClicks);
    clock_t end = clock();
    delete pObj;
    int expected = 474894336;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13351270&rd=14738&pm=12044
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <memory> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <deque> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
typedef long long Int; 
typedef pair<int,int> PII; 
typedef vector<int> VInt; 
 
#define FOR(i, a, b) for(i = (a); i < (b); ++i) 
#define RFOR(i, a, b) for(i = (a) - 1; i >= (b); --i) 
#define CLEAR(a, b) memset(a, b, sizeof(a)) 
#define SIZE(a) int((a).size())  
#define ALL(a) (a).begin(),(a).end()  
#define PB push_back 
#define MP make_pair 
 
#define MOD 1000000009 
 
int A[1 << 10]; 
int B[1 << 10]; 
int C[1 << 10]; 
Int R[1 << 10][1 << 10]; 
 
Int F(int n, int cnt) 
{ 
  Int& res = R[n][cnt]; 
  if(res != -1) 
    return res; 
 
  if(cnt == 0) 
    return res = 1; 
 
  res = 0; 
  if(cnt >= 4) 
  { 
    Int a = (cnt - 1)*(cnt - 2)*(cnt - 3); 
    Int b = (a*n*n*n) % MOD; 
    res += (F(n, cnt - 4)*b) % MOD; 
  } 
 
  if(n % 2 != 0 && cnt >= 2) 
    res += (F(n, cnt - 2)*(cnt - 1)*n) % MOD; 
 
  if(n % 2 != 0) 
    res += F(n, cnt - 1); 
 
  res %= MOD; 
  return res; 
} 
 
 
class FleaCircus { 
  public: 
  int countArrangements(vector <string> afterFourClicks) 
  { 
    string s = ""; 
 
    int i; 
    FOR(i, 0, SIZE(afterFourClicks)) 
      s = s + afterFourClicks[i]; 
 
    stringstream ss(s); 
    int n = 0; 
    while(ss >> A[n]) 
      ++n; 
 
    CLEAR(B, 0); 
    CLEAR(C, 0); 
    FOR(i, 0, n) 
      if(B[i] == 0) 
      { 
        int a = i; 
        int cnt = 0; 
        while(B[a] == 0) 
        { 
          B[a] = 1; 
          a = A[a]; 
          ++cnt; 
        } 
 
        ++C[cnt]; 
      } 
 
    CLEAR(R, -1); 
    Int res = 1; 
    FOR(i, 1, n + 1) 
      res = (res * F(i, C[i])) % MOD; 
 
    return int(res); 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/