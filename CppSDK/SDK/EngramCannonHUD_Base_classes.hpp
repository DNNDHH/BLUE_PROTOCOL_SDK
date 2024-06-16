#pragma once

 

// Package: EngramCannonHUD_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EngramCannonHUD_Base.EngramCannonHUD_Base_C
// 0x0030 (0x02A8 - 0x0278)
class UEngramCannonHUD_Base_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NoiseAnime;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEngramCannonHUD_TargetSite_C*          EngramCannonHUD_TargetSite;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEngramCannonHUD_Detail_C*              EngramCannonHUD_Detail;                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNoiseAnim;                                       // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A1[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEngramCannonHUD_KeyHelp_C*             KeyHelp;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EngramCannonHUD_Base(int32 EntryPoint);
	void FinishedNoiseAnimation();
	void WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_0();
	void PlayNoiseAnime();
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EngramCannonHUD_Base_C">();
	}
	static class UEngramCannonHUD_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngramCannonHUD_Base_C>();
	}
};
static_assert(alignof(UEngramCannonHUD_Base_C) == 0x000008, "Wrong alignment on UEngramCannonHUD_Base_C");
static_assert(sizeof(UEngramCannonHUD_Base_C) == 0x0002A8, "Wrong size on UEngramCannonHUD_Base_C");
static_assert(offsetof(UEngramCannonHUD_Base_C, UberGraphFrame) == 0x000278, "Member 'UEngramCannonHUD_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Base_C, NoiseAnime) == 0x000280, "Member 'UEngramCannonHUD_Base_C::NoiseAnime' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Base_C, EngramCannonHUD_TargetSite) == 0x000288, "Member 'UEngramCannonHUD_Base_C::EngramCannonHUD_TargetSite' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Base_C, EngramCannonHUD_Detail) == 0x000290, "Member 'UEngramCannonHUD_Base_C::EngramCannonHUD_Detail' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Base_C, IsNoiseAnim) == 0x000298, "Member 'UEngramCannonHUD_Base_C::IsNoiseAnim' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Base_C, KeyHelp) == 0x0002A0, "Member 'UEngramCannonHUD_Base_C::KeyHelp' has a wrong offset!");

}

