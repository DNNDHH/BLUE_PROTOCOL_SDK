#pragma once

 

// Package: NotificationCircleAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NotificationCircleAnim.NotificationCircleAnim_C
// 0x0018 (0x0290 - 0x0278)
class UNotificationCircleAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_41;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NotificationCircleAnim(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotificationCircleAnim_C">();
	}
	static class UNotificationCircleAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotificationCircleAnim_C>();
	}
};
static_assert(alignof(UNotificationCircleAnim_C) == 0x000008, "Wrong alignment on UNotificationCircleAnim_C");
static_assert(sizeof(UNotificationCircleAnim_C) == 0x000290, "Wrong size on UNotificationCircleAnim_C");
static_assert(offsetof(UNotificationCircleAnim_C, UberGraphFrame) == 0x000278, "Member 'UNotificationCircleAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotificationCircleAnim_C, AnimLoop) == 0x000280, "Member 'UNotificationCircleAnim_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UNotificationCircleAnim_C, Image_41) == 0x000288, "Member 'UNotificationCircleAnim_C::Image_41' has a wrong offset!");

}

