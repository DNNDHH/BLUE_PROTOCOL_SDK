#pragma once

 

// Package: SpecialViewSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpecialViewSelect.SpecialViewSelect_C
// 0x0180 (0x03F8 - 0x0278)
class USpecialViewSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Cansel;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnClose;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ItemList;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnCansel;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnDecide;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           Target;                                            // 0x02D0(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x03E8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClose__DelegateSignature();
	void OnSelected__DelegateSignature(const struct FOwnItemInfo& OnSelect);
	void ExecuteUbergraph_SpecialViewSelect(int32 EntryPoint);
	void BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__SpecialViewSelect_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void InitializeList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpecialViewSelect_C">();
	}
	static class USpecialViewSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialViewSelect_C>();
	}
};
static_assert(alignof(USpecialViewSelect_C) == 0x000008, "Wrong alignment on USpecialViewSelect_C");
static_assert(sizeof(USpecialViewSelect_C) == 0x0003F8, "Wrong size on USpecialViewSelect_C");
static_assert(offsetof(USpecialViewSelect_C, UberGraphFrame) == 0x000278, "Member 'USpecialViewSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, Btn_Cansel) == 0x000280, "Member 'USpecialViewSelect_C::Btn_Cansel' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, Btn_Decide) == 0x000288, "Member 'USpecialViewSelect_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, BtnClose) == 0x000290, "Member 'USpecialViewSelect_C::BtnClose' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, ItemList) == 0x000298, "Member 'USpecialViewSelect_C::ItemList' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, Txt_BtnCansel) == 0x0002A0, "Member 'USpecialViewSelect_C::Txt_BtnCansel' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, Txt_BtnDecide) == 0x0002A8, "Member 'USpecialViewSelect_C::Txt_BtnDecide' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, OnClose) == 0x0002B0, "Member 'USpecialViewSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, OnSelected) == 0x0002C0, "Member 'USpecialViewSelect_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, Target) == 0x0002D0, "Member 'USpecialViewSelect_C::Target' has a wrong offset!");
static_assert(offsetof(USpecialViewSelect_C, Materials) == 0x0003E8, "Member 'USpecialViewSelect_C::Materials' has a wrong offset!");

}

