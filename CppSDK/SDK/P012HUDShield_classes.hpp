#pragma once

 

// Package: P012HUDShield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P012HUDShield.P012HUDShield_C
// 0x00A0 (0x0320 - 0x0280)
class UP012HUDShield_C final : public USBClassHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimCanDependent;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBroken;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CircleGauge;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_119;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_165;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSFrame;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSIcon;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     OwnerPlayerCharacter;                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShieldDurability;                                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShieldMaxDurability;                               // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRecovering;                                       // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShieldBreakAnime;                                 // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72DE[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                As_SBPCRebellion_Component;                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMate;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntervalTime;                                      // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIntervalFlag;                                     // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_P012HUDShield(int32 EntryPoint);
	void On_EndIntervalDependent();
	void UnBindOnEndIntervalDependent();
	void BindOnEndIntervalDependent();
	void On_StartIntervalDependent();
	void UnBindOnStartIntervalDependent();
	void BindOnStartIntervalDependent();
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void PlayAnimBroken();
	void StopAnimBroken();
	void UpdateShieldBreak();
	void UpdateShieldDurability();
	void SetFrame(bool IsBroken);
	void SetIcon(int32 Param_Index);
	void SetGauge(float InValue);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnTick();
	void OnSetEditMode(bool InIsEdit);
	void UpdateDependent();
	void SetCountVisibility(bool NoHitSelforCollapse);
	void SetCount(int32 Count);
	void SetGaugeVisible(bool TrueIsVisible);
	void IsEquipDependent(bool* TrueIsEquip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P012HUDShield_C">();
	}
	static class UP012HUDShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP012HUDShield_C>();
	}
};
static_assert(alignof(UP012HUDShield_C) == 0x000008, "Wrong alignment on UP012HUDShield_C");
static_assert(sizeof(UP012HUDShield_C) == 0x000320, "Wrong size on UP012HUDShield_C");
static_assert(offsetof(UP012HUDShield_C, UberGraphFrame) == 0x000280, "Member 'UP012HUDShield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, AnimCanDependent) == 0x000288, "Member 'UP012HUDShield_C::AnimCanDependent' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, AnimInOut) == 0x000290, "Member 'UP012HUDShield_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, AnimBroken) == 0x000298, "Member 'UP012HUDShield_C::AnimBroken' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, CircleGauge) == 0x0002A0, "Member 'UP012HUDShield_C::CircleGauge' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, CPRoot) == 0x0002A8, "Member 'UP012HUDShield_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, CPVisibleSetting) == 0x0002B0, "Member 'UP012HUDShield_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, Gauge) == 0x0002B8, "Member 'UP012HUDShield_C::Gauge' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, Image_119) == 0x0002C0, "Member 'UP012HUDShield_C::Image_119' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, TextBlock_165) == 0x0002C8, "Member 'UP012HUDShield_C::TextBlock_165' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, WidgetSwitcher) == 0x0002D0, "Member 'UP012HUDShield_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, WSFrame) == 0x0002D8, "Member 'UP012HUDShield_C::WSFrame' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, WSIcon) == 0x0002E0, "Member 'UP012HUDShield_C::WSIcon' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, OwnerPlayerCharacter) == 0x0002E8, "Member 'UP012HUDShield_C::OwnerPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, GaugeMat) == 0x0002F0, "Member 'UP012HUDShield_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, ShieldDurability) == 0x0002F8, "Member 'UP012HUDShield_C::ShieldDurability' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, ShieldMaxDurability) == 0x0002FC, "Member 'UP012HUDShield_C::ShieldMaxDurability' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, bRecovering) == 0x000300, "Member 'UP012HUDShield_C::bRecovering' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, bShieldBreakAnime) == 0x000301, "Member 'UP012HUDShield_C::bShieldBreakAnime' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, As_SBPCRebellion_Component) == 0x000308, "Member 'UP012HUDShield_C::As_SBPCRebellion_Component' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, GaugeMate) == 0x000310, "Member 'UP012HUDShield_C::GaugeMate' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, IntervalTime) == 0x000318, "Member 'UP012HUDShield_C::IntervalTime' has a wrong offset!");
static_assert(offsetof(UP012HUDShield_C, bIntervalFlag) == 0x00031C, "Member 'UP012HUDShield_C::bIntervalFlag' has a wrong offset!");

}

