#pragma once

 

// Package: MultipleCraftWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MultipleCraftWidget.MultipleCraftWidget_C
// 0x0050 (0x02C8 - 0x0278)
class UMultipleCraftWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Minus;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Plus;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_468;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Num;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Number;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNumberInputDialog_C*                   Dialog;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Now;                                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67B9[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCreateNumChanged;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCreateNumChanged__DelegateSignature(int32 Param_Now);
	void ExecuteUbergraph_MultipleCraftWidget(int32 EntryPoint);
	void BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Reset();
	void Construct();
	void SetValue(int32 Param_SetValue, int32* SetedValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultipleCraftWidget_C">();
	}
	static class UMultipleCraftWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultipleCraftWidget_C>();
	}
};
static_assert(alignof(UMultipleCraftWidget_C) == 0x000008, "Wrong alignment on UMultipleCraftWidget_C");
static_assert(sizeof(UMultipleCraftWidget_C) == 0x0002C8, "Wrong size on UMultipleCraftWidget_C");
static_assert(offsetof(UMultipleCraftWidget_C, UberGraphFrame) == 0x000278, "Member 'UMultipleCraftWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Btn_Minus) == 0x000280, "Member 'UMultipleCraftWidget_C::Btn_Minus' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Btn_Plus) == 0x000288, "Member 'UMultipleCraftWidget_C::Btn_Plus' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Image_468) == 0x000290, "Member 'UMultipleCraftWidget_C::Image_468' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Txt_Num) == 0x000298, "Member 'UMultipleCraftWidget_C::Txt_Num' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Txt_Number) == 0x0002A0, "Member 'UMultipleCraftWidget_C::Txt_Number' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Dialog) == 0x0002A8, "Member 'UMultipleCraftWidget_C::Dialog' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, Now) == 0x0002B0, "Member 'UMultipleCraftWidget_C::Now' has a wrong offset!");
static_assert(offsetof(UMultipleCraftWidget_C, OnCreateNumChanged) == 0x0002B8, "Member 'UMultipleCraftWidget_C::OnCreateNumChanged' has a wrong offset!");

}

