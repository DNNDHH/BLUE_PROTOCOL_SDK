#pragma once

 

// Package: MapWidget_DividedZoneListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C
// 0x0250 (0x04C8 - 0x0278)
class UMapWidget_DividedZoneListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDividedZoneName;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 DividedZoneId;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateBrush                            Btn01NormalButtonStyleDefault;                     // 0x02B0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Btn01HoveredButtonStyleDefault;                    // 0x0338(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Btn01PressedButtonStyleDefault;                    // 0x03C0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSelected;                                        // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F7F[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            Btn01NormalTintDefault;                            // 0x0450(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            Btn01HoveredTintDefault;                           // 0x0478(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            Btn01PressedTintDefault;                           // 0x04A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClicked__DelegateSignature(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId);
	void ExecuteUbergraph_MapWidget_DividedZoneListItem(int32 EntryPoint);
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Setup(const class FString& InDividedZoneId);
	void SetIsEnable(bool InIsSelectable);
	void SetSelected(bool InIsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_DividedZoneListItem_C">();
	}
	static class UMapWidget_DividedZoneListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_DividedZoneListItem_C>();
	}
};
static_assert(alignof(UMapWidget_DividedZoneListItem_C) == 0x000008, "Wrong alignment on UMapWidget_DividedZoneListItem_C");
static_assert(sizeof(UMapWidget_DividedZoneListItem_C) == 0x0004C8, "Wrong size on UMapWidget_DividedZoneListItem_C");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_DividedZoneListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01) == 0x000280, "Member 'UMapWidget_DividedZoneListItem_C::Btn01' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, TxtDividedZoneName) == 0x000288, "Member 'UMapWidget_DividedZoneListItem_C::TxtDividedZoneName' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, DividedZoneId) == 0x000290, "Member 'UMapWidget_DividedZoneListItem_C::DividedZoneId' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, OnClicked) == 0x0002A0, "Member 'UMapWidget_DividedZoneListItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01NormalButtonStyleDefault) == 0x0002B0, "Member 'UMapWidget_DividedZoneListItem_C::Btn01NormalButtonStyleDefault' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01HoveredButtonStyleDefault) == 0x000338, "Member 'UMapWidget_DividedZoneListItem_C::Btn01HoveredButtonStyleDefault' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01PressedButtonStyleDefault) == 0x0003C0, "Member 'UMapWidget_DividedZoneListItem_C::Btn01PressedButtonStyleDefault' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, IsSelected) == 0x000448, "Member 'UMapWidget_DividedZoneListItem_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01NormalTintDefault) == 0x000450, "Member 'UMapWidget_DividedZoneListItem_C::Btn01NormalTintDefault' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01HoveredTintDefault) == 0x000478, "Member 'UMapWidget_DividedZoneListItem_C::Btn01HoveredTintDefault' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneListItem_C, Btn01PressedTintDefault) == 0x0004A0, "Member 'UMapWidget_DividedZoneListItem_C::Btn01PressedTintDefault' has a wrong offset!");

}

