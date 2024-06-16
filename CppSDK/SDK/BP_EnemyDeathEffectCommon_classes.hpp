#pragma once

 

// Package: BP_EnemyDeathEffectCommon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C
// 0x0038 (0x0088 - 0x0050)
class UBP_EnemyDeathEffectCommon_C final : public USBEnemyDeathEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>       MaterialArray;                                     // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Time;                                              // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5619[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            DeadCurve;                                         // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FadeOutCurve;                                      // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousAttributeTimeRatio;                        // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VanishWaitTime;                                    // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EnemyDeathEffectCommon(int32 EntryPoint);
	void SetFaceMaterial(class ASBEnemyCharacter* Enemy);
	void SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy);
	void ReceiveTickVanish(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
	void ReceiveBeginVanish(float WaitTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
	void ReceiveMaterialUpdated(EDeathEffectType DeathEffectType, class ASBEnemyCharacter* OwnerEnemyCharacter);
	void ReceiveTickFadeOut(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
	void ReceiveBeginFadeOut(class ASBEnemyCharacter* OwnerEnemyCharacter);
	void ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
	void ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter);
	void SetWeaponMatrial(class ASBEnemyCharacter* Enemy);
	void SetEnemyMatrial(class ASBEnemyCharacter* Enemy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyDeathEffectCommon_C">();
	}
	static class UBP_EnemyDeathEffectCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyDeathEffectCommon_C>();
	}
};
static_assert(alignof(UBP_EnemyDeathEffectCommon_C) == 0x000008, "Wrong alignment on UBP_EnemyDeathEffectCommon_C");
static_assert(sizeof(UBP_EnemyDeathEffectCommon_C) == 0x000088, "Wrong size on UBP_EnemyDeathEffectCommon_C");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, UberGraphFrame) == 0x000050, "Member 'UBP_EnemyDeathEffectCommon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, MaterialArray) == 0x000058, "Member 'UBP_EnemyDeathEffectCommon_C::MaterialArray' has a wrong offset!");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, Time) == 0x000068, "Member 'UBP_EnemyDeathEffectCommon_C::Time' has a wrong offset!");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, DeadCurve) == 0x000070, "Member 'UBP_EnemyDeathEffectCommon_C::DeadCurve' has a wrong offset!");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, FadeOutCurve) == 0x000078, "Member 'UBP_EnemyDeathEffectCommon_C::FadeOutCurve' has a wrong offset!");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, PreviousAttributeTimeRatio) == 0x000080, "Member 'UBP_EnemyDeathEffectCommon_C::PreviousAttributeTimeRatio' has a wrong offset!");
static_assert(offsetof(UBP_EnemyDeathEffectCommon_C, VanishWaitTime) == 0x000084, "Member 'UBP_EnemyDeathEffectCommon_C::VanishWaitTime' has a wrong offset!");

}

