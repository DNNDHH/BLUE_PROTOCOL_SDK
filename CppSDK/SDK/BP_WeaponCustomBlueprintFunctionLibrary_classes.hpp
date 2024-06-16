#pragma once

 

// Package: BP_WeaponCustomBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WeaponCustomBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsInvalidAbilityEffectValue(int32 Value, class UObject* __WorldContext, bool* Result);
	static void IsInvalidAbilityEffectValueMinMax(int32 ValueMin, int32 ValueMax, class UObject* __WorldContext, bool* Result);
	static void IsInvalidAbilityEffectValueAbilityEffectID(int32 AbilityEffectId, class UObject* __WorldContext, bool* Result);
	static void IsSameAbilityEffectValueMinMax(int32 ValueMin, int32 ValueMax, class UObject* __WorldContext, bool* Result);
	static void IsSameAbilityEffectValueAbilityEffectID(int32 AbilityEffectId, class UObject* __WorldContext, bool* Result);
	static void GetAbilityEffectValue(int32 AbilityEffectId, class UObject* __WorldContext, int32* Perk1ValueMin, int32* Perk1ValueMax, int32* Perk2ValueMin, int32* Perk2ValueMax, int32* RarityMin, int32* RarityMax);
	static void GetAbilityEffectID(const int32 ItemId, class UObject* __WorldContext, int32* AbilityEffectId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponCustomBlueprintFunctionLibrary_C">();
	}
	static class UBP_WeaponCustomBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WeaponCustomBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_WeaponCustomBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_WeaponCustomBlueprintFunctionLibrary_C");
static_assert(sizeof(UBP_WeaponCustomBlueprintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_WeaponCustomBlueprintFunctionLibrary_C");

}

