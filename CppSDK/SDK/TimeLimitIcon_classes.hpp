#pragma once

 

// Package: TimeLimitIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TimeLimitIcon.TimeLimitIcon_C
// 0x0048 (0x02C0 - 0x0278)
class UTimeLimitIcon_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_46;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bEnableShowTooltip;                                // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6C4D[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_RemainTime_C*              ToolTip;                                           // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventTermId;                                       // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class UWidget* GetToolTipWidget_0();
	void SetTermId(const class FString& InEventTermId);
	void SetText(const class FText& Param_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeLimitIcon_C">();
	}
	static class UTimeLimitIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeLimitIcon_C>();
	}
};
static_assert(alignof(UTimeLimitIcon_C) == 0x000008, "Wrong alignment on UTimeLimitIcon_C");
static_assert(sizeof(UTimeLimitIcon_C) == 0x0002C0, "Wrong size on UTimeLimitIcon_C");
static_assert(offsetof(UTimeLimitIcon_C, CanvasPanel_0) == 0x000278, "Member 'UTimeLimitIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UTimeLimitIcon_C, Image_46) == 0x000280, "Member 'UTimeLimitIcon_C::Image_46' has a wrong offset!");
static_assert(offsetof(UTimeLimitIcon_C, bEnableShowTooltip) == 0x000288, "Member 'UTimeLimitIcon_C::bEnableShowTooltip' has a wrong offset!");
static_assert(offsetof(UTimeLimitIcon_C, ToolTip) == 0x000290, "Member 'UTimeLimitIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UTimeLimitIcon_C, EventTermId) == 0x000298, "Member 'UTimeLimitIcon_C::EventTermId' has a wrong offset!");
static_assert(offsetof(UTimeLimitIcon_C, Text) == 0x0002A8, "Member 'UTimeLimitIcon_C::Text' has a wrong offset!");

}

