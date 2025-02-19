#pragma once

stdstr base64encode(const void *data, int size) {

	const char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	if (!data || !size) return "";
	byte *pdata = (byte *)data;	

	stdstr result;
	result.reserve(size * 4);

	int size1 = (size / 3) * 4;
	int size2 = size1 / 76;
	int size3 = 19;

	for (int i = 0; i <= size2; i++) {
		if (i == size2)	size3 = (size1 % 76) / 4;
		for (int j = 0; j < size3; j++)	{
			uint cur = 0;
			for (int n = 0; n < 3; n++)	{
				cur |= *pdata++;
				cur <<= 8;
			}
			for (int k = 0; k < 4; k++)	{
				byte b = (byte)(cur >> 26);
				result.push_back(table[b]);
				cur <<= 6;
			}
		}
	}

	size2 = (size % 3) ? (size % 3 + 1) : 0;
	if (size2) {
		uint cur = 0;
		for (int n = 0; n < 3; n++)	{
			if (n < (size % 3)) cur |= *pdata++;
			cur <<= 8;
		}
		for (int k = 0; k < size2; k++)	{
			byte b = (byte)(cur >> 26);
			result.push_back(table[b]);
			cur <<= 6;
		}
		size3 = size2 ? 4 - size2 : 0;
		for (int j = 0; j < size3; j++) result.push_back('=');
	}

	return result;
}

stdstr u16str(const wchar_t *lpszwstr) {
	if (!lpszwstr) return "";
	int n_wchars = (int)wcslen(lpszwstr);
	if (!n_wchars) return "";
	stdstr base64 = base64encode(lpszwstr, n_wchars * 2);
	uint hash = 0;
	for (char c : base64) hash ^= (hash << 3) + c;
	char hash_str[16];
	sprintf_s(hash_str, "%08X", hash);
	return stdstr("<!--u16::") + hash_str + "-->" + base64;
}

__declspec(dllimport) char *callDart(const char *data, void *allocator(size_t size));

stdstr callDartInner(const stdstr &data) {    
    registerModuleIfRequired();
    stdstr str;
    if (char *result = callDart(data.c_str(), malloc)) {
        str = result;
        free(result);
    }
    return str;
}