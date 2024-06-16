#pragma once

 

// Package: OptionSubButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionSubButton.OptionSubButton_C
// 0x02E0 (0x0590 - 0x02B0)
class UOptionSubButton_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnHovered;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnNormal;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnPressed;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ButtonTextLabel;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ButtonId;                                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_89C8[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           InitStyle;                                         // 0x02F8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text;                                              // 0x0570(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bFocus;                                            // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetBtnImage(class UImage* BtnType);
	void SetEnable(bool IsEnable);
	void Set_Menu_Focus(bool InFocus);
	void Construct();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_OptionSubButton(int32 EntryPoint);
	void OnClick__DelegateSignature(int32 Param_ButtonId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionSubButton_C">();
	}
	static class UOptionSubButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionSubButton_C>();
	}
};
static_assert(alignof(UOptionSubButton_C) == 0x000008, "Wrong alignment on UOptionSubButton_C");
static_assert(sizeof(UOptionSubButton_C) == 0x000590, "Wrong size on UOptionSubButton_C");
static_assert(offsetof(UOptionSubButton_C, UberGraphFrame) == 0x0002B0, "Member 'UOptionSubButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, BtnHovered) == 0x0002B8, "Member 'UOptionSubButton_C::BtnHovered' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, BtnNormal) == 0x0002C0, "Member 'UOptionSubButton_C::BtnNormal' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, BtnPressed) == 0x0002C8, "Member 'UOptionSubButton_C::BtnPressed' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, Button1) == 0x0002D0, "Member 'UOptionSubButton_C::Button1' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, ButtonTextLabel) == 0x0002D8, "Member 'UOptionSubButton_C::ButtonTextLabel' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, OnClick) == 0x0002E0, "Member 'UOptionSubButton_C::OnClick' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, ButtonId) == 0x0002F0, "Member 'UOptionSubButton_C::ButtonId' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, InitStyle) == 0x0002F8, "Member 'UOptionSubButton_C::InitStyle' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, Text) == 0x000570, "Member 'UOptionSubButton_C::Text' has a wrong offset!");
static_assert(offsetof(UOptionSubButton_C, bFocus) == 0x000588, "Member 'UOptionSubButton_C::bFocus' has a wrong offset!");

}

