/// week4_project.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <bangtal.h>

//Scene1을 선언하기
SceneID scene1;

ObjectID puzzle1, puzzle2, puzzle3, puzzle4, puzzle5, puzzle6;

ObjectID white1, white2, white3, white4, white5, white6;
ObjectID puzzle1_1, puzzle2_1, puzzle3_1, puzzle4_1, puzzle5_1, puzzle6_1;
ObjectID clicked, clicked1, clicked2, clicked3, clicked4, clicked5;
ObjectID restart, hint, hintpicture;



void mouseCallback(ObjectID object, int x, int y, MouseAction action) {

    if (object == puzzle1) {
        showObject(clicked);
    }
    else if (object == white1) {
        hideObject(puzzle1);
        showObject(puzzle1_1);
        showMessage("스폰지밥 : 조각이 딱 맞는다!!!");
    }


    if (object == puzzle2) {
        showObject(clicked1);
    }
    else if (object == white6) {
        hideObject(puzzle2);
        showObject(puzzle2_1);
        showMessage("스폰지밥: 조각이 딱 맞는다!!!");
    }


    if (object == puzzle3) {
        showObject(clicked2);
    }
    else if (object == white2) {
        hideObject(puzzle3);
        showObject(puzzle3_1);
        showMessage("스폰지밥 : 조각이 딱 맞는다!!!");
    }


    if (object == puzzle4) {
        showObject(clicked3);
    }
    else if (object == white3) {
        hideObject(puzzle4);
        showObject(puzzle4_1);
        showMessage("스폰지밥 : 조각이 딱 맞는다!!!");
    }


    if (object == puzzle5) {
        showObject(clicked4);
    }
    else if (object == white4) {
        hideObject(puzzle5);
        showObject(puzzle5_1);
        showMessage("스폰지밥 : 조각이 딱 맞는다!!!");
    }


    if (object == puzzle6) {
        showObject(clicked5);
    }
    else if (object == white5) {
        hideObject(puzzle6);
        showObject(puzzle6_1);
        showMessage("스폰지밥 : 조각이 딱 맞는다!!!");
    }


    if (object == restart) {
        showMessage("우리 처음부터 다시 잘해보쟈!! ^^!!");
        showObject(puzzle1);
        showObject(puzzle2);
        showObject(puzzle3);
        showObject(puzzle4);
        showObject(puzzle5);
        showObject(puzzle6);
        hideObject(puzzle1_1);
        hideObject(puzzle2_1);
        hideObject(puzzle3_1);
        hideObject(puzzle4_1);
        hideObject(puzzle5_1);
        hideObject(puzzle6_1);
        hideObject(clicked);
        hideObject(clicked1);
        hideObject(clicked2);
        hideObject(clicked3);
        hideObject(clicked4);
        hideObject(clicked5);


    }

    if (object == hint) {
        showObject(hintpicture);
    }

}



int main()
{
    //마우스 이벤트를 처리할 callback 함수를 등록한다
    setMouseCallback(mouseCallback);


    SceneID scene1 = createScene("퍼즐 맞추기", "스폰지밥 배경.png");

    //문제 이미지를 object로 생성한다.
    puzzle1 = createObject("1-1.png");
    locateObject(puzzle1, scene1, 150, 50);
    showObject(puzzle1);

    puzzle2 = createObject("3.png");
    locateObject(puzzle2, scene1, 10, 490);
    showObject(puzzle2);

    puzzle3 = createObject("2--1.png");
    locateObject(puzzle3, scene1, 60, 270);
    showObject(puzzle3);

    puzzle4 = createObject("3-1.png");
    locateObject(puzzle4, scene1, 1050, 50);
    showObject(puzzle4);

    puzzle5 = createObject("1.png");
    locateObject(puzzle5, scene1, 990, 270);
    showObject(puzzle5);

    puzzle6 = createObject("2.png");
    locateObject(puzzle6, scene1, 1070, 480);
    showObject(puzzle6);

    clicked = createObject("clicked.png");
    locateObject(clicked, scene1, 175, 50);
    hideObject(clicked);

    clicked1 = createObject("clicked_1.png");
    locateObject(clicked1, scene1, 55, 535);
    hideObject(clicked1);

    clicked2 = createObject("clicked_2.png");
    locateObject(clicked2, scene1, 100, 300);
    hideObject(clicked2);

    clicked3 = createObject("clicked_3.png");
    locateObject(clicked3, scene1, 1100, 80);
    hideObject(clicked3);

    clicked4 = createObject("clicked_4.png");
    locateObject(clicked4, scene1, 1045, 290);
    hideObject(clicked4);

    clicked5 = createObject("clicked_5.png");
    locateObject(clicked5, scene1, 1110, 530);
    hideObject(clicked5);

    white1 = createObject("흰색.png");
    locateObject(white1, scene1, 385, 365);
    showObject(white1);

    white2 = createObject("흰색_1.png");
    locateObject(white2, scene1, 588, 370);
    showObject(white2);

    white3 = createObject("흰색_2.png");
    locateObject(white3, scene1, 750, 370);
    showObject(white3);

    white4 = createObject("흰색_3.png");
    locateObject(white4, scene1, 385, 192);
    showObject(white4);

    white5 = createObject("흰색_4.png");
    locateObject(white5, scene1, 588, 192);
    showObject(white5);

    white6 = createObject("흰색_5.png");
    locateObject(white6, scene1, 750, 192);
    showObject(white6);

    puzzle1_1 = createObject("1-1_1.png");
    locateObject(puzzle1_1, scene1, 380, 380);
    hideObject(puzzle1_1);

    puzzle2_1 = createObject("3_1.png");
    locateObject(puzzle2_1, scene1, 765, 192);
    hideObject(puzzle2_1);

    puzzle3_1 = createObject("2--1_1.png");
    locateObject(puzzle3_1, scene1, 578, 380);
    hideObject(puzzle3_1);

    puzzle4_1 = createObject("3-1_1.png");
    locateObject(puzzle4_1, scene1, 756, 379);
    hideObject(puzzle4_1);

    puzzle5_1 = createObject("1_1.png");
    locateObject(puzzle5_1, scene1, 383, 187);
    hideObject(puzzle5_1);

    puzzle6_1 = createObject("2_1.png");
    locateObject(puzzle6_1, scene1, 578, 191);
    hideObject(puzzle6_1);

    restart = createObject("restart.png");
    locateObject(restart, scene1, 468, 668);
    showObject(restart);


    hint = createObject("hint.png");
    locateObject(hint, scene1, 670, 668);
    showObject(hint);

    hintpicture = createObject("hintpicture.png");
    locateObject(hintpicture, scene1, 835, 680);
    hideObject(hintpicture);


    //게임 메세지를 보인다.
    showMessage("스폰지밥 : 퍼즐 조각을 먼저 클릭해! 그 다음에 조각을 놓을 위치를 클릭해!");


    //scene1에서 게임을 시작한다.
    startGame(scene1);


}