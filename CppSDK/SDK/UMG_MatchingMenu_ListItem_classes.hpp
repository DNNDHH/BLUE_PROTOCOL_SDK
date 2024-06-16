#pragma once

 

// Package: UMG_MatchingMenu_ListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C
// 0x0270 (0x04E8 - 0x0278)
class UUMG_MatchingMenu_ListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventIcon_C*                           EventIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagComplete;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageClock;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageNew;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ItemButton;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RecommendLevelText;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   DungeonId;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSBMapInfo                             DungeonMapInfo;                                    // 0x02C0(0x01E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_RewardBoostTooltip_C*              RewardBoostTooltip;                                // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHelpMatchingModeInfo                HelpMatchingInfo;                                  // 0x04B8(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          IsHelpMode;                                        // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelected__DelegateSignature(const struct FSBMapInfo& Param_DungeonMapInfo, class UUMG_MatchingMenu_ListItem_C* ListItem);
	void ExecuteUbergraph_UMG_MatchingMenu_ListItem(int32 EntryPoint);
	void UpdateBonusIcon();
	void OnUpdateRewardBoostInfo(class UObject* Sender, class UObject* Param);
	void Destruct();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Update_Style(bool IsFocus);
	void SetSelect(bool Select);
	class UWidget* Get_ItemButton_ToolTipWidget_0();
	void SetVisibilityNew(bool bShow);
	void GetHelpMatchingRequiredInfo(int32* BattleScore, int32* ClassLevel);
	void MakeMapInfo();
	void GetRewardSearchName(class FName* SearchName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_ListItem_C">();
	}
	static class UUMG_MatchingMenu_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_ListItem_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_ListItem_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_ListItem_C");
static_assert(sizeof(UUMG_MatchingMenu_ListItem_C) == 0x0004E8, "Wrong size on UUMG_MatchingMenu_ListItem_C");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_ListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, EventIcon) == 0x000280, "Member 'UUMG_MatchingMenu_ListItem_C::EventIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, ImagComplete) == 0x000288, "Member 'UUMG_MatchingMenu_ListItem_C::ImagComplete' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, ImageClock) == 0x000290, "Member 'UUMG_MatchingMenu_ListItem_C::ImageClock' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, ImageNew) == 0x000298, "Member 'UUMG_MatchingMenu_ListItem_C::ImageNew' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, ItemButton) == 0x0002A0, "Member 'UUMG_MatchingMenu_ListItem_C::ItemButton' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, RecommendLevelText) == 0x0002A8, "Member 'UUMG_MatchingMenu_ListItem_C::RecommendLevelText' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, TxtName) == 0x0002B0, "Member 'UUMG_MatchingMenu_ListItem_C::TxtName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, DungeonId) == 0x0002B8, "Member 'UUMG_MatchingMenu_ListItem_C::DungeonId' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, DungeonMapInfo) == 0x0002C0, "Member 'UUMG_MatchingMenu_ListItem_C::DungeonMapInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, OnSelected) == 0x0004A0, "Member 'UUMG_MatchingMenu_ListItem_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, RewardBoostTooltip) == 0x0004B0, "Member 'UUMG_MatchingMenu_ListItem_C::RewardBoostTooltip' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, HelpMatchingInfo) == 0x0004B8, "Member 'UUMG_MatchingMenu_ListItem_C::HelpMatchingInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ListItem_C, IsHelpMode) == 0x0004E0, "Member 'UUMG_MatchingMenu_ListItem_C::IsHelpMode' has a wrong offset!");

}

