#pragma once

 

// Package: RespawnHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RespawnHUD.RespawnHUD_C
// 0x0080 (0x0318 - 0x0298)
class URespawnHUD_C final : public USBRespawnHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg1;                                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnNumber1_0to99_C*                    CmnNumber1_0to99;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnNumber1_0to99_C*                    CmnNumber1_0to99_1;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PressKeyOverlay;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootCanvasPanel;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MaxTime;                                           // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B7[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableAssetData                  PressText;                                         // 0x02D8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsBattleAreaMessageBP;                             // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B8[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Gauge1Mat;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RespawnHUD(int32 EntryPoint);
	void OnUpdateGauge();
	void Construct();
	void ShowBattleAreaDialog_Event();
	void EndCounddownDynamicDlegate_Event(ECountdownResult Result);
	void ShowCountDownDialog_Event();
	void ShowRespawn(float InTime);
	void BattleAreaDisableMessage();
	void GetResurrectionRemainTimeRate(float* Rate);
	void UpdateRespawnGauge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RespawnHUD_C">();
	}
	static class URespawnHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URespawnHUD_C>();
	}
};
static_assert(alignof(URespawnHUD_C) == 0x000008, "Wrong alignment on URespawnHUD_C");
static_assert(sizeof(URespawnHUD_C) == 0x000318, "Wrong size on URespawnHUD_C");
static_assert(offsetof(URespawnHUD_C, UberGraphFrame) == 0x000298, "Member 'URespawnHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, Bg1) == 0x0002A0, "Member 'URespawnHUD_C::Bg1' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, CmnNumber1_0to99) == 0x0002A8, "Member 'URespawnHUD_C::CmnNumber1_0to99' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, CmnNumber1_0to99_1) == 0x0002B0, "Member 'URespawnHUD_C::CmnNumber1_0to99_1' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, Gauge) == 0x0002B8, "Member 'URespawnHUD_C::Gauge' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, PressKeyOverlay) == 0x0002C0, "Member 'URespawnHUD_C::PressKeyOverlay' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, RootCanvasPanel) == 0x0002C8, "Member 'URespawnHUD_C::RootCanvasPanel' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, MaxTime) == 0x0002D0, "Member 'URespawnHUD_C::MaxTime' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, PressText) == 0x0002D8, "Member 'URespawnHUD_C::PressText' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, IsBattleAreaMessageBP) == 0x000308, "Member 'URespawnHUD_C::IsBattleAreaMessageBP' has a wrong offset!");
static_assert(offsetof(URespawnHUD_C, Gauge1Mat) == 0x000310, "Member 'URespawnHUD_C::Gauge1Mat' has a wrong offset!");

}

