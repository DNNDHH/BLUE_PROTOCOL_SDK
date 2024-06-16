#pragma once

 

// Package: Notification_DotAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Notification_DotAnim.Notification_DotAnim_C
// 0x0018 (0x0290 - 0x0278)
class UNotification_DotAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDotBlink;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Dot;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Notification_DotAnim(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Notification_DotAnim_C">();
	}
	static class UNotification_DotAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotification_DotAnim_C>();
	}
};
static_assert(alignof(UNotification_DotAnim_C) == 0x000008, "Wrong alignment on UNotification_DotAnim_C");
static_assert(sizeof(UNotification_DotAnim_C) == 0x000290, "Wrong size on UNotification_DotAnim_C");
static_assert(offsetof(UNotification_DotAnim_C, UberGraphFrame) == 0x000278, "Member 'UNotification_DotAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotification_DotAnim_C, AnimDotBlink) == 0x000280, "Member 'UNotification_DotAnim_C::AnimDotBlink' has a wrong offset!");
static_assert(offsetof(UNotification_DotAnim_C, Dot) == 0x000288, "Member 'UNotification_DotAnim_C::Dot' has a wrong offset!");

}

