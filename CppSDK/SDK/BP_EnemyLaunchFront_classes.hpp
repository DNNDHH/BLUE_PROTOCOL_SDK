#pragma once

 

// Package: BP_EnemyLaunchFront

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyLaunchFront.BP_EnemyLaunchFront_C
// 0x0010 (0x0080 - 0x0070)
class UBP_EnemyLaunchFront_C final : public USBAnimNotify
{
public:
	struct FVector                                LaunchVelocity;                                    // 0x0070(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          XYOverride;                                        // 0x007C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ZOverride;                                         // 0x007D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyLaunchFront_C">();
	}
	static class UBP_EnemyLaunchFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyLaunchFront_C>();
	}
};
static_assert(alignof(UBP_EnemyLaunchFront_C) == 0x000008, "Wrong alignment on UBP_EnemyLaunchFront_C");
static_assert(sizeof(UBP_EnemyLaunchFront_C) == 0x000080, "Wrong size on UBP_EnemyLaunchFront_C");
static_assert(offsetof(UBP_EnemyLaunchFront_C, LaunchVelocity) == 0x000070, "Member 'UBP_EnemyLaunchFront_C::LaunchVelocity' has a wrong offset!");
static_assert(offsetof(UBP_EnemyLaunchFront_C, XYOverride) == 0x00007C, "Member 'UBP_EnemyLaunchFront_C::XYOverride' has a wrong offset!");
static_assert(offsetof(UBP_EnemyLaunchFront_C, ZOverride) == 0x00007D, "Member 'UBP_EnemyLaunchFront_C::ZOverride' has a wrong offset!");

}

