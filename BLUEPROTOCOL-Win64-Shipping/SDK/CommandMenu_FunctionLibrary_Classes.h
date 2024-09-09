#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommandMenu_FunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsWishListExclamation(class UObject* __WorldContext, bool* bResult);
		void IsWishItemCollectionCompleted(TArray<struct FRequiredMaterialInfo>* RequiredMaterialInfo, class UObject* __WorldContext, bool* bCompleted);
		void CheckBookmarkID(const class FString& InBookmarkID, class UObject* __WorldContext, bool* IsActive, class FString* ReplacementID);
		void IsAdventureRankBoardEnable(class UObject* __WorldContext, bool* enable);
		void IsLoginBonusBtnEnable(class UObject* __WorldContext, bool* enable);
		void OpenTutorialHelp_CommandMenu_ByHelpId(const class FName& TutorialHelpId, class UObject* __WorldContext);
		class FText GetTutorialHelpText(class USBTextTableAsset* InTextTableAsset, const class FName& InTextId, class UObject* __WorldContext);
		void KeyconfigActionToBookmark(ESBKeyConfigAction QuickAccessKey, class UObject* __WorldContext, class FString* ReturnValue1);
		class USBPlayerGuildComponent* GetGuildComp(class UObject* __WorldContext, bool* IsValid);
		void BookmarkTypeToRmShopMenuType(const class FString& Key, class UObject* __WorldContext, ESBRmShopMenuType* Value);
		class UTutorialHelpDialogBox_C* InitTutorialHelp_CommandMenu(const class FName& InId, bool InMustDisplayed, class UObject* __WorldContext);
		class UTutorialHelpDialogBox_C* OpenTutorialHelp_CommandMenu(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
