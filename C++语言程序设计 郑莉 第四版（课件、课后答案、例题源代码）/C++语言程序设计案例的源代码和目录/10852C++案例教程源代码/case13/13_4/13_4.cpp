void CComplexCalculatorDlg::OnButton1()	//�˷�
{	UpdateData();						//��ȡ����
	CComplex cpxA(m_dblA, m_dblB); 		//���츴��
	CComplex cpxB(m_dblC, m_dblD); 		//���츴��
	CComplex cpxC = cpxA*cpxB; 			//���㸴���˷�
	m_strResult = cpxC.ToString();		//�����ת��Ϊ�ַ���
	UpdateData(FALSE); 				//��ʾ���
}
void CComplexCalculatorDlg::OnButton2()	//����
{	UpdateData();						//��ȡ����
	CComplex cpxA(m_dblA, m_dblB); 		//���츴��
	CComplex cpxB(m_dblC, m_dblD); 		//���츴��
	CComplex cpxC = cpxA/cpxB; 			//���㸴������
	m_strResult = cpxC.ToString();		//�����ת��Ϊ�ַ���
	UpdateData(FALSE); 				//��ʾ���
}
void CComplexCalculatorDlg::OnButton3()	//�ӷ�
{	UpdateData();						//��ȡ����
	CComplex cpxA(m_dblA, m_dblB); 		//���츴��
	CComplex cpxB(m_dblC, m_dblD);
	CComplex cpxC = cpxA+cpxB; 			//���㸴������
	m_strResult = cpxC.ToString();		//�����ת��Ϊ�ַ���
	UpdateData(FALSE); 				//��ʾ���
}
void CComplexCalculatorDlg::OnButton4()	//����
{	UpdateData();						//��ȡ����
	CComplex cpxA(m_dblA, m_dblB); 		//���츴��
	CComplex cpxB(m_dblC, m_dblD);
	CComplex cpxC = cpxA-cpxB; 			//���㸴������
	m_strResult = cpxC.ToString();		//�����ת��Ϊ�ַ���
	UpdateData(FALSE); 				//��ʾ���
}
