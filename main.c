#pragma once
/**************************势能原子***********************************/
//	QSC: Ni Cu Rh Pd Ag Ir Pt Au  
//	QSCNewModel: 占时不用
//	AEAM:
//	Johnson: Fe Pt Cu
//	TBM(Gupta): Pt Pd1 Pd2 Pd3
/**************************形状尺寸***********************************/
//	SP:	19 141 459 1061 2171 3781 5895 8685 12479	
//	CU: 63 365 1099 2457 4631 7813 12195
//	RD: 19 93 279 617 1163 1957 3055 4497 6339 8621 11399
//	TH: 35 165 455 969 1771 2925 4495 6545 9139 12341
//	OH: 19 85 231 489 891 1469 2255 3281 4579 6181 8119 10425
//	TO: 63 309 711 1289 2075 3101 4399 6001 7939 10245
//	DH: 104 608 1832 4096 7720 13024
//	IH: 308 2056 6524 14992
//	THH210: 63 443 1417 3285 6323 10831 25385 49251
//	THH310: 1249 9553 31825 74977
#include "Base.h"		//基本数据的定义
#include "Tool.h"		//通用函数的定义
#include "Algorithm.h"	//算法的定义
#include "Energy.h"		//势能的定义

main()
{ 


	//算法：粒子群算法；
	//初始结构：随机
	//形状：24面体
	//总原子数: 3285
	//第一种原子的个数(这里就是Pt):1642
	//合金类型: Pt-Pd1
	//势能：TBM
	//种群大小：100
	//惯性系数：0.25
	//调整率：1.0
	PSO2_InitWithMixing("THH210",3285,1642,Pt,Pd,QSC,100,0.25,1.0,"PSO_PARA1_YES",PSOYesImprove);//改进的PSO 存储的文件夹名称：PSO_PARA1_YES
//	PSO2_InitWithMixing("THH210",1417,1417*0.5,Au,Pd,QSC,100,0.25,1.0,"PSO_PARA1_NO",PSONoImprove);//未改进PSO //存储的文件夹名称：PSO_PARA1_NO
//	PSO2_InitWithPhase("THH210",1417,709,Au,Pd,QSC,100,0.25,1.0,"PSO_PARA1_YES",PSOYesImprove);
//	PSO2_InitWithL0("THH210",3285,1642,Au,Pd,QSC,100,0.25,1.0,"PSO_PARA1_YES",PSOYesImprove); //有问题，产生不了初始结构
//	PSO2_InitWithFromCore("THH210",1417,709,Au,Pd,QSC,100,0.25,1.0,"PSO_PARA1_YES",PSOYesImprove);
}