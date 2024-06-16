#pragma once

 

// Package: MapWidget_PlayerIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_PlayerIcon.MapWidget_PlayerIcon_C
// 0x0038 (0x02B0 - 0x0278)
class UMapWidget_PlayerIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPublicDungeon;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimScale;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TooltipHit;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              ToolTip;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MapWidget_PlayerIcon(int32 EntryPoint);
	void Construct();
	void SetCursorAngle(float InAngle);
	void GetCursorAngle(float* OutCursorAngle);
	void PlayPublicDungeonAnimation();
	void ShowTooltip(bool IsShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_PlayerIcon_C">();
	}
	static class UMapWidget_PlayerIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_PlayerIcon_C>();
	}
};
static_assert(alignof(UMapWidget_PlayerIcon_C) == 0x000008, "Wrong alignment on UMapWidget_PlayerIcon_C");
static_assert(sizeof(UMapWidget_PlayerIcon_C) == 0x0002B0, "Wrong size on UMapWidget_PlayerIcon_C");
static_assert(offsetof(UMapWidget_PlayerIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_PlayerIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_PlayerIcon_C, AnimPublicDungeon) == 0x000280, "Member 'UMapWidget_PlayerIcon_C::AnimPublicDungeon' has a wrong offset!");
static_assert(offsetof(UMapWidget_PlayerIcon_C, AnimScale) == 0x000288, "Member 'UMapWidget_PlayerIcon_C::AnimScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_PlayerIcon_C, CanvasPanel_0) == 0x000290, "Member 'UMapWidget_PlayerIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_PlayerIcon_C, Image_Icon) == 0x000298, "Member 'UMapWidget_PlayerIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UMapWidget_PlayerIcon_C, TooltipHit) == 0x0002A0, "Member 'UMapWidget_PlayerIcon_C::TooltipHit' has a wrong offset!");
static_assert(offsetof(UMapWidget_PlayerIcon_C, ToolTip) == 0x0002A8, "Member 'UMapWidget_PlayerIcon_C::ToolTip' has a wrong offset!");

}

