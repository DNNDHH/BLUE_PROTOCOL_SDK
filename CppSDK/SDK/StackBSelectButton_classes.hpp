#pragma once

 

// Package: StackBSelectButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBSelectButton.StackBSelectButton_C
// 0x0070 (0x02E8 - 0x0278)
class UStackBSelectButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonCmn08_C*                       Btn_Select;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Battle;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Enhance;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Mount;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EntryName;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Images;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Battle;                                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Enhance;                                           // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Mount;                                             // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6E89[0x5];                                     // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMouseOver;                                       // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMouseExit;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelect__DelegateSignature();
	void OnMouseOver__DelegateSignature();
	void OnMouseExit__DelegateSignature();
	void ExecuteUbergraph_StackBSelectButton(int32 EntryPoint);
	void BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateShows();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBSelectButton_C">();
	}
	static class UStackBSelectButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBSelectButton_C>();
	}
};
static_assert(alignof(UStackBSelectButton_C) == 0x000008, "Wrong alignment on UStackBSelectButton_C");
static_assert(sizeof(UStackBSelectButton_C) == 0x0002E8, "Wrong size on UStackBSelectButton_C");
static_assert(offsetof(UStackBSelectButton_C, UberGraphFrame) == 0x000278, "Member 'UStackBSelectButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Btn_Select) == 0x000280, "Member 'UStackBSelectButton_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Img_Battle) == 0x000288, "Member 'UStackBSelectButton_C::Img_Battle' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Img_Enhance) == 0x000290, "Member 'UStackBSelectButton_C::Img_Enhance' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Img_Mount) == 0x000298, "Member 'UStackBSelectButton_C::Img_Mount' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Txt_EntryName) == 0x0002A0, "Member 'UStackBSelectButton_C::Txt_EntryName' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, WS_Images) == 0x0002A8, "Member 'UStackBSelectButton_C::WS_Images' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Battle) == 0x0002B0, "Member 'UStackBSelectButton_C::Battle' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Enhance) == 0x0002B1, "Member 'UStackBSelectButton_C::Enhance' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, Mount) == 0x0002B2, "Member 'UStackBSelectButton_C::Mount' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, OnSelect) == 0x0002B8, "Member 'UStackBSelectButton_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, OnMouseOver) == 0x0002C8, "Member 'UStackBSelectButton_C::OnMouseOver' has a wrong offset!");
static_assert(offsetof(UStackBSelectButton_C, OnMouseExit) == 0x0002D8, "Member 'UStackBSelectButton_C::OnMouseExit' has a wrong offset!");

}

