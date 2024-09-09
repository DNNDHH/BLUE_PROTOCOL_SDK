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
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.AnimGraph
	 */
	struct UAB_PlayerAnimBlueprint_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateMountIKParam
	 */
	struct UAB_PlayerAnimBlueprint_C_UpdateMountIKParam_Params
	{
	public:
		class ASBMount*                                            Mount;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASBPlayerCharacter*                                  Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.SetupAnimationSet
	 */
	struct UAB_PlayerAnimBlueprint_C_SetupAnimationSet_Params
	{	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateCharacterVariablesBp
	 */
	struct UAB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7
	 */
	struct UAB_PlayerAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7_Params
	{	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UAB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UAB_PlayerAnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ReceiveStateChange
	 */
	struct UAB_PlayerAnimBlueprint_C_ReceiveStateChange_Params
	{
	public:
		class FString                                              PreviousStateName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NextStateName;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_Temp_Rot
	 */
	struct UAB_PlayerAnimBlueprint_C_Set_Temp_Rot_Params
	{	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_MeshYaw
	 */
	struct UAB_PlayerAnimBlueprint_C_Set_MeshYaw_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ExecuteUbergraph_AB_PlayerAnimBlueprint
	 */
	struct UAB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ChangeState__DelegateSignature
	 */
	struct UAB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature_Params
	{
	public:
		class FName                                                Previous;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Now;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
