#pragma once

 

// Package: P007HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P007HUD.P007HUD_C
// 0x0070 (0x02F0 - 0x0280)
class UP007HUD_C final : public USBClassHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ComboGaugeShakeAnim;                               // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ComboGaugeAnim;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ComboGaugeSwitcher;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DamageNum;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeSize;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     OwnerPlayerCharacter;                              // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       GaugeSlot;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              GaugeSlotSizeXY;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGaugeMax;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7311[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Back_ComboGaugeRate;                               // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P007HUD(int32 EntryPoint);
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnUpdateGauge();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnTick();
	void OnSetEditMode(bool InIsEdit);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P007HUD_C">();
	}
	static class UP007HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP007HUD_C>();
	}
};
static_assert(alignof(UP007HUD_C) == 0x000008, "Wrong alignment on UP007HUD_C");
static_assert(sizeof(UP007HUD_C) == 0x0002F0, "Wrong size on UP007HUD_C");
static_assert(offsetof(UP007HUD_C, UberGraphFrame) == 0x000280, "Member 'UP007HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, ComboGaugeShakeAnim) == 0x000288, "Member 'UP007HUD_C::ComboGaugeShakeAnim' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, ComboGaugeAnim) == 0x000290, "Member 'UP007HUD_C::ComboGaugeAnim' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, AnimInOut) == 0x000298, "Member 'UP007HUD_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, ComboGaugeSwitcher) == 0x0002A0, "Member 'UP007HUD_C::ComboGaugeSwitcher' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, CPRoot) == 0x0002A8, "Member 'UP007HUD_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, CPVisibleSetting) == 0x0002B0, "Member 'UP007HUD_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, DamageNum) == 0x0002B8, "Member 'UP007HUD_C::DamageNum' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, HPGaugeSize) == 0x0002C0, "Member 'UP007HUD_C::HPGaugeSize' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, WidgetSwitcher) == 0x0002C8, "Member 'UP007HUD_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, OwnerPlayerCharacter) == 0x0002D0, "Member 'UP007HUD_C::OwnerPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, GaugeSlot) == 0x0002D8, "Member 'UP007HUD_C::GaugeSlot' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, GaugeSlotSizeXY) == 0x0002E0, "Member 'UP007HUD_C::GaugeSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, bGaugeMax) == 0x0002E8, "Member 'UP007HUD_C::bGaugeMax' has a wrong offset!");
static_assert(offsetof(UP007HUD_C, Back_ComboGaugeRate) == 0x0002EC, "Member 'UP007HUD_C::Back_ComboGaugeRate' has a wrong offset!");

}

