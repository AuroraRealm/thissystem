//this is a wonderful windows 12.4.0
#include<bits/stdc++.h>
#include<windows.h>
#include<fstream>
using namespace std; 
//����⣺������system("cls"); 
//�ȴ���Sleep(); 
//������Beep(Ƶ��,ʱ��); 
string s;
string o;
string c; 
int abc;

void Prints(string s,int speed)//�Զ����� 
{
	for(int i=0; i<s.size(); i++)
	{
		cout<<s[i];
		Sleep(speed);
	}
	cout<<endl;
	return ;
}
void wechat(){
	puts("����΢�ţ�����");
	puts("wx�ţ�bgp20130427.��֤��Ϣ���ã�LUOGU,UID=XXX(XXXΪ���uid��)");
	puts("������Ǹ�xxs�G��");
	return ;
}
void gameku(){
	string ggg = "��ӭ����4399С��Ϸ����";
	Prints(ggg, 300);
	system("pause");
	system("start https://www.4399.com");
	return ;
}
void leetcode(){
	string wreerq = "��ע�⣬���εı��֮�ã����ܻ�����ҹ�������ʹ��֮ǰ�����ѯ���ҽ��ʹ�ã�����";
	puts("������վ-----ȫ������(���񲡻���)��ѡ��");
	Prints(wreerq, 300);
	puts("ȷ����(Y/N)");
	char c;
	cin >> c;
	if(c == 'Y'){
		puts("��ȷ���Ļ����ҾͲ�������");
		Sleep(1000);
		system("start https://leetcode.cn/") ;
	} 
	else{
		return ;
	}
	return ;
}

void coutrlor(){
	puts("��������������������㣬��������ţ�������������");
	int xv, zxcv;
	char yyy;
	cin >> yyy;
	cin >> xv >> zxcv;
	if(yyy = '+'){
		cout << xv + zxcv << endl;
	} 
	else if(yyy = '-'){
		cout << xv - zxcv << endl;
	}
	else if(yyy = '*'){
		cout << xv * zxcv << endl;
	}
	else if(yyy = '/'){
		cout << xv / zxcv << endl;
	}
	else{
		puts("��Ч����");
		return ;
	}
} 
void CPS(){
	puts("���������Ϸ�ٶ�---------������࣬��Ϸ�Ϳ��ң�����");
	Sleep(1000);
	system("start https://clickpersecond.com/cn/1-second/");
	return ;
} 
void mail(){
	puts("���Լ���δ������");
	string name, things, fut;
	int ededed;
	cout << "����������֣�";
	cin >> name;
	cout << "������δ��������ְҵ��";
	cin >> things; 
	cout << "�������Ը��";
	cin >> fut;
	puts("�ѷ��ͣ�") ;
	puts("�Ƿ�鿴�ż�(1/0)");
	cin >> ededed;
	if(ededed == 0){
		return ;
	} 
	else{
		cout << name << ":" << endl;
		cout << "��ã�δ����" << name << "����ϣ�����Ϊһ��" << things << "��������" << fut << "��ϣ��������ɣ���";  
		puts("");
		cout << "                                                                                             " << name;
		cout << endl;
	}
	return ;
} 
void bd(){
	puts("�ٶ�һ��");
	Sleep(1000);
	system("start https://www.baidu.com/");
	return ;
} 
void text(){
	puts("ˢ��ʱ�䵽�ˣ�ˢ��ɣ�");
	Sleep(1000);
	int abc = rand()%(10120-1000)+1000;
	puts("��������ţ�"); 
	string qwe;
	cin >> qwe;
	string qwqw = "start https://www.luogu.com.cn/problem/" + qwe;
	system(qwqw.c_str());
//	puts("����ĵ������");
//	Sleep(3000);
//	string s;
//	puts("���������ҳ��ַ:");
//	cin >> s;
//	s = "start " + s;
//	system(s.c_str());
//�������� wushaochen yi Edogawa_Conan
	return ;
}
static string nowtm(){
	time_t t = time(NULL);
	char ch[64] = {0};
	strftime(ch,sizeof(ch) - 1,"%Y-%m-%d %H:%M:%S",localtime(&t));
	return ch;
}
void presenter(){
	puts("�����Ǵ�Һã����ڵ�ʱ���ǣ�");
	cout << nowtm() << endl;
	cout << endl;
	puts("������ô������ȥ����");
	puts("������"); 
	system("start https://www.luogu.com.cn/team/71582");
	return ;
}
void downcpp(){
	puts("����������c++������");
	Sleep(2000);
	system("start https://www.onlinedown.net/soft/9500.htm");
	return ;
}
void chinajy(){
	puts("�����ƽ���ƽ̨");
	Sleep(2000);
	system("start https://basic.smartedu.cn/");
	return ;
}
void funnyth(){
	system("echo ���������");
	Sleep(2000);
	system("start https://lglg.top/61884"); 
	return ;
}
void codeforces(){
	system("echo CODEFORCES----��������ʿ������");
	system("start https://codeforces.com/") ;
	return ;
}
void game(){
	string qwq = "������Ϸ���𣿺������ɣ�";
	Prints(qwq, 50);
	system("echo ��������minecraft");
	system("pause");
	system("start http://ws.imc.re/");
	puts("�����ң��ϵþ��ˣ���");
	return ; 
} 
void gametwo(){
	string qwer = "����ʱ��-------��Ϸʱ��";
	Prints(qwer, 300);
	system("echo googleС�������߰汾������");
	system("pause");
	system("start https://dinorunner.com/zh/");
	return ; 
} 
void txt(string q){
	puts("�ı��༭��");
	Sleep(1000);
	system("cls"); 
	o = "����һ���ı�����д����������������д�������Ҫ�á�/��+ enter������ע�⣬��Ҫ����Լ������ı��ģ�û���κζ��������㣬�����ʹ�ã�������";
	Prints(o,30);
	for(int i = 0;i <= 10000;i++){
		cin >> s[i]; 
		if(s[i] == '/'){
			break;
		} 
	}
	return ; 
}

void qwqw(){
	puts("ϵͳ֮��---һ������");
	Sleep(500);
	system("start https://windows.ycgxgy.cn/");
	return ;
} 

void cpu(){
	puts("CPU���ã�Intel Core i7");
	puts("ip��ַ��223.101.195.145");
	return ;
} 
void copyright(){
	puts("copyright by longlong Co.,Ltd..");
	return ;
} 
void input_zll(){
	puts("����ָ�����վ������");
	puts("����");
	string ssss;
	cin >> ssss; 
	ssss = "start " + ssss;
	system(ssss.c_str()); 
//	char str2[1024];
//cin.getline(str2,1024);//����char����
	return ;
}
void catstore()
{
	puts("���ڼ���ԭ�򣬸����̵��ݲ�֧���ڸð汾��ʹ�ã�ֻ�����Ա��������¡�"); 
	puts("");
	puts("");
	puts("");
	puts("                                                          �׸�ƽ");
	puts("                                                   2023��12��28��");
	return ;
}




void jd(){
	puts("�������ɣ�");
	Sleep(1000);
	ShellExecuteA(NULL, "open", (LPCSTR)"https://www.jd.com/", NULL, NULL, SW_MAXIMIZE);
}


void kfcid(){
	Prints("QQ��Ѷ��-----�������������", 500);
	system("start https://www.qq.com/");
	Prints("66666", 500);
	Prints("666666666666666666666", 500);
	Prints("QQ��Ѷ��-----�������������66666666666666666666666666", 500);
	Prints("QQ��Ѷ��-----�������������66666666666666666666", 500);
	return ;
}
void fy(){
	puts("360����------���ⷭ�������У�");
	system("start https://fanyi.so.com/#");
	puts("66666666666666666");
	Prints("666666666666666666666", 200);
	return ;
}
void address(){
	puts("We are in:");
	puts("�й�����ʡ�����к������л�·129-2-206�Ƽ����޹�˾");
	return ;
}
void state()
{
	puts("����");
	puts("CPU��CNQXZ-C9000S 3.2THZ");
	puts("GPU��CNQXZ-G9000S 5GB�洢 2.33THZ  30.2�� ͼ����Ⱦ/��");
	puts("RAM: 64GB  ROM: 12TB");
	puts("16λ DOSʽϵͳ     CN-QX-OS V12.1.2");
	puts("״̬");
	cout<<"CPU "<<rand()%15<<"%"<<endl;
	cout<<"GPU "<<rand()%15<<"%"<<endl;
	cout<<"RAM "<<rand()%10<<"%"<<endl;
	cout<<"ROM 1%"<<endl;
	return ;
}
void prog(){
	puts("���õı�����--���IDE");
	Sleep(3000);
	system("start https://www.luogu.com.cn/ide");
	return ;
}
void update()
{
	puts("2023-12-23 1.0.0 �ο�ʼ�ĵط�");
	puts("2023-12-24 1.0.1 �����˿��������������˽���������ʼд�˵�һ������");
	puts("2023-12-28 1.0.2 д�˸��������ͳ���");
	puts("2023-12-31 1.0.3 �����˿���������д�˸��������");
	puts("2023-12-31 1.0.4 д�˸��������ͳ���");
	puts("2024-1-2   1.0.5 �޸������bug");
	puts("2024-1-8   1.0.6 д�˸������and went to Harbin���Ը��½���");
	puts("2024-1-13  1.0.7 д�˸�������(���Գɼ���������)");
	puts("2024-1-13  1.0.8 ˲����£�����baidu�����");
	puts("2023-1-14  1.0.9 �����˿�������(��Ц)");
	puts("2024-1-14  1.1.0 д�˸�������");
	puts("2024-1-22  1.1.1 �쿴��΢�ţ�(�˺���)");
	puts("2024-1-23  1.1.2 ���˸�����c++");
	puts("2024-2-3   1.1.3 ������Ʒ(����������)");
	puts("2024-4-26  1.1.4 ���ֿ������������⣬����һ��(���º�����������)");
	puts("2024-4-26  1.1.5 ���ԣ������⣡��(զ���£�Ϊ��û�й��ڱ�������)");
	puts("2024-4-26  1.1.6 ΢���������ָ���һ��");
	puts("2024-4-26  1.1.7 ��pause���ˣ�����BuG");
	puts("2024-4-27  1.1.8 ����������⣡��");
	puts("2024-4-27  1.1.9 �ĵ�ϵͳ���ܣ����ɱ��ϵͳ");
	puts("2024-4-27  1.2.0 �ĵ�д�ְ壬Ū�˸��ṹ");
	puts("2024-4-27  1.2.1 �ѿ������ָĵ������˶���ĳ���֣��ѽ����ɾ��"); 
	puts("2024-4-27  1.2.2 д�˸���Ϸָ��"); 
	puts("2024-4-27  1.2.3 �޸Ķ�����ʽ"); 
	puts("2024-5-10  1.2.4 ��д�˸���Ϸָ��"); 
	puts("2024-5-10  1.2.5 ���˸���Ϸָ��"); 
	puts("2024-5-10  2.0.0 ���������ϵͳ��ʮ���Ƚ�������һ�����Զ������ҳװ��"); 
	puts("2024-5-10  2.1.0 ����ʵ��ȫ���Զ����ػ���������ϲ��������(���Ը���һ�°汾)");
	puts("2024-5-11  2.1.1 �õ���������վ������������������");
	puts("2024-5-11  3.0.0 ϵͳ��������£�������ϲ����ͬʱ�����Ҳȫ�������Զ�����������ϲ����");
	puts("2024-5-11  3.0.1 �Ѹ��Ĺ��ڱ���������������");
	puts("2024-5-11  3.1.1 ����ָ�����ϵͳ������������");
	puts("2024-5-11  3.1.3 �����ڵ�㶫��");
	puts("2024-5-12  3.1.4 �����Ͻ���Ϯ");
	puts("2024-5-12  3.1.5 �����������");
	puts("2024-5-13  4.0.0 �����+4399");
	puts("2024-5-13  4.1.1 ����¿���������ʵ��ϵͳ��������������");
	puts("2024-5-13  5.0.1 ϵͳ����µ�¼ϵͳ");
	puts("2024-5-13  6.3.0 ������˹��棡�������Ͻ���Ϯ������"); 
	puts("2024-5-13  7.3.1 ����°칫ϵͳ������");
	puts("2024-5-13  7.4.2 ���ڵ�");
	puts("2024-5-13  7.4.3 ����ɾ�˰�");
	puts("2024-5-15  8.1.0 ����¼�����");
	puts("2024-5-15  8.1.1 �Ľ�������");
	puts("2024-5-15  8.1.2 �ָĽ�������");
	puts("2024-5-17  8.5.3 �����������Ƶ���������� ");
	puts("2024-5-17  9.0.0 ������Ϣѧ������ϰϵͳ������ ");
	puts("2024-5-17  9.3.2 ����TBS��˾����!");
	puts("2024-5-17  10.0.0 �����163���䣡ͬʱ����΢�Ž��ܣ�") ; 
	puts("2024-5-17  10.5.3 ���°�������վ��׷��Ч��˲�������� ");  
	puts("2024-5-18  10.10.10 ����¿����������������� "); 
	puts("2024-5-18  11.1.1 �����ϵͳ֮�ң��������������������� "); 
	puts("2024-5-18  11.1.2 ���Ŀ�������ĳ����"); 
	puts("2024-5-18  11.1.2 ����"); 
	puts("2024-5-18  11.10.1 �����"); 
	puts("2024-5-18  11.11.11 �����ʱ��"); 
	puts("2024-5-18  11.11.12 ��Ϊ����ʱ��"); 
	puts("2024-5-18  12.1.1 �ѻ�С�ձ�������"); 
	puts("2024-5-18  12.1.2 ��������������������"); 
	puts("2024-5-18  12.1.3 ������������������������"); 
	puts("2024-5-18  12.2.3 �������Ѷ��������������������������"); 
	puts("2024-5-23  12.3.0 �����360���룡������"); 
	puts("2024-5-23  12.3.0 ����"); 
	puts("2024-5-30  12.4.0 �����CPS���ԡ�����Click per second"); 
	puts("2024-5-31  12.4.0 ����again"); 
	puts("2024-5-31  12.4.0 ϵͳ��������700�У�����"); 
	puts("2024-5-31  12.4.1 ��ʾ����һ�¡�����"); 
	puts("2024-5-31  13.1.1 �����δ�����䣡��"); 
	return ;
}
void looking(){
	puts("����ĵ������");
	Sleep(3000);
	string s;
	puts("���������ҳ��ַ:");
	cin >> s;
	s = "start " + s;
	system(s.c_str());
	return ;
}
void sd(){
	puts("�մ�칫------���Ϲ���");
	system("start https://bangong.360.cn/index.html#");
	return ;
}
void bat(){
	puts("����㲻����Ļ����������ҹ�һ����ĵ�����(yes/no)");
	string qeew;
	cin >> qeew;
	if(qeew == "yes"){
		puts("ok bye");
		system ("shutdown -s -t 10");
	} 
	else if(qeew == "no"){
		puts("no�����ͬ��");
		system ("shutdown -s -t 10");
	} 
	return ;
} 
void about_windows(){
	puts("���ǵ�ϵͳ��Ц�ָ�Ч�����ԴӸ������������У�Ϊ�����ʿ��������ϵͳ"); 
	puts("��������ϵͳ��Windows 10"); 
	puts("��������CPU��intel Core i7"); 
	puts("ϵͳ��𣺻���ubuntu��ָ�����ϵͳ"); 
	puts("���ƣ�alanbecker's-first-PC"); 
	return ;
}
void pblktct(){
	puts("alanbecker���������sunyuhao����༭��tongyifeng�������á��˰�ȨΪsunyuhao��alanbecker���У�������δ���Ȩ��");
	puts("�������˽���ڸ���վ�Ϸ�����лл");
	puts("�����վ                        alanbecker��ϵ���alanbecker");
	puts("www.luogu.com.cn                sunyuhao��ϵ���stzhl"); 
	puts("Copyright by sunyuhao and alanbecker C");
	return ;
}
void look(){
	puts("���");
	Sleep(1000);//43.6 is lowest 
	system("start https://hao.360.com/");
	return ;
}
void taotao(){
	string sss;
	puts("�Ƿ���");
	cin >> sss;
	if(sss == "no"){
		cout << "лл�ݹ�";
		return ; 
	}
	else{
		system("echo 66666666666666666666");
		Sleep(2000);
		system("start https://www.taobao.com/");
	}
	return ;
} 
void kkk(){
	puts("������ˢ����Ƶ�ɣ�"); 
	Sleep(1000); 
	system("start https://www.ixigua.com/");
	return; 
}
void ybt(){

	puts("��Ϣѧ����������ϰ��վ������");
	Sleep(2000);
	puts("������ sunyuhao") ;
	Sleep(2000);
	system("start http://ybt.ssoier.cn:8088/ ") ;
	return ;
}
void TBS(){
	puts("����TBS��˾������2023��");
	puts("����������Ա���");
	puts("�ֱ��ǣ�alanbecker(�ܴ������)");
	puts("sunyuhao���ܱ༭(ͬʱ���𲿷ִ������ )");
	puts("Tongyifeng����һ������");
	puts("��ϵͳ��2023-12-23 ��ʼ���룬�������ף�����Ϯ��лл��");
	puts("sunyuhao �¾�");
	return;	
}
void ys(){
	puts("�����һ��163����ɣ���");
	Sleep(1000);
	system("start https://mail.163.com/"); 
	return;
}
void ajy(){
	puts("��ˢ�������������հɣ�");
	Sleep(1000) ;
	system("start https://www.iqiyi.com/ ");
	return;
}
void jjxrb(){
	puts("�ѻ�С�ձ��޵а棡");
	Sleep(1000);
	puts("�ǽ�һ��ˬˬˬ���������������ޣ���������"); 
	ShellExecuteA(NULL, "open", (LPCSTR)"https://www.2344.com/flash/28135.htm", NULL, NULL, SW_MAXIMIZE);
}
int main(){
	puts("�����ȵ�½");
	puts("�������˺�������");
	string qaz, wsx;
	cin >> qaz >> wsx;
	if(qaz == "alanyufeng" && wsx == "bgp20130427"){
		system("cls");
		puts("Ϊ��ֹ��Ļ̫С��������������������Ŵ���Ļ");
		Sleep(5000);
		system("cls");
		srand(time(0));
		cout << "����ʱ�䣺" << nowtm() << endl;
		Sleep(1000);
		system("cls"); 
		puts("************* ************  *************               ************* *          *  *************      **     *************     *           *");
		puts("      *       *           * *                           *              *        *   *               *   *                 *     *           *");
		puts("      *       *           * *                           *               *      *    *             *     *                 *     *           *");
		puts("      *       *           * *                           *                *    *     *                   *                 *     *           *");
		puts("      *       *           * *                           *                 *  *      *                   *                 *     *           *");           
		puts("      *       ************* ************* ************* *************      **       *************       *     *************     *************");
		puts("      *       *           *             *               *                 *  *                  *       *                 *                 *");
		puts("      *       *           *             *               *                *    *                 *       *                 *                 *");
		puts("      *       *           *             *               *               *      *                *       *                 *                 *");
		puts("      *       *           *             *               *              *        *               *       *                 *  **             *");
		puts("      *       ************  *************               *             *          *  ************* *********** *************  ** *           *");
		puts("                           ��     ��     ��     ��     ��     TBS-FXS1ϵ		ͳ								");
		puts("                                         Made with BAIGEPING&SUNYUHAO V12.1.2(��Ȩ����)");
		puts("");
		puts("*****        *********     *********");
		puts("*    ***     *       *     *        ");
		puts("*      *     *       *     *********     system     system     system     system    system     system     system    system     system");
		puts("*    ***     *       *             *");
		puts("*****        *********     *********");
		puts("");
		puts("*  *  *   ********   *        *******  *******    ** **   *******  *");
		puts("*  *  *   *          *        *        *     *   *  *  *  *        *");
		puts("*  *  *   ********   *        *        *     *   *  *  *  *******  *");
		puts("*  *  *   *          *        *        *     *   *  *  *  *");
		puts(" ** **    ********   *******  *******  *******   *  *  *  *******  *");
		Sleep(5000);
		system("cls");
		Sleep(1);
		s="";
		Beep(550,400);
		Beep(605,400);
		Beep(660,400);
		Beep(715,400);
		Beep(770,400);
		s="loading......";
		for(int i=0; i<s.size(); i++)
		{
			cout<<s[i];
			Sleep(100);
		}
		Sleep(500);
		for(int i=1; i<=100; i+=1)
		{
			system("CLS");
			for(int j=1; j<=i; j++)
			{
				cout<<"-";
			}
			cout<<endl;
			cout<<i;
			puts("%");
			Sleep(rand()%15);
		}
		system("cls");
		s="��ϵͳ�������ն˲���ϵͳ������Ч���ڶ�����������У�ʹ��������ơ��������ʹ���������ϵͳ��������ĵ��Խ����ֿ��٣���������������Ͻ���Ϯ�����Ͻ���Ϯ������"; 
		Prints(s,50);
		Sleep(5000);
		system("CLS"); 
		puts("fn����������������������������Ц��");
		puts("catstore�����������������������̵�");
		puts("state������������������������ �ͺ�");
		puts("update��������������������������������");
		puts("address���������������������� ������ַ");
		puts("copy����������������������������Ȩ����");
		puts("showshow��������������������������");
		puts("tct�������������������������� ���"); 
		puts("look�������������������������������");
		puts("write������������������������ �ı��༭��");
		puts("prog�����������������������������ɱ��"); 
		puts("wct�������������������������� ΢��"); 
		puts("baidu������������������������ �ٶ�");
		puts("st��������������������������������");
		puts("downloadcpp������������������ ����c++");
		puts("maimaimai�������������������� ������");
		puts("shut���������������������������ػ�");
		puts("aboutthe�������������������������ڱ���");
		puts("CODEFORCES��������������������CODEFORCES���");
		puts("game������������������������������Ϸ");
		puts("game2������������������������ ����Ϸ2");
		puts("looking���������������������� ����ĵ������");
		puts("bat�������������������������� ����ĵĹػ�");
		puts("leetcode����������������������������վ�����");
		puts("input_zll�������������������� �Լ�������վ��");
		puts("4399game����������������������4399");
		puts("cnjy������������������������������");
		puts("pblktct���������������������� ����");
		puts("sd�����������������������������մ�칫");
		puts("kkk�������������������������� ������Ƶ");
		puts("ybt�������������������������� ��Ϣѧ����������ϰ��վ");
		puts("TBS�������������������������� TBS��˾����");
		puts("ys��������������������������  163����"); 
		puts("ajy�������������������������� ������");
		puts("xtzj��������������������������ϵͳ֮��");
		puts("jjxrb������������������������ �ѻ�С�ձ�");
		puts("jd��������������������������������");
		puts("qq������������������������������Ѷ��");
		puts("sllfy������������������������ 360����");
		puts("CPS�������������������������� CPS����");
		puts("ML����������������������������δ������");
		while(1)
		{
			cout<<"Windows terminal OS(No DIR)>>>";
			cin>>s;
			if(s=="shut")
			{
				system("cls");
				break;
			}
			if(s=="st"){
				cpu();
				continue;
			}
			if(s=="catstore")
			{
				catstore();
				continue;
			}
			if(s=="pblktct")
			{
				pblktct();
				continue;
			}
			if(s=="jd")
			{
				jd();
				continue;
			}
			if(s=="qq")
			{
				kfcid();
				continue;
			}
			if(s=="ML")
			{
				mail();
				continue;
			}
			if(s=="CPS")
			{
				CPS();
				continue;
			}
			if(s=="game")
			{
				game();
				continue;
			}
			if(s=="jjxrb")
			{
				jjxrb();
				continue;
			}
			if(s=="looking")
			{
				looking();
				continue;
			}
			if(s=="sllfy")
			{
				fy();
				continue;
			}
			if(s=="cnjy")
			{
				chinajy();
				continue;
			}
			if(s=="ctl")
			{
				coutrlor();
				continue;
			}
			if(s=="leetcode")
			{
				leetcode();
				continue;
			}
			if(s=="sd")
			{
				sd();
				continue;
			}
			if(s=="4399game")
			{
				gameku();
				continue;
			}
			if(s=="xtzj")
			{
				qwqw();
				continue;
			}
			if(s=="input_zll")
			{
				input_zll();
				continue;
			}
			if(s=="bat")
			{
				bat();
				continue;
			}
			if(s=="game2")
			{
				gametwo();
				continue;
			}
			if(s=="maimaimai")
			{
				taotao();
				continue;
			}
			if(s=="downloadcpp"){
				downcpp();
				continue;
			} 
			if(s=="state")
			{
				state();
				continue;//0lQAQl0
			} 
			if(s=="update")
			{
				update(); 
				continue;
			} 
			if(s=="address")
			{
				address(); 
				continue;
			} 
			if(s=="fn"){
				funnyth();
				continue;
			}
			if(s=="CODEFORCES"){
				codeforces();
				continue;
			}
			if(s == "copy"){
				copyright();
				continue;
			}if(s=="showshow"){
				presenter();
				continue;
			}
			if(s=="write"){
				txt(c);
				continue;
			} 
			if(s=="tct"){
				text();
				continue;
			}
			if(s=="look"){
				look();
				continue;
			}
			if(s=="prog"){
				prog();
				continue;
			}
			if(s=="wct"){
				wechat();
				continue;
			}
			if(s=="baidu"){
				bd();
				continue;
			}//My friend is wushaochen
			
			if(s=="aboutthe"){
				about_windows();
				continue;
			}
			if(s=="kkk"){
				kkk();
				continue;
			}
			if(s=="ybt") {
				ybt();
				continue;
			}
			if(s=="TBS"){
				TBS();
				continue;
			} 
			if(s=="ys"){
				ys();
				continue;
			} 
			if(s=="ajy"){
				ajy();
				continue;
			} 	
			cout << s << "����һ��ָ��" << endl;
			Beep(750,100);
		}
		Prints("MADE IN CHINA,BAIGEPING",75);
		Prints("                       ",100);
		Prints("Closeing��������������",300);
		Sleep(1000);
	}
	else{
		puts("��������Σ���������ǿ���˳�");
		return 0; 
	}
	return 0;
}
