#pragma once

 

// Package: RemoteControlCommon

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct RemoteControlCommon.RCPropertyContainerKey
// 0x0008 (0x0008 - 0x0000)
struct FRCPropertyContainerKey final
{
public:
	class FName                                   ValueTypeName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPropertyContainerKey) == 0x000004, "Wrong alignment on FRCPropertyContainerKey");
static_assert(sizeof(FRCPropertyContainerKey) == 0x000008, "Wrong size on FRCPropertyContainerKey");
static_assert(offsetof(FRCPropertyContainerKey, ValueTypeName) == 0x000000, "Member 'FRCPropertyContainerKey::ValueTypeName' has a wrong offset!");

}

