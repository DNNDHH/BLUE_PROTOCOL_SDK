#pragma once

 

// Package: Fang_expedition_MapWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_MapWindow.Fang_expedition_MapWindow_C
// 0x0098 (0x0310 - 0x0278)
class UFang_expedition_MapWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                DebugButton1;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_MapIcon_C*             DummyIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_FieldMap_C*            Fang_expedition_FieldMap;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconPanel;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MapNameText;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Name_Base;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFang_expedition_MapIcon_C*>     MapIconList;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnMapIconClick;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          GridLineView;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6065[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMapIconGroupClick;                               // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBFang_expeditionIconData>     TempIconDataList;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFang_expeditionAreaIconTooltip_C*> TooltipList;                                       // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnMapIconClick__DelegateSignature(const class FString& ID);
	void OnMapIconGroupClick__DelegateSignature(const struct FSBFang_expeditionIconData& IconData);
	void ExecuteUbergraph_Fang_expedition_MapWindow(int32 EntryPoint);
	void IconGroupClick(int32 Param_Index);
	void BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void IconClickWork(const class FString& ID);
	void Construct();
	void SetMapId(const class FString& MapId);
	void SetExpeditionData(const class FString& Field, struct FSBFang_expeditionData& ExpeditionData);
	void ClearIcon();
	void SetIconPositionData(class UCanvasPanelSlot* CanvasSlot, const struct FVector2D& Position);
	void SetCloudPosition(const class FString& TraverseName, class UCanvasPanelSlot* CanvasSlot);
	void UpdateMapIconNewMark(const class FString& InId);

	void OnPaint(struct FPaintContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_MapWindow_C">();
	}
	static class UFang_expedition_MapWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_MapWindow_C>();
	}
};
static_assert(alignof(UFang_expedition_MapWindow_C) == 0x000008, "Wrong alignment on UFang_expedition_MapWindow_C");
static_assert(sizeof(UFang_expedition_MapWindow_C) == 0x000310, "Wrong size on UFang_expedition_MapWindow_C");
static_assert(offsetof(UFang_expedition_MapWindow_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_MapWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, BG) == 0x000280, "Member 'UFang_expedition_MapWindow_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, DebugButton1) == 0x000288, "Member 'UFang_expedition_MapWindow_C::DebugButton1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, DummyIcon) == 0x000290, "Member 'UFang_expedition_MapWindow_C::DummyIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, Fang_expedition_FieldMap) == 0x000298, "Member 'UFang_expedition_MapWindow_C::Fang_expedition_FieldMap' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, IconPanel) == 0x0002A0, "Member 'UFang_expedition_MapWindow_C::IconPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, MapNameText) == 0x0002A8, "Member 'UFang_expedition_MapWindow_C::MapNameText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, Name_Base) == 0x0002B0, "Member 'UFang_expedition_MapWindow_C::Name_Base' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, MapIconList) == 0x0002B8, "Member 'UFang_expedition_MapWindow_C::MapIconList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, OnMapIconClick) == 0x0002C8, "Member 'UFang_expedition_MapWindow_C::OnMapIconClick' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, GridLineView) == 0x0002D8, "Member 'UFang_expedition_MapWindow_C::GridLineView' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, OnMapIconGroupClick) == 0x0002E0, "Member 'UFang_expedition_MapWindow_C::OnMapIconGroupClick' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, TempIconDataList) == 0x0002F0, "Member 'UFang_expedition_MapWindow_C::TempIconDataList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapWindow_C, TooltipList) == 0x000300, "Member 'UFang_expedition_MapWindow_C::TooltipList' has a wrong offset!");

}

