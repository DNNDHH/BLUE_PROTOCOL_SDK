#pragma once

 

// Package: BattleCordeListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCordeListItem.BattleCordeListItem_C
// 0x0058 (0x02D0 - 0x0278)
class UBattleCordeListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CordeNameTxt;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsSelected;                                       // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_808C[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CordeData;                                         // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf);
	void ExecuteUbergraph_BattleCordeListItem(int32 EntryPoint);
	void BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Setup(const struct FSBPlayerPresetEquipList& InCordeData);
	void SetIsEnable(bool InIsSelectable);
	void SetSelected(bool InIsSelected);
	void GetCordeData(struct FSBPlayerPresetEquipList* OutCordeData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCordeListItem_C">();
	}
	static class UBattleCordeListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCordeListItem_C>();
	}
};
static_assert(alignof(UBattleCordeListItem_C) == 0x000008, "Wrong alignment on UBattleCordeListItem_C");
static_assert(sizeof(UBattleCordeListItem_C) == 0x0002D0, "Wrong size on UBattleCordeListItem_C");
static_assert(offsetof(UBattleCordeListItem_C, UberGraphFrame) == 0x000278, "Member 'UBattleCordeListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, Btn01) == 0x000280, "Member 'UBattleCordeListItem_C::Btn01' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, ClassIcon) == 0x000288, "Member 'UBattleCordeListItem_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, CordeNameTxt) == 0x000290, "Member 'UBattleCordeListItem_C::CordeNameTxt' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, SwitchSelected) == 0x000298, "Member 'UBattleCordeListItem_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, OnClicked) == 0x0002A0, "Member 'UBattleCordeListItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, bIsSelected) == 0x0002B0, "Member 'UBattleCordeListItem_C::bIsSelected' has a wrong offset!");
static_assert(offsetof(UBattleCordeListItem_C, CordeData) == 0x0002B8, "Member 'UBattleCordeListItem_C::CordeData' has a wrong offset!");

}

