void CComplexCalculatorDlg::OnButton1()	//乘法
{	UpdateData();						//获取数据
	CComplex cpxA(m_dblA, m_dblB); 		//构造复数
	CComplex cpxB(m_dblC, m_dblD); 		//构造复数
	CComplex cpxC = cpxA*cpxB; 			//计算复数乘法
	m_strResult = cpxC.ToString();		//将结果转化为字符串
	UpdateData(FALSE); 				//显示结果
}
void CComplexCalculatorDlg::OnButton2()	//除法
{	UpdateData();						//获取数据
	CComplex cpxA(m_dblA, m_dblB); 		//构造复数
	CComplex cpxB(m_dblC, m_dblD); 		//构造复数
	CComplex cpxC = cpxA/cpxB; 			//计算复数除法
	m_strResult = cpxC.ToString();		//将结果转化为字符串
	UpdateData(FALSE); 				//显示结果
}
void CComplexCalculatorDlg::OnButton3()	//加法
{	UpdateData();						//获取数据
	CComplex cpxA(m_dblA, m_dblB); 		//构造复数
	CComplex cpxB(m_dblC, m_dblD);
	CComplex cpxC = cpxA+cpxB; 			//计算复数除法
	m_strResult = cpxC.ToString();		//将结果转化为字符串
	UpdateData(FALSE); 				//显示结果
}
void CComplexCalculatorDlg::OnButton4()	//减法
{	UpdateData();						//获取数据
	CComplex cpxA(m_dblA, m_dblB); 		//构造复数
	CComplex cpxB(m_dblC, m_dblD);
	CComplex cpxC = cpxA-cpxB; 			//计算复数除法
	m_strResult = cpxC.ToString();		//将结果转化为字符串
	UpdateData(FALSE); 				//显示结果
}
