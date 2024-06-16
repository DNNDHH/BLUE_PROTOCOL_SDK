#pragma once

 

// Package: MatchingMenu_JoinButtonAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C
// 0x0080 (0x02F8 - 0x0278)
class UMatchingMenu_JoinButtonAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_4;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PressAfterAnim01;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_5;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_3;                                             // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_2;                                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_1;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CircleLight_1;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleLight_2;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleLight_3;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchingMenu_Confirm_JoinButton_Hovered_Line1;     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchingMenu_Confirm_JoinButton_Hovered_Line2;     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchingMenu_Confirm_JoinButton_Hovered_Line3;     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchingMenu_Confirm_JoinButton_Hovered_Line4;     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchingMenu_Confirm_JoinButton_Hovered_Line5;     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchingMenu_Confirm_JoinButton_Hovered_Line6;     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MatchingMenu_JoinButtonAnim(int32 EntryPoint);
	void Construct();
	void PressAfterAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchingMenu_JoinButtonAnim_C">();
	}
	static class UMatchingMenu_JoinButtonAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchingMenu_JoinButtonAnim_C>();
	}
};
static_assert(alignof(UMatchingMenu_JoinButtonAnim_C) == 0x000008, "Wrong alignment on UMatchingMenu_JoinButtonAnim_C");
static_assert(sizeof(UMatchingMenu_JoinButtonAnim_C) == 0x0002F8, "Wrong size on UMatchingMenu_JoinButtonAnim_C");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, UberGraphFrame) == 0x000278, "Member 'UMatchingMenu_JoinButtonAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, Anim_4) == 0x000280, "Member 'UMatchingMenu_JoinButtonAnim_C::Anim_4' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, PressAfterAnim01) == 0x000288, "Member 'UMatchingMenu_JoinButtonAnim_C::PressAfterAnim01' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, Anim_5) == 0x000290, "Member 'UMatchingMenu_JoinButtonAnim_C::Anim_5' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, Anm_3) == 0x000298, "Member 'UMatchingMenu_JoinButtonAnim_C::Anm_3' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, Anm_2) == 0x0002A0, "Member 'UMatchingMenu_JoinButtonAnim_C::Anm_2' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, Anm_1) == 0x0002A8, "Member 'UMatchingMenu_JoinButtonAnim_C::Anm_1' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, CircleLight_1) == 0x0002B0, "Member 'UMatchingMenu_JoinButtonAnim_C::CircleLight_1' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, CircleLight_2) == 0x0002B8, "Member 'UMatchingMenu_JoinButtonAnim_C::CircleLight_2' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, CircleLight_3) == 0x0002C0, "Member 'UMatchingMenu_JoinButtonAnim_C::CircleLight_3' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, MatchingMenu_Confirm_JoinButton_Hovered_Line1) == 0x0002C8, "Member 'UMatchingMenu_JoinButtonAnim_C::MatchingMenu_Confirm_JoinButton_Hovered_Line1' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, MatchingMenu_Confirm_JoinButton_Hovered_Line2) == 0x0002D0, "Member 'UMatchingMenu_JoinButtonAnim_C::MatchingMenu_Confirm_JoinButton_Hovered_Line2' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, MatchingMenu_Confirm_JoinButton_Hovered_Line3) == 0x0002D8, "Member 'UMatchingMenu_JoinButtonAnim_C::MatchingMenu_Confirm_JoinButton_Hovered_Line3' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, MatchingMenu_Confirm_JoinButton_Hovered_Line4) == 0x0002E0, "Member 'UMatchingMenu_JoinButtonAnim_C::MatchingMenu_Confirm_JoinButton_Hovered_Line4' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, MatchingMenu_Confirm_JoinButton_Hovered_Line5) == 0x0002E8, "Member 'UMatchingMenu_JoinButtonAnim_C::MatchingMenu_Confirm_JoinButton_Hovered_Line5' has a wrong offset!");
static_assert(offsetof(UMatchingMenu_JoinButtonAnim_C, MatchingMenu_Confirm_JoinButton_Hovered_Line6) == 0x0002F0, "Member 'UMatchingMenu_JoinButtonAnim_C::MatchingMenu_Confirm_JoinButton_Hovered_Line6' has a wrong offset!");

}

