#pragma once

 

// Package: BP_CharaCreateColorManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharaCreateColorManager.BP_CharaCreateColorManager_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_CharaCreateColorManager_C final : public USBCharaCreateColorManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharaCreateColorManager_C">();
	}
	static class UBP_CharaCreateColorManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharaCreateColorManager_C>();
	}
};
static_assert(alignof(UBP_CharaCreateColorManager_C) == 0x000008, "Wrong alignment on UBP_CharaCreateColorManager_C");
static_assert(sizeof(UBP_CharaCreateColorManager_C) == 0x0000E0, "Wrong size on UBP_CharaCreateColorManager_C");

}

