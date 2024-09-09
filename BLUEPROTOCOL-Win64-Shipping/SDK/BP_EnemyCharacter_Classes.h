#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_EnemyCharacter.BP_EnemyCharacter_C
	 * Size -> 0x0162 (FullSize[0x1922] - InheritedSize[0x17C0])
	 */
	class ABP_EnemyCharacter_C : public ASBEnemyCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x17C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBEnemyAnimUpdateRateSignificanceManagerComponent*  SBEnemyAnimUpdateRateSignificanceManager;                // 0x17C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBEnemyUROManagerComponent*                         SBEnemyUROManager;                                       // 0x17D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBFootprintComponent*                               SBFootprint;                                             // 0x17D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_MiniMapRegisterComponent_C*                      BP_MiniMapRegisterComponent;                             // 0x17E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBNamePlateComponent2D*                             NamePlate;                                               // 0x17E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_AimBodyBlendRate_BlendRate_100449EF401C12AEDC5E469069D933ED; // 0x17F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_AimBodyBlendRate__Direction_100449EF401C12AEDC5E469069D933ED; // 0x17F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K7QU[0x3];                                   // 0x17F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_AimBodyBlendRate;                               // 0x17F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAimActive;                                             // 0x1800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7RI9[0x3];                                   // 0x1801(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BPE_TempCounter;                                         // 0x1804(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BPE_TempAnimRate;                                        // 0x1808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BPE_Adjust;                                              // 0x180C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2TB3[0x3];                                   // 0x180D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KnockBack_Scale;                                         // 0x1810(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ETemp_BS_X;                                              // 0x1814(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ETemp_BS_Y;                                              // 0x1818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ETemp_Flag;                                              // 0x181C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       E_CheckStun;                                             // 0x181D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CUIB[0x2];                                   // 0x181E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EnemyDeath;                                              // 0x1820(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EnemySelfDeath;                                          // 0x1830(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSheathe;                                               // 0x1840(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OO56[0x7];                                   // 0x1841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttachName;                                              // 0x1848(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float                                                      OcclusionRefreshInterval;                                // 0x1858(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StopWhenOwnerDestroyed;                                  // 0x185C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F3MU[0x3];                                   // 0x185D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x1860(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       ECheck_Damage;                                           // 0x1870(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z7FF[0x3];                                   // 0x1871(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BP_MeshScaleOffset;                                      // 0x1874(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, float>                                 MeshScaleMap;                                            // 0x1878(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       MeshScaleMapCheck;                                       // 0x18C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P8WM[0x7];                                   // 0x18C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, float>                                 OverrideImpactMap;                                       // 0x18D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsCustomBurstFinish;                                     // 0x1920(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsCustomBurstFinishEnd;                                  // 0x1921(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetPartsDamageOverrideImpact(const class FString& AppearanceId, bool* IsValid, float* OverrideImpact);
		void IsClient(bool* ReturnParam);
		void GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction);
		void InitializeEquipWeapon();
		void SetAimBodyBlendRate(float BlendRate);
		void EndAimBodyBlend();
		void BeginAimBodyBlend();
		void UpdateAimBlend();
		void UserConstructionScript();
		void Timeline_AimBodyBlendRate__FinishedFunc();
		void Timeline_AimBodyBlendRate__UpdateFunc();
		void EventBeginAimRestricted();
		void ReceiveEndInitialLoad();
		void EventEndAimRestricted();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveStartDeathEffect();
		void ReceiveBeginPlay();
		void ReceiveSelfDeath();
		void EventAimBodyBlendRateNearMax();
		void ExecuteUbergraph_BP_EnemyCharacter(int32_t EntryPoint);
		void EnemySelfDeath__DelegateSignature();
		void EnemyDeath__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
