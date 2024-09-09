#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class WebSocketNetworking.WebSocketConnection
	 * Size -> 0x0010 (FullSize[0x1BC8] - InheritedSize[0x1BB8])
	 */
	class UWebSocketConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_WUTR[0x10];                                  // 0x1BB8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WebSocketNetworking.WebSocketNetDriver
	 * Size -> 0x0010 (FullSize[0x0770] - InheritedSize[0x0760])
	 */
	class UWebSocketNetDriver : public UNetDriver
	{
	public:
		int32_t                                                    WebSocketPort;                                           // 0x0760(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLHR[0xC];                                   // 0x0764(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
