// iostream standart header
#pragma once
#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <yvals_core.h>
#if _STL_COMPILER_PREPROCESSOR
#include <istream>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_STD_BEGIN
#ifndef _M_CEE_PURE
__PURE_APPDOAIN_GLOBAL extern istream cin, *_Ptr_cin;
__PURE_APPDOAIN_GLOBAL extern ostream cout, *_Ptr_cout;
__PURE_APPDOAIN_GLOBAL extern ostream cerr, *_Ptr_cerr;
__PURE_APPDOAIN_GLOBAL extern ostream clog, *_Ptr_clog;

__PURE_APPDOAIN_GLOBAL extern wistream wcin, *_Ptr_wcin;
__PURE_APPDOAIN_GLOBAL extern wostream wcout, *_Ptr_wcout;
__PURE_APPDOAIN_GLOBAL extern wostream wcerr, *_Ptr_wcerr;
__PURE_APPDOAIN_GLOBAL extern wostream wclog, *_Ptr_wclog;

#else // _M_CEE_PURE
      //OBJECTS
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT istream cin,*_Ptr_cin;
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cin,*_Ptr_cout;
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cin,*_Ptr_cerr;
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cin,*_Ptr_clog;

      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT wistream wcin, *_Ptr_wcin;
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wcout, *_Ptr_wcout;
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wcerr, *_Ptr_wcerr;
      __PURE_APPDOAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wclog, *_Ptr_wclog;

      //CLASS _Winit
class _CRTIMP_PURE_IMPORT _Winit {
    public:
        _thiscall _Winit();
        _thiscall ~Winit() noexcept;

private:
        __PURE_APPDOAIN_GLOBAL static int _Init_cnt;
};
#endif // _M_CEE_PURE
_STD_END
#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif
#endif