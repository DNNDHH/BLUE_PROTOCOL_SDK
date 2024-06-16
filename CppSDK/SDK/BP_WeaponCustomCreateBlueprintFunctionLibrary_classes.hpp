#pragma once

 

// Package: BP_WeaponCustomCreateBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponCustomCreateBlueprintFunctionLibrary.BP_WeaponCustomCreateBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WeaponCustomCreateBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CreateWeaponCustomMenuSynthe(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget);
	static void CreateWeaponCustomMenuExtender(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget);
	static void CreateWeaponCustomMenuTuning(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget);
	static void CreateWeaponCustomMenuRemove(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponCustomCreateBlueprintFunctionLibrary_C">();
	}
	static class UBP_WeaponCustomCreateBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WeaponCustomCreateBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_WeaponCustomCreateBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_WeaponCustomCreateBlueprintFunctionLibrary_C");
static_assert(sizeof(UBP_WeaponCustomCreateBlueprintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_WeaponCustomCreateBlueprintFunctionLibrary_C");

}

