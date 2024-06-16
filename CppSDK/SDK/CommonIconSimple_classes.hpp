#pragma once

 

// Package: CommonIconSimple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "ToolTipType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconSimple.CommonIconSimple_C
// 0x0078 (0x02F0 - 0x0278)
class UCommonIconSimple_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Icon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconToolTip_C*                   CachedToolTipWidget;                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGrayOut;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DAC[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              WaitLoadTexture;                                   // 0x0298(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              NowLoadTexture;                                    // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bStampMode;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceHideAmount2;                                 // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CommonIconSimple(int32 EntryPoint);
	void SetIconRecipeSet(int32 ID);
	void SetIconStampWithToolTip(int32 StampId);
	void SetIconLiquidMemory(int32 ID);
	void SetIconItem(int32 InItemIndex, int32 InItemAmount, bool bDisplayLockIcon, bool IsUnidentified);
	void SetIconAchivement(int32 ID);
	void SetIconRecipe(ESBRewardItemType Type, int32 ID);
	void SetIconToken(int32 ID, int32 Amount);
	void SetIconStampCategory(const int32 CategoryId);
	void SetIconImagine(int32 InImagineItemId, const class FString& UniqueId, int32 StorageNumber);
	void Set_RewardCategory(ESBRewardItemType RewardItemType);
	void SetIconCostume(int32 InItemIndex, bool bDisplayLockIcon);
	void SetIconBasic(EItemType Selection, int32 InItemIndex);
	void SetIconWeapon(int32 InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32 InStorageNumber);
	void IconLoadRequestCheckStart();
	void IconLoadStart(TSoftObjectPtr<class UTexture2D> Param_NowLoadTexture);
	void IconLoadRequest(const TSoftObjectPtr<class UTexture2D>& TextureReference);
	void SetIconMountImagine(int32 InIndex, const class FString& InUniqueId);
	void SetIconStamp(const class FString& StampId);
	void OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159(class UObject* Loaded);
	void SetMoney(int32 InAmount);
	void SetEmotion(class FName ID);
	void SetBP(int32 InAmount);
	void SetBrokenData();
	void SetEmptyStamp();
	void SetGrayOut(bool Param_IsGrayOut);
	void SetClassExp(int32 Exp);
	void ItemTypeToToolTipType(EItemType InItemType, EToolTipType* ToolTipType);
	void SetSkyCoin(int32 Amount);
	void GetRewardItemIcon(ESBRewardItemType RewardItemType, TSoftObjectPtr<class UTexture2D>* Icon);
	void Set_Reward_Icon(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, int32 InAmountMin);
	void SetMasterReward(const struct FSBMasterReward& Data);
	void SetProductData(class UBP_SBProductItemData_C* Target, bool* bValid);
	void SetItemBoxContent(const struct FSBItemBoxContentParam& Data);
	void SetUnidentifiedIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconSimple_C">();
	}
	static class UCommonIconSimple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconSimple_C>();
	}
};
static_assert(alignof(UCommonIconSimple_C) == 0x000008, "Wrong alignment on UCommonIconSimple_C");
static_assert(sizeof(UCommonIconSimple_C) == 0x0002F0, "Wrong size on UCommonIconSimple_C");
static_assert(offsetof(UCommonIconSimple_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconSimple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, Image_Icon) == 0x000280, "Member 'UCommonIconSimple_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, CachedToolTipWidget) == 0x000288, "Member 'UCommonIconSimple_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, IsGrayOut) == 0x000290, "Member 'UCommonIconSimple_C::IsGrayOut' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, WaitLoadTexture) == 0x000298, "Member 'UCommonIconSimple_C::WaitLoadTexture' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, NowLoadTexture) == 0x0002C0, "Member 'UCommonIconSimple_C::NowLoadTexture' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, bStampMode) == 0x0002E8, "Member 'UCommonIconSimple_C::bStampMode' has a wrong offset!");
static_assert(offsetof(UCommonIconSimple_C, bForceHideAmount2) == 0x0002E9, "Member 'UCommonIconSimple_C::bForceHideAmount2' has a wrong offset!");

}

