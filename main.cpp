#include <iostream>

int main()
{
double f[5]={0.0};
int i=0;

//начальные значения
f[0]=0;
f[1]=1;
   std::cout<<"Fibonacchi number" <<0 <<" :"<<f[0]<<std::endl;
   std::cout<<"Fibonacchi number" <<1 <<" :"<<f[1]<<std::endl;
//вычисление последующих чисел
for(i=2; i<5; i++)
{
  f[i]=f[i-1]+f[i-2];
    std::cout<<"Fibonacchi number" <<i <<" :"<<f[i]<<std::endl;
}



}
