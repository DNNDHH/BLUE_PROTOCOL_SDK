#pragma once

 

// Package: SkillInfoGaugeHyouiActive_Effect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C
// 0x0030 (0x02A8 - 0x0278)
class USkillInfoGaugeHyouiActive_Effect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Star1;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Star2;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Star3;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Star4;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect(int32 EntryPoint);
	void Construct();
	void PlayAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoGaugeHyouiActive_Effect_C">();
	}
	static class USkillInfoGaugeHyouiActive_Effect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoGaugeHyouiActive_Effect_C>();
	}
};
static_assert(alignof(USkillInfoGaugeHyouiActive_Effect_C) == 0x000008, "Wrong alignment on USkillInfoGaugeHyouiActive_Effect_C");
static_assert(sizeof(USkillInfoGaugeHyouiActive_Effect_C) == 0x0002A8, "Wrong size on USkillInfoGaugeHyouiActive_Effect_C");
static_assert(offsetof(USkillInfoGaugeHyouiActive_Effect_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoGaugeHyouiActive_Effect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeHyouiActive_Effect_C, AnimIn) == 0x000280, "Member 'USkillInfoGaugeHyouiActive_Effect_C::AnimIn' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeHyouiActive_Effect_C, Image_Star1) == 0x000288, "Member 'USkillInfoGaugeHyouiActive_Effect_C::Image_Star1' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeHyouiActive_Effect_C, Image_Star2) == 0x000290, "Member 'USkillInfoGaugeHyouiActive_Effect_C::Image_Star2' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeHyouiActive_Effect_C, Image_Star3) == 0x000298, "Member 'USkillInfoGaugeHyouiActive_Effect_C::Image_Star3' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeHyouiActive_Effect_C, Image_Star4) == 0x0002A0, "Member 'USkillInfoGaugeHyouiActive_Effect_C::Image_Star4' has a wrong offset!");

}

