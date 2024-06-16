#pragma once

 

// Package: CommonIconToolTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTip.CommonIconToolTip_C
// 0x00E0 (0x0358 - 0x0278)
class UCommonIconToolTip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x0288(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsPlayerProfile;                                  // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C3C[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      PlayerProfileWeaponData;                           // 0x0308(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CommonIconToolTip(int32 EntryPoint);
	void DeleteAllChildren();
	void CreateContentsInfo(const struct FST_ToolTipInfo& InToolTipInfo);
	void CreateToolTipItem(int32 InItemIndex, bool bUnidentified);
	void CreateToolTipWeapon(int32 InItemIndex, const class FString& InUniqueId, const int32 InStorageNumber);
	void CreateToolTipWeapon_Details(int32 InItemIndex, const class FString& InItemUniqueId, int32 InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff);
	void CreateToolTipCostume(int32 InItemIndex);
	void CreateToolTipMoney(int32 InAmount, const class FText& OptionText, const class FText& InAmountText);
	void CreateToolTipEmotion(class FName InId, int32 InIndex);
	void CreateToolTipStamp(int32 InStampId);
	void CreateToolTipContributionPoint(int32 InAmount);
	void CreateToolTipImagine(int32 InImagineItemId, const class FString& InUniqueId, const int32 InStorageNumber);
	void CreateToolTipImagine_AcDetails(const int32 InId, const class FString& InUniqueId, bool bInIsImageIconActive, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff);
	void CreateToolTipImagine_PaDetails(const int32 InId, const class FString& InUniqueId, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff);
	void CreateToolTipBrokenData();
	void CreateToolTipLiquidMemory(int32 InLiquidMemoryId);
	void CreateToolTipMountImagine(int32 InIndex, const class FString& InUniqueId, const int32 InStorageNumber);
	void CreateToolTipItemBox(const struct FST_ToolTipInfo& Param_ToolTipInfo);
	void CreateToolTipCommonNameAndType(const struct FST_ToolTipInfo& Info);
	void CreateToolTipCommonTypeOnly(const struct FST_ToolTipInfo& Info);
	void CreateToolTipRecipeSet(const struct FST_ToolTipInfo& Param_ToolTipInfo, bool bCheckExisting);
	void CreateToolTipFusionItem(int32 InItemIndex, bool bUnidentified);
	void SetPlayerProfileWeaponData(const struct FSBWeaponItemData& Param_PlayerProfileWeaponData);
	void CreateToolTipOrnament(int32 ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTip_C">();
	}
	static class UCommonIconToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTip_C>();
	}
};
static_assert(alignof(UCommonIconToolTip_C) == 0x000008, "Wrong alignment on UCommonIconToolTip_C");
static_assert(sizeof(UCommonIconToolTip_C) == 0x000358, "Wrong size on UCommonIconToolTip_C");
static_assert(offsetof(UCommonIconToolTip_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTip_C, CanvasPanel_0) == 0x000280, "Member 'UCommonIconToolTip_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTip_C, ToolTipInfo) == 0x000288, "Member 'UCommonIconToolTip_C::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTip_C, bIsPlayerProfile) == 0x000300, "Member 'UCommonIconToolTip_C::bIsPlayerProfile' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTip_C, PlayerProfileWeaponData) == 0x000308, "Member 'UCommonIconToolTip_C::PlayerProfileWeaponData' has a wrong offset!");

}

