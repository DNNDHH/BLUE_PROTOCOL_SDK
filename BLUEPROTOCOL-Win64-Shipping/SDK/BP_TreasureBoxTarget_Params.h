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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearSound
	 */
	struct ABP_TreasureBoxTarget_C_GetDisappearSound_Params
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearParticle
	 */
	struct ABP_TreasureBoxTarget_C_GetDisappearParticle_Params
	{
	public:
		class UParticleSystem*                                     Particle;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenSound
	 */
	struct ABP_TreasureBoxTarget_C_GetOpenSound_Params
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenParticle
	 */
	struct ABP_TreasureBoxTarget_C_GetOpenParticle_Params
	{
	public:
		class UParticleSystem*                                     Particle;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnLidParticle
	 */
	struct ABP_TreasureBoxTarget_C_GetSpawnLidParticle_Params
	{
	public:
		class UParticleSystem*                                     Particle;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnParticle
	 */
	struct ABP_TreasureBoxTarget_C_GetSpawnParticle_Params
	{
	public:
		class UAkAudioEvent*                                       DropSE1;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     Particle;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       DropSE;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshUpper
	 */
	struct ABP_TreasureBoxTarget_C_GetStaticMeshUpper_Params
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshLower
	 */
	struct ABP_TreasureBoxTarget_C_GetStaticMeshLower_Params
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.BoxOpenEffectFunc
	 */
	struct ABP_TreasureBoxTarget_C_BoxOpenEffectFunc_Params
	{
	public:
		bool                                                       IsAutoAllOpenTreasureBox;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S065[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__FinishedFunc
	 */
	struct ABP_TreasureBoxTarget_C_OpenBoxTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__UpdateFunc
	 */
	struct ABP_TreasureBoxTarget_C_OpenBoxTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ResetFuta
	 */
	struct ABP_TreasureBoxTarget_C_ResetFuta_Params
	{	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PreOpenBox
	 */
	struct ABP_TreasureBoxTarget_C_PreOpenBox_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PostOpenBox
	 */
	struct ABP_TreasureBoxTarget_C_PostOpenBox_Params
	{
	public:
		ESBTreasureBoxLotResult                                    Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9EWJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBTreasureBoxLotResult>                     LotResults;                                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                TextId;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Appear
	 */
	struct ABP_TreasureBoxTarget_C_Appear_Params
	{
	public:
		bool                                                       IsDropPlaySE;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Disappear
	 */
	struct ABP_TreasureBoxTarget_C_Disappear_Params
	{	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.DestructAfterSetLocation
	 */
	struct ABP_TreasureBoxTarget_C_DestructAfterSetLocation_Params
	{
	public:
		class ASBDestructible*                                     Myself;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ReceiveBeginPlay
	 */
	struct ABP_TreasureBoxTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ExecuteUbergraph_BP_TreasureBoxTarget
	 */
	struct ABP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WARU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
