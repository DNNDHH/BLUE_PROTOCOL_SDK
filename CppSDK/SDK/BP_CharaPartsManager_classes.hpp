#pragma once

 

// Package: BP_CharaPartsManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharaPartsManager.BP_CharaPartsManager_C
// 0x0000 (0x01C8 - 0x01C8)
class UBP_CharaPartsManager_C final : public USBCharaPartsManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharaPartsManager_C">();
	}
	static class UBP_CharaPartsManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharaPartsManager_C>();
	}
};
static_assert(alignof(UBP_CharaPartsManager_C) == 0x000008, "Wrong alignment on UBP_CharaPartsManager_C");
static_assert(sizeof(UBP_CharaPartsManager_C) == 0x0001C8, "Wrong size on UBP_CharaPartsManager_C");

}

