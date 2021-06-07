#pragma once

#ifdef _USRDLL

#define default_dll_api extern "C" _declspec( dllexport )

#else

#define default_dll_api extern "C" _declspec( dllimport )

#endif // _USRDLL


//���庯��ָ��;
typedef void ( __stdcall* func_void_int )( int N );

/*
* 
* dll�����ⲿ���� ������� 
* example: Unity ���� c++ dll �ص� Unity
* 
* ��Ȩ����������ΪCSDN�����������ߡ���ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
*/
default_dll_api void SetCallback( func_void_int func );

/*
* ����һ�� �����ڵ��������N��2�η���
* int a = get2powHigh(511);  //a = 512
*
* ��Ȩ����������ΪCSDN�����������ߡ���ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
* ԭ�����ӣ�https ://blog.csdn.net/qq_39162566/article/details/113798720
*/
default_dll_api int get2powHigh( int N );


/*
* ����һ�� С�ڵ��������N��2�η���
* int a = get2powHigh(511);  //a = 256
*
* ��Ȩ����������ΪCSDN�����������ߡ���ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
* ԭ�����ӣ�https ://blog.csdn.net/qq_39162566/article/details/113798720
*/
default_dll_api int get2powLow( int N );


/*
* ����һ�����ľ���ֵ
*
* ��Ȩ����������ΪCSDN�����������ߡ���ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
* ԭ�����ӣ�https ://blog.csdn.net/qq_39162566/article/details/113798720
*/
default_dll_api int gk7_abs( int N );




/*
*
* ������
*
* ��Ȩ����������ΪCSDN�����������ߡ���ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
* https://blog.csdn.net/qq_39162566
*/
class IUtils {

public:
	virtual void destory( ) = 0;
	virtual char* version( char* dest ) = 0;
};

default_dll_api IUtils* create( );