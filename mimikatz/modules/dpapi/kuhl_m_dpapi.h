/*	Benjamin DELPY `gentilkiwi`
	http://blog.gentilkiwi.com
	benjamin@gentilkiwi.com
	Licence : http://creativecommons.org/licenses/by/3.0/fr/
*/
#pragma once
#include "globals.h"
#include "../kuhl_m.h"
#include "../modules/kull_m_file.h"
#include "../modules/kull_m_dpapi.h"

#include "packages/kuhl_m_dpapi_keys.h"

const KUHL_M kuhl_m_dpapi;

NTSTATUS kuhl_m_dpapi_blob(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_dpapi_protect(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_dpapi_masterkey(int argc, wchar_t * argv[]);

BOOL kuhl_m_dpapi_unprotect_raw_or_blob(LPCVOID pDataIn, DWORD dwDataInLen, LPWSTR *ppszDataDescr, int argc, wchar_t * argv[], LPCVOID pOptionalEntropy, DWORD dwOptionalEntropyLen, LPVOID *pDataOut, DWORD *dwDataOutLen, LPCWSTR pText);
void kuhl_m_dpapi_displayInfosAndFree(PVOID data, DWORD dataLen, PSID sid);