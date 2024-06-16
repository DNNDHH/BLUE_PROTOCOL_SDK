#pragma once

 

// Package: CmnAnim_ArrowM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnAnim_ArrowM.CmnAnim_ArrowM_C
// 0x0020 (0x0298 - 0x0278)
class UCmnAnim_ArrowM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimationOff;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimationArrow;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow1;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnAnim_ArrowM(int32 EntryPoint);
	void Construct();
	void PlayArrowAnim();
	void StopArrowAnim();
	void StopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnAnim_ArrowM_C">();
	}
	static class UCmnAnim_ArrowM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnAnim_ArrowM_C>();
	}
};
static_assert(alignof(UCmnAnim_ArrowM_C) == 0x000008, "Wrong alignment on UCmnAnim_ArrowM_C");
static_assert(sizeof(UCmnAnim_ArrowM_C) == 0x000298, "Wrong size on UCmnAnim_ArrowM_C");
static_assert(offsetof(UCmnAnim_ArrowM_C, UberGraphFrame) == 0x000278, "Member 'UCmnAnim_ArrowM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnAnim_ArrowM_C, AnimationOff) == 0x000280, "Member 'UCmnAnim_ArrowM_C::AnimationOff' has a wrong offset!");
static_assert(offsetof(UCmnAnim_ArrowM_C, AnimationArrow) == 0x000288, "Member 'UCmnAnim_ArrowM_C::AnimationArrow' has a wrong offset!");
static_assert(offsetof(UCmnAnim_ArrowM_C, Arrow1) == 0x000290, "Member 'UCmnAnim_ArrowM_C::Arrow1' has a wrong offset!");

}

