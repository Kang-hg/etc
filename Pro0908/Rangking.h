//Rangking.h
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct PlayInfo {
	char	name[200];	// ������ �̸�
	int	nMove;		// ���� ������ ������ Ƚ��
	double	tElapsed;	// ��� �ҿ� �ð�
};
extern void loadRanking(char* filename);
extern void storeRanking(char* filename);
extern void printRanking();
extern int addRanking(int nMove, double tElap);