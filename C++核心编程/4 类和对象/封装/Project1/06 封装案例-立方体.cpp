// #include<iostream>
// using namespace std;
// #include<string>
//
//
// //�����������
// //1��������������
// //2���������
// //3�������Ϊ ��ȡ��������������
// //4���ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
// class Cube
// {
// public:
// 	//���ó�
// 	void setL(int l)
// 	{
// 		m_L = l;
// 	}
// 	//��ȡ��
// 	int  getL()
// 	{
// 		return m_L;
// 	}
// 	//���ÿ�
// 	void setW(int w)
// 	{
// 		m_W = w;
// 	}
// 	//��ȡ��
// 	int getW()
// 	{
// 		return m_W;
// 	}
// 	//���ø�
// 	void setH(int h)
// 	{
// 		m_H = h;
// 	}
// 	//��ȡ��
// 	int getH()
// 	{
// 		return m_H;
// 	}
//
// 	//��ȡ���������
// 	int calculateS()
// 	{
// 		return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
// 	}
// 	//��ȡ���������
// 	int calculateV()
// 	{
// 		return 2 * m_L * m_H * m_W;
// 	}
// 	//���ó�Ա�����ж������������Ƿ����
// 	bool isSameByClass(Cube &c)
// 	{
// 		if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
// 			return true;
// 		return false;
// 	}
//
//
// private:
// 	int m_L; //��
// 	int m_W; 
// 	int m_H;
// };
//
// bool isSame(Cube &c1,Cube &c2)
// {
// 	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
// 		return true;
// 	return false;
// }
// int main()
// {
// 	Cube c1;
// 	c1.setL(10);
// 	c1.setH(10);
// 	c1.setW(10);
//
// 	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
// 	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
// 	Cube c2;
// 	c2.setL(10);
// 	c2.setH(10);
// 	c2.setW(10);
//
// 	bool ret = isSame(c1, c2);
// 	//����ȫ�ֺ����ж�
// 	if(ret)
// 	{
// 		cout << "c1��c2����ȵ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "c1��c2�ǲ���ȵ�" << endl;
// 	}
// 	bool ret2 = c1.isSameByClass(c2);
// 	//���ó�Ա����
// 	if (ret2)
// 	{
// 		cout << "c1��c2����ȵ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "c1��c2�ǲ���ȵ�" << endl;
// 	}
// 	return 0;
// }