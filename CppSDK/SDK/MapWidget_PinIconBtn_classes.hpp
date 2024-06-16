#pragma once

 

// Package: MapWidget_PinIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_PinIconBtn.MapWidget_PinIconBtn_C
// 0x0020 (0x0298 - 0x0278)
class UMapWidget_PinIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            SBButton_C_0;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressed__DelegateSignature(class UMapWidget_PinIconBtn_C* InPressedIcon);
	void ExecuteUbergraph_MapWidget_PinIconBtn(int32 EntryPoint);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature();
	void SetIconTextureByPinType(EMapPinType InPinType);
	void SetIconBtnEnable(bool IsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_PinIconBtn_C">();
	}
	static class UMapWidget_PinIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_PinIconBtn_C>();
	}
};
static_assert(alignof(UMapWidget_PinIconBtn_C) == 0x000008, "Wrong alignment on UMapWidget_PinIconBtn_C");
static_assert(sizeof(UMapWidget_PinIconBtn_C) == 0x000298, "Wrong size on UMapWidget_PinIconBtn_C");
static_assert(offsetof(UMapWidget_PinIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_PinIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinIconBtn_C, SBButton_C_0) == 0x000280, "Member 'UMapWidget_PinIconBtn_C::SBButton_C_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinIconBtn_C, OnPressed) == 0x000288, "Member 'UMapWidget_PinIconBtn_C::OnPressed' has a wrong offset!");

}

