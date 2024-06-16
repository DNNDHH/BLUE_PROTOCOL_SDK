#pragma once

 

// Package: BP_UI_ImageAsset

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI_ImageAsset.BP_UI_ImageAsset_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UI_ImageAsset_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetUIImageAsset(class UDataTable* DataTable, class FName ImageName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ImageAsset, bool* Exist);
	static void GetUIImageAsset_Dungeon(class FName ImageName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ImageAsset);
	static void GetUIImageAsset_Dungeon_ById(class FName DungeonId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ImageAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_ImageAsset_C">();
	}
	static class UBP_UI_ImageAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_ImageAsset_C>();
	}
};
static_assert(alignof(UBP_UI_ImageAsset_C) == 0x000008, "Wrong alignment on UBP_UI_ImageAsset_C");
static_assert(sizeof(UBP_UI_ImageAsset_C) == 0x000028, "Wrong size on UBP_UI_ImageAsset_C");

}

