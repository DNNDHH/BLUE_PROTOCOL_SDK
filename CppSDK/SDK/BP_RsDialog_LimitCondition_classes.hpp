#pragma once

 

// Package: BP_RsDialog_LimitCondition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C
// 0x0050 (0x02C8 - 0x0278)
class UBP_RsDialog_LimitCondition_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           Box_ConditionList;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductTitle_C*            BP_ProductTitle;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_02;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_Check;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Base;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Base_1;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC1[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_LimitCondition(int32 EntryPoint);
	void ResetText();
	void Construct();
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void AddItem_LimitCondition(bool IsAchieve, const class FString& Text);
	void SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName);
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SetTitle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_LimitCondition_C">();
	}
	static class UBP_RsDialog_LimitCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_LimitCondition_C>();
	}
};
static_assert(alignof(UBP_RsDialog_LimitCondition_C) == 0x000008, "Wrong alignment on UBP_RsDialog_LimitCondition_C");
static_assert(sizeof(UBP_RsDialog_LimitCondition_C) == 0x0002C8, "Wrong size on UBP_RsDialog_LimitCondition_C");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_LimitCondition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, Box_ConditionList) == 0x000280, "Member 'UBP_RsDialog_LimitCondition_C::Box_ConditionList' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, BP_ProductTitle) == 0x000288, "Member 'UBP_RsDialog_LimitCondition_C::BP_ProductTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, Btn_02) == 0x000290, "Member 'UBP_RsDialog_LimitCondition_C::Btn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, Btn_Check) == 0x000298, "Member 'UBP_RsDialog_LimitCondition_C::Btn_Check' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, Txt_Base) == 0x0002A0, "Member 'UBP_RsDialog_LimitCondition_C::Txt_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, Txt_Base_1) == 0x0002A8, "Member 'UBP_RsDialog_LimitCondition_C::Txt_Base_1' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, CurrentShopType) == 0x0002B0, "Member 'UBP_RsDialog_LimitCondition_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_C, OnButtonClicked) == 0x0002B8, "Member 'UBP_RsDialog_LimitCondition_C::OnButtonClicked' has a wrong offset!");

}

