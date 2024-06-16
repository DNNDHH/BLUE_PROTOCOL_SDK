#pragma once

 

// Package: DeleteDialogLast

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DeleteDialogLast.DeleteDialogLast_C
// 0x0048 (0x02C0 - 0x0278)
class UDeleteDialogLast_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnCancel;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnDelete;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtCancel;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtDelete;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEnd__DelegateSignature(bool DELETE);
	void ExecuteUbergraph_DeleteDialogLast(int32 EntryPoint);
	void BndEvt__DeleteDialogLast_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature();
	void CustomEvent_0();
	void Destruct();
	void Construct();
	void BndEvt__BtnDelete_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnDelete_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DeleteDialogLast_C">();
	}
	static class UDeleteDialogLast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeleteDialogLast_C>();
	}
};
static_assert(alignof(UDeleteDialogLast_C) == 0x000008, "Wrong alignment on UDeleteDialogLast_C");
static_assert(sizeof(UDeleteDialogLast_C) == 0x0002C0, "Wrong size on UDeleteDialogLast_C");
static_assert(offsetof(UDeleteDialogLast_C, UberGraphFrame) == 0x000278, "Member 'UDeleteDialogLast_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, BtnCancel) == 0x000280, "Member 'UDeleteDialogLast_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, BtnDelete) == 0x000288, "Member 'UDeleteDialogLast_C::BtnDelete' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, CmnClose01) == 0x000290, "Member 'UDeleteDialogLast_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, TxtCancel) == 0x000298, "Member 'UDeleteDialogLast_C::TxtCancel' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, TxtDelete) == 0x0002A0, "Member 'UDeleteDialogLast_C::TxtDelete' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, UIBlocker) == 0x0002A8, "Member 'UDeleteDialogLast_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UDeleteDialogLast_C, OnEnd) == 0x0002B0, "Member 'UDeleteDialogLast_C::OnEnd' has a wrong offset!");

}

