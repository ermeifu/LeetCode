面试题1：赋值运算符函数

题目：如下为类型CMyString的声明，请为该类型添加赋值运算符函数。

`
class CMyString {
	public:
		CMyString(char *pData = nullptr);
		CMyString(const CMyString &str);
		~CMyString();
	private:
		char *m_pData;
};
`

