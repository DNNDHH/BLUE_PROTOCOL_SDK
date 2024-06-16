#pragma once

 

// Package: FLIB_CommonIcon

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_CommonIcon.FLIB_CommonIcon_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_CommonIcon_C final : public UBlueprintFunctionLibrary
{
public:
	static void RewardItemTypeToItemType(ESBRewardItemType RewardItemType, class UObject* __WorldContext, EItemType* ItemType);
	static void ItemTypeToRewardItemType(EItemType InItemType, class UObject* __WorldContext, ESBRewardItemType* Out_RewardItemType);
	static void GetItemToolTipText(int32 InItemIndex, bool Unidentified, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
	static void GetWeaponToolTipText(int32 WeaponID, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
	static void GetCostumeToolTipText(int32 CostumeId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
	static void GetImagineToolTipText(const int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
	static void GetLiquidMemoryTooltipText(const int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
	static void GetMountImagineToolTipText(const int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
	static void Get_Reward_Item_Name_and_Type(ESBRewardItemType InRewardItemType, int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName);
	static class FText Add_BracketsToString(bool bAdd, const class FString& Text, class UObject* __WorldContext);
	static class FText GetStampIDToCategoryNameAndStampI(int32 StampId, class UObject* __WorldContext);
	static void GetRewardItemNameAndType2(ESBRewardItemType InRewardItemType, int32 InId, int32 Amount, int32 AmountMin, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName);
	static void GetRewardItemNameAndType2ByMasterReward(const struct FSBMasterReward& RewardData, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName);
	static void GetLiquidMemoryCategoryName(ESBLiquidMemoryCategory InCategory, class UObject* __WorldContext, class FString* OutCategoryName);
	static void GetLiquidMemoryEfficacyTypeName(ESBLiquidMemoryEfficacyType EfficacyType, class UObject* __WorldContext, class FString* OutCategoryName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_CommonIcon_C">();
	}
	static class UFLIB_CommonIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_CommonIcon_C>();
	}
};
static_assert(alignof(UFLIB_CommonIcon_C) == 0x000008, "Wrong alignment on UFLIB_CommonIcon_C");
static_assert(sizeof(UFLIB_CommonIcon_C) == 0x000028, "Wrong size on UFLIB_CommonIcon_C");

}

