#pragma once

 

// Package: BP_RsDialog_Caution

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_Caution.BP_RsDialog_Caution_C
// 0x0070 (0x02E8 - 0x0278)
class UBP_RsDialog_Caution_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn27_C*                            Btn_01;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_02;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_CautionText;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message1;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message2;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message3;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message4;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message5;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message6;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_Caution(int32 EntryPoint);
	void SetDialogInfo();
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SetShopType(ESBRmShopMenuType ShopType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_Caution_C">();
	}
	static class UBP_RsDialog_Caution_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_Caution_C>();
	}
};
static_assert(alignof(UBP_RsDialog_Caution_C) == 0x000008, "Wrong alignment on UBP_RsDialog_Caution_C");
static_assert(sizeof(UBP_RsDialog_Caution_C) == 0x0002E8, "Wrong size on UBP_RsDialog_Caution_C");
static_assert(offsetof(UBP_RsDialog_Caution_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_Caution_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Btn_01) == 0x000280, "Member 'UBP_RsDialog_Caution_C::Btn_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Btn_02) == 0x000288, "Member 'UBP_RsDialog_Caution_C::Btn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Switch_CautionText) == 0x000290, "Member 'UBP_RsDialog_Caution_C::Switch_CautionText' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Txt_Message1) == 0x000298, "Member 'UBP_RsDialog_Caution_C::Txt_Message1' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Txt_Message2) == 0x0002A0, "Member 'UBP_RsDialog_Caution_C::Txt_Message2' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Txt_Message3) == 0x0002A8, "Member 'UBP_RsDialog_Caution_C::Txt_Message3' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Txt_Message4) == 0x0002B0, "Member 'UBP_RsDialog_Caution_C::Txt_Message4' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Txt_Message5) == 0x0002B8, "Member 'UBP_RsDialog_Caution_C::Txt_Message5' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, Txt_Message6) == 0x0002C0, "Member 'UBP_RsDialog_Caution_C::Txt_Message6' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, UIBlocker) == 0x0002C8, "Member 'UBP_RsDialog_Caution_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, OnButtonClicked) == 0x0002D0, "Member 'UBP_RsDialog_Caution_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Caution_C, CurrentShopType) == 0x0002E0, "Member 'UBP_RsDialog_Caution_C::CurrentShopType' has a wrong offset!");

}

