#pragma once

 

// Package: MyCharaMenu_AchievementList_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C
// 0x0078 (0x02F0 - 0x0278)
class UMyCharaMenu_AchievementList_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBoxNormal;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchLockedNormal;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_AchievementName;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Locked;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsToolTipEnable;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_759C[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_Tooltip_C* ToolTip;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AchievementId;                                     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelectedAchievement;                             // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_759D[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsAchievementUnlocked;                             // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_759E[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           AchievementSelectedFontColor;                      // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelected__DelegateSignature(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem);
	void ExecuteUbergraph_MyCharaMenu_AchievementList_Item(int32 EntryPoint);
	void BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	class UWidget* GetToolTipWidget_0();
	void SetAchievement(int32 InAchievementId);
	void GetAchievement(int32* OutAchievementId);
	void SetTooltipEnable(bool IsEnable);
	void SetAsAchievementSelected(bool IsAchievementSelected);
	void SetAchievementUnlock(bool IsUnlocked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_AchievementList_Item_C">();
	}
	static class UMyCharaMenu_AchievementList_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_AchievementList_Item_C>();
	}
};
static_assert(alignof(UMyCharaMenu_AchievementList_Item_C) == 0x000008, "Wrong alignment on UMyCharaMenu_AchievementList_Item_C");
static_assert(sizeof(UMyCharaMenu_AchievementList_Item_C) == 0x0002F0, "Wrong size on UMyCharaMenu_AchievementList_Item_C");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_AchievementList_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, CanvasPanel_0) == 0x000280, "Member 'UMyCharaMenu_AchievementList_Item_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, CheckBoxNormal) == 0x000288, "Member 'UMyCharaMenu_AchievementList_Item_C::CheckBoxNormal' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, Image_0) == 0x000290, "Member 'UMyCharaMenu_AchievementList_Item_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, SwitchLockedNormal) == 0x000298, "Member 'UMyCharaMenu_AchievementList_Item_C::SwitchLockedNormal' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, Txt_AchievementName) == 0x0002A0, "Member 'UMyCharaMenu_AchievementList_Item_C::Txt_AchievementName' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, Txt_Locked) == 0x0002A8, "Member 'UMyCharaMenu_AchievementList_Item_C::Txt_Locked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, IsToolTipEnable) == 0x0002B0, "Member 'UMyCharaMenu_AchievementList_Item_C::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, ToolTip) == 0x0002B8, "Member 'UMyCharaMenu_AchievementList_Item_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, AchievementId) == 0x0002C0, "Member 'UMyCharaMenu_AchievementList_Item_C::AchievementId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, IsSelectedAchievement) == 0x0002C4, "Member 'UMyCharaMenu_AchievementList_Item_C::IsSelectedAchievement' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, OnSelected) == 0x0002C8, "Member 'UMyCharaMenu_AchievementList_Item_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, IsAchievementUnlocked) == 0x0002D8, "Member 'UMyCharaMenu_AchievementList_Item_C::IsAchievementUnlocked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_C, AchievementSelectedFontColor) == 0x0002DC, "Member 'UMyCharaMenu_AchievementList_Item_C::AchievementSelectedFontColor' has a wrong offset!");

}

