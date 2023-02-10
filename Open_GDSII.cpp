/*******************************************************************************
 * Macro Name: Open_GDSII
 *******************************************************************************/
#include <cstdlib>
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>

#include <string>

#define EXCLUDE_LEDIT_LEGACY_UPI

#include <ldata.h>

extern "C" {
	void OpenGDSII(void);
	int UPI_Entry_Point(void);
}

void OpenGDSII(void) {
	char DesignFileName[] = "tmpdesign.tdb";
	char pcszSrcFile[] = "D:\\Tanner_Examples\\TannerTools_v2022.2\\Designs\\RingVCO\\RingVCO.gds"; 

	LFile pFile = LFile_New( NULL, DesignFileName );
	
	LBoolean bUseGDSDataType = LTRUE; 
	LOverwriteCellsScopeOnImport OverwriteCells = cOverwriteAllCells; 
	LBoolean bGdsFileResolution = LTRUE; 
	double dCustomResolution = 0; 
	const char pcszLogFileName[] = "GDSII_import_log"; 

	LFile_ImportGDSII( pFile, pcszSrcFile, bUseGDSDataType,  OverwriteCells,  bGdsFileResolution, dCustomResolution,  pcszLogFileName);
}

int UPI_Entry_Point(void)
{
	LMacro_BindToMenuAndHotKey_v9_30("Tools", NULL /*hotkey*/, 
			"OpenGDSII", "OpenGDSII", NULL /*hotkey category*/);
	return 1;
}
