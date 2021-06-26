#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<iostream>
#include <fstream>
#include<string>
using namespace std;
#define Vmax 100
#define Emax Vmax*2
class Matrix
{
public:
	
	Matrix();
	~Matrix();
	const void GetAmountVertex() const;//����� ����� ��� ��������� ���-�� ������ �����
	int GetAmountEdge(vector<vector<int>>) const;// ����� ��� ��������� ���-�� ����� 
	void GetMatrixIncidence(vector<vector<int>>&, vector<vector<int>>&);//��������� ������� ������������� ��� ����� ������� ���������
	void GetMatrixAdjacency(vector<vector<int>>&, vector<vector<int>>&);//�������� ������� ��������� ��� ����� ������� �������������
	void GetMatrixAdjacencyG3();//���������� ������� ��������� ��� G3
	void MakeSPAdjacency(vector<vector<int>>&, vector<vector<int>>&);//��������� ������ ��������� �� ������� ���������
	void MakeSPAdjacencyG2();//��������� ������ ��������� ����� G2
	void MakeSPAdjacencyG3();//��������� ������ ��������� ����� G3(������)
	void AddVertex(vector<vector<int>>&);//���������� ����� ������� � ����������������� ����
	void DeleteVertex(vector<vector<int>>&);//�������� ������ ������� G1
	void DeleteEdge(vector<vector<int>>&);//�������� � G1 �����
	void AddEdge(vector<vector<int>>&);//���������� ����� �  G1
	void Complement(vector<vector<int>>&);//���������� � ���� �G1
	void DecomposeEdge(vector<vector<int>>&);//������������ ����� G1
	void IdentificationEdge(vector<vector<int>>&);//���������� �����
	void IdentificationVertex(vector<vector<int>>&);//�������������� ������
	void PowerSequenceG1G2G3();//��������� ������������������ ���������������� ������
	void DuplicateVertex(vector<vector<int>>&);//������������ ������� �������� ������
	void Ex(vector<vector<int>>&G);//��������������� � �� ��� ���
	void VertexBreeding(vector<vector<int>>&);//����������� ������� ��������
	void Soedinenie(vector<vector<int>>&);//���������� ������ ��������
	void Disjunction(vector<vector<int>>&);//�������� �����������
	void DecProduct(vector<vector<int>>&);//��������� �������������
	void AddVertexOr(vector<vector<int>>&);//���������� ������� � ������
	void DeleteVertexOr(vector<vector<int>>&);//������� ������� � ������� 
	void AddEdgeOr(vector<vector<int>>&);//���������� ����� � ������
	void DeleteEdgeOr(vector<vector<int>>&);//�������� ����� � ������ 
	void DecomposeEdgeOr(vector<vector<int>>&);//������������ ����� � �������  
	void IdentificationOr(vector<vector<int>>&);//���������� �����
	void IdentificationOrVertex(vector<vector<int>>&);// �������������� �������
	void DuplicateVertexOr(vector<vector<int>>&);//������������ ������� ������
	void BreedingVertexOr(vector<vector<int>>&);//����������� ������� �������
	void DisjunctionOr(vector<vector<int>>&);//����������� �������
	void SoedinenieOr(vector<vector<int>>&);//���������� ��������
	void DecProductOr(vector<vector<int>>&);//�������������������� ��
	void AmountEdgesInOr();//���-�� ����� � �������
	void MinDlin(vector<vector<int>>&G,int,int);

//operations----------------------------------
	void TaskAddVertex(vector<vector<int>>&G,int);//���������� ������� ��� ������� 2
	void TaskDeleteVertex(vector<vector<int>>&G, int);//�������� ������ ��� ������� 2
	void TaskDeleteEdge(vector<vector<int>>&G, pair<int,int>);//�������� �����
	void TaskAddEdge(vector<vector<int>>&G, pair<int, int>);//���������� �����
	void TaskComplement(vector<vector<int>>&G);
	void TaskAddVertexOr(vector<vector<int>>&,int);
	void TaskDeleteVertexOr(vector<vector<int>>&, int);
	void TaskAddEdgeOr(vector<vector<int>>&, pair<int, int>);
	void TaskDeleteEdgeOr(vector<vector<int>>&, pair<int, int>);
	void TaskIdentification(vector<vector<int>>&, pair<int, int>);
	void TaskDisjunktion(vector<vector<int>>&, vector<vector<int>>&);
	void FromSPtoAdjacencyNonOrient(vector<vector<int>>&SP, vector<vector<int>>&G);
	void TaskEx(vector<vector<int>>&);

//private:
	vector<vector<int>> G1;//���������� ���������
	vector<vector<int>> G1_I;// ������� �������������
	vector<vector<int>> G2;//���������� �������������
	vector<vector<int>> G2_A;// ������� ��������� G2
	vector<vector<int>> G3;//���������� �������������
	vector<vector<int>> G3_A;// ������� ��������� G3
	vector<vector<int>> G1_SP;// ������ ��������� ������� ��������� G1
	vector<vector<int>> G2_SP;// ������ ��������� ������� ��������� G2
	vector<vector<int>> G3_SP;// ������ ��������� ������� ��������� G3
	vector<vector<int>> G3_SP_C;//����� 
	vector<vector<int>> G_Dist;//������� ���������� ��� ���������� ex
	vector<pair<int, int>>G1_P;//��� check_pair
	vector<vector<int>> G4_SP;//task 2c
	vector<vector<int>> G4;//��������� ��� 2�
	vector<vector<int>> G4_I;//�������������
	vector<vector<int>> G_new; // ��� ��������� �������� �������
	vector<vector<int>> G_new_A; // ��� ��������� �������� �������

private:
	void M_I_move(int&, int&, int&);
	int LookG1(int&,int&, vector<vector<int>>G_A);
	bool check_pair(int&, int&);
	int LookInG2(vector<int>&,int&,int&,int&);
	void LookInG3(vector<int>&, int&, int&, int&);
	//void CreateSP_G1();
	void AddSP(int, int,int&);
	void Repeating(vector<int>&, int i);
	void Plus1(vector<int>&, int i);
	int Index(int, int,int);
	void Indexes(int*,int,int);
	void WriteInSP(ifstream&);
	bool IfIncidence(ifstream&, bool&, string&);
	//void FromSPtoAdjacencyNonOrient(vector<vector<int>>&SP, vector<vector<int>>&G);
	void ReSizeGFromSP(vector<vector<int>>&SP, vector<vector<int>>&G);
	//const int Vmax = 100, Emax = Vmax * 2;
	//----------------------------
	int head[Vmax];
	int next_el[Emax];
	int terminal[Emax];
	//int n, m, i, j, k, v, u;
	char r;
	////////------------------------
	

};

