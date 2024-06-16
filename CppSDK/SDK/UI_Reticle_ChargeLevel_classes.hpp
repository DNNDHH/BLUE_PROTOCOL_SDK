#pragma once

 

// Package: UI_Reticle_ChargeLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C
// 0x0018 (0x02B8 - 0x02A0)
class UUI_Reticle_ChargeLevel_C final : public USBReticleCharge
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Root;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ShotChargeGrp;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Reticle_ChargeLevel(int32 EntryPoint);
	void Destruct();
	void Construct();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindUIVisibleSetting();
	void BindUIVisibleSetting();
	void SetRootVisible(bool Param_IsVisible);
	void SetShotChargeGrpVisible(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Reticle_ChargeLevel_C">();
	}
	static class UUI_Reticle_ChargeLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Reticle_ChargeLevel_C>();
	}
};
static_assert(alignof(UUI_Reticle_ChargeLevel_C) == 0x000008, "Wrong alignment on UUI_Reticle_ChargeLevel_C");
static_assert(sizeof(UUI_Reticle_ChargeLevel_C) == 0x0002B8, "Wrong size on UUI_Reticle_ChargeLevel_C");
static_assert(offsetof(UUI_Reticle_ChargeLevel_C, UberGraphFrame) == 0x0002A0, "Member 'UUI_Reticle_ChargeLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Reticle_ChargeLevel_C, Root) == 0x0002A8, "Member 'UUI_Reticle_ChargeLevel_C::Root' has a wrong offset!");
static_assert(offsetof(UUI_Reticle_ChargeLevel_C, ShotChargeGrp) == 0x0002B0, "Member 'UUI_Reticle_ChargeLevel_C::ShotChargeGrp' has a wrong offset!");

}

