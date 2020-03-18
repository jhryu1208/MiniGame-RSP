#include <iostream>
#include <time.h>

using namespace std;

enum SRP
{
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END
};

int main()
{
	//�������̺� ����
	srand((unsigned int)time(0));

	int iPlayer, iAI;

	while (true)
	{
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ��" << endl;
		cout << "4. ����" << endl;
		cout << "�޴��� �����ϼ��� :" << endl;

		cin >> iPlayer;

		if (iPlayer<SRP_S || iPlayer>SRP_END)
		{
			cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
			//�Ͻ�����
			system("pause");
			//continue : �ݺ����� ���������� �̵������ִ� ���
			continue;
		}

		else if (iPlayer == SRP_END)
			break;

		// ���� �����Ѵ�.
		iAI = rand() % 3 + SRP_S;

		switch (iAI)
		{
		case SRP_S:
			cout << "AI : ����" << endl;
			break;

		case SRP_R:
			cout << "AI : ����" << endl;
			break;

		case SRP_P:
			cout << "AI : ��" << endl;
			break;
		}

		int iWin = iPlayer - iAI;

		/*
		if (iWin == 1 || iWin == -2)
			cout << "Player�� �¸�" << endl;
		else if (iWin == 0)
			cout << "�����ϴ�" << endl;
		else
			cout << "AI�� �¸�" << endl;
		*/

		switch (iWin)
		{
		case 1:
		case -2:
			cout << "player�� �¸�" << endl;
			break;

		case 0:
			cout << "�����ϴ�" << endl;
			break;

		default:
			cout << "AI�� �¸�" << endl;
			break;

		}
		// system("pause");
		// �̰� "����Ϸ��� �ƹ� Ű�� �����ʽÿ�.." ��� ������ ����ִ� �Լ��̴�.
		// �� �Լ��� ���ؼ� ���α׷��� ��� ���߰�, �����ϰ� ������ ������ �� �ִ�.
		system("pause");
	}
	return 0;
}