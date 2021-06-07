#pragma once

#ifdef _USRDLL

#define default_dll_api extern "C" _declspec( dllexport )

#else

#define default_dll_api extern "C" _declspec( dllimport )

#endif // _USRDLL


//定义函数指针;
typedef void ( __stdcall* func_void_int )( int N );

/*
* 
* dll调用外部方法 输入输出 
* example: Unity 调用 c++ dll 回调 Unity
* 
* 版权声明：本文为CSDN博主「极客七」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
*/
default_dll_api void SetCallback( func_void_int func );

/*
* 返回一个 大于于等于最近就N的2次方数
* int a = get2powHigh(511);  //a = 512
*
* 版权声明：本文为CSDN博主「极客七」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
* 原文链接：https ://blog.csdn.net/qq_39162566/article/details/113798720
*/
default_dll_api int get2powHigh( int N );


/*
* 返回一个 小于等于最近就N的2次方数
* int a = get2powHigh(511);  //a = 256
*
* 版权声明：本文为CSDN博主「极客七」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
* 原文链接：https ://blog.csdn.net/qq_39162566/article/details/113798720
*/
default_dll_api int get2powLow( int N );


/*
* 返回一个数的绝对值
*
* 版权声明：本文为CSDN博主「极客七」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
* 原文链接：https ://blog.csdn.net/qq_39162566/article/details/113798720
*/
default_dll_api int gk7_abs( int N );




/*
*
* 工具类
*
* 版权声明：本文为CSDN博主「极客七」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
* https://blog.csdn.net/qq_39162566
*/
class IUtils {

public:
	virtual void destory( ) = 0;
	virtual char* version( char* dest ) = 0;
};

default_dll_api IUtils* create( );