#pragma once

 

// Package: BP_NpcFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_NpcFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void InitializeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext);
	static void FinalizeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcFunctionLibrary_C">();
	}
	static class UBP_NpcFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NpcFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_NpcFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_NpcFunctionLibrary_C");
static_assert(sizeof(UBP_NpcFunctionLibrary_C) == 0x000028, "Wrong size on UBP_NpcFunctionLibrary_C");

}

