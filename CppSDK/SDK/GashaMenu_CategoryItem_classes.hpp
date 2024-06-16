#pragma once

 

// Package: GashaMenu_CategoryItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaMenu_CategoryItem.GashaMenu_CategoryItem_C
// 0x0058 (0x02D0 - 0x0278)
class UGashaMenu_CategoryItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSelect;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LabelName;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ribbon_New;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ribbon_PickUp;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Ribbon;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BtnId;                                             // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8456[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnClicked;                                      // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnBtnClicked__DelegateSignature(int32 Param_BtnId);
	void ExecuteUbergraph_GashaMenu_CategoryItem(int32 EntryPoint);
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Tab_Text(int32 TextId);
	void SetBtnSelected(bool bSelected);
	void GetTabText(int32* TextId);
	void SetRibbon(int32 RibbonType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaMenu_CategoryItem_C">();
	}
	static class UGashaMenu_CategoryItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaMenu_CategoryItem_C>();
	}
};
static_assert(alignof(UGashaMenu_CategoryItem_C) == 0x000008, "Wrong alignment on UGashaMenu_CategoryItem_C");
static_assert(sizeof(UGashaMenu_CategoryItem_C) == 0x0002D0, "Wrong size on UGashaMenu_CategoryItem_C");
static_assert(offsetof(UGashaMenu_CategoryItem_C, UberGraphFrame) == 0x000278, "Member 'UGashaMenu_CategoryItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, AnimSelect) == 0x000280, "Member 'UGashaMenu_CategoryItem_C::AnimSelect' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, Btn) == 0x000288, "Member 'UGashaMenu_CategoryItem_C::Btn' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, Effect1) == 0x000290, "Member 'UGashaMenu_CategoryItem_C::Effect1' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, LabelName) == 0x000298, "Member 'UGashaMenu_CategoryItem_C::LabelName' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, Ribbon_New) == 0x0002A0, "Member 'UGashaMenu_CategoryItem_C::Ribbon_New' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, Ribbon_PickUp) == 0x0002A8, "Member 'UGashaMenu_CategoryItem_C::Ribbon_PickUp' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, WidgetSwitcher_Ribbon) == 0x0002B0, "Member 'UGashaMenu_CategoryItem_C::WidgetSwitcher_Ribbon' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, BtnId) == 0x0002B8, "Member 'UGashaMenu_CategoryItem_C::BtnId' has a wrong offset!");
static_assert(offsetof(UGashaMenu_CategoryItem_C, OnBtnClicked) == 0x0002C0, "Member 'UGashaMenu_CategoryItem_C::OnBtnClicked' has a wrong offset!");

}

