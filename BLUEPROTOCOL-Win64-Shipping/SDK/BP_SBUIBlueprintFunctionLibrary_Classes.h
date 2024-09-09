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
	 * BlueprintGeneratedClass BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_SBUIBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsUseSkyStore(class UObject* __WorldContext, bool* Result);
		void GetAdventureboardCompleteRewardString(int32_t InBoardId, class UObject* __WorldContext, class FString* OutRewardString);
		void GetAdventureboardGoalRewardString(int32_t InBoardId, class UObject* __WorldContext, class FString* OutRewadString);
		void GetRewardString(TArray<class FName>* InRewardId, class UObject* __WorldContext, class FString* OutString);
		void SetTextColorComparison(class UTextBlock* Target, const struct FSlateColor& InColorAndOpacity, class UObject* __WorldContext);
		void SetTextComparison(class UTextBlock* Target, const class FText& InText, class UObject* __WorldContext);
		void IsDhcBattleMap(class UObject* __WorldContext, bool* IsDhcBattleMap);
		void SetStackBEnableColor(ESBStackBEnableType InStackBEnableType, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* OutIsStackBEnableFull);
		void GetStackBEnableType(class UObject* InWorldContextObject, class UObject* __WorldContext, ESBStackBEnableType* OutStackBEnableType);
		void SetVisibilityComparison(class UWidget* Target, ESlateVisibility InVisibility, class UObject* __WorldContext);
		void GetImagineLevelSyncLevel(const class FString& inImagineUniqueId, int32_t InImagineLevel, class UObject* __WorldContext, int32_t* OutImagineLevel);
		void SetFullscreen(class UCanvasPanelSlot* CanvasPanelSlot, class UObject* __WorldContext);
		void SetLevelSyncColor(bool Condition, class UTextBlock* InputPin, class UObject* __WorldContext, bool* bIsLevelSync);
		void ChangeWeaponLevelSyncByWeaponId(int32_t InWeaponID, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* bIsLevelSync);
		void ChangeWeaponLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync);
		void ChangeImagineLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStorageCheck, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool ForceLevelSyncOff, class UObject* __WorldContext, bool* bIsLevelSync);
		void IsRegisterWishlistLimit(class UObject* WorldContextObject, class UObject* __WorldContext, bool* bIsRegisterWishList);
		void ChangeLevelSyncTextColor(class UTextBlock* InTextWidget, const class FString& InItemUniqueId, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync);
		void CastOuterAsWidget(class UObject* Widget, class UObject* __WorldContext, class UUserWidget** OwnerWidget, bool* Result, class UObject** OuteroObject);
		void GetParentWidget(class UObject* Children, class UObject* __WorldContext, class UUserWidget** Parent);
		void CanInterruptNotification(bool IgnoreFindnemy, class UObject* __WorldContext, bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
