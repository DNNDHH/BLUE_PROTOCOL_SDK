#pragma once

 

// Package: P006HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P006HUD.P006HUD_C
// 0x0050 (0x02D0 - 0x0280)
class UP006HUD_C final : public USBClassHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeSize;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelNum;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     OwnerPlayerCharacter;                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       GaugeSlot;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              GaugeSlotSizeXY;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P006HUD(int32 EntryPoint);
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnUpdateGauge();
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnTick();
	void OnSetEditMode(bool InIsEdit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P006HUD_C">();
	}
	static class UP006HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP006HUD_C>();
	}
};
static_assert(alignof(UP006HUD_C) == 0x000008, "Wrong alignment on UP006HUD_C");
static_assert(sizeof(UP006HUD_C) == 0x0002D0, "Wrong size on UP006HUD_C");
static_assert(offsetof(UP006HUD_C, UberGraphFrame) == 0x000280, "Member 'UP006HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, AnimInOut) == 0x000288, "Member 'UP006HUD_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, CPRoot) == 0x000290, "Member 'UP006HUD_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, CPVisibleSetting) == 0x000298, "Member 'UP006HUD_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, HPGaugeSize) == 0x0002A0, "Member 'UP006HUD_C::HPGaugeSize' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, LevelNum) == 0x0002A8, "Member 'UP006HUD_C::LevelNum' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, WidgetSwitcher) == 0x0002B0, "Member 'UP006HUD_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, OwnerPlayerCharacter) == 0x0002B8, "Member 'UP006HUD_C::OwnerPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, GaugeSlot) == 0x0002C0, "Member 'UP006HUD_C::GaugeSlot' has a wrong offset!");
static_assert(offsetof(UP006HUD_C, GaugeSlotSizeXY) == 0x0002C8, "Member 'UP006HUD_C::GaugeSlotSizeXY' has a wrong offset!");

}

