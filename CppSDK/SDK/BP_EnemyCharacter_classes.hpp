#pragma once

 

// Package: BP_EnemyCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "E_DamageReaction_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyCharacter.BP_EnemyCharacter_C
// 0x0170 (0x1910 - 0x17A0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_EnemyCharacter_C : public ASBEnemyCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x17A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBEnemyAnimUpdateRateSignificanceManagerComponent* SBEnemyAnimUpdateRateSignificanceManager;          // 0x17A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBEnemyUROManagerComponent*            SBEnemyUROManager;                                 // 0x17B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBFootprintComponent*                  SBFootprint;                                       // 0x17B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MiniMapRegisterComponent_C*         BP_MiniMapRegisterComponent;                       // 0x17C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBNamePlateComponent2D*                NamePlate;                                         // 0x17C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_AimBodyBlendRate_BlendRate_100449EF401C12AEDC5E469069D933ED; // 0x17D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_AimBodyBlendRate__Direction_100449EF401C12AEDC5E469069D933ED; // 0x17D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F90[0x3];                                     // 0x17D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_AimBodyBlendRate;                         // 0x17D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAimActive;                                       // 0x17E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F91[0x3];                                     // 0x17E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BPE_TempCounter;                                   // 0x17E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BPE_TempAnimRate;                                  // 0x17E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BPE_Adjust;                                        // 0x17EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F92[0x3];                                     // 0x17ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         KnockBack_Scale;                                   // 0x17F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ETemp_BS_X;                                        // 0x17F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ETemp_BS_Y;                                        // 0x17F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ETemp_Flag;                                        // 0x17FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          E_CheckStun;                                       // 0x17FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F93[0x2];                                     // 0x17FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EnemyDeath;                                        // 0x1800(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EnemySelfDeath;                                    // 0x1810(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSheathe;                                         // 0x1820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F94[0x7];                                     // 0x1821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Attach_Name;                                       // 0x1828(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         OcclusionRefreshInterval;                          // 0x1838(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopWhenOwnerDestroyed;                            // 0x183C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F95[0x3];                                     // 0x183D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventName;                                         // 0x1840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ECheck_Damage;                                     // 0x1850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F96[0x3];                                     // 0x1851(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BP_MeshScaleOffset;                                // 0x1854(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, float>                    MeshScaleMap;                                      // 0x1858(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          MeshScaleMapCheck;                                 // 0x18A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F97[0x7];                                     // 0x18A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, float>                    OverrideImpactMap;                                 // 0x18B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsCustomBurstFinish;                               // 0x1900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCustomBurstFinishEnd;                            // 0x1901(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void EnemyDeath__DelegateSignature();
	void EnemySelfDeath__DelegateSignature();
	void ExecuteUbergraph_BP_EnemyCharacter(int32 EntryPoint);
	void Event_Aim_Body_Blend_Rate_Near_Max();
	void ReceiveSelfDeath();
	void ReceiveBeginPlay();
	void ReceiveStartDeathEffect();
	void ReceiveTick(float DeltaSeconds);
	void Event_End_Aim_Restricted();
	void ReceiveEndInitialLoad();
	void Event_Begin_Aim_Restricted();
	void Timeline_AimBodyBlendRate__UpdateFunc();
	void Timeline_AimBodyBlendRate__FinishedFunc();
	void UserConstructionScript();
	void UpdateAimBlend();
	void BeginAimBodyBlend();
	void EndAimBodyBlend();
	void SetAimBodyBlendRate(float BlendRate);
	void InitializeEquipWeapon();
	void GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction);
	void IsClient(bool* ReturnParam);
	void GetPartsDamageOverrideImpact(const class FString& AppearanceId, bool* IsValid, float* OverrideImpact);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyCharacter_C">();
	}
	static class ABP_EnemyCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnemyCharacter_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_EnemyCharacter_C) == 0x000010, "Wrong alignment on ABP_EnemyCharacter_C");
static_assert(sizeof(ABP_EnemyCharacter_C) == 0x001910, "Wrong size on ABP_EnemyCharacter_C");
static_assert(offsetof(ABP_EnemyCharacter_C, UberGraphFrame) == 0x0017A0, "Member 'ABP_EnemyCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, SBEnemyAnimUpdateRateSignificanceManager) == 0x0017A8, "Member 'ABP_EnemyCharacter_C::SBEnemyAnimUpdateRateSignificanceManager' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, SBEnemyUROManager) == 0x0017B0, "Member 'ABP_EnemyCharacter_C::SBEnemyUROManager' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, SBFootprint) == 0x0017B8, "Member 'ABP_EnemyCharacter_C::SBFootprint' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, BP_MiniMapRegisterComponent) == 0x0017C0, "Member 'ABP_EnemyCharacter_C::BP_MiniMapRegisterComponent' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, NamePlate) == 0x0017C8, "Member 'ABP_EnemyCharacter_C::NamePlate' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, Timeline_AimBodyBlendRate_BlendRate_100449EF401C12AEDC5E469069D933ED) == 0x0017D0, "Member 'ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate_BlendRate_100449EF401C12AEDC5E469069D933ED' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, Timeline_AimBodyBlendRate__Direction_100449EF401C12AEDC5E469069D933ED) == 0x0017D4, "Member 'ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate__Direction_100449EF401C12AEDC5E469069D933ED' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, Timeline_AimBodyBlendRate) == 0x0017D8, "Member 'ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, IsAimActive) == 0x0017E0, "Member 'ABP_EnemyCharacter_C::IsAimActive' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, BPE_TempCounter) == 0x0017E4, "Member 'ABP_EnemyCharacter_C::BPE_TempCounter' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, BPE_TempAnimRate) == 0x0017E8, "Member 'ABP_EnemyCharacter_C::BPE_TempAnimRate' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, BPE_Adjust) == 0x0017EC, "Member 'ABP_EnemyCharacter_C::BPE_Adjust' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, KnockBack_Scale) == 0x0017F0, "Member 'ABP_EnemyCharacter_C::KnockBack_Scale' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, ETemp_BS_X) == 0x0017F4, "Member 'ABP_EnemyCharacter_C::ETemp_BS_X' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, ETemp_BS_Y) == 0x0017F8, "Member 'ABP_EnemyCharacter_C::ETemp_BS_Y' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, ETemp_Flag) == 0x0017FC, "Member 'ABP_EnemyCharacter_C::ETemp_Flag' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, E_CheckStun) == 0x0017FD, "Member 'ABP_EnemyCharacter_C::E_CheckStun' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, EnemyDeath) == 0x001800, "Member 'ABP_EnemyCharacter_C::EnemyDeath' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, EnemySelfDeath) == 0x001810, "Member 'ABP_EnemyCharacter_C::EnemySelfDeath' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, IsSheathe) == 0x001820, "Member 'ABP_EnemyCharacter_C::IsSheathe' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, Attach_Name) == 0x001828, "Member 'ABP_EnemyCharacter_C::Attach_Name' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, OcclusionRefreshInterval) == 0x001838, "Member 'ABP_EnemyCharacter_C::OcclusionRefreshInterval' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, StopWhenOwnerDestroyed) == 0x00183C, "Member 'ABP_EnemyCharacter_C::StopWhenOwnerDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, EventName) == 0x001840, "Member 'ABP_EnemyCharacter_C::EventName' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, ECheck_Damage) == 0x001850, "Member 'ABP_EnemyCharacter_C::ECheck_Damage' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, BP_MeshScaleOffset) == 0x001854, "Member 'ABP_EnemyCharacter_C::BP_MeshScaleOffset' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, MeshScaleMap) == 0x001858, "Member 'ABP_EnemyCharacter_C::MeshScaleMap' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, MeshScaleMapCheck) == 0x0018A8, "Member 'ABP_EnemyCharacter_C::MeshScaleMapCheck' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, OverrideImpactMap) == 0x0018B0, "Member 'ABP_EnemyCharacter_C::OverrideImpactMap' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, IsCustomBurstFinish) == 0x001900, "Member 'ABP_EnemyCharacter_C::IsCustomBurstFinish' has a wrong offset!");
static_assert(offsetof(ABP_EnemyCharacter_C, IsCustomBurstFinishEnd) == 0x001901, "Member 'ABP_EnemyCharacter_C::IsCustomBurstFinishEnd' has a wrong offset!");

}

