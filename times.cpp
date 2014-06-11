/*what is this ? just for fun, do u have time?*/
#include <iostream>
using namespace std;


// just a test
class FenShu
{
    public:
          // 构造函数
          FenShu(int fenzi, int fenmu) : m_fenzi(fenzi), m_fenmu(fenmu){}
          // 输出
          void Show(void)
          {
              cout << m_fenzi << '/' << m_fenmu << endl;
          }
          // + 号重载
          friend FenShu operator+(FenShu& f1, FenShu& f2)
          {
              return FenShu(f1.m_fenzi*f2.m_fenmu + f2.m_fenzi*f1.m_fenmu, f1.m_fenmu * f2.m_fenmu);
          }
          
          // -  号重载
          friend FenShu operator-(FenShu& f1, FenShu& f2)
          {
              return FenShu(f1.m_fenzi*f2.m_fenmu - f2.m_fenzi*f1.m_fenmu, f1.m_fenmu * f2.m_fenmu);
          }
                 
          
    private:
          int m_fenzi;
          int m_fenmu;
};

int main(void)
{
  cout << " Yes!, i have time for fun, just for fun, life is too short!" << endl;
  return 0;  
}
