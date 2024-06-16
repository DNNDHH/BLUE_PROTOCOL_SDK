#pragma once

 

// Package: BP_RsDialog_ErrorCode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C
// 0x0028 (0x02A0 - 0x0278)
class UBP_RsDialog_ErrorCode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn27_C*                            Btn_Check;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message_1;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_ErrorCode(int32 EntryPoint);
	void BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetText_ErrorCode(int32 ErrorCode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_ErrorCode_C">();
	}
	static class UBP_RsDialog_ErrorCode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_ErrorCode_C>();
	}
};
static_assert(alignof(UBP_RsDialog_ErrorCode_C) == 0x000008, "Wrong alignment on UBP_RsDialog_ErrorCode_C");
static_assert(sizeof(UBP_RsDialog_ErrorCode_C) == 0x0002A0, "Wrong size on UBP_RsDialog_ErrorCode_C");
static_assert(offsetof(UBP_RsDialog_ErrorCode_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_ErrorCode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ErrorCode_C, Btn_Check) == 0x000280, "Member 'UBP_RsDialog_ErrorCode_C::Btn_Check' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ErrorCode_C, Txt_Message_1) == 0x000288, "Member 'UBP_RsDialog_ErrorCode_C::Txt_Message_1' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ErrorCode_C, OnButtonClicked) == 0x000290, "Member 'UBP_RsDialog_ErrorCode_C::OnButtonClicked' has a wrong offset!");

}

