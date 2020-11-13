**粗体**
*斜体*
表格
|git|github|git|
|---|------|---|
|a  |b     |c  |
|q  |w     |e  |
```cpp
//测试代码格式
#include<iostream>
#include<thread>
#include<functional>
using namespace std;

void func1(int times,int num)
{
	cout<<"func1"<<endl;
	for(int i = 0;i < times;++i)
		cout<<num<<"\t";
	cout<<endl;
}

int main()
{
	thread t1(bind(func1,100,placeholders:_1));
	t1.join();
	return 0;
}

```
> study hard everyday!
