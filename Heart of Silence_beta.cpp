#include "stdio.h"
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

void title();
void mainmenu();//û���õ������� 
void beginnerguide();//�����������ָ�� 
void knockth();//���������� 
void knockth2();
void knocking();//������ 
void tinyjumpscare(); //С������ 
int *search(int *i,int *room,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme);//�������� 
int *door(int *room,int *enemy,int *peep,int *hp,int *fear,int *atk,int *syphp,int *skehp,int *cshp,int *bandage,int *i,int *tho,int *mtho,int *msyp,int *mske,int *mcs);//���� 
void scaredbysyp();//��÷÷���� 
void deathbysyp();//��÷÷ɱ�� 
void scaredbyske();
void deathbyske();
void deathbycs();
void scaredbycs();//�����̵ģ����δ��������� 
int *self(int *hp,int *fear,int *atk,int *cou,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme,int *tho,int *mtho,int *msyp,int *mske,int *mcs);//���Ҽ��� 
int *fight_syphy(int *hp,int *fear,int *atk,int *syphp,int *bandage,int *msyp);//÷÷ս�� 
int *fight_ske(int *hp,int *fear,int *atk,int *skehp,int *bandage,int *mske);//����ս�� 
int *fight_cs(int *hp,int *fear,int *atk,int *cshp,int *bandage,int *mcs);//ϣ�İ�ս�� 
char weapon[10][50]={"�����С��","�����ذ��"};
main()
{
	title();
	PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);//bgm 
	mainmenu();
	fflush(stdin);
	int main_a,a,b,c;//ѡ��Ƕ�� 
	int cou=0,atk=0,fear=5,hp=20;//�������������־壬���� 
		int *php,*pfear,*pcou,*patk;
		php=&hp,pfear=&fear,pcou=&cou,patk=&atk;
	int room=0;//���� 
		int *proom;
		proom=&room;
	int syphp=150,thohp=150,cshp=200,skehp=150;//Ѫ�� 
		int *psyphp,*pcshp,*pskehp;
		psyphp=&syphp,pcshp=&cshp,pskehp=&skehp;
	int tho=0,syp=0;//����˹��÷÷�ø� 
		int *ptho;
		ptho=&tho;
	int mtho=1,msyp=0,mske=0,mcs=0;//�������˵Ĵ��� 
		int *pmtho,*pmsyp,*pmske,*pmcs;
		pmtho=&mtho,pmsyp=&msyp,pmske=&mske,pmcs=&mcs;
	int lon=0,type;//�������������࣬���� 
	int rustyknife=0,paper=0,bread=0,book=0,bandage=0,drinkme=0,redvines=0,peep=0;//��Ļ�������������ʵ�� 
		int *prustyknife,*ppaper,*pbread,*pbook,*pdrinkme,*pbandage,*ppeep;
		prustyknife=&rustyknife,ppaper=&paper,pbread=&bread,pbook=&book,pdrinkme=&drinkme,pbandage=&bandage,ppeep=&peep;
	scanf("%d",&main_a);
	if(main_a==0){beginnerguide();
	system("cls");
	title();
	mainmenu();
	fflush(stdin);
	scanf("%d",&main_a);} 
	if(main_a==2)exit(0);
	if(main_a==3)room=5;//�����߲��ԣ��Һ�nb����Ȼ�ǿ����� 
	if(main_a==1){printf("û�л�ͷ·��������");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(500);
	system("cls");
	printf("���Ǹ��ĵ��Ŀ�ʼ��\n����һ���տ���İ��������������ͷ�ۺ���������ƣ�����ѡ�\n���ڷ�����ʲô�¡��Լ����η�����һ�Ų�֪��\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	printf("*��������µ����ʡ�");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	Sleep(300);
	printf("\n����յ����ģ�ֻ��һ������Ƕ�ڷ�����һͷ��ǽ���ϣ�\n�����ϵ�΢������µķ�϶��͸������\n");
	fflush(stdin);
	printf("\n*�������������\n");
	getch();
	printf("����û�������ƺ�һŤ���־��ܹ��򿪡�\n��֪��ô����ͻȻע�⵽�ź����ˡ�\n���·��ķ�϶�Ͷ�����е�Ӱ�ӱ�����һ������վ���ź�û�з���һ�����졣\n");
	Sleep(500);
	printf("\n0.��˭���ǣ���\n1.�ƿ���\n");
	scanf("%d",&a);
	if(a==0){printf("����ſ־��ʡ��ź���һ�����˵�������\n�������š���\n");
		Sleep(500);
		printf("\n0.����˭����\n1.�ƿ���\n");
		scanf("%d",&b);
		  if(b==0){printf("�����ɡ����Ǹ����а�������˵��\n������ʲô�����㰴��ס���������������Ц�������̡�\n�����ź�������δı������ѡ���\n��û�������Ц�������������������˲������ڽ�Ц����\n");
		  Sleep(500);
		  printf("\n0.�����\n1.�ƿ���\n");
		  scanf("%d",&c);
		    if(c==0){printf("�����������ᣬ");
			};
		    if(c==1){printf("�����������һ�ѽ����ƿ�����������ǰ��ֻ��һ���յ��������ȡ�\n����˵�����˵���Ӱ��û�г��֣����ɻ��ֽ������Ĵ�������\n");
			a=1;}
		  }
	  if(b==1)a=1;
	} 
	if(a==1){if(c!=1)printf("�����������һ�ѽ����ƿ�����������ǰ��ֻ��һ���յ��������ȡ�\n��û��˭��Ӱ�ӣ����������˿�����\n");
	Sleep(1000);
	printf("���ˣ����ѣ���İ�ȫ��ʶ�ǲ���̫�����˵㣿��\nһ��������ǵ���Ӱ�͵ش��ſ��Ϸ�����������߬ס������죬����ݺ�����һ�ߵ�ǽ�ϡ�\n����һ����ȫİ���Ļ�����Ų���ͥ�Ĵ�Ϲ�䣬�㵽������ô��ģ���\n��˵��ʱ����а���˻˻������ͻȻ��Ϯ�����㾪�ֲ��ѣ�ƴ��������\n�㿴��һ�����˲������ɫ����۲������һ��һ����\n");
	tinyjumpscare();
	Sleep(500);
	printf("\n0.����ʧ��\n1.������\n");
	scanf("%d",&b);
	  if(b==0){printf("�����㾪��ʧ��ķ�Ӧ����¶���������΢Ц��");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	  printf("\n*������������ˡ�\n");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
	  cou-=1;
	  tho+=1; 
      }
	  if(b==1){printf("�����ƺ�û�б��ŵ�����¶����ʧ�������顣");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	  printf("\n*������������ˡ�\n");
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	  cou+=1;
	  }
	printf("������ô�����������仯Ī��ĵط�������Σ�յļһ����ȥ�ˡ���\n�����ſ����ƮƮ�������������ɿ���ǯ������֡�\n�������˶����뿪�������������˶�����ȥ��ԭ�򡭡������㾹Ȼ���ǻ�ģ���˵��ʲô����\n");
	Sleep(500);
	printf("\n*������ʲô����\n");
	fflush(stdin);
	getch();
	printf("������˵����Ҳ�ܿ�ᷢ���㡣����Ҫ�����㣬Ҫ�ڳ���Ѫ���ܵġ����������࣬�����ʬ�������ⶰ���ӵĽ��䷢����Ȼ�󡪡���ȥ����һȺ����ķɶꡣ��\n���İ�������ţ������ֳ�����а��İ�������������ʲô�أ��һ�����������֮ǰ���֡�����\n�㾪�ֵ��򷿼�����ȥ����ʹ��������Ц������\n����֮������Σ���ķ�������˵��������㻹���������㿪�š�����һ��û���ڼ�������֮������ҵĻ����ˡ���\n");
	Sleep(500);
	printf("\n*������˭����\n");
	fflush(stdin);
	getch();
	printf("���Ǹ���û�лش��������ź���ʧ�������ʱ����ͻȻ��\n�������������������谵�����ȡ�\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	printf("*����˭����������µ����ʡ�\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	Sleep(500);
	printf("\n0.�鿴û��ôĪ�����������ָ��\n1.��������\n");
	scanf("%d",&b);
	  if(b==0){printf("***��������Ϸ˵��***\n�����Ϸģʽ��Դ����ȥ���һ���ֲ���Ϸ��˼���������и��ʼ춨���ź�Ĺ����ûע��ֱ�����ţ�������˹����ֻ��������������һ�£���һЩ�׺ݵĽ�ɫֱ�ӿ���ɱ��\n�ڹ�˼�����Ǹ�3D��Ϸ���������ڵ��һ�д��p��3D��Ϸ���ð��������c++�պ�һ�£�Բ������Զ���\n�������ǿ�Ľ�ɫҲû����ɱ��Ļ��ᣬ�Ҵ���дս��ģ�飬�������������Ļ��ᡣ\n�����е���ǿ��а�񣨰�������˵�ܿ��Ҫ����һ�������򲻹�����ֱ����·����ȻҲ��������Ĵ��ڣ��һ��������ȫŪ��������ð����Զ����������ķ��պ����Ǳ��־��룬�ⶼȫ�����ˡ�\n���䣺ս��ʱ����Ϊ0����ƨ���־����10ʱҲ����Ϊ���Ǳ���������ƨ���׳�������\n"); 
	  Sleep(500);
	  printf("\n*��������\n");
	  fflush(stdin);
	  getch();
	  b=1;}
	  if(b==1){printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�");
	  Sleep(1000);
	  system("cls");}
	  }
}
	int i=0;//��������
		int *pi;
		pi=&i;
	int x=0,y=0,run1,run2=0;//׷��ʹ�� 
	char key;
	for(;;)
	{
	if(fear>=9){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
				printf("��������񾭱��ܿ־����ĥ���ٲ����콵�Ϳ־�Ļ�����\n");}
	if(fear<9)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	if(hp<=0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
				printf("��������������������𽥺ľ�����\n");}
	if(hp>0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	if(room==1)printf("\n����һ���ǰһ������ķ��䣬ǽ���Ͻ��г¾ɵ�Ѫ����\n");
	else if(room==3)printf("\n����һ��տ��ķ��䣬ǽ�Ƿ��ż��������ľ�Ҿߡ�\n");
	else if(room==4)printf("\n���ƺ���ǰ�Ǽ��鷿�������ǽ�Ϲ���һ���ϾɵĻ���\n");
	else if(room==5)printf("\n���Ǽ����װ��Ŀտ����䣬���ԵĴ��ӱ�ľ�嶤���������ϵĲ�����ʧ���١�\n������������Ϸ���һ̨��ʽ��������\n");
	else printf("\n����һ��ͬ���տ��ķ��䡣\n");
	Sleep(300);
	srand((unsigned)time(NULL));
	int roll=rand()%(15+1);
	int enemy=rand()%(20+1);
	int *penemy;
	penemy=&enemy;
	int b=0;
	if(rustyknife=1)atk=3;
	if(room>=5)printf("*%d*",i);//��̨�� 
	if(room>=5&&i>3&&i<7)printf("\n�������ź�����������ʲô�������ڱƽ�����");
	else if(room>=5&&i>=7&&i<9)printf("\n����Ŀ�����������������Ща��Ĵ��������ⷿ��ӽ���������");
	else if(room>=5&&i>=9&&i<11){knocking();
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
					printf("\n��������ʲô��������ͼ�������ȴ��������飬�ٲ��Ͻ��뿪����Ļ�����");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					}
	else if(room>=5&&i==11){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
							printf("���������������䣡\n");
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
							tinyjumpscare();
							if(enemy>0&&enemy<=4){fight_syphy(php,pfear,patk,psyphp,pbandage,pmsyp);}
		/*����*/  		else if(enemy>4&&enemy<=8){fight_ske(php,pfear,patk,pskehp,pbandage,pmske);}
					//	else if(enemy>8&&enemy<=12)
							}//����ս�� 
	printf("\n1.��������     2.�뿪����     3.���Ҽ���     \n");
	scanf("%d",&a);
	switch(a)
	 {
/*����*/case 1:if(i==0&&room==5){i+=1;
								PlaySound(TEXT("blank bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
								printf("���߽�������ϵ���������\n����̨�ǳ��Ͼɵĵ��ӹ������������沼���ҳ���������ָ���������Ϻ��ĳ�����\n�̱��ǡ�����ɭ�����·�ģ�������С�ֿ��ų������¡�5-13-21����\n");
								Sleep(300);
								printf("���˱���ʱ��Ĵݲ����⣬��̨������������𣬷·��¿��ػ���ʹ��һ����\n");
								Sleep(300);
								printf("Ҫ���¿�����\n"); 
								Sleep(300);
								printf("\n1.��    0.��\n");
								fflush(stdin);
								scanf("%d",&b);
								if(b==1){printf("��С������ذ����˿���");Sleep(300);printf(".");Sleep(300);printf(".");Sleep(300);printf(".\n");
									Sleep(1000);
									printf("ʲô��Ҳû�з�����\n");
									Sleep(2000);
									PlaySound(TEXT("FM.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
									printf("������������ٿȻ���������̵ĵ���������̶��������ص��ڿտ��ķ����\n");
									Sleep(1000);
									printf("�����̽������˿���ȴ�ٳ�û���µ�����������\n");
									Sleep(2000);
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
									printf("�����ܲ����ܽ���ȥ������󡣡�\n");
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
									Sleep(2000);
									printf("\n*����Լ�о������ӷ������µı仯��\n\n");
									getch();
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
									PlaySound(TEXT("blank bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
									printf("ͻȻ������ֹͣ�ˣ��ղŴ��������ڴ����������������������ʧ�øɸɾ�����\n��������������һƬ���š�\n");
									Sleep(1000);
									printf("��׳�ŵ�����ǰ�����������ֻ����ĵ��ϻ��ֻ��һö�������ϵ��ϵ�ء�\n����������ղ�������ʮ�����Ѿ��Ĺ�����ö������е�������\n");
									Sleep(1000);
									printf("��������ҵ����滻�ĵ�أ�������ܼ���̽����̨�����ܡ�\n");
									system("pause");
									system("cls");
									PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
									printf("                 ***��ʾ***\n��������俪ʼ����֮���̽�������߻�ͷ·�ˡ�\n·���ռ�����������Ʒ�����ڲ�ͬ�ĳ�����ʹ�ã������µľ��顣\nͬʱ����̨����������Ща��Ĵ������������㡣\n�����㲻����ͬһ�������������������ж��غϹ��࣬���ǻ���ͼ���Ŷ��롣\n�������������˶�ѡ��ȵ��ٿ���ͬ������ж��غ��\n\n");
									system("pause");
									system("cls");
									}
								if(b==0){PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
										printf("�����ѹ��ס�����ġ�\n");}
								}
				
				else if(i==2&&room==3){Sleep(300);  //room3 
								printf("\n�����ƺ���ס�ˣ�Ҫ�������ȥ������\n");
								Sleep(300);
								printf("\n1.��    0.��\n");
								fflush(stdin);
								scanf("%d",&b);
								if(b==1){printf("�㽫������ڰ��������\n");
										Sleep(1000);
										printf("�ƺ�ʲôҲû���ˡ�\n"); 
										Sleep(1500);
										printf("����"); 
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
										printf("��ʹ��");
										Sleep(1000);
										printf("\nһ���ʹ���������ģ�����æ���������\nѪ��Ѫ�������ϱ������Ŀ����������ʳ���\n���ܵ������ǵ���϶���ӳ�����Ͷ�������ߣ���������Ѫ���˿ڣ����ŵش������˿���\n"); 
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
										tinyjumpscare();
										Sleep(1500);
										printf("\n�����ӵĸо��ܿ������ˣ���ȴ��Ȼ����δ����\n�ⶰ���ӵ�ÿ�������ﶼ������а������������ʱ׼�������������Ĵ��ڡ�\n");
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	            						printf("3������������˿�����ʧ��\n\n*��Ŀ־������ˡ�\n");
	            						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	            						fear+=1;
										hp-=3;
										i+=1; 
										Sleep(1000);}
				else printf("\n������Ѳ��ĵط���\n");}
			else if(i==0&&room==4){i+=1;
							printf("���߽����ǽ�ϵĻ���\n");
							Sleep(300);
							printf("��������ź��Ļҳ��������ֲ����š�\nһ�ŷ��Ƶĺڰ���Ƭ���ڲ���֮����Ƭ�ϵ����˳���¶��һ�����̵�Ц�ݡ�\n������ƺ�����һ��ֽ����\n");
							Sleep(300);
							printf("\nҪȡ��ֽ����\n");
							Sleep(300);
							printf("\n1.��    0.��\n");
							fflush(stdin);
							scanf("%d",&b);
							if(b==1){printf("��С���������Ͼɷ��Ƶ�ֽ����չ���Ķ�������\n\n��\n     ���ǵ����ܲ��ᱻ����������֪����\n\n					Q.��1921��\n");
									Sleep(1000);
									printf("����̧��ͷʱ���������ʲôϸ΢��������\n��Ƭ������˲���΢Ц�ˣ���������������ڿ�����������������͸����������Ͷ����\n");
									Sleep(1000);
									printf("������ʶ���ǲ��Ǵ��֮�����������Ѿ��������𽥼���ľ��֡���Ҳ���������ϴ˿̵ı��顣\n�㾪�ŵش����ǰ�˿���������Ƭ������ˣ���ʶ��������ģ����ľٶ���\n");
									Sleep(1000);
									printf("��������񾭣��Է�����ʱ����Ϯ���Ĺ�������ʲôҲû�з�����\n��Ƭ�ָֻ���ԭ״���Ǹ����˵�Ц����Լ͸��������");
									paper=5;
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	 								printf("\n*��������µ����ʡ�\n");
						 			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);}
								else if(b==0)printf("�����ѹ��ס�����ġ�\n");}
			else search(pi,proom,prustyknife,ppaper,pbread,pbook,pbandage,ppeep,pdrinkme);
		       break;
/*�ƶ�*/case 2:if(room>=5)i+=1;
				if(room==2){printf("���⾲�ó��档\n\n1.�ƿ���     2.����\n");
                  fflush(stdin);
		         scanf("%d",&a);
		         if(a==1){printf("�����Ŷ�����̤�ϲ����ҳ����ߵ���\n������һ˿���˲����ı��������ı�ǻ��\n");
			    	   Sleep(1000);
			    	   mcs+=1; 
					   PlaySound(TEXT("Reptile bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
					    for(c=0;c<=80;c++)
					    {Sleep(10);
					    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
					   printf("���������ǿŻ������������ٰɡ���\n");
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				}
				       tinyjumpscare();
					   printf("���͵�����ǰ�������������һ�����Ǽ���Щ���������Դ��Ĺ��������ǽ�ڣ���ɳ��ǽ���Ϸ׷׵��䡣\nϣ�İ���������Ļ������з·��̺���а��ĵ��룬�ɲ��Ļ�������������������\n");
					   Sleep(1000);
					   printf("�亹��ʪ����ļ��������ֽŲ��õ�������ЩѪ�ȵĻþ�����ʴ��Χ������ǽ����ǿ֧���������塣\n�������ض��������·�������񡢲б��Ķ��飬��������ɫ���۾���������ʳ�Ѫ�Ƶ�Һ�塣\n");
					   Sleep(1000);
					   printf("������Ӵ��������ǿ��ɱ��ʹ�����ս����\n�����ߵ��ĵ��涼������Ӱ���²�ס��ҡ�Σ�����վ���ĵط�����������Ѻۣ���������������š�\n");
					   Sleep(1000);
					   printf("���޷�Խ��ϣ�İ����ԭ���ķ��䣬Ҳ��ȫ������������а���������⣡ֻ���ڱ�ץסǰ�����ߵ���ͷ�ķ����ˡ�\n");
					   Sleep(1000);
					   printf("\n���ܵ��³�Ϸ����ʾ�������Ǿ����һ��˲��һ��ʱ�������о�����ôд��ȴ���Ǽ�ª�ÿ��ܵ��³�Ϸ�ļ�ª׷��ս���ڡ�\nʹ��a��d�����㣨@������ϣ�İ���C����׷��\nps����Ҫ�ǻ���߳̾ͺ��ˣ���ϧ�Ҳ��ᣬ����Ҳ���������������������������⣬�պ�����ɡ�\n");
					   printf("������������������������������������������������\n");
    				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
    					printf("C");
   						 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
						printf("\n������������������������������������������������\n");//���� 
   					 	system("pause");
  					  while(1)
  					  {
  					  while(!kbhit())
  					  {
    				run2++;
    				system("cls");
    				printf("������������������������������������������������\n");
    				for(run1=0;run1<run2;run1++)printf(" ");
    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
   		 		printf("C");
   				 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
   				 printf("\n������������������������������������������������\n");
						printf("\n����d�������ߵ���һͷ\n");
  			  	if(run2==(y+3)){printf("GAME OVER");//������ 
  			  system("pause");
				deathbycs();
				return 0;}
				}
  				key=getch();
  				  switch(key)
   					 {
   					 case 'a': (y>0 ? --y:y);break;
   					 case 'd': y++;break;
  					  default:break;
   						 }
    				if(run2==(y+3)){printf("GAME OVER");
  					  system("pause");}
   					 if(y==45){system("pause");
   					    system("cls");
						printf("���͵�ײ���ߵ���ͷ�ķ��ţ�Ѹ��ת���䷴���ϡ�\n���ҵĹ�������������Ű���ҵز��������������������ǻ��ͬ�����ҵ�������\n");//
  			  			Sleep(1000);
  			  			printf("һ���ǲ����ϱ��ݻ٣���ʱ�㽫�޴����ӡ��������ץ������Ψһ���������ȴ��Ž���ĵ�����\n");
  			  			Sleep(1000);
  			  			printf("�����ų��ܵ�ÿһ���׺ݵ�ײ�����·𶼴���������������\n��ķβ�������������ŵس鶯�����Ľ����˺�ˮ��\n");
  			  			Sleep(1000);
  			  			printf("Ȼ����ϣ�İ�û�ܴ�������\n�ּ����ӹ�����������ƺ������˹�����\n���Ž������ţ��������ߵ��ϼž��÷·��û���˾�����\n");
  			  			Sleep(1000);
  			  			printf("��������ʧȥ�˻������������̱��������\n");
  			  			PlaySound(TEXT("blank bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
  			  			getch();
  			  			printf("���������ľ�������е������¸��ˡ�\n");
  			  			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	 					 printf("\n*������������ˡ�\n");
						  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
						  cou+=1;
  			  			room+=1;
  			  			i=0;
  			  			getch();
  			  			system("cls");
  			  			PlaySound(TEXT("Spiel Mit Mir bgm.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
  			  			break;}
   					 system("cls"); 
   				 printf("������������������������������������������������\n");
   				 for(run1=0;run1<y;run1++) printf(" ");
    			printf("   @");
   				 printf("\n������������������������������������������������\n");
}
						}
		         if(a==2)room=2;break;
				  }
				door(proom,penemy,ppeep,php,pfear,patk,psyphp,pskehp,pcshp,pbandage,pi,ptho,pmtho,pmsyp,pmske,pmcs);break;//���� 
/*����*/case 3:if(room>=5)i+=1;
				self(php,pfear,patk,pcou,prustyknife,ppaper,pbread,pbook,pbandage,ppeep,pdrinkme,ptho,pmtho,pmsyp,pmske,pmcs); 
			   break;
	 }
	}
    }

int *door(int *room,int *enemy,int *peep,int *hp,int *fear,int *atk,int *syphp,int *skehp,int *cshp,int *bandage,int *i,int *tho,int *mtho,int *msyp,int *mske,int *mcs)
{
	srand((unsigned)time(NULL));
	int roll=rand()%(15+1);
	int a,b,c;
	if(roll<=10){printf("�ź�һƬ�ž���\n");
				Sleep(300); 
				printf("\n1.�ƿ���     2.���ط���     ");
				if(*peep>0)printf("3.ʹ�ÿ��ӿ�\n");
				else printf("\n");
				fflush(stdin);
				scanf("%d",&a);
				if(a==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
					Sleep(1000);
		/*�޵�*/	if(*enemy<=10){printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�");
								*room+=1;
							    *i=0;
								system("pause");
								system("cls");}
			    	    else if(*enemy>10&&*enemy<=12){fight_syphy(hp,fear,atk,syphp,bandage,msyp);}//÷÷
			   	  		else if(*enemy>12&&*enemy<=14){fight_ske(hp,fear,atk,skehp,bandage,mske);}//����
		/*����˹*/ 		else if(*enemy>14&&*enemy<=16){mtho+=1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("�����Ϊİ���˿����Ǻ�Σ�յģ��㲻���������ѣ���\r");
				  				tinyjumpscare();
				  				Sleep(800);
				  				knockth();
				  				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("�㾪�ֵ��������ˣ�����˹��˫а�����ɫ�۾���˸�ţ����ݷ����̳����Ұ�ޡ�\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("�����Ǿ�Ȼ��û���ڿ������ǻ������Ϊ�㹻�����أ������ӵù����أ���\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("�㽩Ӳ�������������Űγ���������׼�������һ�����յ�ս����\n������Ц��ȴ�Ѿ���ʧ��Զ����\n");
				   				Sleep(1000);
				   				printf("ȷ�����Ѿ��뿪����С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	               				*room+=1;
				   				*i=0;
				   				system("pause");
								system("cls");}//����˹
				   		else if(*enemy>16&&*enemy<=19){tinyjumpscare();
				   								printf("����Ϊ��ʲô���Ҫ����Ӱ���˳���ȴֻ���龪һ����\n");
				   								printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	             								 *room+=1;
				 								 *i=0;
												 system("pause");
								system("cls");}//��ûд��С����
				   		else if(*enemy>19&&*enemy<=20){fight_cs(hp,fear,atk,cshp,bandage,mcs);}//ϣ�İ� 
						   } 
			     else if(a==2)printf("������Ȱ���������\n");
				 else if(a==3&&*peep>0){printf("�㽫���ӿ��������ϣ��ս�С�������̽��\n");
				 						Sleep(1000);
				 						*peep-=1; 
				 			/*�޵�*/	if(*enemy<=10){printf("����տյ�����ʲô����Ҳû�С�\n");
														printf("\n1.�ƿ���     2.���ط���\n");
														fflush(stdin);
														scanf("%d",&b);;
														if(b==1){printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�");
	               										*room+=1;
				   										*i=0;
				   										system("pause");
														system("cls");}
				   										else if(b==2)printf("������Ȱ���������\n");} 
				   						else if(*enemy>10&&*enemy<=12){printf("÷÷��վ���ź�\n���ʹ���ͷ­������һ���ɿݵ��ط�ɢ����������ס��������Ų����۵����ӡ�\n����ע�����Լ���ֻ���ε��ֱۣ��ڼž��еȴ��������š�\n");
				   										printf("\n1.�ƿ���     2.���ط���\n");
				   										fflush(stdin);
				   										scanf("%d",&b);
														if(b==1)fight_syphy(hp,fear,atk,syphp,bandage,msyp);
														else if(b==2)printf("������Ȱ���������\n");}
										else if(*enemy>12&&*enemy<=14){printf("�������ؿ���һֻ�׳���ڵĸ�����\n���ڶ��Ŷ�ë�Ľ�֫�����׶��������O�O�@�@�����졣\n�ߵ���ǽ������������������ں����İ߿飬����ĳ�Ӱ���㿴����ϸ�ڡ�\n");
														printf("\n1.�ƿ���     2.���ط���\n");
				   										fflush(stdin);
				   										scanf("%d",&b);
				   										if(b==1)fight_ske(hp,fear,atk,skehp,bandage,mske);
														else if(b==2)printf("������Ȱ���������\n");}
										else if(*enemy>14&&*enemy<=16){printf("����տյ�����ʲô����Ҳû�С�\n");
														Sleep(1000);
														tinyjumpscare();
														SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
														printf("�����ı��˰��۾��ڵ��������ѡ���\n");
														SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
														Sleep(1000);
														printf("һֻ��ɫ�۾���Ȼ�������ӿף�����������а������ߣ����ŵ����˼�����\n��ķ�Ӧ��������˹�����Ц������ɫ��ͫ���𽥵������þ�һ����ɢ�����ȵĿ����С�\n"); 
														Sleep(1000);
														printf("����տյ�����ʲô����Ҳû�С�\n");
														printf("\n1.�ƿ���     2.���ط���\n");
														fflush(stdin);
														scanf("%d",&b);
														if(b==1){printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�");
	               										*room+=1;
				   										i=0;
				   										system("pause");
														system("cls");}
				   										else if(b==2)printf("������Ȱ���������\n");}
										else if(*enemy>16&&*enemy<=18){printf("һƬ����Ƶ���ɫ������ź�Ŀռ䡣\n");
														Sleep(1000);
														printf("��۲���ã�ֱ������ʶ������һֻ��ɫ��ͫ�ס�\n");
														Sleep(1000);
														tinyjumpscare();
														SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
														for(int e=0;e<=150;e++){Sleep(10);printf("����");}
														for(int r=0;r<=150;r++){Sleep(10);printf("�㿴����ʲô");}
														printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("Ѱ");Sleep(100);printf("��");Sleep(100);printf("ʲ");Sleep(100);printf("ô");Sleep(100);printf("��");Sleep(100);
														Sleep(2000);
														printf("\n\n*��Ŀ־������ˡ�\n");
	                                            		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
			   	                                		*fear+=1;
			   	                                		printf("���յ������ڼ�Х������ɢ�ˣ���ʹ�����ס�Դ���\n��ǰ��һ������ô����ɭ�����ܣ���Ӱ��·���ʱҪ����ʲô˺������ʺ�\n");
			   	                                		Sleep(1000);
														printf("��ѣ�θ������ˣ������Ѿ��տյ�����\n");
														printf("\n1.�ƿ���     2.���ط���\n");
														fflush(stdin);
														scanf("%d",&b);
														if(b==1){printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�");
	               										*room+=1;
				   										*i=0;
				   										system("pause");
														system("cls");}
				   										else if(b==2)printf("������Ȱ���������\n");}
				   						else if(*enemy>19&&*enemy<=20){printf("����ĺ�ɫ�����������ߵ��\n��ֻ����Լ����һ�����������������\n");
				   										printf("\n1.�ƿ���     2.���ط���\n");
														fflush(stdin);
														scanf("%d",&b);
														if(b==1)fight_cs(hp,fear,atk,cshp,bandage,mcs);
										   				else if(b==2)printf("������Ȱ���������\n");}
				 }
				 }
	else{printf("�����Ŷ���ǰ����Ԥ�е������ź������ʲô������\n");
			     Sleep(300);
			     printf("\n1.�ƿ���     2.��˭�����棿��     3.���ط���\n");
			     fflush(stdin);
				 scanf("%d",&a);
			     if(a==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
			       		Sleep(1000);
		/*÷÷*/      	if(*enemy>0&&*enemy<=4){fight_syphy(hp,fear,atk,syphp,bandage,msyp);}
		/*����*/  		else if(*enemy>4&&*enemy<=8){fight_ske(hp,fear,atk,skehp,bandage,mske);}//����
   	 /*����˹*/    		else if(*enemy>8&&*enemy<=12){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("��������µķ�϶�￴����վ���Ƕ��˲����𣿡�\r");
				   				tinyjumpscare();
				   				Sleep(800);
				   				knockth2();
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("�㾪�ֵ��������ˣ�����˹��˫а�����ɫ�۾���˸�ţ����ݷ����̳����Ұ�ޡ�\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
				   				printf("����Ȼ��Ҳ�Ӳ����ţ�������ǲ�����óȻ���ſ��ܻ������𣿡�\n");
				   				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   				printf("����������¶���Ŀ־�����������һ��а��Ĵ�Ц��\n���㽩Ӳ����������׼������һ����ս��������Ц��ȴ�Ѿ���ʧ��Զ����\n");
				   				Sleep(1000);
				   				printf("ȷ�����Ѿ��뿪����С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	               				room+=1;
				   				*i=0;
								system("pause");
								system("cls");}//����˹
				   		else if(*enemy>12&&*enemy<=18){tinyjumpscare();
				   				printf("����Ϊ��ʲô���Ҫ����Ӱ���˳���ȴֻ���龪һ����\n");
				   				printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	                			room+=1;
				    			*i=0;
								system("pause");
								system("cls");}//��ûд��С����
				   		else if(*enemy>18&&*enemy<=20){fight_cs(hp,fear,atk,cshp,bandage,mcs);}//ϣ�İ� 
			}
	/*������*/   else  if(a==2){if(*enemy>0&&*enemy<=4){printf("�ź���һ��΢�������˵�̾Ϣ��\n");//÷÷ 
									Sleep(300);
			     					printf("\n1.�ƿ���     2.���ط���\n");
			    					fflush(stdin);
									scanf("%d",&b);
									if(b==1)fight_syphy(hp,fear,atk,syphp,bandage,msyp);
									else if(b==2)printf("���������������\n");}
						else if(*enemy>4&&*enemy<=8){printf("�ź��������ܼ����������\n����ɫ����ˮ�ӽűߵ��ŷ����ʽ�����\n");//����
									Sleep(300);
			     					printf("\n1.�ƿ���     2.���ط���\n");
			    					fflush(stdin);
									scanf("%d",&b);
									if(b==1){fight_ske(hp,fear,atk,skehp,bandage,mske);}
									else if(b==2)printf("���������������\n");}
						else if(*enemy>8&&*enemy<=12){printf("�������ź�ͳ���Ц����\n");//����˹
									int roll=rand()%(15+1);
									printf("%d",roll);
									Sleep(300); 
									if(roll>0&&roll<=5){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
										printf("����һ�ݿ���뿪��ǩ�ա���\n");
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
										Sleep(300);
			     						printf("\n1.�ƿ���     2.���ط���\n");
			    						fflush(stdin);
										scanf("%d",&b);
										if(b==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
				  									Sleep(1000);
													tinyjumpscare();
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("����");Sleep(100);printf("Ϊ");Sleep(100);printf("ʲ");Sleep(100);printf("ô");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("����");Sleep(100);
					 				 			    Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					   								printf("\n�㾪�ֵ��������ˣ�����˹��˫а�����ɫ�۾���˸�ţ����ݷ����̳����Ұ�ޡ�\n");
					   								printf("һ��������ʶ��ע������Ժ��������������󾱵�Ƥ�⣬����ļ����ﲻ�Ͻ�����\n����ס�Դ������ؼ��������\n");
					   								Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("��ϣ����ϲ����ݿ־���������\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													printf("���ڲ�������ǿվ�ȽŸ���׼������ӭ��һ����ս��������Ц��ȴ�Ѿ���ʧ��Զ����\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               									printf("*��Ŀ־������ˡ�\n");
	   		          				    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	        	     				    			*fear+=1;
													Sleep(1000);
									  	 			printf("ȷ�����Ѿ��뿪����С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	          						   				*room+=1;
									   				*i=0;
													system("pause");
													system("cls");} 
									   	else if(b==2)printf("�����װ����������\n");}
									else if(roll>5&&roll<=10){printf("\n1.�ƿ���     2.���ط���\n");
			    								fflush(stdin);
												scanf("%d",&b);
												if(b==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
				  										Sleep(1000);
													  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
											   			printf("��������µķ�϶�￴����վ���Ƕ��˲����𣿡�\r");
									   	   tinyjumpscare();
									   	   Sleep(800);
									   	   knockth2();
									   	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
									   	   printf("�㾪�ֵ��������ˣ�����˹��˫а�����ɫ�۾���˸�ţ����ݷ����̳����Ұ�ޡ�\n");
									   	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
									   	   printf("����Ȼ��Ҳ�Ӳ����ţ�������ǲ�����óȻ���ſ��ܻ������𣿡�\n");
									   	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
									   	   printf("����������¶���Ŀ־�����������һ��а��Ĵ�Ц��\n���㽩Ӳ����������׼������һ����ս��������Ц��ȴ�Ѿ���ʧ��Զ����\n");
									   	   Sleep(1000);
									   	   printf("ȷ�����Ѿ��뿪����С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	       						           *room+=1;
								   		   *i=0;
											system("pause");
											system("cls");}
								   		else if(b==2)printf("���������������\n");}	
								   	else if(roll>10&&roll<=15){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
								   			printf("�������š���\n");
								   			Sleep(300); 
								   			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
											printf("\n0.��˭���ǣ���     1.�ƿ���     2.���ط���\n");
											fflush(stdin);
											scanf("%d",&b);
											if(b==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
				  									Sleep(1000);
													tinyjumpscare();
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("����");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("ô");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("Ϊ");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("��");Sleep(100);printf("����");Sleep(100);
													Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					   								printf("\n�㾪�ֵ��������ˣ�����˹��˫а�����ɫ�۾���˸�ţ����ݷ����̳����Ұ�ޡ�\n");
					   								printf("һ��������ʶ��ע������Ժ��������������󾱵�Ƥ�⣬����ļ����ﲻ�Ͻ�����\n����ס�Դ������ؼ��������\n");
					   								Sleep(500);
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("�����������Ц��������˵��ô���ģ�������������ô������\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													printf("���ڲ�������ǿվ�ȽŸ���׼������ӭ��һ����ս��������Ц��ȴ�Ѿ���ʧ��Զ����\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               									printf("*��Ŀ־������ˡ�\n");
	   		          				 			   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	        	     				  			  	*fear+=1;
													 Sleep(1000);
									  			 	printf("ȷ�����Ѿ��뿪����С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	          						   				*room+=1;
									 		  		*i=0;
													system("pause");
													system("cls");}
											else if(b==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("�����档��\n");
													Sleep(500); 
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													printf("\n*������ʲô����\n");
													getch();
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
													printf("���������ڱ������ϣ��������ڿ������ҽ�����㡣��\n");
													SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
													Sleep(500); 
													printf("\n1.�ƿ���     2.���ط���\n");
			    									fflush(stdin);
													scanf("%d",&c);
														if(c==2){printf("���������������\n�ź���һ����Ц�����ܿ�������Զȥ�ˡ�\n");}
														else if(c==1){printf("���ƿ����ţ�����˹��վ���ź�\n");
																	Sleep(500); 
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
																	printf("������ô����İ��Ŵ��ˣ���\n");
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
																	printf("�������㣬¶���ɻ����ɫ��Ƭ�̺�����Ц���������㾯��ض㿪֮ǰ������������ļ��\n");
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
																	printf("���������������Է���������������������������Ҫ��������Щ�һ�֮ǰ����\n");
																	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
																	printf("������Ӱ�����ŵ�Ц����ɢ�ڿ����\n");
																	*tho+=1;
																	Sleep(1000);
									   	  							printf("ȷ�����Ѿ��뿪����С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	       											          		*room+=1;
								   							 	    *i=0;
																	system("pause");
																	system("cls");}}
								   			else if(b==2)printf("���������������\n�ź���һ����Ц�����ܿ�������Զȥ�ˡ�\n");}}
					else if(*enemy>12&&*enemy<=18){printf("�ź�һƬ�ž���\n");
												printf("\n1.�ƿ���     2.���ط���\n");
			    								fflush(stdin);
												scanf("%d",&b);
												if(b==2)printf("���������������\n");
												else if(b==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
				  									Sleep(1000);
				  									tinyjumpscare();
				  									printf("����Ϊ��ʲô���Ҫ����Ӱ���˳���ȴֻ���龪һ����\n");
				  									 printf("��С������ش��������ȣ��ƿ���ͷ�ķ��š�\n");
	              									*room+=1;
				 									*i=0;
				 									system("pause");
													system("cls");}}
					else if(*enemy>18&&*enemy<=20){printf("�ź�һƬ�ž���\n");//ϣ�İ� 
												printf("\n1.�ƿ���     2.���ط���\n");
			    								fflush(stdin);
												scanf("%d",&b);
												if(b==2)printf("���������������\n");
												else if(b==1){printf("�����Ŷ�����\n��ǰֻ��һ���յ��������ȡ�\n");
				  									Sleep(1000);
				  									tinyjumpscare();
				  									fight_cs(hp,fear,atk,cshp,bandage,mcs);}}
					}
				 if(a==3)printf("������Ȱ���������\n");
}
}



int *fight_syphy(int *hp,int *fear,int *atk,int *syphp,int *bandage,int *msyp)
{
					*msyp+=1;
				   int b,c;
				   printf("һ����ª�����ӽ����������ǰ��\n���ɿݵ��ֱ۴ӿ������������������Ĳ�����\n��һƬ����ɫ���̷·�����ݵ��ⲿ��ʼ���졣\n");
			       tinyjumpscare();
		/*÷÷*/   while(*syphp>0)
			       {
			       	//���� 
			       	if(*fear>=10){scaredbysyp(); 
					   return 0;}
					if(*hp<=0){deathbysyp();
					   return 0;}
			       srand((unsigned)time(NULL));
	               int roll=rand()%(15+1);
			       printf("%d",roll);
			       Sleep(300);
			       //��Ļغ� 
			       printf("\n���������%d      ��Ŀ־壺%d\n1.����   2.ʹ����Ʒ   3.����\n\n",*hp,*fear);
				   fflush(stdin);
		           scanf("%d",&b);
		           switch(b)
		            {
		           	  case 1:if(roll>=5){
						     printf("�㹥����ǰ�Ĺ�ꡣ\n�����%d���˺���\n",*atk);
						     *syphp-=*atk;}
						     else printf("�㹥����ǰ�Ĺ�ꡣ\n��ԭ�����ڵ�Ӱ����ɢ�ˣ������������һ�ࡣ\n");
							 break;
					  case 2:printf("ʹ��ʲô��*��ʾ���е���Ʒ�޷���ս��ʱʹ��\n\n1.���� %d\n",*bandage);
					         scanf("%d",&c);
					         if(c==1&&*bandage>0){printf("������������Լ����˿ڣ�3���������»ص���������\n");
					         *hp+=3;} 
							 else if(c==1&&*bandage==0)printf("��û�б����ˣ�");break;
					  case 3:printf("��������˻ط��䡣\n");
					         if(roll>=7)printf("÷÷��Ҫ�����ϻ����ȡ�\n����˦�������ֱ۵ľ������˻ط�������������š�\n");
					         else if(roll>12)printf("÷÷��Ҫ�����ϻ����ȡ�\n��������������һ��֮ңʱͣ���������������˻ط���֮�С�\n"); 
					         else if(roll<7)printf("÷÷����ץס���㣡����ʧ���ˡ�\n"); break;
				    }
			       if(b==3&&roll>=7)break;
			       Sleep(300);
			       //���ֻغ� 
			       if(roll<=3){printf("÷÷��������������ɫ�����ָ�����������ա�\n��¶���İ���Ц������ë���Ȼ��\n");
			       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*��Ŀ־������ˡ�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	               *fear+=1;}
	               else if(roll>3&&roll<=6){printf("��ª���������������ߵ���ӿ����\n�������������Ƭ�����ĺ�ɫ�̺۶��������ѡ�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*��Ŀ־������ˡ�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   *fear+=1;}
				   else if(roll>6&&roll<=9){printf("÷÷������õ�����ָ���������Ƥ����\n��е���ʹ���������5���˺���\n");
				   *hp-=5;}
				   else if(roll>9&&roll<=12)printf("÷÷��Ҫ�����˺��㣬����֪Ϊ����ͣ����������ª��������¶������ı������顣\n");
				   else if(roll>12&&roll<=15){printf("÷÷��ʲô�����Ķ����������Ƥ�⡣\n�������7���˺���\n");
				   *hp-=7;}
			       }
}

int *fight_ske(int *hp,int *fear,int *atk,int *skehp,int *bandage,int *mske)
{
						*mske+=1;
						int b,c;
						printf("���������ӸO�O�@�@��ӿ������\n���ȵ�ǽ���ϣ��ں��������޼׳泱ˮ��ӷ�϶����й���¡�\n������������ĳ����£������ǰ�ĵ����ϣ�����������������Ρ�\n");
			            tinyjumpscare();
		/*����*/        while(*skehp>0)
			            {
			            //���� 
			       	    if(*fear>=10){scaredbyske(); 
					       return 0;}
					    if(*hp<=0){deathbyske();
					       return 0;}
			           srand((unsigned)time(NULL));
	                   int roll=rand()%(15+1);
			           printf("%d",roll);
					   if(b==3&&roll>=7)break;
					   Sleep(300);
			           //��Ļغ� 
			           printf("\n���������%d      ��Ŀ־壺%d\n1.����   2.ʹ����Ʒ   3.����\n\n",*hp,*fear);
				       fflush(stdin);
		               scanf("%d",&b);
		               switch(b)
		                {
		               	  case 1:if(roll>=5){
					    	     printf("�㹥����ǰ�����á�\n�����%d���˺���\n",*atk);
					    	     *skehp-=*atk;}
					    	     else printf("�㹥����ǰ�����á�\n��׷�ӵ���ϣ����Ǿ߰׹ǵ�������һ����\n");
					    		 break;
					      case 2:printf("ʹ��ʲô��*��ʾ���е���Ʒ�޷���ս��ʱʹ��\n\n1.���� %d\n",*bandage);
					             scanf("%d",&c);
					             if(c==1&&*bandage>0){printf("������������Լ����˿ڣ�3���������»ص���������\n");
					             hp+=3;} 
					    		 else if(c==1&&*bandage==0)printf("��û�б����ˣ�");break;
					      case 3:printf("��������˻ط��䡣\n");
					             if(roll>=7)printf("������Ҫ�����ϻ����ȡ�\n����˦���˷�ӵ�����ĳ�Ⱥ�ľ������˻ط�������������š�\n");
					             else if(roll>12)printf("������Ҫ�����ϻ����ȡ�\n����մ����Ţ�Ĺǽ�û��קס����½ǡ�\n"); 
				    	         else if(roll<7)printf("��������ץס���㣡����ʧ���ˡ�\n");break;
				   }
			       if(b==3&&roll>=7)break;
			       Sleep(300);
			           //���ֻغ� 
			           if(roll<=3){printf("��Ⱥ���Ǿ�ɭɭ�İ׹Ǽ�ӿ��������������߹Ǻ��ۿ���\n�Ǿ��������ܼ��ļ׳�����ڳ����������΢Ц��\n");
			           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                   printf("*��Ŀ־������ˡ�\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	                   *fear+=1;}
	                   else if(roll>3&&roll<=6){printf("���õ���ζ��ŧҺ�ʳ��Ǽ����������ϵķ��¡�\nа��ĺ��ɫ�����ڱ��������ߵ���\nʪ�����ζ�·���ĹѨ֮�С�\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                   printf("*��Ŀ־������ˡ�\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				       *fear+=1;}
				       else if(roll>6&&roll<=9){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_RED);
					   printf("\n���ع鳾��֮�С���\n");
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
					   printf("��ǧ����ĳ��Ӹ����Ǿ������ϣ���ʼһͬ��ᡣ\n����������ʹǽ�ڵĻ�ɳ�������ص��䡣\n����������һ�������Ĺ�з����Ŀ�Ц��\n");
				       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                   printf("*��Ŀ־������ˡ�\n");
	                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				       *fear+=1;}
				       else if(roll>9&&roll<=12){printf("��ӿ�ĳ�Ⱥ�������Ϊ�ݹǵ��ֱۣ�ץ������ʺ�\n��ܹ���Ҫ����ȴ��Ȼ�����ˡ�\n�������5���˺���\n");
				       *hp-=5;}
				       else if(roll>12&&roll<=15){printf("��ɫ��������ײ�֪��ʱ������������ϣ��������Ѫ�⵱���������ҧ�š�\n���æ�����Ĵ��������������7���˺���\n");
				       *hp-=7;}
			           }
}

int *fight_cs(int *hp,int *fear,int *atk,int *cshp,int *bandage,int *mcs)
{
					*mcs+=1;
					int b,c;
					for(c=0;c<=50;c++)
					    {Sleep(10);
					    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
					   printf("������Ϊ�Լ����ӵ�����ȥ����\n");
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
						}
				   printf("��ʲô�б��ֱ���Ķ�����Ȼ�������Ǹ���Ӱ����������ǰ��ɢ��������а�����Ϣ��\n����������ı�Ű�����������ս����\n");
			       tinyjumpscare();
	  /*ϣ�İ�*/   while(*cshp>0)
			       {
			       	//���� 
			       	if(*fear>=10){scaredbycs(); 
					   return 0;}
					if(*hp<=0){deathbycs();
					   return 0;}
			       srand((unsigned)time(NULL));
	               int roll=rand()%(15+1);
			       printf("%d",roll);
			       Sleep(300);
			       //��Ļغ� 
			       printf("\n���������%d      ��Ŀ־壺%d\n1.����   2.ʹ����Ʒ   3.����\n\n",*hp,*fear);
				   fflush(stdin);
		           scanf("%d",&b);
		           switch(b)
		            {
		           	  case 1:if(roll>=5){
						     printf("�㹥����ǰ�Ķ��顣\n�����%d���˺���\n",*atk);
						     *cshp-=*atk;}
						     else printf("�㹥����ǰ�Ķ��顣\n�������޷�׽�����Ĵ���֮����\n");
							 break;
					  case 2:printf("ʹ��ʲô��*��ʾ���е���Ʒ�޷���ս��ʱʹ��\n\n1.���� %d\n",*bandage);
					         scanf("%d",&c);
					         if(c==1&&*bandage>0){printf("������������Լ����˿ڣ�3���������»ص���������\n");
					         *hp+=3;} 
							 else if(c==1&&bandage==0)printf("��û�б����ˣ�");break;
					  case 3:printf("��������˻ط��䡣\n");
					         if(roll>=7)printf("ϣ�İ���Ҫ�����ϻ����ȡ�\n����˦������Щ�����ֲп�����ƣ��˻ط�������������š�\n");
					         else if(roll>12)printf("ϣ�İ���Ҫ�����ϻ����ȡ�\n��ƴ��ȫ����������������ǰ�㿴��������ȼ�յı�Ű�Ļ���Խ����ʢ��\n"); 
					         else if(roll<7)printf("ϣ�İ�����ץס���㣡����ʧ���ˡ�\n"); break;
				    }
			       if(b==3&&roll>=7)break;
			       Sleep(300);
			       //���ֻغ� 
			       if(roll<=3){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("����Ҫ���㿪���ƶǣ�ȡ���ǿŴ�������ů�Ķ���������\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("ϣ�İ��������·����﷭�ڵ�а����ڣ���ɫ����������������ʬ�Ĳ�����ζ��\nǿ�ҵĿ־�ϯ������Ĵ��ԣ��㿴�����Լ�Ѫ���ܵ��ķ����ѵĻ���\n");
			       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*��Ŀ־������ˡ�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	               *fear+=2;}
	               else if(roll>3&&roll<=6){printf("Ѫ�����ʺ�Һ���ע��ϣ�İ����ۿ��������԰׵����չ������¡�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("������������࣬������ĳ��Ӻ����顭����\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("��Щ�Һ�ڿɲ�����Ӱ��ӿ������Ϊ���εľ޴󴥽ǣ��������ֶ�����\n���м��ӵ����������������Ķ�������ֹ��סŻ�µ�������\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*��Ŀ־������ˡ�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   *fear+=2;}
				   else if(roll>6&&roll<=9){printf("Űɱ��ԭʼ�嶯�����ڿ����У��������������������Ƥ��֮�£���������������һ���ն���\nѪ��ӿ���������ھ�����ʹ����ҡҡ��׹��\n�������10���˺���\n");
				   *hp-=15;}
				   else if(roll>9&&roll<=12){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("�������ɡ����񱻶��ڼ����ϵ���һ�����Ѱɡ���\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   printf("��������Ѫ�˴��ߵ���ͷ��ӿ�������ǹ�����������ѵ����ߡ�\n�п�Ļþ�������ǰ����������\nϣ�İ��ݺݴ̴���������ơ��������14���˺���\n");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	               printf("*��Ŀ־������ˡ�\n");
	               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
				   *hp-=14;
				   *fear+=1;}
				   else if(roll>12&&roll<=15){printf("ϣ�İ���������Ų��̵����\n�ٻ������������Ӱ������Ĵ��ԣ���ʹ�����ͼ������\n�������Ƥ�⻮����Ѫ���졣�������7���˺���\n");
				   *hp-=10;}
			       Sleep(300);
			       }
} 

int *self(int *hp,int *fear,int *atk,int *cou,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme,int *tho,int *mtho,int *msyp,int *mske,int *mcs)
{
	srand((unsigned)time(NULL));
	int roll=rand()%(15+1);
	int b,c,d;
	char a;
	system("cls");
	printf("*����w�鿴���״̬����Ʒ\n\n*����q�鿴�������\n");
	fflush(stdin);
	a=getch();
	if(a=='q'||a=='Q'){system("cls");
		printf("����̽������ط��Ĺ����л�������ʡ�\n�ռ�������������ʾ��ÿ������֮�У�������˿�����Խ⿪���š�\n����������ʽ�����ɫ��ʾ���������������������̽�����������ܾ���һ����\n\n");
		while(d!=0)
		{
			printf("0.����\n\n");
			printf("1.�������\n");
			printf("2.����˹�����\n");
			if(*msyp!=0)printf("3.÷÷�����\n");
			if(*mske!=0)printf("4.���õ����\n");
			if(*mcs!=0)printf("5.ϣ�İ������\n");
			printf("6.��Ƭ�ϵ�����\n");
			fflush(stdin);
			scanf("%d",&d);
			switch(d)
			{
				case 0:system("cls");break;
				case 1:printf("�����������Լ���İ���ķ����С�\n���ң����������Ƿ��䣬����ķ������⻹�Ƿ��䡣\n����ʲô�ط���������Ϸ�����ʲô����Щ�㶼һ�Ų�֪��\n");break;
				case 2:printf("����Ҿ��취ֻΪ����һ�������˵�����˭��\n");break;
				case 3:if(*msyp!=0)printf("�����������ſɲ��ۡ��ֱۻ���ή����Ů����ʲô�ˣ�\n");
					else printf("�㻹û�в���������ʡ�\n");break; 
				case 4:if(*mske!=0)printf("����ɳ�Ⱥ��ɵ����õ�����ʲô��\n");
					else printf("�㻹û�в���������ʡ�\n");break;
				case 5:if(*mcs!=0)printf("������ƺ�����һ�е���ɱ�������ˣ�����Ϊʲô��������˭��\n");
					else printf("�㻹û�в���������ʡ�\n");break;
				
			}
		}
	}
	else if(a=='w'||a=='W'){system("cls");
    printf("������װ���������С��\n�������Ϊ%d����Ĺ�����Ϊ%d\n�������Ϊ%d����Ŀ־�Ϊ%d\n",*hp,*atk,*cou,*fear);
	printf("1.�����С����%d  2.ֽƬ��%d  3.��ù�������%d  4.ͯ���������%d  5.������%d  6.͸��Һ���%d  7.���ӿס�%d\n",*rustyknife,*paper,*bread,*book,*bandage,*drinkme,*peep);
	Sleep(300);
	printf("ʹ��ʲô��\n\n0.����\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:printf("*һ���⼣�߰ߵ�С�����·���ʱ�����۶ϵ�Σ�ա�\n\n0.����    1.����\n");
			   scanf("%d",&c);
			   if(c==1){printf("������ѵ��������Լ�������\nѪӿ�˳��������۵�ҧ���гݡ�\n3������������������ʧ��\n");
			   *hp-=3;}
			   break;
		case 2:printf("*��Щ���Ƶ�ֽƬ����ӽ����ҵ����ƺ�ɢ���ڸ������䡣\n���ǵıʼ��еĸ�����ͬ��\n\n0.����  1.�鿴ֽƬ1");
			   if(*paper==2)printf("  2.�鿴ֽƬ2");
			   if(*paper==3)printf("  2.�鿴ֽƬ2  3.�鿴ֽƬ3\n");
			   if(*paper==4)printf("  2.�鿴ֽƬ2  3.�鿴ֽƬ3  4.�鿴ֽƬ4\n");
			   if(*paper==5)printf("  2.�鿴ֽƬ2  3.�鿴ֽƬ3  4.�鿴ֽƬ4  5.�鿴ֽƬ5\n");
			   scanf("%d",&c);
			   if(c==1)printf("��������������ÿʱÿ�̶��ڱ仯������ĵ�����\n����������Ҫ������˱��ϲб��ĵ�·��\n������Լ��Ѿ����ˣ�����һ�����˻�д�ռ��𣿡�\n");
			   if(c==2)printf("���ҵ�����ʲô�ط������Ѿ������ʲô��\n�ҵĹ�������ԭ���������Ѿ�����Զȥ�ˡ�\n��̨��ô���ˣ������ҵ����ã�����ô�����أ���\n");
			   if(c==3)printf("�������������˳����������գ�������˵ú��أ�\n����û��ϵ�������Ȼ����Ѫ��ȴҲ������ʧѪ������\n�Ǹ���ϣ�İ����ˡ������������������ǻ��Ŷ�ǿ�ҵĶ���Ͳ��̣���Ҫ�뿪����ط���\n̫Σ���ˣ���һ�����ڸ����Ĵ�Ѱ���ҡ�\n�ҵøϿ��뿪������С���\n");
				if(c==4)printf("����Ȼ������������ϲ�����������أ�\n�ҿɲ�̫ϣ����������Ϊ����ϣ�İ����������ҵ��鷳��\n���Ǹ��ֲ����˰��������������Ѿ��������ǳ����ˣ�������㻹�����뿪����ͱ�����һζ�ӱ�ս����\n����ǰ�����㲻�����������Լ����������Ķ����Ӱ���ⶰ���ӣ��������ʲô��˼�ġ���\n");
				if(c==5)printf("��\n     ���ǵ����ܲ��ᱻ����������֪����\n\n					Q.��1921��\n");
				break;
		case 3:if(*bread==0)printf("��û������ˡ�\n");
					       else if(*bread>=0){printf("��鳤��ù��������Ѿ��ڷ���Ľ�����˲�֪��á�\n\n0.����   1.�Ե�\n");
					       scanf("%d",&c);
			   	           if(c==1&&bread!=0){printf("�����ű�����������������\n�����棬�����港�ܵľ����ƺ������첻��Ӱ�졣\n��������ظ���3�㡣");
							  *hp+=3;
							  *bread-=1;}}break;
					case 4:if(*book==0)printf("��û�й������ˡ�\n");
					       else if(*book>=0){printf("����һ���������Ƶ�ͯ�������顣\n\n0.����   1.�Ķ�\n");
					       scanf("%d",&c);
			   	           if(c==1&&*book!=0){if(roll<=10){printf("��������а����Σ�յĵط���ֻ����ܰ��ͯ�������ܸ�����һ˿�����ϵĸ�ο��\n");
			   	                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	  									printf("*��Ŀ־彵���ˡ�\n");
	 									 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
	 									 *fear-=1;
							   			}
			   	                    else{printf("��ͼ��ͯ��������Ѱ������ο����㱻�Ȿͯ���ڰ����ں����𺳡�\n����������Ĳ�����־塣\n");
			   	                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	                                            printf("*��Ŀ־������ˡ�\n");
	                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
			   	                                *fear+=1;}
							  		*book-=1;}}break;
					case 5:if(*bandage>=0){printf("һ��մ����ɫҺ��ı�������֪�Ƿ�������ʹ�ù���\n\n0.����   1.ʹ��\n");
					       scanf("%d",&c);
			   	           if(c==1&&*bandage!=0){printf("�㱿׾���ñ����������˿ڡ�\n��������ظ���5�㡣\n");
							  *hp+=5;
							  *bandage-=1;}}
							else printf("��û�б����ˡ�\n");
							break;
					case 6:if(*drinkme>=0){printf("һ���ڲ�����������������͸��Һ�塣\n���ӱ���������д���������ȵ��ң�DRINK ME������\n\n0.����   1.�ȵ�\n");
						   		scanf("%d",&c);
			   	           		if(c==1&&*drinkme!=0){printf("������ش򿪹��ӣ��ս�������Һ�����ζ��\n�������������⡣\n�������������ͷ��֮��������\n������Һ���¶ǣ���ͻȻ�о�ͷ��Ŀѣ����ǰ��һ�п�ʼ�޶˵ر仯���޹��ɵطŴ���С�š�\n�Իõĸо����˺�һ������ˡ����θ�������\n");
			   	             	 Sleep(1000);
								  printf("\n20�������ص�������������о����Ƕ��ġ�\n"); 
			   	            	  *hp+=20;
			   	      	        *drinkme-=1;}}
							else printf("��û�������Ʒ�ˡ�\n");
							break;
					case 7:if(*peep==0)printf("��û�������Ʒ��\n");
						   else if(*peep>=0)printf("һöԲ�εĿ��ӿס�\n��֪ʲôԭ�������������Ͽ��Կ����ź���龰��\n�����Ʒ�޷�ֱ��ʹ�á�\n");break;
			   }
		}
}

void deathbycs()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("ϣ�İ��ᴩ����ľ��������ʺ��Ŀ��Ѫ�ӻ����ӿ������\n���ھ�ʹ�в�ס�����ţ�ͫ����ʧȥ���ࡣ\n");
	Sleep(1000);
	printf("����������������ĸ�ǻ���͵��жϳ鴤���ѵļ���Ⱥ��\n�ǿ����౩¶�ڿ����У�΢���رö��ţ��������ϸ��ֳ��п��΢Ц��\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
	printf("���������Ѿ�û�����ˣ�����������︯�ðɡ���\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	Sleep(1000);
	printf("���Ŷ����Ķ�������������������Ҳ�뿪������塣\n�Ǹ�а�����Ӱ��ʧ���ŵı���ȥѰ����һ�������ߡ�\n");
	Sleep(1000);
	printf("\n        *��Ϸ����*");
	getch();
}

void scaredbycs()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("�������͵Ŀ־彫�������ѹ�ȵ��˼��ޡ�\n��ǰ���˿ɲ��ľ�����Ȼʹ�������ʧ�⡣\n");
	Sleep(1000);
	printf("���������������ǰ��һ�У���ס˫�۵���ָ���������пٳ��Լ������������\n");
	Sleep(1000);
	printf("ϣ�İ��������·������ı��ʣ����䡢�п���а���������������������\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);
	printf("������������Ҳ�޷����������ˡ���\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	Sleep(1000);
	printf("����ֻ����ƾ�Լ�������Ѫ�ȵĻþ���û�����ǽ������ǻþ���\n�����������ǻ�������ǿ����ɫ�����ࡣ\n");
	Sleep(1000);
	printf("����Ҳ������ʹ�����������ͺ����ˡ�\n�����ڱ���ĵ����ϣ�׹����ڵ�����֮�С�\n");
	Sleep(1000);
	printf("\n        *��Ϸ����*");
	getch();
}

void deathbyske()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("��Ⱥ�Ŀ�ҧ����Ϊ������Ѫ����˿ڡ�\n���ڣ�������֧�����Ѿ���ȱ��ȫ�����塣\n");
	Sleep(1000);
	printf("�㲻�ʵص����Լ���Ѫ��֮�У����������ˮ��������������塣\n���Ǵ��㳨�����˿���ǻ�������룬���ڲ���ʼ��ʳ������塣\n");
	Sleep(1000);
	printf("�������������ʣ�׹ǵ���ǻ֮�У�߬���ǿŲ�������������ʱ�������ʶ�Ѿ�������ɢ���ⶰ����������С�\n");
	Sleep(1000);
	printf("\n        *��Ϸ����*");
	getch();
}

void scaredbyske()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("������˷�Ϯ���������������������񾭱Ƶ��˽����ļ��ޡ�\n");
	Sleep(1000);
	printf("��ʹ��ذ����ţ��ɴ���Ѫ˿��˫�ۣ�������ס˫����\n����ĹѨ���޾��־��Ѿ��������־����������������");
	Sleep(1000);
	printf("Ȼ�����������޷��������޷�ֹͣ����Ⱥ�����㷢���߰��ļ�Х��\n");
	Sleep(1000);
	printf("�㾫ƣ���ߵص����˵��ϣ����ӳ�������ģ����Ǿ����ÿն�����ڵ��ۿ���\n");
	Sleep(1000);
	printf("\n        *��Ϸ����*");
	getch();
}

void scaredbysyp()//��÷÷���� 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("�־塭�����˴��������Ŀ־塣\n��ѹ�����㣬�������־����������������\n");
	Sleep(1000);
	printf("��������Ϣ���糱ˮ��ӿ����˲����û�����ͷ����\n�㽩Ӳ�������ɬ��˫�ۣ�������˵��ϡ�\n");
	Sleep(1000);
	printf("÷÷��������ʧȥ���������塣\n����󿴵��������ǶԱ��˵����۾���������Ļ��һֻ����ʪ��Ұ����\n");
	Sleep(1000);
	printf("\n        *��Ϸ����*");
	getch();
	exit(0);
}

void deathbysyp()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("���Ѫ�ڲ��ϵĴ����������ɣ���Ұ���һƬ�ʺ졣\n");
	Sleep(1000);
	printf("÷÷���ڽ���ס������ʺ�������ľ���������˫�ɿ��ֱ۵ļ�ѹ�£�����ֱ�Ӵ����­�ǵ���������\n");
	Sleep(1000);
	printf("��ܿ�ʲôҲ��������ʲôҲ�������ˡ�\n");
	Sleep(1000);
	printf("�����˱��˵�һ���Ѿ�����Զȥ������������һЩ��Ҫ����\n");
	Sleep(1000);
	printf("\n        *��Ϸ����*");
	getch();
	exit(0);
}

void knockth2()//����˹���������һ���汾
{
					printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("Ѫ");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("ʹ");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("����            \n");
} 

void knockth()//����˹������ 
{
	printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("û");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("ѧ");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("ѵ");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("����            \n");
}

int *search(int *i,int *room,int *rustyknife,int *paper,int *bread,int *book,int *bandage,int *peep,int *drinkme)
{
	srand((unsigned)time(NULL));
	int n=rand()%(15+1);
	int b;
    printf("�㿪ʼ�������䡣\n");
	if(*i==0&&*room==0){printf("\n���ҵ���һ�������С����\n��Ȼ�⼣�߰ߣ�ȴ������֡�\n\n*��װ���������С����\n");
	*rustyknife=1;}
	else if(*i==1&&*room==0){printf("\n���ҵ���һ��ֽƬ��\n��������������ÿʱÿ�̶��ڱ仯������ĵ�����\n����������Ҫ������˱��ϲб��ĵ�·��\n������Լ��Ѿ����ˣ�����һ�����˻�д�ռ��𣿡�\n"); 
	*paper=1;}//ֽƬ1
	else if(*i==0&&*room==1){printf("\n���ҵ���һ��ֽƬ��\n���ҵ�����ʲô�ط������Ѿ������ʲô��\n�ҵĹ�������ԭ���������Ѿ�����Զȥ�ˡ�\n��̨��ô���ˣ������ҵ����ã�����ô�����أ���\n");
	*paper=2;}//ֽƬ2
	else if(*i==0&&*room==2){printf("\n���ҵ���һ��մ��Ѫ����ֽƬ��\n�������������˳����������գ�������˵ú��أ�\n����û��ϵ�������Ȼ����Ѫ��ȴҲ������ʧѪ������\n�Ǹ���ϣ�İ����ˡ������������������ǻ��Ŷ�ǿ�ҵĶ���Ͳ��̣���Ҫ�뿪����ط���\n̫Σ���ˣ���һ�����ڸ����Ĵ�Ѱ���ҡ�\n�ҵøϿ��뿪������С���\n"); 
	*paper=3;}//ֽƬ3 
	else if(*i==0&&*room==3){printf("\n��ӷ�����һ����ŷ����ҵ���һ��ֽƬ���ּ�����ŤŤ��ī��δ�ɣ��ƺ��Ǹ�д�������ŷ���ġ�\n����Ȼ������������ϲ�����������أ�\n�ҿɲ�̫ϣ����������Ϊ����ϣ�İ����������ҵ��鷳��\n���Ǹ��ֲ����˰��������������Ѿ��������ǳ����ˣ�������㻹�����뿪����ͱ�����һζ�ӱ�ս����\n����ǰ�����㲻�����������Լ����������Ķ����Ӱ���ⶰ���ӣ��������ʲô��˼�ġ���\n");
	*paper=4;}//ֽƬ4
	else if(*i==1&&*room==3){printf("\n������ľ���ĳ��룬����һ��͸��Һ���ڲ�����������������\n���ӱ���������д���������ȵ��ң�DRINK ME������\n");
	*drinkme+=1;} 
	
	else if(n<4&&*i<3){printf("\n���ҵ���һ�鷢ù�������\n");
	*bread+=1;}
	else if(n>=4&&n<7&&*i<3){printf("\n���ҵ���һ���ƾɵĹ����顣\n");
	*book+=1;;}
	else if(n>=7&&n<10&&*i<3)printf("\n���ҵ���һ��������\n��ûʲô���á�\n");
	else if(n>=10&&n<12&&*i<3){printf("\n���ҵ���һ���ù��ı�����\n");
	*bandage+=1;}
	else if(n>=12&&n<15&&*i<3){printf("\n���ҵ���һöԲ�εĿ��ӿס�\n��֪ʲôԭ�������������Ͽ��Կ����ź���龰��\n");
	*peep+=1;}
	else if(n=15&&*i<3)printf("\n��ʲôҲû�ҵ���\n");
	else if(*i>=3)printf("\n�ƺ��Ѿ�û���·����ˡ�\n");
	*i+=1;
}

void title()
{
	printf(" _   _                 _            __   _____ _ _            _   \n");
	Sleep(150);
    printf("| | | |               | |          / _| /  ___| (_)          | |  \n");
	Sleep(150);
    printf("| |_| | ___  __ _ _ __| |_    ___ | |_  \\ `--.| |_  ___ _ __ | |_ \n");
	Sleep(150);
    printf("|  _  |/ _ \\/ _` | '__| __|  / _ \\|  _|  `--. \\ | |/ _ \\ '_ \\| __|\n");
	Sleep(150);
    printf("| | | |  __/ (_| | |  | |_  | (_) | |   /\\__/ / | |  __/ | | | |_ \n");
	Sleep(150);
    printf("\\_| |_/\\___|\\__,_|_|   \\__|  \\___/|_|   \\____/|_|_|\\___|_| |_|\\__|\n\n");
	Sleep(300);
	printf("                    ��    ��    ��    ��\n\n"); 
}

void mainmenu()
{
	Sleep(300);
	printf("            0.�鿴˵��     1.����     2.�뿪     3.������ͨ�������˲����ã�\n");
}

void beginnerguide()
{
	printf("\n***���ǵ�һ������ָ��***\nֱ�������賿���������ڵ���ǰд�����Ϸ˵������û���������µ����߷�չ���磬��ֻ��һЩ��ɢ����ʵ�ֵĵ��ӣ������뵽��д���ġ�Ŀǰ������³�����̫�಻ȷ���ԣ�ֻ��һ�����ȷ�����ǿ϶���Щ���벻���˲��ܴ�ɵĽ�֡�\n��Ϊ���Ǳ�alpha��alpha�İ汾���ı����ܼ�ª���ܰ�����д��Ļ�����ɫ�ɡ�"); 
	printf("\n\n***���ǵڶ�������ָ��***\n�հ����õ�ս��д�ˣ��������ѣ��򲻹��ǵû�����ۼ�����·����Ϊ�ֽ׶�д�õ�����ע��������˭�㶼�򲻹���\n���������а취�ù������������\n�������Ҳû���壬��ѹ����û��ʼд���ǵ��������飬��������\n"); 
	printf("\n\n***���ǵ���������ָ��***\n��Ҫ����ѡ����������֣����ܵ����޷�Ԥ�ϵ�bug������Ϊʲô������Щbug���㿴�����пյ������𣿣����ţ�\n"); 
	fflush(stdin);
	getch();
}

void knocking()
{
	int shake_time = 10; //���ߵ�ʱ�䣬Ϊ5����
    int shake_distance = 5; //�ƶ���10����
    RECT rect; //RECT��һ�����νṹ�壬�൱�ڱ�����һ�����ε������ߵ�����
    HWND window = NULL, oldwindow = NULL; //�������ھ��
    int x, y, width, height; //�������洰�ں�������Ϳ�ȡ��߶ȵı���
    int i;
    //��50�ΰ�
    for (i = 0; i < 3; i++) {
        window = GetForegroundWindow(); //�õ������
        if (window != oldwindow) {
            //��ȡָ�����ڵ�λ��
            GetWindowRect(window, &rect);
            x = rect.left;
            y = rect.top;
            width = rect.right - x;
            height = rect.bottom - y;
            oldwindow = window;
        }
        MoveWindow(window, x - shake_distance, y, width, height, TRUE); //�ƶ����ڣ������ƶ���10���أ���ͬ
        Sleep(shake_time);  //����time���룬�߳�����
        MoveWindow(window, x - shake_distance, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y, width, height, TRUE);
        Sleep(shake_time);
    }
}

void tinyjumpscare()//С�������� 
{
	int shake_time = 20; //���ߵ�ʱ�䣬Ϊ5����
    int shake_distance = 10; //�ƶ���10����
    RECT rect; //RECT��һ�����νṹ�壬�൱�ڱ�����һ�����ε������ߵ�����
    HWND window = NULL, oldwindow = NULL; //�������ھ��
    int x, y, width, height; //�������洰�ں�������Ϳ�ȡ��߶ȵı���
    int i;
    //��50�ΰ�
    for (i = 0; i < 3; i++) {
        window = GetForegroundWindow(); //�õ������
        if (window != oldwindow) {
            //��ȡָ�����ڵ�λ��
            GetWindowRect(window, &rect);
            x = rect.left;
            y = rect.top;
            width = rect.right - x;
            height = rect.bottom - y;
            oldwindow = window;
        }
        MoveWindow(window, x - shake_distance, y, width, height, TRUE); //�ƶ����ڣ������ƶ���10���أ���ͬ
        Sleep(shake_time);  //����time���룬�߳�����
        MoveWindow(window, x - shake_distance, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y - shake_distance, width, height, TRUE);
        Sleep(shake_time);
        MoveWindow(window, x, y, width, height, TRUE);
        Sleep(shake_time);
    }
}
