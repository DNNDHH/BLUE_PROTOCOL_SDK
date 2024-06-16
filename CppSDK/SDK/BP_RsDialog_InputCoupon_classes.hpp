#pragma once

 

// Package: BP_RsDialog_InputCoupon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C
// 0x0090 (0x0308 - 0x0278)
class UBP_RsDialog_InputCoupon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg_Input;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     Box_Input;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductTitle_C*            BP_ProductTitle;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_01;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_02;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCouponTitle_C*                         CouponTitle;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Base;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Caution;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Subject;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5566[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 InputCoupon;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUseCoupon;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void OnUseCoupon__DelegateSignature(const class FString& Code);
	void ExecuteUbergraph_BP_RsDialog_InputCoupon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Construct();
	void SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName);
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_InputCoupon_C">();
	}
	static class UBP_RsDialog_InputCoupon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_InputCoupon_C>();
	}
};
static_assert(alignof(UBP_RsDialog_InputCoupon_C) == 0x000008, "Wrong alignment on UBP_RsDialog_InputCoupon_C");
static_assert(sizeof(UBP_RsDialog_InputCoupon_C) == 0x000308, "Wrong size on UBP_RsDialog_InputCoupon_C");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_InputCoupon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Bg_Input) == 0x000280, "Member 'UBP_RsDialog_InputCoupon_C::Bg_Input' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Box_Input) == 0x000288, "Member 'UBP_RsDialog_InputCoupon_C::Box_Input' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, BP_ProductTitle) == 0x000290, "Member 'UBP_RsDialog_InputCoupon_C::BP_ProductTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Btn_01) == 0x000298, "Member 'UBP_RsDialog_InputCoupon_C::Btn_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Btn_02) == 0x0002A0, "Member 'UBP_RsDialog_InputCoupon_C::Btn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, CouponTitle) == 0x0002A8, "Member 'UBP_RsDialog_InputCoupon_C::CouponTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Txt_Base) == 0x0002B0, "Member 'UBP_RsDialog_InputCoupon_C::Txt_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Txt_Caution) == 0x0002B8, "Member 'UBP_RsDialog_InputCoupon_C::Txt_Caution' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, Txt_Subject) == 0x0002C0, "Member 'UBP_RsDialog_InputCoupon_C::Txt_Subject' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, UIBlocker) == 0x0002C8, "Member 'UBP_RsDialog_InputCoupon_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, CurrentShopType) == 0x0002D0, "Member 'UBP_RsDialog_InputCoupon_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, OnButtonClicked) == 0x0002D8, "Member 'UBP_RsDialog_InputCoupon_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, InputCoupon) == 0x0002E8, "Member 'UBP_RsDialog_InputCoupon_C::InputCoupon' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_InputCoupon_C, OnUseCoupon) == 0x0002F8, "Member 'UBP_RsDialog_InputCoupon_C::OnUseCoupon' has a wrong offset!");

}

