#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <windows.h> 
#include "sio_client.h"

#define SINGLE_PLAY 1
#define MULTI_PLAY 2
#define SERVER_ADDRESS "http://192.168.0.7:3000"
#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15 

using namespace sio;
using namespace std;

<<<<<<< HEAD
//�Լ�
void initial();//����� ���� �ʱ�ġ ����
void cp_initial();//��ǻ���� ���� �ʱ�ġ ����
void position();//������� �� ��ġ ���� �������� �׸��� ��������
void cp_position();//65=�װ�����(aircraft carrier), 66=����(battleship), 68=������(destroyer), 83=�����(submarine), 80=�ʰ���(patrol boat)

void multi_play();//�濡 �����Ǿ� ��Ƽ�÷��� ���� ���� 
void print_board();//������� ���� ���
void cp_print_board();//��ǻ���� ���� ���
void attack();//������� ����
void cp_attack();//��ǻ���� ����. 120=hit, 46=miss
int attack_check(int row, int column);//Ȯ���Ѵ� ������ �����Ͽ������, ��ģ��� �Ǵ� ��ǻ���� ���ο� ����  checks if the point is attacked, missed or new from the pc's board (���ο������� ����?)
int cp_attack_check(int row, int column);//Ȯ���Ѵ� ������ �����Ͽ������, ��ģ��� �Ǵ� ������� ���ο� ����??checks if the point is attacked, missed or new from the player's board
int rand_num(int high); //�Ķ���Ͱ����� ���� �����Լ�
int victory_check();//����ڰ� �̰���� Ȯ��
int cp_victory_check();//��ǻ�Ͱ� �̰���� Ȯ��
=======
//함수
void initial();//사용자 보드 초기치 설정
void cp_initial();//컴퓨터의 보드 초기치 설정
void position();//사용자의 배 위치 오직 수평으로 그리고 수직으로
void cp_position();//65=항공모함(aircraft carrier), 66=전함(battleship), 68=구축함(destroyer), 83=잠수함(submarine), 80=초계정(patrol boat)

void print_board();//사용자의 보드 출력
void cp_print_board();//컴퓨터의 보드 출력
void attack();//사용자의 공격
void cp_attack();//컴퓨터의 공격. 120=hit, 46=miss
int attack_check(int row, int column);//확인한다 지점을 공격하였을경우, 놓친경우 또는 컴퓨터의 새로운 지점  checks if the point is attacked, missed or new from the pc's board (새로운지점은 뭐죠?)
int cp_attack_check(int row, int column);//확인한다 지점을 공격하였을경우, 놓친경우 또는 사용자의 새로운 보드??checks if the point is attacked, missed or new from the player's board
int rand_num(int high); //파라미터값보다 낮은 랜덤함수
int victory_check();//사용자가 이겼는지 확인
int cp_victory_check();//컴퓨터가 이겼는지 확인
>>>>>>> refs/remotes/KimHyeongSeon/master
void ship_coordinates();//goes through the board and records the player's ship coordinates
int distance_check(int a, int b, int num);//확인한다 보트의 위치가 유효한지 맞으면 1, 아니면 0 
void textcolor(int foreground, int background); //텍스트 컬러 변경 함수
										  //전역함수
int board[10][10];
int cp_board[10][10];
int A[5][2];
int B[4][2];
int D[3][2];
int S[3][2];
int P[2][2];
int HIT = 0, row, column;
char SHIP;
char state[6];//컴퓨터가 공격하거나 놓칠 말한다.
int multiPlayCheck;
string roomIndex;// ��Ƽ�÷��� ������ ���� �ε���
sio::client h; // ��Ƽ�÷��̿� ���̴� socket.io Ŭ���̾�Ʈ.

int main()
{
	textcolor(YELLOW, BLACK);
	printf("\n\n\n\n\n\n");
	printf("XXXXX   XXXX  XXXXXX XXXXXX XX     XXXXXX  XXXXX XX  XX XX XXXX\n");
	printf("XX  XX XX  XX   XX     XX   XX     XX     XX     XX  XX XX XX  XX\n");
	printf("XXXXX  XX  XX   XX     XX   XX     XXXX    XXXX  XXXXXX XX XXXX\n");
	printf("XX  XX XXXXXX   XX     XX   XX     XX         XX XX  XX XX XX\n");
	printf("XXXXX  XX  XX   XX     XX   XXXXXX XXXXXX XXXXX  XX  XX XX XX\n");
	printf("\n\n\n\n");
	textcolor(WHITE, BLACK);
<<<<<<< HEAD

	printf("1. �̱� �÷��� \n2. ��Ƽ �÷���\n3. ����\n");
	printf("�Է� : ");
	scanf("%d", &multiPlayCheck); // �̱��÷���, ��Ƽ�÷��� ���� 

	if (multiPlayCheck == SINGLE_PLAY) {  // �̱��÷����ϰ��
=======
	printf("1. 싱글 플레이 \n2. 멀티 플레이");
	scanf("%d", &multiPlayCheck); // 싱글플레이, 멀티플레이 선택 
	
	if (multiPlayCheck == SINGLE_PLAY) {  // 싱글플레이일경우
>>>>>>> refs/remotes/KimHyeongSeon/master
		int turn_count = 1;
		//player
		initial();
		position();
		ship_coordinates();
		//pc
		cp_initial();
		cp_position();
		system("cls");
		while (1)
		{
			//player's turn        
			printf("사용자의 턴 %d:\n\n", turn_count);
			cp_print_board();
			attack();
			if (victory_check() == 0)    //남은 배가 없나 확인
			{
				break;
			}

			//cp's turn
			cp_attack();
			system("cls");
			printf("컴퓨터의 턴 %d: (%d,%d) %s \n\n", turn_count, (row + 1), (column + 1), state);
			print_board();
			if (cp_victory_check() == 0)      // 남은 배가 없나 확인
			{
				break;
			}
			turn_count++;
		}
		if (victory_check() == 0)
		{
			printf("\nYou won!! Congratulations!\n");
			system("pause");
		}
		else if (cp_victory_check() == 0)
		{
			printf("\nYou lost! Good luck next time!\n");
			system("pause");
		}
	}
	else if (multiPlayCheck == MULTI_PLAY) // ��Ƽ�÷����ϰ��
	{
		int eventFlag = 0;

		h.connect(SERVER_ADDRESS);


		Sleep(250); // TODO �̺κ� ���ӽ� �̺�Ʈ �߻�ó���� �����ؾ���. https://github.com/socketio/socket.io-client-cpp/blob/master/API.md

		h.socket()->on("GetRoomListRes", [&](sio::event& ev)  // ���� �������� �ݹ� �̺�Ʈ
		{

			cout << ev.get_messages()[0]->get_string(); // ����� ���

			cout << "\n �����Ͻ� ���� ��ȣ�� �Է����ּ���.";
			getline(cin, roomIndex);
			std::getline(cin, roomIndex);

			h.socket()->on("JoinRoom" + h.get_sessionid(), [&](sio::event& ev)  // ���� �������� �ݹ� �̺�Ʈ
			{
				cout << "\n ������ �����մϴ�.";
				multi_play();
			});

			h.socket()->emit("JoinRoom", roomIndex);

		});

		int flag;
<<<<<<< HEAD

		printf("1. ���� �������� �� ����\n2. �� �����ϱ�\n");
		printf("�Է� : ");
=======
		printf("1. 방목록 가져오기\n2. 방 생성하기");
>>>>>>> refs/remotes/KimHyeongSeon/master
		scanf("%d", &flag);

		if (flag == 1) {
			h.socket()->emit("GetRoomList");
		}
		else if (flag == 2)
		{
			string roomName; // ���ڿ� ���̸�
			printf("������ ���� �̸��� �Է��Ͻÿ�.\n");
			printf("�Է� : ");
			getline(cin, roomName);
			std::getline(cin, roomName);

			h.socket()->on("JoinRoom" + h.get_sessionid(), [&](sio::event& ev)
			{
				roomIndex = ev.get_messages()[0]->get_string();
				cout << "\n ������ �����Ͽ� ������ �����մϴ�.";
				multi_play();
			});

			h.socket()->emit("CreateRoom", roomName); // ������ ���.
			
			cout << "������ �����Ҷ����� ��ٸ��ʽÿ�.";
		}

		while (true) {
			Sleep(200); // ���ҽ� ���� ����
		}
		
	}
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void multi_play()
{
	initial();
	cp_initial();
	position();
	
	//TODO h.socket()->on("���ݹ״���̺�Ʈ"); �߰� �ؾ���
	h.socket()->emit("SetPositionDone", roomIndex);
	cout << "������ ���Թ�ġ�� ��ٷ��ּ���.";

}

///////////////////////////////////////////////////////////////////////////////////////////////////////
int victory_check()
{
	int i, j, boats_left = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (cp_board[i][j] == 65 || cp_board[i][j] == 66 || cp_board[i][j] == 68 || cp_board[i][j] == 83 || cp_board[i][j] == 80)
			{
				boats_left += 1;
			}

		}
	}
	return boats_left;//남은 배가 없으면 return 0;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////

int cp_victory_check()
{
	int i, j, boats_left = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (board[i][j] == 65 || board[i][j] == 66 || board[i][j] == 68 || board[i][j] == 83 || board[i][j] == 80)
			{
				boats_left += 1;
			}
		}
	}
	return boats_left;  //남은 배가 없으면 return 0;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////

void initial()    //사용자 보드 초기치 설정
{
	int i, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			board[i][j] = 126;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

void cp_initial()     //컴퓨터 보드 초기치 설정
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			cp_board[i][j] = 126;
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

void print_board()
{
	int i, j, k;
	for (k = 0; k < 11; k++)
	{
		if (k == 0)
		{
			printf("   ");
		}
		else
		{
			printf("%3d", k);
		}

	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", (i + 1));
		for (j = 0; j < 10; j++)
		{
			printf("%3c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

void cp_print_board()
{
	int i, j, k;
	for (k = 0; k < 11; k++)
	{
		if (k == 0)
		{
			printf("   ");
		}
		else
		{
			printf("%3d", k);
		}
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", (i + 1));
		for (j = 0; j < 10; j++)
		{
			switch (cp_board[i][j])
			{
			case 65:      //65 = 항공모함(aircraft carrier) 
			case 66:      //66 = 전함(battleship)
			case 68:      //68 = 구축함(destroyer)
			case 83:      //83 = 잠수함(submarine)
			case 80:      //80 = 초계정(patrol boat)
				printf("%3c", 126);
				break;
			case 120:     //????
			case 126:     //????
			case 46:      //????
				printf("%3c", cp_board[i][j]);
				break;
			}
		}
		printf("\n");
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

int distance_check(int a, int b, int num)
{
	int temp;
	if (b > a)       //a가 항상 크다 그래서 b가 더 커지면 자리를 바꾼다.
	{
		temp = b;
		b = a;
		a = temp;
	}
	if ((a - b) == (num - 1))
	{
		return 1;    //returns 1 if the value is ok
	}
	else
	{
		return 0;   //returns 0 if the value is not ok
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

void position()
{
	int column, row, column2, row2, i, found, dist1, dist2;

	///////////////Aircraft carrier 65 항공모함
	system("cls");
	printf("★★★★★★함대 배치중★★★★★★\n\n");
	print_board();
	do
	{
		printf("항공모함 5대를 한줄로 배치해주세요. \n시작좌표를 입력해주세요 \n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row);
		} while (row < 1 || row>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column);
		} while (column < 1 || column>10);

		printf("배치가 끝나는 좌표를 입력해주세요\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row2);
		} while (row2 < 1 || row2>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column2);
		} while (column2 < 1 || column2>10);

		dist1 = distance_check(row, row2, 5);//vertical 수직
		dist2 = distance_check(column, column2, 5);//horizontal  수평
		found = 0;
		if (dist1 == 1)    //배가 수직으로 배열되여있다면 if the ship is placed vertically
		{
			if (row > row2)
			{
				for (i = 0; i < 5; i++)
				{
					if (board[row - 1 - i][column - 1] != 126)
					{
						found++;
					}
				}
			}
			else if (row2 > row)
			{
				for (i = 0; i < 5; i++)
				{
					if (board[row - 1 + i][column - 1] != 126)
					{
						found++;
					}
				}
			}
		}
		else if (dist2 == 1) //배가 수평으로 배치되여있다면  if the ship is placed horizontally
		{
			if (column > column2)
			{
				for (i = 0; i < 5; i++)
				{
					if (board[row - 1][column - 1 - i] != 126)
					{
						found++;
					}
				}
			}
			else if (column2 > column)
			{
				for (i = 0; i < 5; i++)
				{
					if (board[row - 1][column - 1 + i] != 126)
					{
						found++;
					}
				}
			}
		}
		if ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0)
		{
			system("cls");
			printf("★★★★★★함대 배치중★★★★★★\n\n");
			print_board();
			printf("좌표를 다시 입력해주세요\n\n");
		}
	} while ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0);

	if (dist1 == 1) //배가 수직으로 배치 되어있다면 if the ship is placed vertically
	{
		if (row > row2)
		{
			for (i = 0; i < 5; i++)
			{
				board[row - 1 - i][column - 1] = 65;
			}
		}
		else if (row2 > row)
		{
			for (i = 0; i < 5; i++)
			{
				board[row - 1 + i][column - 1] = 65;
			}
		}
	}
	else if (dist2 == 1)   //배가 수평으로 배치되어있다면if the ship is placed horizontally
	{
		if (column > column2)
		{
			for (i = 0; i < 5; i++)
			{
				board[row - 1][column - 1 - i] = 65;
			}
		}
		else if (column2 > column)
		{
			for (i = 0; i < 5; i++)
			{
				board[row - 1][column - 1 + i] = 65;
			}
		}
	}

	////////////////////////////Battleship 66 전함
	system("cls");
<<<<<<< HEAD
	printf("�ڡڡڡڡڡ��Դ� ��ġ�ߡڡڡڡڡڡ�\n\n");
=======
	printf("★★★★★★함대 배치중★★★★★★\n\n");
>>>>>>> refs/remotes/KimHyeongSeon/master
	print_board();
	do
	{
		printf("전함 4대를 한줄로 배치해주세요. \n시작좌표를 입력해주세요 \n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row);
		} while (row < 1 || row>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column);
		} while (column < 1 || column>10);

		printf("배치가 끝나는 좌표를 입력해주세요\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row2);
		} while (row2 < 1 || row2>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column2);
		} while (column2 < 1 || column2>10);

		dist1 = distance_check(row, row2, 4);//vertical수직
		dist2 = distance_check(column, column2, 4);//horizontal 수평
		found = 0;
		if (dist1 == 1) //if the ship is placed vertically 전함이 수직이라면
		{
			if (row > row2)
			{
				for (i = 0; i < 4; i++)
				{
					if (board[row - 1 - i][column - 1] != 126)
					{
						found++;
					}
				}
			}
			else if (row2 > row)
			{
				for (i = 0; i < 4; i++)
				{
					if (board[row - 1 + i][column - 1] != 126)
					{
						found++;
					}
				}
			}
		}
		else if (dist2 == 1) //if the ship is placed horizontally전함이 수평이라면
		{
			if (column > column2)
			{
				for (i = 0; i < 4; i++)
				{
					if (board[row - 1][column - 1 - i] != 126)
					{
						found++;
					}
				}
			}
			else if (column2 > column)
			{
				for (i = 0; i < 4; i++)
				{
					if (board[row - 1][column - 1 + i] != 126)
					{
						found++;
					}
				}
			}
		}
		if ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0)
		{
			system("cls");
			printf("★★★★★★함대 배치중★★★★★★\n\n");
			print_board();
			printf("좌표를 다시 입력해주세요\n\n");
		}
	} while ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0);

	if (dist1 == 1) //if the ship is placed vertically함대가 수직으로 배치되어있으면
	{
		if (row > row2)
		{
			for (i = 0; i < 4; i++)
			{
				board[row - 1 - i][column - 1] = 66;
			}
		}
		else if (row2 > row)
		{
			for (i = 0; i < 4; i++)
			{
				board[row - 1 + i][column - 1] = 66;
			}
		}
	}
	else if (dist2 == 1)//if the ship is placed horizontally 함대가 수평으로 배치되어있으면
	{
		if (column > column2)
		{
			for (i = 0; i < 4; i++)
			{
				board[row - 1][column - 1 - i] = 66;
			}
		}
		else if (column2 > column)
		{
			for (i = 0; i < 4; i++)
			{
				board[row - 1][column - 1 + i] = 66;
			}
		}
	}
	////////////////////Destroyer 68  구축함 
	system("cls");
	printf("★★★★★★함대 배치중★★★★★★\n\n");
	print_board();
	do
	{
		printf("구축함 3대를 한줄로 배치해주세요.\n시작좌표를 입력해주세요 \n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row);
		} while (row < 1 || row>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column);
		} while (column < 1 || column>10);

		printf("배치가 끝나는 좌표를 입력해주세요\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row2);
		} while (row2 < 1 || row2>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column2);
		} while (column2 < 1 || column2>10);

		dist1 = distance_check(row, row2, 3);//vertical수직
		dist2 = distance_check(column, column2, 3);//horizontal 수평
		found = 0;
		if (dist1 == 1) //if the ship is placed vertically함대가 수직으로 배치
		{
			if (row > row2)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1 - i][column - 1] != 126)
					{
						found++;
					}

				}
			}
			else if (row2 > row)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1 + i][column - 1] != 126)
					{
						found++;
					}
				}
			}
		}
		else if (dist2 == 1) //if the ship is placed horizontally 전함이 수평으로 배치
		{
			if (column > column2)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1][column - 1 - i] != 126)
					{
						found++;
					}
				}
			}
			else if (column2 > column)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1][column - 1 + i] != 126)
					{
						found++;
					}
				}
			}
		}
		if ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0) {
			system("cls");
			printf("★★★★★★함대 배치중★★★★★★\n\n");
			print_board();
			printf("좌표를 다시 입력해주세요\n\n");
		}
	} while ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0);

	if (dist1 == 1) //if the ship is placed vertically 전함이 수직으로 배치
	{
		if (row > row2)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1 - i][column - 1] = 68;
			}
		}
		else if (row2 > row)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1 + i][column - 1] = 68;
			}
		}
	}
	else if (dist2 == 1) //if the ship is placed horizontally 전함이 수평으로 배치
	{
		if (column > column2)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1][column - 1 - i] = 68;
			}
		}
		else if (column2 > column)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1][column - 1 + i] = 68;
			}
		}
	}

	//////////////////////////////Submarine  83 잠수함
	system("cls");
	printf("★★★★★★함대 배치중★★★★★★\n\n");
	print_board();
	do
	{
		printf("잠수함 3대를 한줄로 배치해주세요.\n시작좌표를 입력해주세요.\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row);
		} while (row < 1 || row>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column);
		} while (column < 1 || column>10);

		printf("배치가 끝나는 좌표를 입력해주세요\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row2);
		} while (row2 < 1 || row2>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column2);
		} while (column2 < 1 || column2>10);

		dist1 = distance_check(row, row2, 3);//vertical 수직
		dist2 = distance_check(column, column2, 3);//horizontal 수평
		found = 0;
		if (dist1 == 1) //if the ship is placed vertically 전함이 수직일
		{
			if (row > row2)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1 - i][column - 1] != 126)
					{
						found++;
					}
				}
			}
			else if (row2 > row)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1 + i][column - 1] != 126)
					{
						found++;
					}
				}
			}
		}
		else if (dist2 == 1) //if the ship is placed horizontally 전함의 배치가 수평일
		{
			if (column > column2)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1][column - 1 - i] != 126)
					{
						found++;
					}
				}
			}
			else if (column2 > column)
			{
				for (i = 0; i < 3; i++)
				{
					if (board[row - 1][column - 1 + i] != 126)
					{
						found++;
					}
				}
			}
		}
		if ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0)
		{
			system("cls");
			printf("★★★★★★함대 배치중★★★★★★\n\n");
			print_board();
			printf("좌표를 다시 입력해주세요\n\n");
		}
	} while ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0);

	if (dist1 == 1) //if the ship is placed vertically 전함의 배치가 수직일 경우
	{
		if (row > row2)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1 - i][column - 1] = 83;
			}
		}
		else if (row2 > row)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1 + i][column - 1] = 83;
			}
		}
	}
	else if (dist2 == 1) //if the ship is placed horizontally 전함의 배치가 수평일겨우
	{
		if (column > column2)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1][column - 1 - i] = 83;
			}
		}
		else if (column2 > column)
		{
			for (i = 0; i < 3; i++)
			{
				board[row - 1][column - 1 + i] = 83;
			}
		}
	}

	//////////////////Patrol boat  80 초계정
	system("cls");
	printf("★★★★★★함대 배치중★★★★★★\n\n");
	print_board();
	do
	{
		printf("초계정 2대를 한줄로 배치해주세요.\n시작좌표를 입력해주세요.\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row);
		} while (row < 1 || row>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column);
		} while (column < 1 || column>10);

		printf("배치가 끝나는 좌표를 입력해주세요\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row2);
		} while (row2 < 1 || row2>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column2);
		} while (column2 < 1 || column2>10);

		dist1 = distance_check(row, row2, 2);//vertical 수직
		dist2 = distance_check(column, column2, 2);//horizontal 수평
		found = 0;
		if (dist1 == 1) //if the ship is placed vertically 전함의 배열이 수직일
		{
			if (row > row2)
			{
				for (i = 0; i < 2; i++)
				{
					if (board[row - 1 - i][column - 1] != 126)
					{
						found++;
					}
				}
			}
			else if (row2 > row)
			{
				for (i = 0; i < 2; i++)
				{
					if (board[row - 1 + i][column - 1] != 126)
					{
						found++;
					}
				}
			}
		}
		else if (dist2 == 1) //if the ship is placed horizontally 전함의 배치가 수평일
		{
			if (column > column2)
			{
				for (i = 0; i < 2; i++)
				{
					if (board[row - 1][column - 1 - i] != 126)
					{
						found++;
					}
				}
			}
			else if (column2 > column)
			{
				for (i = 0; i < 2; i++)
				{
					if (board[row - 1][column - 1 + i] != 126)
					{
						found++;
					}
				}
			}
		}
		if ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0)
		{
			system("cls");
			printf("★★★★★★함대 배치중★★★★★★\n\n");
			print_board();
			printf("좌표를 다시 입력해주세요\n\n");
		}
	} while ((dist1 == 0 && dist2 == 0) || (dist1 == 1 && dist2 == 1) || found > 0);

	if (dist1 == 1) //if the ship is placed vertically 전함의 배치가 수직
	{
		if (row > row2)
		{
			for (i = 0; i < 2; i++)
			{
				board[row - 1 - i][column - 1] = 80;
			}
		}
		else if (row2 > row)
		{
			for (i = 0; i < 2; i++)
			{
				board[row - 1 + i][column - 1] = 80;
			}
		}
	}
	else if (dist2 == 1) //if the ship is placed horizontally 전함의 배치가 수평
	{
		if (column > column2)
		{
			for (i = 0; i < 2; i++)
			{
				board[row - 1][column - 1 - i] = 80;
			}
		}
		else if (column2 > column)
		{
			for (i = 0; i < 2; i++)
			{
				board[row - 1][column - 1 + i] = 80;
			}
		}
	}
	system("cls");
	print_board();
	system("pause");
}
///////////////////////////////////////////////////////////////////////////////////////////////
int rand_num(int high)
{
	int r;
	do
	{
		r = rand();
	} while (r >= high);

	return r;
}
///////////////////////////////////////////////////////////////////////////////////////////////

void cp_position()  //컴퓨터의 위치
{

	int battleship, aircraft, destroyer, patrol, submarine;
	int column, row, direction, check;
	int array[10] = { 0 };//어느 줄이나 행이 사용했는지 기록 records which row or columns have been used
	aircraft = 5;
	battleship = 4;
	destroyer = 3;
	submarine = 3;
	patrol = 2;

	direction = rand_num(2);// 전함의 방향을 고른다choosing the direction of the boats


	if (direction == 0)				//horizontally 수평
	{								////////////aircraft항공모함
		row = rand_num(10);
		array[row] = 1;				//registers which row has been used 어느 줄이 사용햇는지 기록
		column = rand_num(6);
		while (aircraft > 0)			//lays the ship horizontally 배를 수평으로 놓다
		{
			cp_board[row][column] = 65;
			column++;
			aircraft--;
		}
		////////////battleship전함
		do
		{
			check = 0;
			row = rand_num(10);
			if (array[row] == 1)
			{
				check = 1;
			}
		} while (check == 1);
		//checks whether the row has been used어느 줄이 사용햇는지 기록
		array[row] = 1;
		column = rand_num(7);
		while (battleship > 0)
		{
			cp_board[row][column] = 66;
			column++;
			battleship--;
		}
		//////////////////destroyer 구축함
		do
		{
			check = 0;
			row = rand_num(10);
			if (array[row] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[row] = 1;
		column = rand_num(8);
		while (destroyer > 0)
		{
			cp_board[row][column] = 68;
			column++;
			destroyer--;
		}
		//////////////////submarine 잠수함
		do
		{
			check = 0;
			row = rand_num(10);
			if (array[row] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[row] = 1;
		column = rand_num(8);
		while (submarine > 0)
		{
			cp_board[row][column] = 83;
			column++;
			submarine--;
		}
		/////////////////////////patrol 초계정
		do
		{
			check = 0;
			row = rand_num(10);
			if (array[row] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[row] = 1;
		column = rand_num(9);
		while (patrol > 0)
		{
			cp_board[row][column] = 80;
			column++;
			patrol--;
		}
	}
	else if (direction == 1)
	{													//aircraft 항공모함
		column = rand_num(10);
		array[column] = 1;
		row = rand_num(6);
		while (aircraft > 0)
		{
			cp_board[row][column] = 65;
			row++;
			aircraft--;
		}
		//battleship 전함
		do
		{
			check = 0;
			column = rand_num(10);
			if (array[column] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[column] = 1;
		row = rand_num(7);
		while (battleship > 0)
		{
			cp_board[row][column] = 66;
			row++;
			battleship--;
		}
		//destroyer구축함
		do
		{
			check = 0;
			column = rand_num(10);
			if (array[column] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[column] = 1;
		row = rand_num(8);
		while (destroyer > 0)
		{
			cp_board[row][column] = 68;
			row++;
			destroyer--;
		}
		//submarine잠수함
		do
		{
			check = 0;
			column = rand_num(10);
			if (array[column] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[column] = 1;
		row = rand_num(8);
		while (submarine > 0)
		{
			cp_board[row][column] = 83;
			row++;
			submarine--;
		}
		//patrol 초계정
		do
		{
			check = 0;
			column = rand_num(10);
			if (array[column] == 1)
			{
				check = 1;
			}
		} while (check == 1);

		array[column] = 1;
		row = rand_num(9);
		while (patrol > 0)
		{
			cp_board[row][column] = 80;
			row++;
			patrol--;
		}
	}
}
//////////////////////////////////////////////////////////////////////////////////////

int cp_attack_check(int row, int column)
{
	int result;
	if ((board[row][column]) == 120 || (board[row][column]) == 46)
	{
		result = 1;//attacked point
	}
	else if ((board[row][column]) == 46)
	{
		result = 2;//missed point
	}
	else
	{
		result = 0;//new point
	}
	return result;
}
//////////////////////////////////////////////////////////////////////////////////////

int attack_check(int row, int column)
{
	int result;
	if ((cp_board[row][column]) == 120 || (cp_board[row][column]) == 46)
	{
		result = 1;//attacked point
	}
	else if ((cp_board[row][column]) == 46)
	{
		result = 2;//missed point
	}
	else
	{
		result = 0;//new point
	}
	return result;
}
///////////////////////////////////////////////////////////////////////////////////////

void ship_coordinates()
{
	int i, j, k = 0;
	for (i = 0; i < 10; i++)	 //goes through the board and puts the ship's coordinates
	{
		for (j = 0; j < 10; j++)
		{
			if (board[i][j] == 65)
			{
				A[k][0] = i;
				A[k][1] = j;
				k++;
			}
		}
	}
	k = 0;
	for (i = 0; i < 10; i++)	//goes through the board and puts the ship's coordinates
	{
		for (j = 0; j < 10; j++)
		{
			if (board[i][j] == 66)
			{
				B[k][0] = i;
				B[k][1] = j;
				k++;
			}
		}
	}
	k = 0;
	for (i = 0; i < 10; i++)	//goes through the board and puts the ship's coordinates
	{
		for (j = 0; j < 10; j++)
		{
			if (board[i][j] == 68)
			{
				D[k][0] = i;
				D[k][1] = j;
				k++;
			}
		}
	}
	k = 0;
	for (i = 0; i < 10; i++)	//goes through the board and puts the ship's coordinates
	{
		for (j = 0; j < 10; j++)
		{
			if (board[i][j] == 83)
			{
				S[k][0] = i;
				S[k][1] = j;
				k++;
			}
		}
	}
	k = 0;
	for (i = 0; i < 10; i++)	//goes through the board and puts the ship's coordinates
	{
		for (j = 0; j < 10; j++)
		{
			if (board[i][j] == 80)
			{
				P[k][0] = i;
				P[k][1] = j;
				k++;
			}
		}
	}
}
//////////////////////////////////////////////////////////////////////////

void cp_attack()
{
	int i;

	switch (HIT)
	{

	case 0://when not hit
		do
		{
			row = rand_num(10);
			column = rand_num(10);
		} while (cp_attack_check(row, column) == 1 || cp_attack_check(row, column) == 2);		//지점이 사용되었는지 체크checks whether the point has been used

		switch (board[row][column])
		{
		case 65://aircraft carrier 항공모함
			HIT = 1;
			strcpy_s(state, 4, "Hit");
			SHIP = 'A';
			board[row][column] = 120;
			for (i = 0; i < 5; i++)
			{
				if ((A[i][0] == row) && (A[i][1] == column))
				{
					A[i][0] = -1;
					A[i][1] = -1;
				}
			}
			break;
		case 66://battleship전함
			HIT = 1;
			strcpy_s(state, 4, "Hit");
			SHIP = 'B';
			board[row][column] = 120;
			for (i = 0; i < 4; i++)
			{
				if ((B[i][0] == row) && (B[i][1] == column))
				{
					B[i][0] = -1;
					B[i][1] = -1;
				}
			}
			break;
		case 68://destroyer구축함
			HIT = 1;
			strcpy_s(state, 4, "Hit");
			SHIP = 'D';
			board[row][column] = 120;
			for (i = 0; i < 3; i++)
			{
				if ((D[i][0] == row) && (D[i][1] == column))
				{
					D[i][0] = -1;
					D[i][1] = -1;
				}
			}
			break;
		case 83://submarine잠수함
			HIT = 1;
			strcpy_s(state, 4, "Hit");
			SHIP = 'S';
			board[row][column] = 120;
			for (i = 0; i < 3; i++)
			{
				if ((S[i][0] == row) && (S[i][1] == column))
				{
					S[i][0] = -1;
					S[i][1] = -1;
				}
			}
			break;
		case 80://patrol boat 초계함
			HIT = 1;
			strcpy_s(state, 4, "Hit");
			SHIP = 'P';
			board[row][column] = 120;
			for (i = 0; i < 2; i++)
			{
				if ((P[i][0] == row) && (P[i][1] == column))
				{
					P[i][0] = -1;
					P[i][1] = -1;
				}
			}
			break;
		case 126:           //???????????
			board[row][column] = 46;
			strcpy_s(state, 5, "Miss");
			break;
		}
		break;
	case 1:
	case 2:
	case 3:
	case 4://when hit
		switch (SHIP)
		{
		case 'A':
			HIT++;//increase the hit    hit증가
			strcpy_s(state, 4, "Hit");
			for (i = 0; i < 5; i++)		//searches for the remaining ship coordinate and attacks it 남아있는 전함을 찾고 공격
			{
				if ((A[i][0] != -1) && (A[i][1] != -1))
				{
					board[A[i][0]][A[i][1]] = 120;//changes the value in the board 보드의 값을 바꾼다
					A[i][0] = -1;//removes the ship coordinate  배의 좌표 지우기
					A[i][1] = -1;//removes the ship coordinate  배의 좌표 지우기
					break;
				}
			}
			if (HIT == 5)	//if the ship is destroyed resets the counter 전함이 공격되었을 카운터 리셋
			{
				HIT = 0;
			}
			break;
		case 'B':
			HIT++;//increase the hit 공격증가
			strcpy_s(state, 4, "Hit");
			for (i = 0; i < 4; i++) //searches for the remaining ship coordinate and attacks it남아있는 전함을 찾고 공격
			{
				if ((B[i][0] != -1) && (B[i][1] != -1))
				{
					board[B[i][0]][B[i][1]] = 120;//changes the value in the board보드의 값을 바꾼다
					B[i][0] = -1;//removes the ship coordinate배의 좌표 지우기
					B[i][1] = -1;//removes the ship coordinate배의 좌표 지우기
					break;
				}
			}
			if (HIT == 4)	//if the ship is destroyed resets the counter전함이 공격되었을 카운터 리셋
			{
				HIT = 0;
			}
			break;
		case 'D':
			HIT++;//increase the hit 히트 증가
			strcpy_s(state, 4, "Hit");
			for (i = 0; i < 3; i++) //searches for the remaining ship coordinate and attacks it남아있는 전함을 찾고 공격
			{
				if ((D[i][0] != -1) && (D[i][1] != -1))
				{
					board[D[i][0]][D[i][1]] = 120;//changes the value in the board보드의 값을 바꾼다
					D[i][0] = -1;//removes the ship coordinate배의 좌표 지우기
					D[i][1] = -1;//removes the ship coordinate배의 좌표 지우기
					break;
				}
			}
			if (HIT == 3) //if the ship is destroyed resets the counter전함이 공격되었을 카운터 리셋
			{
				HIT = 0;
			}
			break;
		case 'S':
			strcpy_s(state, 4, "Hit");
			HIT++;//increase the hit 공격증가
			for (i = 0; i < 3; i++) //searches for the remaining ship coordinate and attacks it남아있는 전함을 찾고 공격
			{
				if ((S[i][0] != -1) && (S[i][1] != -1))
				{
					board[S[i][0]][S[i][1]] = 120;//changes the value in the board보드의 값을 바꾼다
					S[i][0] = -1;//removes the ship coordinate배의 좌표 지우기
					S[i][1] = -1;//removes the ship coordinate배의 좌표 지우기
					break;
				}
			}
			if (HIT == 3) //if the ship is destroyed resets the counter전함이 공격되었을 카운터 리셋
			{
				HIT = 0;
			}
			break;
		case 'P':
			strcpy_s(state, 4, "Hit");
			HIT++;//increase the hit
			for (i = 0; i < 2; i++) //searches for the remaining ship coordinate and attacks it남아있는 전함을 찾고 공격
			{
				if ((P[i][0] != -1) && (P[i][1] != -1))
				{
					board[P[i][0]][P[i][1]] = 120;//changes the value in the board보드의 값을 바꾼다
					P[i][0] = -1;//removes the ship coordinate배의 좌표 지우기
					P[i][1] = -1;//removes the ship coordinate배의 좌표 지우기
					break;
				}
			}
			if (HIT == 2) //if the ship is destroyed resets the counter전함이 공격되었을 카운터 리셋
			{
				HIT = 0;
			}
			break;
		}
	}
}
void attack()
{

	do
	{
		printf("사용자의 공격차례:\n");
		do
		{
			printf("가로: ");
			scanf_s("%d", &row);
		} while (row < 1 || row>10);

		do
		{
			printf("세로: ");
			scanf_s("%d", &column);
		} while (column < 1 || column>10);

		if (attack_check((row - 1), (column - 1)) == 1 || attack_check((row - 1), (column - 1)) == 2)
		{
			printf("좌표를 다시 입력해주세요.\n\n");
		}
	} while (attack_check((row - 1), (column - 1)) == 1 || attack_check((row - 1), (column - 1)) == 2);//checks whether the point has been used

	switch (cp_board[row - 1][column - 1])
	{
	case 65:
	case 66:
	case 68:
	case 83:
	case 80:
		cp_board[row - 1][column - 1] = 120;
		strcpy_s(state, 4, "hit");
		break;
	case 126:
		cp_board[row - 1][column - 1] = 46;
		strcpy_s(state, 5, "miss");
		break;
	}
}

void textcolor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
