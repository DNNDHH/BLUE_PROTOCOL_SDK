#pragma once

 

// Package: DeleteDialogFirst

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DeleteDialogFirst.DeleteDialogFirst_C
// 0x0038 (0x02B0 - 0x0278)
class UDeleteDialogFirst_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnDelete;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtDelete;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEnd__DelegateSignature(bool DELETE);
	void ExecuteUbergraph_DeleteDialogFirst(int32 EntryPoint);
	void BndEvt__DeleteDialogFirst_CmnClose01_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature();
	void Destruct();
	void CustomEvent_0();
	void Construct();
	void BndEvt__BtnDelete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnDelete_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DeleteDialogFirst_C">();
	}
	static class UDeleteDialogFirst_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeleteDialogFirst_C>();
	}
};
static_assert(alignof(UDeleteDialogFirst_C) == 0x000008, "Wrong alignment on UDeleteDialogFirst_C");
static_assert(sizeof(UDeleteDialogFirst_C) == 0x0002B0, "Wrong size on UDeleteDialogFirst_C");
static_assert(offsetof(UDeleteDialogFirst_C, UberGraphFrame) == 0x000278, "Member 'UDeleteDialogFirst_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDeleteDialogFirst_C, BtnDelete) == 0x000280, "Member 'UDeleteDialogFirst_C::BtnDelete' has a wrong offset!");
static_assert(offsetof(UDeleteDialogFirst_C, CmnClose01) == 0x000288, "Member 'UDeleteDialogFirst_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UDeleteDialogFirst_C, TxtDelete) == 0x000290, "Member 'UDeleteDialogFirst_C::TxtDelete' has a wrong offset!");
static_assert(offsetof(UDeleteDialogFirst_C, UIBlocker) == 0x000298, "Member 'UDeleteDialogFirst_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UDeleteDialogFirst_C, OnEnd) == 0x0002A0, "Member 'UDeleteDialogFirst_C::OnEnd' has a wrong offset!");

}

