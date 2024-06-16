#pragma once

 

// Package: LibraryMenu_AchievementListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C
// 0x0128 (0x03A0 - 0x0278)
class ULibraryMenu_AchievementListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAchievementRankIcon_C*                 AchievementRankIcon;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLimited;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconRewordSwitcher;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconTitleSet;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       ProgressText;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       ProgressText_1;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_263;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ListIndex;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5A7C[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 AchievementMasterData;                             // 0x02F0(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             EventCheckStateChanged;                            // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsNew;                                             // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CheckBoxEnabled;                                   // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A7D[0x2];                                     // 0x037A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           UnSelectAndUnHoverColor;                           // 0x037C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SelectAndHoverColor;                               // 0x038C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(int32 Param_ListIndex);
	void EventCheckStateChanged__DelegateSignature(bool IsChecked, int32 Param_ListIndex);
	void ExecuteUbergraph_LibraryMenu_AchievementListItem(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Initialize();
	void SetBtnSelected(bool bSelected);
	void SetExcramationIconVisible(bool Visible);
	void SetProgress(int32 InObjectNum, int32 InProgress, int32 InObejectKind);
	void SetRewardIcon(TArray<class FString>& RewardIdList, bool IsClear, bool IsRecievedReward, bool IsTermEnd);
	void SetVisibilityAchievementTitleIcon(bool IsVisibility);
	void SetVisibilityAchievementEventTermIcon(bool IsVisibility);
	void SetFontColor(const struct FLinearColor& Specified_Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_AchievementListItem_C">();
	}
	static class ULibraryMenu_AchievementListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_AchievementListItem_C>();
	}
};
static_assert(alignof(ULibraryMenu_AchievementListItem_C) == 0x000008, "Wrong alignment on ULibraryMenu_AchievementListItem_C");
static_assert(sizeof(ULibraryMenu_AchievementListItem_C) == 0x0003A0, "Wrong size on ULibraryMenu_AchievementListItem_C");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_AchievementListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, AchievementRankIcon) == 0x000280, "Member 'ULibraryMenu_AchievementListItem_C::AchievementRankIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, Btn1) == 0x000288, "Member 'ULibraryMenu_AchievementListItem_C::Btn1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, IconLimited) == 0x000290, "Member 'ULibraryMenu_AchievementListItem_C::IconLimited' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, IconNew) == 0x000298, "Member 'ULibraryMenu_AchievementListItem_C::IconNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, IconRewordSwitcher) == 0x0002A0, "Member 'ULibraryMenu_AchievementListItem_C::IconRewordSwitcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, IconTitleSet) == 0x0002A8, "Member 'ULibraryMenu_AchievementListItem_C::IconTitleSet' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, ItemName) == 0x0002B0, "Member 'ULibraryMenu_AchievementListItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, ProgressText) == 0x0002B8, "Member 'ULibraryMenu_AchievementListItem_C::ProgressText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, ProgressText_1) == 0x0002C0, "Member 'ULibraryMenu_AchievementListItem_C::ProgressText_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, SwitchSelected) == 0x0002C8, "Member 'ULibraryMenu_AchievementListItem_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, WidgetSwitcher_263) == 0x0002D0, "Member 'ULibraryMenu_AchievementListItem_C::WidgetSwitcher_263' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, OnClick) == 0x0002D8, "Member 'ULibraryMenu_AchievementListItem_C::OnClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, ListIndex) == 0x0002E8, "Member 'ULibraryMenu_AchievementListItem_C::ListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, AchievementMasterData) == 0x0002F0, "Member 'ULibraryMenu_AchievementListItem_C::AchievementMasterData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, EventCheckStateChanged) == 0x000368, "Member 'ULibraryMenu_AchievementListItem_C::EventCheckStateChanged' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, IsNew) == 0x000378, "Member 'ULibraryMenu_AchievementListItem_C::IsNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, CheckBoxEnabled) == 0x000379, "Member 'ULibraryMenu_AchievementListItem_C::CheckBoxEnabled' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, UnSelectAndUnHoverColor) == 0x00037C, "Member 'ULibraryMenu_AchievementListItem_C::UnSelectAndUnHoverColor' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementListItem_C, SelectAndHoverColor) == 0x00038C, "Member 'ULibraryMenu_AchievementListItem_C::SelectAndHoverColor' has a wrong offset!");

}

