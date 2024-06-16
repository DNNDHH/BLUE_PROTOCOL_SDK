#pragma once

 

// Package: SecondPasswordExpiredDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SecondPasswordExpiredDialog.SecondPasswordExpiredDialog_C
// 0x0040 (0x02B8 - 0x0278)
class USecondPasswordExpiredDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnToWeb;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_98;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtToWeb;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEnd__DelegateSignature();
	void ExecuteUbergraph_SecondPasswordExpiredDialog(int32 EntryPoint);
	void End();
	void BndEvt__SecondPasswordExpiredDialog_CmnClose01_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature();
	void BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SecondPasswordExpiredDialog_C">();
	}
	static class USecondPasswordExpiredDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USecondPasswordExpiredDialog_C>();
	}
};
static_assert(alignof(USecondPasswordExpiredDialog_C) == 0x000008, "Wrong alignment on USecondPasswordExpiredDialog_C");
static_assert(sizeof(USecondPasswordExpiredDialog_C) == 0x0002B8, "Wrong size on USecondPasswordExpiredDialog_C");
static_assert(offsetof(USecondPasswordExpiredDialog_C, UberGraphFrame) == 0x000278, "Member 'USecondPasswordExpiredDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USecondPasswordExpiredDialog_C, BtnToWeb) == 0x000280, "Member 'USecondPasswordExpiredDialog_C::BtnToWeb' has a wrong offset!");
static_assert(offsetof(USecondPasswordExpiredDialog_C, CmnClose01) == 0x000288, "Member 'USecondPasswordExpiredDialog_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(USecondPasswordExpiredDialog_C, Image_98) == 0x000290, "Member 'USecondPasswordExpiredDialog_C::Image_98' has a wrong offset!");
static_assert(offsetof(USecondPasswordExpiredDialog_C, TxtToWeb) == 0x000298, "Member 'USecondPasswordExpiredDialog_C::TxtToWeb' has a wrong offset!");
static_assert(offsetof(USecondPasswordExpiredDialog_C, UIBlocker) == 0x0002A0, "Member 'USecondPasswordExpiredDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(USecondPasswordExpiredDialog_C, OnEnd) == 0x0002A8, "Member 'USecondPasswordExpiredDialog_C::OnEnd' has a wrong offset!");

}

