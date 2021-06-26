#define _CRT_SECURE_NO_WARNINGS
#include"MatrixG1.h"
#include"TaskMenu.h"
void FixSP(vector<vector<int>>&SP)
{
	int toreduce = 0;
	for (int i = 1; i < SP.size(); i++)
	{
		if (SP[i][0] != i)
		{
			toreduce = SP[i][0];
			SP[i][0] = i;
			for (int k = 1; k < SP.size(); k++)
			{
				for (int r = 0; r < SP[k].size(); r++)
				{
					if (SP[k][r] == toreduce)
					{
						SP[k][r] = i;
					}
				}
			}
		}
	}

}
void enter(Matrix &x)
{
	int k = 0;
	int j = 0;
	char letter;
	cout << "Choose an option"<<endl;
	cout << "1-����������� ����� ������" << endl;
	cout << "2-����������� ����� ����� (���)" << endl;
	cout << "3-����������� ��������� ������������������ �����"<<endl;
	cout << "4-����������� ������� ���������" << endl;
	cout << "5-����������� ������� �������������" << endl;
	cout << "6-����������� ������ ���������" << endl;
	cout << "7-����������� ���������� ����� ����� ���������" << endl;
	cout << "8-��������������� � �� ��� ���" << endl;
	cout << "9-���������� ������� � ����������������� ����" << endl;
	cout << "10-�������� ������� � ����������������� ����" << endl;
	cout << "11-�������� ����� � ����������������� ����" << endl;
	cout << "12-����������� ���������� �����" << endl;
	cout << "13-������������ �����" << endl;
	cout << "14-�������������� ������" << endl;
	cout << "15-������������ �������" << endl;
	cout << "16-����������� �������" << endl;
	cout << "17-����������� (�������������) ������" << endl;
	cout << "18-���������� ������" << endl;
	cout << "19-������������ ������" << endl;
	cout << "20-���������� ������� � ��������������� ����" << endl;
	cout << "21-�������� ������� � ��������������� ����e" << endl;
	cout << "22-���������� ����� � ��������������� ����e" << endl;
	cout << "23-�������� ����� � ��������������� ����" << endl;
	cout << "24-������������ ����� �������" << endl;
	cout << "25-�������������� ������ �������" << endl;
	cout << "26-������������ ������� �������" << endl;
	cout << "27-����������� ������� �������" << endl;
	cout << "28-����������� (�������������) ��������" << endl;
	cout << "29-���������� �������" << endl;
	cout << "30-������������ �������" << endl;
	cout << "31-���������� ����� � ����������������� ����" << endl;






	cin >> letter;
	switch (letter)
	{
	case '1':x.GetAmountVertex();
		break;
	case '2':x.GetAmountEdge(x.G1);
		x.GetAmountEdge(x.G2_A);
		x.GetAmountEdge(x.G3_A);
		break;
	case '3':x.PowerSequenceG1G2G3();
		break;
	case'4':
		printf("������� ��������� G2\n");
		x.GetMatrixAdjacency(x.G2, x.G2_A);
		printf("\n������� ��������� G3\n");
		x.GetMatrixAdjacencyG3();
		break;
	case '5':
		printf("������� ������������� G1\n");
		x.GetMatrixIncidence(x.G1, x.G1_I);
		break;
	case '6' :
		printf("������ ��������� G1\n");
		x.MakeSPAdjacency(x.G1, x.G1_SP);
		for (int i = 0; i < x.G1_SP.size(); i++)
		{
			for (int j = 0; j < x.G1_SP[i].size(); j++)
			{
				cout << x.G1_SP[i][j];
			}
			printf("\n");

		}
		printf("\n");
		printf("������ ��������� G2\n");
		x.MakeSPAdjacency(x.G2_A, x.G2_SP);
		for (int i = 0; i < x.G2_SP.size(); i++)
		{
			for (int j = 0; j < x.G2_SP[i].size(); j++)
			{
				cout << x.G2_SP[i][j];
			}
			printf("\n");

		}
		printf("\n");
		printf("������ ��������� G3\n");
		x.MakeSPAdjacency(x.G3_A, x.G3_SP);
		for (int i = 0; i < x.G3_SP.size(); i++)
		{
			for (int j = 0; j < x.G3_SP[i].size(); j++)
			{
				cout << x.G3_SP[i][j];
			}
			printf("\n");
		}
		break;
	case '7':
		printf("Enter from to digits: ");
		cin >> k >> j;
		x.MinDlin(x.G1, k, j);
		break;
	case '8': x.Ex(x.G1);
		break;
	case'9': x.AddVertex(x.G1_SP);
		break;
	case'10':x.DeleteVertex(x.G1_SP);
		break;
	case'11':x.DeleteEdge(x.G1_SP);
		break;
	case'12':x.Complement(x.G1_SP);
		break;
	case'13':x.DecomposeEdge(x.G1_SP);
		break;
	case'14':x.IdentificationVertex(x.G1_SP);
		break;
	case'15':x.DuplicateVertex(x.G1_SP);
		break;
	case'16':x.VertexBreeding(x.G1_SP);
		break;
	case'17':x.Disjunction(x.G1_SP);
		break;
	case'18':x.Soedinenie(x.G1_SP);
		break;
	case'19':x.DecProduct(x.G1_SP);
		break;
	case'20': x.AddVertexOr(x.G3_SP);
		break;
	case'21':x.DeleteVertexOr(x.G3_SP);
		break;
	case'22':x.AddEdgeOr(x.G3_SP);
		break;
	case'23':x.DeleteEdgeOr(x.G3_SP);
		break;
	case'24':x.DecomposeEdgeOr(x.G3_SP);
		break;
	case'25': x.IdentificationOr(x.G3_SP);
		break;
	case'26': x.DuplicateVertexOr(x.G3_SP);
		break;
	case'27': x.BreedingVertexOr(x.G3_SP);
		break;
	case'28': x.DisjunctionOr(x.G3_SP);
		break;
	case'29': x.SoedinenieOr(x.G3_SP);
		break;
	case'30': x.DecProductOr(x.G3_SP);
		break;
	case'31':x.AddEdge(x.G1_SP);
		break;
	default:
		break;
	}
}
int main()
{
	system("chcp 1251"); // ��������� � ������� �� ������� ����
	Matrix x;//fist to go so far..
	//x.Complement(x.G1_SP);
	//FixSP(x.G1_SP);
	//x.IdentificationVertex(x.G1_SP);
	//FixSP(x.G1_SP);
	//x.DecProduct(x.G1_SP);
	//FixSP(x.G1_SP);
	//x.IdentificationOr(x.G3_SP);
	//x.SoedinenieOr(x.G3_SP);
	//x.DecProductOr(x.G3_SP);
	//x.DisjunctionOr(x.G3_SP);
	//FixSP(x.G3_SP);
	/*x.DeleteVertex(x.G1_SP);
	FixSP(x.G1_SP);
	x.DecomposeEdge(x.G1_SP);
	FixSP(x.G1_SP);
	x.Identification(x.G1_SP);
	FixSP(x.G1_SP);
	x.DuplicateVertex(x.G1_SP);
	FixSP(x.G1_SP);
	x.VertexBreeding(x.G1_SP);
	FixSP(x.G1_SP);
	x.Disjunction(x.G1_SP);
	x.DeleteVertex(x.G1_SP);
	FixSP(x.G1_SP);*/
	/*x.AddVertex(x.G1_SP);
	FixSP(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.AddVertex(x.G1_SP);
	FixSP(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.AddEdge(x.G1_SP);
	FixSP(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.AddEdge(x.G1_SP);
	FixSP(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.AddEdge(x.G1_SP);
	FixSP(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.DeleteEdge(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.DeleteEdge(x.G1_SP);
	cin.clear();
	cin.ignore(32767, '\n');
	x.DeleteEdge(x.G1_SP);*/
	//x.IdentificationEdge(x.G1_SP);
	//x.IdentificationVertex(x.G1_SP);
	//x.DuplicateVertex(x.G1_SP);
	//x.Soedinenie(x.G1_SP);
	//x.Complement(x.G1_SP);
	//FixSP(x.G1_SP);
	//x.IdentificationEdge(x.G1_SP);
	//FixSP(x.G1_SP);
	//x.DecProduct(x.G1_SP);
	//x.Soedinenie(x.G1_SP);
	//x.DecProduct(x.G1_SP);
	//FixSP(x.G1_SP);
	//FixSP(x.G1_SP);
	//x.Complement();	
	//x.Identification();
	/*int t = x.G1_SP.size();
	for (int i = 1; i < t - 1; i++)
	{
		vector<int> tempVec;
		tempVec.push_back(i);
		if (x.G1_SP[i][0] != i)
		{
			x.G1_SP.insert(x.G1_SP.begin() + i, tempVec);
			tempVec.clear();
		}
		tempVec.clear();
	}*/
	/*for (int i = 1; i < x.G1_SP.size(); i++)
	{
		for (int j = 0; j < x.G1_SP[i].size(); j++)
		{
			x.G1_SP[i][j] = x.G1_SP[i][j] - 1;
		}
	}*/
	//x.DecProduct();
	//x.GetMatrixIncidence();
	//x.GetAmountVertex();
	//x.GetMatrixAdjacencyG3();
	//x.MakeSPAdjacency();
	//x.GetMatrixAdjacencyG3();
	//x.MakeSPAdjacencyG3();
	//x.GetMatrixIncidence();
	//x.MakeSPAdjacency();
	//x.GetMatrixAdjacency();
	//x.GetMatrixIncidence();
	//x.GetMatrixAdjacency();
	/*x.MakeSPAdjacencyG2();
	x.MakeSPAdjacency();
	x.GetMatrixAdjacencyG3();
	x.MakeSPAdjacencyG3();*/
	//x.MakeSPAdjacencyG3();
	//x.AddVertex();
//	x.DeleteVertex();
//	x.DeleteVertex();
//	x.DeleteEdge();
	//x.AddEdge();
	//x.Complement();
	//x.DecomposeEdge();
	//x.Identification();
	//x.GetMatrixAdjacency();
	//x.GetMatrixAdjacencyG3();
	//x.PowerSequenceG1G2G3();
	//x.DuplicateVertex();
//	x.Ex();
	//x.VertexBreeding();
	//x.Disjunction();
	//x.Soedinenie();
	//x.DecProduct();
	//x.AddVertexOr();
	//x.DeleteVertexOr();
//	x.AddEdgeOr();
	//x.Soedinenie(x.G1_SP);
	//x.DeleteEdgeOr();
	//x.DecomposeEdgeOr();
	//x.IdentificationOr();
	//x.DuplicateVertexOr();
	//x.BreedingVertexOr();
	//x.DisjunctionOr();
	//x.GetMatrixAdjacency();
	//x.SoedinenieOr();
	//x.Soedinenie();
	//x.DecProduct();

	//TaskMenu::Task1(x);
	//x.AddVertex();
//	TaskMenu::Task2(x);
//	TaskMenu::Task3(x);
//	TaskMenu::Task4(x);
	char letter;
	cout << "Enter t(task) or c(custom) ";
	cin >> letter;
	switch (letter)
	{
	case 't':
		TaskMenu::Task1(x);
		TaskMenu::Task2(x);
		TaskMenu::Task3(x);
		TaskMenu::Task4(x);
		break;
	case 'c': enter(x);
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}