#pragma once

 

// Package: BP_CharaCreateBoneScaleManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharaCreateBoneScaleManager.BP_CharaCreateBoneScaleManager_C
// 0x0000 (0x0308 - 0x0308)
class UBP_CharaCreateBoneScaleManager_C final : public USBCharaCreateBoneScaleManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharaCreateBoneScaleManager_C">();
	}
	static class UBP_CharaCreateBoneScaleManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharaCreateBoneScaleManager_C>();
	}
};
static_assert(alignof(UBP_CharaCreateBoneScaleManager_C) == 0x000008, "Wrong alignment on UBP_CharaCreateBoneScaleManager_C");
static_assert(sizeof(UBP_CharaCreateBoneScaleManager_C) == 0x000308, "Wrong size on UBP_CharaCreateBoneScaleManager_C");

}

