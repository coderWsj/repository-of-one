/*****************************************************
		�ļ����ƣ�main.cpp
		�ļ�������ʵ�ּ򵥴���ĸ����Ϸ
		���뻷����VS2015 VC6.0
		����޸ģ�
		<2017��10��25��>  <��������>  <������ʦ>

		1������ĸ����Ϸ
		���ܣ�
			1.����
				EasyXͼ�ο�
			2.�������ĸ
				�������ĸ��ASCII A-65 B-66  C-67 ..... Z-90
				����õ�65-90֮���һ�������
				rand()%26+65;  //A-Z  0-25

			3.ͨ������ȥ������������ĸ
				Easy��ء�
*****************************************************/

#include  <stdio.h>
#include  <time.h>
#include  <stdlib.h>
#include  <graphics.h>  //ͼ�ο��ͷ�ļ�
#include  <mmsystem.h>  //��ý���豸�ӿڵ�ͷ�ļ��Ϳ��ļ�
#pragma comment(lib,"winmm.lib")

int main()
{
	initgraph(640,480);  //60������
	srand((unsigned int)time(NULL));  //�������
	mciSendString(L"open ./res/Fade.mp3 alias bgm", 0, 0, 0);
	mciSendString(L"play bgm",0,0,0);



	getchar();
	return 0;
}

//����
