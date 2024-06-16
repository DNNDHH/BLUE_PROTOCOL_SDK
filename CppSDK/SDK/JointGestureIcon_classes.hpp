#pragma once

 

// Package: JointGestureIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JointGestureIcon.JointGestureIcon_C
// 0x0020 (0x0298 - 0x0278)
class UJointGestureIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Icon_HandHolding;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Janken;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SwitchIndex;                                       // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Update_Icon(class ASBCharacter* Character);
	void CheckTargetPlayer(class ASBPlayerCharacter* InTargetCharacter, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JointGestureIcon_C">();
	}
	static class UJointGestureIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJointGestureIcon_C>();
	}
};
static_assert(alignof(UJointGestureIcon_C) == 0x000008, "Wrong alignment on UJointGestureIcon_C");
static_assert(sizeof(UJointGestureIcon_C) == 0x000298, "Wrong size on UJointGestureIcon_C");
static_assert(offsetof(UJointGestureIcon_C, Icon_HandHolding) == 0x000278, "Member 'UJointGestureIcon_C::Icon_HandHolding' has a wrong offset!");
static_assert(offsetof(UJointGestureIcon_C, Icon_Janken) == 0x000280, "Member 'UJointGestureIcon_C::Icon_Janken' has a wrong offset!");
static_assert(offsetof(UJointGestureIcon_C, Switcher) == 0x000288, "Member 'UJointGestureIcon_C::Switcher' has a wrong offset!");
static_assert(offsetof(UJointGestureIcon_C, SwitchIndex) == 0x000290, "Member 'UJointGestureIcon_C::SwitchIndex' has a wrong offset!");

}

