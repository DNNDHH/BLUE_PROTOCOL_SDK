#pragma once

 

// Package: MapWidget_PinEraserIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C
// 0x0020 (0x0298 - 0x0278)
class UMapWidget_PinEraserIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            SBButton_C_0;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressed__DelegateSignature(class UMapWidget_PinEraserIconBtn_C* InPressedIcon);
	void ExecuteUbergraph_MapWidget_PinEraserIconBtn(int32 EntryPoint);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature();
	void SetIconBtnEnable(bool IsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_PinEraserIconBtn_C">();
	}
	static class UMapWidget_PinEraserIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_PinEraserIconBtn_C>();
	}
};
static_assert(alignof(UMapWidget_PinEraserIconBtn_C) == 0x000008, "Wrong alignment on UMapWidget_PinEraserIconBtn_C");
static_assert(sizeof(UMapWidget_PinEraserIconBtn_C) == 0x000298, "Wrong size on UMapWidget_PinEraserIconBtn_C");
static_assert(offsetof(UMapWidget_PinEraserIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_PinEraserIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinEraserIconBtn_C, SBButton_C_0) == 0x000280, "Member 'UMapWidget_PinEraserIconBtn_C::SBButton_C_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinEraserIconBtn_C, OnPressed) == 0x000288, "Member 'UMapWidget_PinEraserIconBtn_C::OnPressed' has a wrong offset!");

}

