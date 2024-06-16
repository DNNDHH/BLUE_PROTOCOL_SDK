#pragma once

 

// Package: MapWidget_RegionIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_RegionIcon.MapWidget_RegionIcon_C
// 0x0048 (0x02C0 - 0x0278)
class UMapWidget_RegionIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Button_Region;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TooltipHit;                                        // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_IconTooltip4_C*              ToolTip;                                           // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 RegionMapId;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void OnPressed__DelegateSignature(const class FString& InRegionMapId);
	void ExecuteUbergraph_MapWidget_RegionIcon(int32 EntryPoint);
	void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	class UWidget* GetToolTipWidget_0();
	void SetRegion(const class FString& InRegionMapId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_RegionIcon_C">();
	}
	static class UMapWidget_RegionIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_RegionIcon_C>();
	}
};
static_assert(alignof(UMapWidget_RegionIcon_C) == 0x000008, "Wrong alignment on UMapWidget_RegionIcon_C");
static_assert(sizeof(UMapWidget_RegionIcon_C) == 0x0002C0, "Wrong size on UMapWidget_RegionIcon_C");
static_assert(offsetof(UMapWidget_RegionIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_RegionIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_RegionIcon_C, Button_Region) == 0x000280, "Member 'UMapWidget_RegionIcon_C::Button_Region' has a wrong offset!");
static_assert(offsetof(UMapWidget_RegionIcon_C, CanvasPanel_0) == 0x000288, "Member 'UMapWidget_RegionIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_RegionIcon_C, TooltipHit) == 0x000290, "Member 'UMapWidget_RegionIcon_C::TooltipHit' has a wrong offset!");
static_assert(offsetof(UMapWidget_RegionIcon_C, ToolTip) == 0x000298, "Member 'UMapWidget_RegionIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMapWidget_RegionIcon_C, OnPressed) == 0x0002A0, "Member 'UMapWidget_RegionIcon_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UMapWidget_RegionIcon_C, RegionMapId) == 0x0002B0, "Member 'UMapWidget_RegionIcon_C::RegionMapId' has a wrong offset!");

}

