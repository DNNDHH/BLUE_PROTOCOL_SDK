#pragma once

 

// Package: UMG_AdventurerRank_EffectStar1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C
// 0x0028 (0x02A0 - 0x0278)
class UUMG_AdventurerRank_EffectStar1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn0;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Star;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Star;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         AnimType1;                                         // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowNum;                                           // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_AdventurerRank_EffectStar1(int32 EntryPoint);
	void WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void PlayRandomAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdventurerRank_EffectStar1_C">();
	}
	static class UUMG_AdventurerRank_EffectStar1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdventurerRank_EffectStar1_C>();
	}
};
static_assert(alignof(UUMG_AdventurerRank_EffectStar1_C) == 0x000008, "Wrong alignment on UUMG_AdventurerRank_EffectStar1_C");
static_assert(sizeof(UUMG_AdventurerRank_EffectStar1_C) == 0x0002A0, "Wrong size on UUMG_AdventurerRank_EffectStar1_C");
static_assert(offsetof(UUMG_AdventurerRank_EffectStar1_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AdventurerRank_EffectStar1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_EffectStar1_C, AnimIn0) == 0x000280, "Member 'UUMG_AdventurerRank_EffectStar1_C::AnimIn0' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_EffectStar1_C, CanvasPanel_Star) == 0x000288, "Member 'UUMG_AdventurerRank_EffectStar1_C::CanvasPanel_Star' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_EffectStar1_C, Image_Star) == 0x000290, "Member 'UUMG_AdventurerRank_EffectStar1_C::Image_Star' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_EffectStar1_C, AnimType1) == 0x000298, "Member 'UUMG_AdventurerRank_EffectStar1_C::AnimType1' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_EffectStar1_C, ShowNum) == 0x00029C, "Member 'UUMG_AdventurerRank_EffectStar1_C::ShowNum' has a wrong offset!");

}

