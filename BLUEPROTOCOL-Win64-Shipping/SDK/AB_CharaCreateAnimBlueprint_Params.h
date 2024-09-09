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
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.AnimGraph
	 */
	struct UAB_CharaCreateAnimBlueprint_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UnuseCopyPose
	 */
	struct UAB_CharaCreateAnimBlueprint_C_UnuseCopyPose_Params
	{	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.InitCopyPose
	 */
	struct UAB_CharaCreateAnimBlueprint_C_InitCopyPose_Params
	{
	public:
		class USkeletalMeshComponent*                              SourceCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.SetupAnimationSet
	 */
	struct UAB_CharaCreateAnimBlueprint_C_SetupAnimationSet_Params
	{	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UpdateCharacterVariablesBp
	 */
	struct UAB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UAB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UAB_CharaCreateAnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ReceiveStateChange
	 */
	struct UAB_CharaCreateAnimBlueprint_C_ReceiveStateChange_Params
	{
	public:
		class FString                                              PreviousStateName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NextStateName;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ExecuteUbergraph_AB_CharaCreateAnimBlueprint
	 */
	struct UAB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ChangeState__DelegateSignature
	 */
	struct UAB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature_Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
