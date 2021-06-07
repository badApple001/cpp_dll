#include "pch.h"
#include "IUtils.h"

default_dll_api void SetCallback( func_void_int func )
{
	return func( 1 );
}

default_dll_api int get2powHigh( int N )
{
	--N;//������������һ��2�Ĵη���
	N |= N >> 1;
	N |= N >> 2;
	N |= N >> 4;
	N |= N >> 8;
	N |= N >> 16;
	return ++N;
}



default_dll_api int get2powLow( int N )
{
	return get2powHigh( N ) >> 1;
}


default_dll_api int gk7_abs( int N )
{
	return ( N ^ ( N >> 31 ) ) - ( N >> 31 );
}




class Utils: public IUtils {


	char _place_hoder[20];    // ��С��ƭ�� ռλ20,��ֹ�û����
public:
	Utils( ) = default;
	~Utils( ) = default;

	virtual void destory( ) {
		delete this;
	}

	virtual char* version( char* dest ){
		strcpy( dest, "1.0.0" );
		return dest;
	}


};


default_dll_api IUtils* create( )
{
	return new Utils;
}

