#pragma once

 

// Package: MapWidget_TimeSymbolIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C
// 0x0090 (0x0308 - 0x0278)
class UMapWidget_TimeSymbolIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IconAnimation;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TooltipHit;                                        // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsToolTipEnable;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_1269[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              ToolTip;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventTermId;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMapWidget_TimeTooltip_C*               TimeTooltip;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              EndTime;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationPlay;                                     // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_126A[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpenTimeEnd;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_MapWidget_TimeSymbolIcon_C;                  // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_126B[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TimerStop;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnOpenTimeEnd__DelegateSignature(int32 Param_Index, class UMapWidget_TimeSymbolIcon_C* Widget);
	void ExecuteUbergraph_MapWidget_TimeSymbolIcon(int32 EntryPoint);
	void TimerEvent_IconCheck();
	void Destruct();
	void Construct();
	class UWidget* GetToolTipWidget_0();
	void SetTooltipEnable(bool IsEnable);
	void SetTextToTooltip(const class FText& InText);
	void SetIconTexture(class UTexture2D* InTexture);
	void SetIconTextureBySymbolIconType(EMapSymbolIconType InSymbolIconType);
	void GetTooltipText(class FString* OutTooltipText);
	void SetTimeData(const class FString& TermId);
	void IconStateCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_TimeSymbolIcon_C">();
	}
	static class UMapWidget_TimeSymbolIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_TimeSymbolIcon_C>();
	}
};
static_assert(alignof(UMapWidget_TimeSymbolIcon_C) == 0x000008, "Wrong alignment on UMapWidget_TimeSymbolIcon_C");
static_assert(sizeof(UMapWidget_TimeSymbolIcon_C) == 0x000308, "Wrong size on UMapWidget_TimeSymbolIcon_C");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_TimeSymbolIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, IconAnimation) == 0x000280, "Member 'UMapWidget_TimeSymbolIcon_C::IconAnimation' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, Btn) == 0x000288, "Member 'UMapWidget_TimeSymbolIcon_C::Btn' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, CanvasPanel_0) == 0x000290, "Member 'UMapWidget_TimeSymbolIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, Image_Icon) == 0x000298, "Member 'UMapWidget_TimeSymbolIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, TooltipHit) == 0x0002A0, "Member 'UMapWidget_TimeSymbolIcon_C::TooltipHit' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, IsToolTipEnable) == 0x0002A8, "Member 'UMapWidget_TimeSymbolIcon_C::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, ToolTip) == 0x0002B0, "Member 'UMapWidget_TimeSymbolIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, EventTermId) == 0x0002B8, "Member 'UMapWidget_TimeSymbolIcon_C::EventTermId' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, TimeTooltip) == 0x0002C8, "Member 'UMapWidget_TimeSymbolIcon_C::TimeTooltip' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, EndTime) == 0x0002D0, "Member 'UMapWidget_TimeSymbolIcon_C::EndTime' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, AnimationPlay) == 0x0002D8, "Member 'UMapWidget_TimeSymbolIcon_C::AnimationPlay' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, OnOpenTimeEnd) == 0x0002E0, "Member 'UMapWidget_TimeSymbolIcon_C::OnOpenTimeEnd' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, Index_MapWidget_TimeSymbolIcon_C) == 0x0002F0, "Member 'UMapWidget_TimeSymbolIcon_C::Index_MapWidget_TimeSymbolIcon_C' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, TimerHandle) == 0x0002F8, "Member 'UMapWidget_TimeSymbolIcon_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeSymbolIcon_C, TimerStop) == 0x000300, "Member 'UMapWidget_TimeSymbolIcon_C::TimerStop' has a wrong offset!");

}

