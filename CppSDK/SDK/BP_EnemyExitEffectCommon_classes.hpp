#pragma once

 

// Package: BP_EnemyExitEffectCommon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C
// 0x0028 (0x0058 - 0x0030)
class UBP_EnemyExitEffectCommon_C final : public USBEnemyExitEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>       MaterialArray;                                     // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Time;                                              // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ABD[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            FadeOutCurve;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EnemyExitEffectCommon(int32 EntryPoint);
	void SetFaceMaterial(class ASBEnemyCharacter* Enemy);
	void ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
	void SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy);
	void SetWeaponMatrial(class ASBEnemyCharacter* Enemy);
	void SetEnemyMaterial(class ASBEnemyCharacter* Enemy);
	void ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyExitEffectCommon_C">();
	}
	static class UBP_EnemyExitEffectCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyExitEffectCommon_C>();
	}
};
static_assert(alignof(UBP_EnemyExitEffectCommon_C) == 0x000008, "Wrong alignment on UBP_EnemyExitEffectCommon_C");
static_assert(sizeof(UBP_EnemyExitEffectCommon_C) == 0x000058, "Wrong size on UBP_EnemyExitEffectCommon_C");
static_assert(offsetof(UBP_EnemyExitEffectCommon_C, UberGraphFrame) == 0x000030, "Member 'UBP_EnemyExitEffectCommon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EnemyExitEffectCommon_C, MaterialArray) == 0x000038, "Member 'UBP_EnemyExitEffectCommon_C::MaterialArray' has a wrong offset!");
static_assert(offsetof(UBP_EnemyExitEffectCommon_C, Time) == 0x000048, "Member 'UBP_EnemyExitEffectCommon_C::Time' has a wrong offset!");
static_assert(offsetof(UBP_EnemyExitEffectCommon_C, FadeOutCurve) == 0x000050, "Member 'UBP_EnemyExitEffectCommon_C::FadeOutCurve' has a wrong offset!");

}

