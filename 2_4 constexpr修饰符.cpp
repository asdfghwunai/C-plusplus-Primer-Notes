constexpr修饰符会验证变量是否是常量表达式

int size()
{
	int a = 1;
	return a;
}

const int sz1=size();   //没错误,但sz1不叫常量表达式
constexpr int sz2=size(); //constexpr会帮验证，size()必须是constexpr函数，返回constexpr int类型(const int也不行)，我这里检查出这个错误了

//constexpr函数
constexpr int size()
{
	return 1;
}
//我这样写vs不知为啥报错
