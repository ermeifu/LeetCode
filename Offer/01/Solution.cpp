CMyString &CMyString::operator=(const CMyString *str) {
	if (this != &str) {
		CMyString temp(str);

		char *pTemp = temp.m_pData;
		temp.m_pData = this.m_pData;
		this.m_pData = pTemp;
	}

	return *this;
}
