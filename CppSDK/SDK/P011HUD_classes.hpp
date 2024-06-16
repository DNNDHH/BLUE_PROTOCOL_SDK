#pragma once

 

// Package: P011HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P011HUD.P011HUD_C
// 0x0050 (0x02D0 - 0x0280)
class UP011HUD_C final : public USBClassHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_265;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               InspirationIcon;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MpValue;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P011HUD(int32 EntryPoint);
	void UnbindVisibleSetting();
	void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void BindVisibleSetting();
	void OnSetGaugeValue(float InValue);
	void OnSetMpValue(float InValue);
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnSetEditMode(bool InIsEdit);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void SetInspirationIconRenderOpacity(bool TrueIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P011HUD_C">();
	}
	static class UP011HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP011HUD_C>();
	}
};
static_assert(alignof(UP011HUD_C) == 0x000008, "Wrong alignment on UP011HUD_C");
static_assert(sizeof(UP011HUD_C) == 0x0002D0, "Wrong size on UP011HUD_C");
static_assert(offsetof(UP011HUD_C, UberGraphFrame) == 0x000280, "Member 'UP011HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, AnimInOut) == 0x000288, "Member 'UP011HUD_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, CPRoot) == 0x000290, "Member 'UP011HUD_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, CPVisibleSetting) == 0x000298, "Member 'UP011HUD_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, Gauge) == 0x0002A0, "Member 'UP011HUD_C::Gauge' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, Image_265) == 0x0002A8, "Member 'UP011HUD_C::Image_265' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, InspirationIcon) == 0x0002B0, "Member 'UP011HUD_C::InspirationIcon' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, MpValue) == 0x0002B8, "Member 'UP011HUD_C::MpValue' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, WidgetSwitcher) == 0x0002C0, "Member 'UP011HUD_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP011HUD_C, GaugeMat) == 0x0002C8, "Member 'UP011HUD_C::GaugeMat' has a wrong offset!");

}

