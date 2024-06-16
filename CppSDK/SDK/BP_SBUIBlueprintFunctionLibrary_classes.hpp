#pragma once

 

// Package: BP_SBUIBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SBUIBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CanInterruptNotification(bool IgnoreFindnemy, class UObject* __WorldContext, bool* Result);
	static void GetParentWidget(class UObject* Children, class UObject* __WorldContext, class UUserWidget** Parent);
	static void CastOuterAsWidget(class UObject* Widget, class UObject* __WorldContext, class UUserWidget** OwnerWidget, bool* Result, class UObject** OuteroObject);
	static void ChangeLevelSyncTextColor(class UTextBlock* InTextWidget, const class FString& InItemUniqueId, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync);
	static void IsRegisterWishlistLimit(class UObject* WorldContextObject, class UObject* __WorldContext, bool* bIsRegisterWishList);
	static void ChangeImagineLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStorageCheck, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool ForceLevelSyncOff, class UObject* __WorldContext, bool* bIsLevelSync);
	static void ChangeWeaponLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync);
	static void ChangeWeaponLevelSyncByWeaponId(int32 InWeaponID, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* bIsLevelSync);
	static void SetLevelSyncColor(bool Condition, class UTextBlock* InputPin, class UObject* __WorldContext, bool* bIsLevelSync);
	static void SetFullscreen(class UCanvasPanelSlot* CanvasPanelSlot, class UObject* __WorldContext);
	static void GetImagineLevelSyncLevel(const class FString& InImagineUniqueId, int32 InImagineLevel, class UObject* __WorldContext, int32* OutImagineLevel);
	static void SetVisibilityComparison(class UWidget* Target, ESlateVisibility InVisibility, class UObject* __WorldContext);
	static void GetStackBEnableType(class UObject* InWorldContextObject, class UObject* __WorldContext, ESBStackBEnableType* OutStackBEnableType);
	static void SetStackBEnableColor(ESBStackBEnableType InStackBEnableType, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* OutIsStackBEnableFull);
	static void IsDhcBattleMap(class UObject* __WorldContext, bool* Param_IsDhcBattleMap);
	static void SetTextComparison(class UTextBlock* Target, const class FText& InText, class UObject* __WorldContext);
	static void GetRewardString(TArray<class FName>& InRewardId, class UObject* __WorldContext, class FString* OutString);
	static void GetAdventureboardGoalRewardString(int32 InBoardId, class UObject* __WorldContext, class FString* OutRewadString);
	static void GetAdventureboardCompleteRewardString(int32 InBoardId, class UObject* __WorldContext, class FString* OutRewardString);

	static void IsUseSkyStore(class UObject* __WorldContext, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBUIBlueprintFunctionLibrary_C">();
	}
	static class UBP_SBUIBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBUIBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_SBUIBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_SBUIBlueprintFunctionLibrary_C");
static_assert(sizeof(UBP_SBUIBlueprintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_SBUIBlueprintFunctionLibrary_C");

}

