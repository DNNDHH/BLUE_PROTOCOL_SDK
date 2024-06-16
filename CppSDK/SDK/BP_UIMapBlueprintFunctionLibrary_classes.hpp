#pragma once

 

// Package: BP_UIMapBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UIMapBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsEnableFieldStatus(const struct FDataTableRowHandle& InFieldStatusDataTable, class UObject* __WorldContext, bool* IsEnable);

	void IsViewHUDQuest(int32 QuestIndex, class UObject* __WorldContext, bool* Result);
	void IsPublicDungeonDirectWarp(ESBLocationInfoType Type, class FName LocationId, class UObject* __WorldContext, bool* IsOpen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIMapBlueprintFunctionLibrary_C">();
	}
	static class UBP_UIMapBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIMapBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_UIMapBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_UIMapBlueprintFunctionLibrary_C");
static_assert(sizeof(UBP_UIMapBlueprintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_UIMapBlueprintFunctionLibrary_C");

}

