#pragma once

 

// Package: MapEditWindowPin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapEditWindowPin.MapEditWindowPin_C
// 0x0038 (0x02B0 - 0x0278)
class UMapEditWindowPin_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          PinCheckBoxOFF;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          PinCheckBoxON;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitle;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPinVisible;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Pin_Checked;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FE5[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         In_Text_Id;                                        // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnPinVisible__DelegateSignature(bool IsOn);
	void ExecuteUbergraph_MapEditWindowPin(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetTitle(int32 InTextID);
	void Set_Pin_Visible(bool PinChecked);
	void Set_Pin_Visible_ON(bool IsOn);
	void Set_Pin_Visible_OFF(bool IsOFF);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEditWindowPin_C">();
	}
	static class UMapEditWindowPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapEditWindowPin_C>();
	}
};
static_assert(alignof(UMapEditWindowPin_C) == 0x000008, "Wrong alignment on UMapEditWindowPin_C");
static_assert(sizeof(UMapEditWindowPin_C) == 0x0002B0, "Wrong size on UMapEditWindowPin_C");
static_assert(offsetof(UMapEditWindowPin_C, UberGraphFrame) == 0x000278, "Member 'UMapEditWindowPin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapEditWindowPin_C, PinCheckBoxOFF) == 0x000280, "Member 'UMapEditWindowPin_C::PinCheckBoxOFF' has a wrong offset!");
static_assert(offsetof(UMapEditWindowPin_C, PinCheckBoxON) == 0x000288, "Member 'UMapEditWindowPin_C::PinCheckBoxON' has a wrong offset!");
static_assert(offsetof(UMapEditWindowPin_C, TextTitle) == 0x000290, "Member 'UMapEditWindowPin_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UMapEditWindowPin_C, OnPinVisible) == 0x000298, "Member 'UMapEditWindowPin_C::OnPinVisible' has a wrong offset!");
static_assert(offsetof(UMapEditWindowPin_C, Pin_Checked) == 0x0002A8, "Member 'UMapEditWindowPin_C::Pin_Checked' has a wrong offset!");
static_assert(offsetof(UMapEditWindowPin_C, In_Text_Id) == 0x0002AC, "Member 'UMapEditWindowPin_C::In_Text_Id' has a wrong offset!");

}

