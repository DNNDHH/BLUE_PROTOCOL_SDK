#pragma once

 

// Package: WebSocketNetworking

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class WebSocketNetworking.WebSocketConnection
// 0x0010 (0x1BC8 - 0x1BB8)
class UWebSocketConnection final : public UNetConnection
{
public:
	uint8                                         Pad_1684[0x10];                                    // 0x1BB8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebSocketConnection">();
	}
	static class UWebSocketConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebSocketConnection>();
	}
};
static_assert(alignof(UWebSocketConnection) == 0x000008, "Wrong alignment on UWebSocketConnection");
static_assert(sizeof(UWebSocketConnection) == 0x001BC8, "Wrong size on UWebSocketConnection");

// Class WebSocketNetworking.WebSocketNetDriver
// 0x0010 (0x0770 - 0x0760)
class UWebSocketNetDriver final : public UNetDriver
{
public:
	int32                                         WebSocketPort;                                     // 0x0760(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1685[0xC];                                     // 0x0764(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebSocketNetDriver">();
	}
	static class UWebSocketNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebSocketNetDriver>();
	}
};
static_assert(alignof(UWebSocketNetDriver) == 0x000008, "Wrong alignment on UWebSocketNetDriver");
static_assert(sizeof(UWebSocketNetDriver) == 0x000770, "Wrong size on UWebSocketNetDriver");
static_assert(offsetof(UWebSocketNetDriver, WebSocketPort) == 0x000760, "Member 'UWebSocketNetDriver::WebSocketPort' has a wrong offset!");

}

