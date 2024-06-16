#pragma once

 

// Package: P012HUDGlitter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P012HUDGlitter.P012HUDGlitter_C
// 0x0040 (0x02C0 - 0x0280)
class UP012HUDGlitter_C final : public USBClassHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LvText;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P012HUDGlitter(int32 EntryPoint);
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Update(float GaugeRatio, int32 Lv);
	void SetGauge(float InValue);
	void SetLv(int32 InLV);
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnSetEditMode(bool InIsEdit);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P012HUDGlitter_C">();
	}
	static class UP012HUDGlitter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP012HUDGlitter_C>();
	}
};
static_assert(alignof(UP012HUDGlitter_C) == 0x000008, "Wrong alignment on UP012HUDGlitter_C");
static_assert(sizeof(UP012HUDGlitter_C) == 0x0002C0, "Wrong size on UP012HUDGlitter_C");
static_assert(offsetof(UP012HUDGlitter_C, UberGraphFrame) == 0x000280, "Member 'UP012HUDGlitter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, AnimInOut) == 0x000288, "Member 'UP012HUDGlitter_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, CPRoot) == 0x000290, "Member 'UP012HUDGlitter_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, CPVisibleSetting) == 0x000298, "Member 'UP012HUDGlitter_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, Gauge) == 0x0002A0, "Member 'UP012HUDGlitter_C::Gauge' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, LvText) == 0x0002A8, "Member 'UP012HUDGlitter_C::LvText' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, WidgetSwitcher) == 0x0002B0, "Member 'UP012HUDGlitter_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP012HUDGlitter_C, GaugeMat) == 0x0002B8, "Member 'UP012HUDGlitter_C::GaugeMat' has a wrong offset!");

}

