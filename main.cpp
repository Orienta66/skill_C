#include <iostream>
int numbers(int a)
{
for(int i =0; i<3;++i)
{
 // if(a <0)
 // {std::cout <<"a="<<a<< ", i="<< i <<std::endl;
 //   break;}
  if(a==0)
  { std::cout <<"a="<<a<< ", i="<< i <<std::endl;
    continue;}
 // if(a>10)
 // {std::cout <<"a="<<a<< ", i="<< i <<std::endl;
  //  return 10;}
  ++a;
  std::cout <<"++a="<<a<< ", i="<< i <<std::endl;
}
std::cout<< "Finish cycle ";
return a;
}
//-------------------------------
int main()
{
//std::cout<<numbers(-3)<<"\n";
std::cout<<numbers(0)<<"\n";
//std::cout<<numbers(15)<<"\n";

}
