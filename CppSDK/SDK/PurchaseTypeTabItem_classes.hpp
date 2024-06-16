#pragma once

 

// Package: PurchaseTypeTabItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PurchaseTypeTabItem.PurchaseTypeTabItem_C
// 0x0530 (0x07A8 - 0x0278)
class UPurchaseTypeTabItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSelect;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BtnId;                                             // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_66A7[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnClicked;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           BtnOn_Style;                                       // 0x02B0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSelected;                                        // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A8[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           BtnOff_Style;                                      // 0x0530(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnBtnClicked__DelegateSignature(int32 Param_BtnId);
	void ExecuteUbergraph_PurchaseTypeTabItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GetBtnText(int32* TextId);
	void SetBtnSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PurchaseTypeTabItem_C">();
	}
	static class UPurchaseTypeTabItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseTypeTabItem_C>();
	}
};
static_assert(alignof(UPurchaseTypeTabItem_C) == 0x000008, "Wrong alignment on UPurchaseTypeTabItem_C");
static_assert(sizeof(UPurchaseTypeTabItem_C) == 0x0007A8, "Wrong size on UPurchaseTypeTabItem_C");
static_assert(offsetof(UPurchaseTypeTabItem_C, UberGraphFrame) == 0x000278, "Member 'UPurchaseTypeTabItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, AnimSelect) == 0x000280, "Member 'UPurchaseTypeTabItem_C::AnimSelect' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, Btn1) == 0x000288, "Member 'UPurchaseTypeTabItem_C::Btn1' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, Txt1) == 0x000290, "Member 'UPurchaseTypeTabItem_C::Txt1' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, BtnId) == 0x000298, "Member 'UPurchaseTypeTabItem_C::BtnId' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, OnBtnClicked) == 0x0002A0, "Member 'UPurchaseTypeTabItem_C::OnBtnClicked' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, BtnOn_Style) == 0x0002B0, "Member 'UPurchaseTypeTabItem_C::BtnOn_Style' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, IsSelected) == 0x000528, "Member 'UPurchaseTypeTabItem_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeTabItem_C, BtnOff_Style) == 0x000530, "Member 'UPurchaseTypeTabItem_C::BtnOff_Style' has a wrong offset!");

}

