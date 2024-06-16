#pragma once

 

// Package: SelectorDialogBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectorDialogBtn.SelectorDialogBtn_C
// 0x0060 (0x02D8 - 0x0278)
class USelectorDialogBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        Check;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Off;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 On;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Selector;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Desc;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectNum;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_63E8[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 String;                                            // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Selected;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelected__DelegateSignature(class USelectorDialogBtn_C* Param_Selected, int32 Param_SelectNum);
	void ExecuteUbergraph_SelectorDialogBtn(int32 EntryPoint);
	void Set_UseCheck(bool bUse);
	void Construct();
	void BndEvt__Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetString(const class FString& Param_String);
	void BndEvt__Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetSelected(bool Param_Selected);
	void Set_Btn_Width(float BtnWidth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectorDialogBtn_C">();
	}
	static class USelectorDialogBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectorDialogBtn_C>();
	}
};
static_assert(alignof(USelectorDialogBtn_C) == 0x000008, "Wrong alignment on USelectorDialogBtn_C");
static_assert(sizeof(USelectorDialogBtn_C) == 0x0002D8, "Wrong size on USelectorDialogBtn_C");
static_assert(offsetof(USelectorDialogBtn_C, UberGraphFrame) == 0x000278, "Member 'USelectorDialogBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, Check) == 0x000280, "Member 'USelectorDialogBtn_C::Check' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, Off) == 0x000288, "Member 'USelectorDialogBtn_C::Off' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, On) == 0x000290, "Member 'USelectorDialogBtn_C::On' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, Selector) == 0x000298, "Member 'USelectorDialogBtn_C::Selector' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, Txt_Desc) == 0x0002A0, "Member 'USelectorDialogBtn_C::Txt_Desc' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, SelectNum) == 0x0002A8, "Member 'USelectorDialogBtn_C::SelectNum' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, String) == 0x0002B0, "Member 'USelectorDialogBtn_C::String' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, OnSelected) == 0x0002C0, "Member 'USelectorDialogBtn_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USelectorDialogBtn_C, Selected) == 0x0002D0, "Member 'USelectorDialogBtn_C::Selected' has a wrong offset!");

}

