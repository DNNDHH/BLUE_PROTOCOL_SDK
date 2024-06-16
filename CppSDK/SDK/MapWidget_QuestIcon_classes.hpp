#pragma once

 

// Package: MapWidget_QuestIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_QuestIcon.MapWidget_QuestIcon_C
// 0x0098 (0x0310 - 0x0278)
class UMapWidget_QuestIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestIcon_C*                           QuestIcon;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TooltipHit;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         QuestID;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_71B8[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              Tooltip_1Line;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltip2_C*              Tooltip_2Line;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsToolTipEnable;                                   // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTooltip2Line;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71B9[0x6];                                     // 0x02CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TooltipString;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                            ToolTip;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressedQuestIcon;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 DbgTxt;                                            // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsAnmFinished;                                     // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAnmReverese;                                     // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnPressedQuestIcon__DelegateSignature(int32 InQuestId);
	void ExecuteUbergraph_MapWidget_QuestIcon(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetIcon(int32 InQuestIndex, bool IsClosed);
	class UWidget* GetToolTipWidget_0();
	void SetTooltipString(const class FString& InString);
	void SetTooltipToIcon(bool Param_IsTooltip2Line, const class FString& InToolTipText);
	void SetTooltipEnable(bool IsEnable);
	void GetTooltipString(class FString* OutTooltipString);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_QuestIcon_C">();
	}
	static class UMapWidget_QuestIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_QuestIcon_C>();
	}
};
static_assert(alignof(UMapWidget_QuestIcon_C) == 0x000008, "Wrong alignment on UMapWidget_QuestIcon_C");
static_assert(sizeof(UMapWidget_QuestIcon_C) == 0x000310, "Wrong size on UMapWidget_QuestIcon_C");
static_assert(offsetof(UMapWidget_QuestIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_QuestIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, AnimHovered) == 0x000280, "Member 'UMapWidget_QuestIcon_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, Btn) == 0x000288, "Member 'UMapWidget_QuestIcon_C::Btn' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, CanvasPanel_0) == 0x000290, "Member 'UMapWidget_QuestIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, QuestIcon) == 0x000298, "Member 'UMapWidget_QuestIcon_C::QuestIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, TextBlock) == 0x0002A0, "Member 'UMapWidget_QuestIcon_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, TooltipHit) == 0x0002A8, "Member 'UMapWidget_QuestIcon_C::TooltipHit' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, QuestID) == 0x0002B0, "Member 'UMapWidget_QuestIcon_C::QuestID' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, Tooltip_1Line) == 0x0002B8, "Member 'UMapWidget_QuestIcon_C::Tooltip_1Line' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, Tooltip_2Line) == 0x0002C0, "Member 'UMapWidget_QuestIcon_C::Tooltip_2Line' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, IsToolTipEnable) == 0x0002C8, "Member 'UMapWidget_QuestIcon_C::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, IsTooltip2Line) == 0x0002C9, "Member 'UMapWidget_QuestIcon_C::IsTooltip2Line' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, TooltipString) == 0x0002D0, "Member 'UMapWidget_QuestIcon_C::TooltipString' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, ToolTip) == 0x0002E0, "Member 'UMapWidget_QuestIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, OnPressedQuestIcon) == 0x0002E8, "Member 'UMapWidget_QuestIcon_C::OnPressedQuestIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, DbgTxt) == 0x0002F8, "Member 'UMapWidget_QuestIcon_C::DbgTxt' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, IsAnmFinished) == 0x000308, "Member 'UMapWidget_QuestIcon_C::IsAnmFinished' has a wrong offset!");
static_assert(offsetof(UMapWidget_QuestIcon_C, IsAnmReverese) == 0x000309, "Member 'UMapWidget_QuestIcon_C::IsAnmReverese' has a wrong offset!");

}

