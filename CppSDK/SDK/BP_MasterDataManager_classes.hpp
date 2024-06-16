#pragma once

 

// Package: BP_MasterDataManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MasterDataManager.BP_MasterDataManager_C
// 0x0000 (0x1CA0 - 0x1CA0)
class UBP_MasterDataManager_C final : public USBMasterDataManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MasterDataManager_C">();
	}
	static class UBP_MasterDataManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MasterDataManager_C>();
	}
};
static_assert(alignof(UBP_MasterDataManager_C) == 0x000008, "Wrong alignment on UBP_MasterDataManager_C");
static_assert(sizeof(UBP_MasterDataManager_C) == 0x001CA0, "Wrong size on UBP_MasterDataManager_C");

}

