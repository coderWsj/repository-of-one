/*****************************************************
		文件名称：main.cpp
		文件描述：实现简单打字母的游戏
		编译环境：VS2015 VC6.0
		最后修改：
		<2017年10月25日>  <创建工程>  <九夏老师>

		1、打字母的游戏
		功能：
			1.界面
				EasyX图形库
			2.随机的字母
				随机的字母：ASCII A-65 B-66  C-67 ..... Z-90
				随机得到65-90之间的一个随机数
				rand()%26+65;  //A-Z  0-25

			3.通过键盘去消除看到的字母
				Easy相关。
*****************************************************/

#include  <stdio.h>
#include  <time.h>
#include  <stdlib.h>
#include  <graphics.h>  //图形库的头文件
#include  <mmsystem.h>  //多媒体设备接口的头文件和库文件
#pragma comment(lib,"winmm.lib")

int main()
{
	initgraph(640,480);  //60个左右
	srand((unsigned int)time(NULL));  //随机种子
	mciSendString(L"open ./res/Fade.mp3 alias bgm", 0, 0, 0);
	mciSendString(L"play bgm",0,0,0);



	getchar();
	return 0;
}

//界面
