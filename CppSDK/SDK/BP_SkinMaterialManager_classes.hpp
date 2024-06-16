#pragma once

 

// Package: BP_SkinMaterialManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkinMaterialManager.BP_SkinMaterialManager_C
// 0x0000 (0x0258 - 0x0258)
class UBP_SkinMaterialManager_C final : public USBSkinMaterialManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkinMaterialManager_C">();
	}
	static class UBP_SkinMaterialManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SkinMaterialManager_C>();
	}
};
static_assert(alignof(UBP_SkinMaterialManager_C) == 0x000008, "Wrong alignment on UBP_SkinMaterialManager_C");
static_assert(sizeof(UBP_SkinMaterialManager_C) == 0x000258, "Wrong size on UBP_SkinMaterialManager_C");

}

