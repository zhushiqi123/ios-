// 5_7_2.cpp 
static int sum = 0, count = 0; 	//静态全局变量，具有静态生存期，全局可见
int Average(int i) { sum = sum + i;  count++;  return sum / count; } 
void reset() {  sum = 0; count = 0; } 
