#pragma once

 

// Package: AdventurerRank_AnmArrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C
// 0x0020 (0x0298 - 0x0278)
class UAdventurerRank_AnmArrow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimationOff;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimationArrow;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow1;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AdventurerRank_AnmArrow(int32 EntryPoint);
	void Construct();
	void PlayArrowAnim();
	void StopArrowAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventurerRank_AnmArrow_C">();
	}
	static class UAdventurerRank_AnmArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventurerRank_AnmArrow_C>();
	}
};
static_assert(alignof(UAdventurerRank_AnmArrow_C) == 0x000008, "Wrong alignment on UAdventurerRank_AnmArrow_C");
static_assert(sizeof(UAdventurerRank_AnmArrow_C) == 0x000298, "Wrong size on UAdventurerRank_AnmArrow_C");
static_assert(offsetof(UAdventurerRank_AnmArrow_C, UberGraphFrame) == 0x000278, "Member 'UAdventurerRank_AnmArrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_AnmArrow_C, AnimationOff) == 0x000280, "Member 'UAdventurerRank_AnmArrow_C::AnimationOff' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_AnmArrow_C, AnimationArrow) == 0x000288, "Member 'UAdventurerRank_AnmArrow_C::AnimationArrow' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_AnmArrow_C, Arrow1) == 0x000290, "Member 'UAdventurerRank_AnmArrow_C::Arrow1' has a wrong offset!");

}

