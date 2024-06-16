#pragma once

 

// Package: CommandMenu_FunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UCommandMenu_FunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void OpenTutorialHelp_CommandMenu(class UObject* __WorldContext);
	static void InitTutorialHelp_CommandMenu(class FName InId, bool InMustDisplayed, class UObject* __WorldContext);
	static void BookmarkTypeToRmShopMenuType(const class FString& Key, class UObject* __WorldContext, ESBRmShopMenuType* Value);
	static class USBPlayerGuildComponent* GetGuildComp(class UObject* __WorldContext, bool* IsValid);
	static void KeyconfigActionToBookmark(ESBKeyConfigAction QuickAccessKey, class UObject* __WorldContext, class FString* ReturnValue1);
	static const class FText GetTutorialHelpText(const class USBTextTableAsset* InTextTableAsset, const class FName InTextID, class UObject* __WorldContext);
	static void OpenTutorialHelp_CommandMenu_By_HelpId(class FName TutorialHelpId, class UObject* __WorldContext);
	static void IsLoginBonusBtnEnable(class UObject* __WorldContext, bool* Enable);
	static void Is_Adventure_Rank_Board_Enable(class UObject* __WorldContext, bool* Enable);
	static void CheckBookmarkID(const class FString& InBookmarkID, class UObject* __WorldContext, bool* IsActive, class FString* ReplacementID);
	static void IsWishItemCollectionCompleted(TArray<struct FRequiredMaterialInfo>& RequiredMaterialInfo, class UObject* __WorldContext, bool* bCompleted);
	static void IsWishListExclamation(class UObject* __WorldContext, bool* bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_FunctionLibrary_C">();
	}
	static class UCommandMenu_FunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_FunctionLibrary_C>();
	}
};
static_assert(alignof(UCommandMenu_FunctionLibrary_C) == 0x000008, "Wrong alignment on UCommandMenu_FunctionLibrary_C");
static_assert(sizeof(UCommandMenu_FunctionLibrary_C) == 0x000028, "Wrong size on UCommandMenu_FunctionLibrary_C");

}

