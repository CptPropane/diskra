#pragma once
// �������, ����������, ��������, �������
class polynom
{
public:
	int pow; // ��������� ����� ���� �������
	int coef[100][2]; // ������������ ���������� � ���� ������, ������ ����� ������� (a0,a1,a2...)

	polynom ADD_PP_P(polynom p1, polynom p2) //�������� �����������
	{
		return;
	};

	polynom SUB_PP_P(polynom p1, polynom p2) //��������� �����������
	{
		return;
	};

	polynom MUL_PQ_P(polynom p1, int chisl, int znam) //��������� �� ������������ �����
	{
		return;
	};

	polynom MUL_Pxk_P(polynom p1, int k) //��������� �� x^k
	{
		return;
	};

	int LED_P_Q(polynom p1) //������� �����������
	{
		return;
	};

	int DEG_P_N(polynom p1) //������� ����������
	{
		return;
	};

	int FAC_P_Q(polynom p2) //��������� ��� � ���, ���� ���������� ��� �����, �������� ���-������ ��� ������ �� ��� �������
	{
		return;
	};

	polynom MUL_PP_P(polynom p1, polynom p2) //��������� �����������
	{
		return;
	};

	polynom DIV_PP_P(polynom p1, polynom p2) //������� �� ������� ���������� �� ���������
	{
		return;
	};

	polynom MOD_PP_P(polynom p1, polynom p2) //������� �� ������� ���������� �� ���������
	{
		return;
	};

	polynom GCF_PP_P(polynom p1, polynom p2) //��� �����������
	{
		return;
	};

	polynom DER_P_P(polynom p1) //����������� ����������
	{
		return;	
	};

	polynom NMR_P_P(polynom p1) //�������������� ������
	{
		return;
	};
}