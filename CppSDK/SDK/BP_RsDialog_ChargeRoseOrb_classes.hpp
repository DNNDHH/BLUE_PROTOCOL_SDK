#pragma once

 

// Package: BP_RsDialog_ChargeRoseOrb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C
// 0x0030 (0x02A8 - 0x0278)
class UBP_RsDialog_ChargeRoseOrb_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn27_C*                            Btn_01;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_02;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb(int32 EntryPoint);
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_ChargeRoseOrb_C">();
	}
	static class UBP_RsDialog_ChargeRoseOrb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_ChargeRoseOrb_C>();
	}
};
static_assert(alignof(UBP_RsDialog_ChargeRoseOrb_C) == 0x000008, "Wrong alignment on UBP_RsDialog_ChargeRoseOrb_C");
static_assert(sizeof(UBP_RsDialog_ChargeRoseOrb_C) == 0x0002A8, "Wrong size on UBP_RsDialog_ChargeRoseOrb_C");
static_assert(offsetof(UBP_RsDialog_ChargeRoseOrb_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_ChargeRoseOrb_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ChargeRoseOrb_C, Btn_01) == 0x000280, "Member 'UBP_RsDialog_ChargeRoseOrb_C::Btn_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ChargeRoseOrb_C, Btn_02) == 0x000288, "Member 'UBP_RsDialog_ChargeRoseOrb_C::Btn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ChargeRoseOrb_C, Txt_Message) == 0x000290, "Member 'UBP_RsDialog_ChargeRoseOrb_C::Txt_Message' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ChargeRoseOrb_C, OnButtonClicked) == 0x000298, "Member 'UBP_RsDialog_ChargeRoseOrb_C::OnButtonClicked' has a wrong offset!");

}

