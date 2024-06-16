#pragma once

 

// Package: AdventurerRank_LineEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventurerRank_LineEffect.AdventurerRank_LineEffect_C
// 0x0010 (0x02C0 - 0x02B0)
class UAdventurerRank_LineEffect_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AdventurerRank_LineEffect(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventurerRank_LineEffect_C">();
	}
	static class UAdventurerRank_LineEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventurerRank_LineEffect_C>();
	}
};
static_assert(alignof(UAdventurerRank_LineEffect_C) == 0x000008, "Wrong alignment on UAdventurerRank_LineEffect_C");
static_assert(sizeof(UAdventurerRank_LineEffect_C) == 0x0002C0, "Wrong size on UAdventurerRank_LineEffect_C");
static_assert(offsetof(UAdventurerRank_LineEffect_C, UberGraphFrame) == 0x0002B0, "Member 'UAdventurerRank_LineEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_LineEffect_C, Anim) == 0x0002B8, "Member 'UAdventurerRank_LineEffect_C::Anim' has a wrong offset!");

}

