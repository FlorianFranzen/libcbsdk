/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== CkiVersion.rc ==================
static const unsigned char temp_binary_data_0[] =
"// =STS=> CkiVersion.rc[2408].aa25   open     SMID:27 \r\n"
"// Microsoft Visual C++ generated resource script.\r\n"
"//\r\n"
"#include \"resource.h\"\r\n"
"#include \"..\\CentralCommon\\BmiVersion.h\"\r\n"
"\r\n"
"#define APSTUDIO_READONLY_SYMBOLS\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"//\r\n"
"// Generated from the TEXTINCLUDE 2 resource.\r\n"
"//\r\n"
"#include \"afxres.h\"\r\n"
"\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"#undef APSTUDIO_READONLY_SYMBOLS\r\n"
"\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"// English (U.S.) resources\r\n"
"\r\n"
"#if !defined(AFX_RESOURCE_DLL) || defined(AFX_TARG_ENU)\r\n"
"#ifdef _WIN32\r\n"
"LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US\r\n"
"#pragma code_page(1252)\r\n"
"#endif //_WIN32\r\n"
"\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"//\r\n"
"// About Dialog\r\n"
"//\r\n"
"\r\n"
"IDD_ABOUT DIALOG  0, 0, 207, 72\r\n"
"STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU\r\n"
"CAPTION \"About Cerebus Suite\"\r\n"
"FONT 8, \"MS Sans Serif\"\r\n"
"BEGIN\r\n"
"    ICON            IDR_MAINFRAME,IDC_STATIC,5,10,20,20,SS_SUNKEN\r\n"
"    CTEXT           \"Cerebus Suite\",IDC_STATIC_APP_VERSION,30,5,150,10,SS_NOPREFIX | SS_CENTERIMAGE\r\n"
"    PUSHBUTTON      \"OK\",IDOK,180,10,20,20\r\n"
"    CTEXT           \"built with Hardware Library\",IDC_STATIC_LIB_VERSION,30,15,150,10,SS_NOPREFIX | SS_CENTERIMAGE\r\n"
"    CTEXT           BMI_COPYRIGHT_STR,IDC_STATIC,30,30,160,10,SS_NOPREFIX | SS_CENTERIMAGE\r\n"
"    CTEXT           \"NSP Firmware\",IDC_STATIC_NSP_VERSION,30,45,150,10,SS_NOPREFIX | SS_CENTERIMAGE\r\n"
"    CTEXT           \"\",IDC_STATIC_NSP_ID,30,60,150,10,SS_NOPREFIX | SS_CENTERIMAGE\r\n"
"END\r\n"
"\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"//\r\n"
"// Version\r\n"
"//\r\n"
"\r\n"
"VS_VERSION_INFO VERSIONINFO\r\n"
" FILEVERSION BMI_VERSION\r\n"
" PRODUCTVERSION BMI_VERSION\r\n"
" FILEFLAGSMASK 0x3fL\r\n"
"#ifndef DEBUG\r\n"
"#if BMI_VERSION_BETA\r\n"
" FILEFLAGS 0x2L\r\n"
"#else\r\n"
" FILEFLAGS 0x0L\r\n"
"#endif\r\n"
"#else\r\n"
" FILEFLAGS 0x1L\r\n"
"#endif\r\n"
" FILEOS 0x40004L\r\n"
"#ifdef _WINDLL\r\n"
" FILETYPE 0x2L\r\n"
"#else\r\n"
" FILETYPE 0x1L\r\n"
"#endif\r\n"
" FILESUBTYPE 0x0L\r\n"
"BEGIN\r\n"
"    BLOCK \"StringFileInfo\"\r\n"
"    BEGIN\r\n"
"        BLOCK \"040904b0\"\r\n"
"        BEGIN\r\n"
"            VALUE \"CompanyName\", \"Blackrock Microsystems\"\r\n"
"            VALUE \"FileVersion\", BMI_VERSION_STR\r\n"
"            VALUE \"LegalCopyright\", \"Copyright (C) 2008-2011 Blackrock Microsystems\"\r\n"
"            VALUE \"ProductVersion\", BMI_VERSION_STR\r\n"
"            VALUE \"FileDescription\", VERSION_DESCRIPTION\r\n"
"            VALUE \"InternalName\", VERSION_DESCRIPTION\r\n"
"            VALUE \"OriginalFilename\", VERSION_FILENAME\r\n"
"            VALUE \"ProductName\", VERSION_DESCRIPTION\r\n"
"        END\r\n"
"    END\r\n"
"    BLOCK \"VarFileInfo\"\r\n"
"    BEGIN\r\n"
"        VALUE \"Translation\", 0x409, 1200\r\n"
"    END\r\n"
"END\r\n"
"\r\n"
"\r\n"
"#ifdef APSTUDIO_INVOKED\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"//\r\n"
"// TEXTINCLUDE\r\n"
"//\r\n"
"\r\n"
"1 TEXTINCLUDE\r\n"
"BEGIN\r\n"
"    \"resource.h\\0\"\r\n"
"END\r\n"
"\r\n"
"3 TEXTINCLUDE\r\n"
"BEGIN\r\n"
"    \"\\r\\n\"\r\n"
"END\r\n"
"\r\n"
"2 TEXTINCLUDE\r\n"
"BEGIN\r\n"
"    \"#include \"\"afxres.h\"\"\\r\\n\"\r\n"
"END\r\n"
"\r\n"
"#endif    // APSTUDIO_INVOKED\r\n"
"\r\n"
"#endif    // English (U.S.) resources\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"\r\n"
"\r\n"
"\r\n"
"#ifndef APSTUDIO_INVOKED\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"//\r\n"
"// Generated from the TEXTINCLUDE 3 resource.\r\n"
"//\r\n"
"\r\n"
"\r\n"
"/////////////////////////////////////////////////////////////////////////////\r\n"
"#endif    // not APSTUDIO_INVOKED\r\n"
"\r\n";

const char* CkiVersion_rc = (const char*) temp_binary_data_0;


const char* getNamedResource (const char*, int&) throw();
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes) throw()
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x043306b9:  numBytes = 3460; return CkiVersion_rc;
        default: break;
    }

    numBytes = 0;
    return 0;
}

const char* namedResourceList[] =
{
    "CkiVersion_rc"
};

}
