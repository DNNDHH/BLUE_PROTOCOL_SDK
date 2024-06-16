#pragma once

 

// Package: ImagineAbilityView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineAbilityView.ImagineAbilityView_C
// 0x0180 (0x03F8 - 0x0278)
class UImagineAbilityView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UListView*                              AbilityList;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_Close2;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Select;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_107;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnSelect;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Target;                                            // 0x02B0(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x03C8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelect__DelegateSignature(const struct FOwnItemInfo& Param_Target);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_ImagineAbilityView(int32 EntryPoint);
	void BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__ImagineAbilityView_Btn_Close2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ImagineAbilityView_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature();
	void BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void Close();
	void BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void GenerateList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineAbilityView_C">();
	}
	static class UImagineAbilityView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineAbilityView_C>();
	}
};
static_assert(alignof(UImagineAbilityView_C) == 0x000008, "Wrong alignment on UImagineAbilityView_C");
static_assert(sizeof(UImagineAbilityView_C) == 0x0003F8, "Wrong size on UImagineAbilityView_C");
static_assert(offsetof(UImagineAbilityView_C, UberGraphFrame) == 0x000278, "Member 'UImagineAbilityView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, AbilityList) == 0x000280, "Member 'UImagineAbilityView_C::AbilityList' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, Btn_Close2) == 0x000288, "Member 'UImagineAbilityView_C::Btn_Close2' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, Btn_Select) == 0x000290, "Member 'UImagineAbilityView_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, CmnClose02) == 0x000298, "Member 'UImagineAbilityView_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, Image_107) == 0x0002A0, "Member 'UImagineAbilityView_C::Image_107' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, Txt_BtnSelect) == 0x0002A8, "Member 'UImagineAbilityView_C::Txt_BtnSelect' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, Target) == 0x0002B0, "Member 'UImagineAbilityView_C::Target' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, Materials) == 0x0003C8, "Member 'UImagineAbilityView_C::Materials' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, OnSelect) == 0x0003D8, "Member 'UImagineAbilityView_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UImagineAbilityView_C, OnClose) == 0x0003E8, "Member 'UImagineAbilityView_C::OnClose' has a wrong offset!");

}

