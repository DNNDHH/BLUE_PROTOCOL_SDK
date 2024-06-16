#pragma once

 

// Package: SBAnimNode

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SBAnimNode.SBPartsDamageAnimParamter
// 0x0010 (0x0038 - 0x0028)
class USBPartsDamageAnimParamter final : public UObject
{
public:
	uint8                                         Pad_1D04[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBPartsDamageAnimParamter">();
	}
	static class USBPartsDamageAnimParamter* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBPartsDamageAnimParamter>();
	}
};
static_assert(alignof(USBPartsDamageAnimParamter) == 0x000008, "Wrong alignment on USBPartsDamageAnimParamter");
static_assert(sizeof(USBPartsDamageAnimParamter) == 0x000038, "Wrong size on USBPartsDamageAnimParamter");

// Class SBAnimNode.SBBoneScaleCacheInterface
// 0x0000 (0x0028 - 0x0028)
class ISBBoneScaleCacheInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBBoneScaleCacheInterface">();
	}
	static class ISBBoneScaleCacheInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISBBoneScaleCacheInterface>();
	}
};
static_assert(alignof(ISBBoneScaleCacheInterface) == 0x000008, "Wrong alignment on ISBBoneScaleCacheInterface");
static_assert(sizeof(ISBBoneScaleCacheInterface) == 0x000028, "Wrong size on ISBBoneScaleCacheInterface");

// Class SBAnimNode.SBPartsDamageAnimInterface
// 0x0000 (0x0028 - 0x0028)
class ISBPartsDamageAnimInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBPartsDamageAnimInterface">();
	}
	static class ISBPartsDamageAnimInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISBPartsDamageAnimInterface>();
	}
};
static_assert(alignof(ISBPartsDamageAnimInterface) == 0x000008, "Wrong alignment on ISBPartsDamageAnimInterface");
static_assert(sizeof(ISBPartsDamageAnimInterface) == 0x000028, "Wrong size on ISBPartsDamageAnimInterface");

}

