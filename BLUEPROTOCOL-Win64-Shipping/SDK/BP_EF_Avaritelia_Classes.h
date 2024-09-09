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
	 * BlueprintGeneratedClass BP_EF_Avaritelia.BP_EF_Avaritelia_C
	 * Size -> 0x00B0 (FullSize[0x02B8] - InheritedSize[0x0208])
	 */
	class UBP_EF_Avaritelia_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_NIS1[0x8];                                   // 0x0208(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Avaritelia;                                              // 0x0218(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor
		bool                                                       CoAvaritelia;                                            // 0x0219(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCZU[0x2];                                   // 0x021A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CoAvaCenter;                                             // 0x021C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CoAvaEyeColor;                                           // 0x0224(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CoAvaEyeStrength;                                        // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystemComponent*>                    ParticleComp;                                            // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMaterialInstanceDynamic*>                    Mid;                                                     // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystem*                                     WaveAvariteliaEffect;                                    // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      SizeScale;                                               // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RateScale;                                               // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7K1U[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WaveAvaEffTrans;                                         // 0x0270(0x0030) Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor
		int32_t                                                    ParticleCompIndex;                                       // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActivateAvaritiaEffect;                                // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BTJM[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       PlayEvent;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StopEvent;                                               // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopSound();
		void PlaySound();
		void CheckOwnerHidden();
		void DestroyAvariteliaEffect();
		void DeactivateAvariteliaEffect();
		void ActivateAvariteliaEffect();
		void SetAvaritiaEffectTransform();
		void SpawnAravitiaEffect();
		void SetCoAvaritiaParam();
		void CreateCoAvaritiaMID();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void PartsLoaded(bool Result);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_EF_Avaritelia(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
