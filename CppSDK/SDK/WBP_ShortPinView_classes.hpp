#pragma once

 

// Package: WBP_ShortPinView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ShortPinView.WBP_ShortPinView_C
// 0x0080 (0x0368 - 0x02E8)
class UWBP_ShortPinView_C final : public USBShortPinView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonAimModeUI_C*                     CommonAimModeUI_145;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_0;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_1;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_2;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_3;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_4;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_5;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_6;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_7;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_8;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortPin_C*                            ShortPin_9;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UShortPin_C*>                    ShortPinListBP;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsRayButtonDownBP;                                 // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEnemyTargetBP;                                   // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DE9[0x2];                                     // 0x035A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CoolTimeBP;                                        // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimerBP;                                           // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HalfScaleDistanceBP;                               // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ShortPinView(int32 EntryPoint);
	void SetUIVisible(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UpdateKeyConfig();
	void Construct();
	void IsReleaseRayButton(bool* NewParam);
	void GetPlayerShortPinComponent(class USBPlayerShortPinComponent** PlayerShortPinComponent);
	void SetPinPositionBP(class USBShortPinWidget* Pin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ShortPinView_C">();
	}
	static class UWBP_ShortPinView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ShortPinView_C>();
	}
};
static_assert(alignof(UWBP_ShortPinView_C) == 0x000008, "Wrong alignment on UWBP_ShortPinView_C");
static_assert(sizeof(UWBP_ShortPinView_C) == 0x000368, "Wrong size on UWBP_ShortPinView_C");
static_assert(offsetof(UWBP_ShortPinView_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ShortPinView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, CommonAimModeUI_145) == 0x0002F0, "Member 'UWBP_ShortPinView_C::CommonAimModeUI_145' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_0) == 0x0002F8, "Member 'UWBP_ShortPinView_C::ShortPin_0' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_1) == 0x000300, "Member 'UWBP_ShortPinView_C::ShortPin_1' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_2) == 0x000308, "Member 'UWBP_ShortPinView_C::ShortPin_2' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_3) == 0x000310, "Member 'UWBP_ShortPinView_C::ShortPin_3' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_4) == 0x000318, "Member 'UWBP_ShortPinView_C::ShortPin_4' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_5) == 0x000320, "Member 'UWBP_ShortPinView_C::ShortPin_5' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_6) == 0x000328, "Member 'UWBP_ShortPinView_C::ShortPin_6' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_7) == 0x000330, "Member 'UWBP_ShortPinView_C::ShortPin_7' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_8) == 0x000338, "Member 'UWBP_ShortPinView_C::ShortPin_8' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPin_9) == 0x000340, "Member 'UWBP_ShortPinView_C::ShortPin_9' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, ShortPinListBP) == 0x000348, "Member 'UWBP_ShortPinView_C::ShortPinListBP' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, IsRayButtonDownBP) == 0x000358, "Member 'UWBP_ShortPinView_C::IsRayButtonDownBP' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, IsEnemyTargetBP) == 0x000359, "Member 'UWBP_ShortPinView_C::IsEnemyTargetBP' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, CoolTimeBP) == 0x00035C, "Member 'UWBP_ShortPinView_C::CoolTimeBP' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, TimerBP) == 0x000360, "Member 'UWBP_ShortPinView_C::TimerBP' has a wrong offset!");
static_assert(offsetof(UWBP_ShortPinView_C, HalfScaleDistanceBP) == 0x000364, "Member 'UWBP_ShortPinView_C::HalfScaleDistanceBP' has a wrong offset!");

}

