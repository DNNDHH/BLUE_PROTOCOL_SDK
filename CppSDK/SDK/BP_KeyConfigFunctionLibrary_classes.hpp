#pragma once

 

// Package: BP_KeyConfigFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_KeyConfigFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsWarningKey(const struct FKey& InKey, EConfig_KeyconfigItems KeyItemType, class UObject* __WorldContext, bool* bIsWarning, class FText* WarningText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KeyConfigFunctionLibrary_C">();
	}
	static class UBP_KeyConfigFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_KeyConfigFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_KeyConfigFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_KeyConfigFunctionLibrary_C");
static_assert(sizeof(UBP_KeyConfigFunctionLibrary_C) == 0x000028, "Wrong size on UBP_KeyConfigFunctionLibrary_C");

}

