#include "pch.h"
#include "IUtils.h"

default_dll_api void SetCallback( func_void_int func )
{
	return func( 1 );
}

default_dll_api int get2powHigh( int N )
{
	--N;//避免正好输入一个2的次方数
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


	char _place_hoder[20];    // 大小欺骗法 占位20,防止用户理解
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

