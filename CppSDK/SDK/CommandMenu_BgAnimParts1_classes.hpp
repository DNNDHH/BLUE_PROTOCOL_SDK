#pragma once

 

// Package: CommandMenu_BgAnimParts1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C
// 0x0050 (0x02C8 - 0x0278)
class UCommandMenu_BgAnimParts1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBlink;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimAlpha;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimVibration;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDirY;                                          // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDirX;                                          // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           StartPosGrp;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Start_Time;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_BgAnimParts1(int32 EntryPoint);
	void WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_0();
	void SetPat(float StartTime);
	void Construct();
	void StopAnim(class UWidgetAnimation* InAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_BgAnimParts1_C">();
	}
	static class UCommandMenu_BgAnimParts1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_BgAnimParts1_C>();
	}
};
static_assert(alignof(UCommandMenu_BgAnimParts1_C) == 0x000008, "Wrong alignment on UCommandMenu_BgAnimParts1_C");
static_assert(sizeof(UCommandMenu_BgAnimParts1_C) == 0x0002C8, "Wrong size on UCommandMenu_BgAnimParts1_C");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_BgAnimParts1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, AnimBlink) == 0x000280, "Member 'UCommandMenu_BgAnimParts1_C::AnimBlink' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, AnimAlpha) == 0x000288, "Member 'UCommandMenu_BgAnimParts1_C::AnimAlpha' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, AnimVibration) == 0x000290, "Member 'UCommandMenu_BgAnimParts1_C::AnimVibration' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, AnimDirY) == 0x000298, "Member 'UCommandMenu_BgAnimParts1_C::AnimDirY' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, AnimDirX) == 0x0002A0, "Member 'UCommandMenu_BgAnimParts1_C::AnimDirX' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, AnimIn) == 0x0002A8, "Member 'UCommandMenu_BgAnimParts1_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, Image) == 0x0002B0, "Member 'UCommandMenu_BgAnimParts1_C::Image' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, StartPosGrp) == 0x0002B8, "Member 'UCommandMenu_BgAnimParts1_C::StartPosGrp' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, Start_Time) == 0x0002C0, "Member 'UCommandMenu_BgAnimParts1_C::Start_Time' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BgAnimParts1_C, Speed) == 0x0002C4, "Member 'UCommandMenu_BgAnimParts1_C::Speed' has a wrong offset!");

}

