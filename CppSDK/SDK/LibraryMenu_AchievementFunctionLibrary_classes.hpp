#pragma once

 

// Package: LibraryMenu_AchievementFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class ULibraryMenu_AchievementFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CheckLimitedTime(const struct FAchievementMasterData& AchievementMasterData, class UObject* __WorldContext, bool* Result);
	static void IsTermIdData(const class FString& InTermId, class UObject* __WorldContext, bool* IsTermData, TArray<struct FSBEventTermsData>* Terms);
	static void SetLibraryAchievementCategory_Status(class UObject* __WorldContext);
	static void SetLibraryAchievementCategory_Class(class UObject* __WorldContext);
	static void SetLibraryAchievementCategory_Quest(class UObject* __WorldContext);
	static void SetLibraryAchievementCategory_Communication(class UObject* __WorldContext);
	static void SetLibraryAchievementCategory_Life(class UObject* __WorldContext);
	static void SetLibraryAchievementCategory_Assets(class UObject* __WorldContext);
	static void SetLibraryAchievementCategory_AdventureBoard(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_AchievementFunctionLibrary_C">();
	}
	static class ULibraryMenu_AchievementFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_AchievementFunctionLibrary_C>();
	}
};
static_assert(alignof(ULibraryMenu_AchievementFunctionLibrary_C) == 0x000008, "Wrong alignment on ULibraryMenu_AchievementFunctionLibrary_C");
static_assert(sizeof(ULibraryMenu_AchievementFunctionLibrary_C) == 0x000028, "Wrong size on ULibraryMenu_AchievementFunctionLibrary_C");

}

