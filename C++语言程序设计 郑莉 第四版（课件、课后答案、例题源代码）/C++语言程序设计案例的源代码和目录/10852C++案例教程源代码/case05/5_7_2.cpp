// 5_7_2.cpp 
static int sum = 0, count = 0; 	//��̬ȫ�ֱ��������о�̬�����ڣ�ȫ�ֿɼ�
int Average(int i) { sum = sum + i;  count++;  return sum / count; } 
void reset() {  sum = 0; count = 0; } 
