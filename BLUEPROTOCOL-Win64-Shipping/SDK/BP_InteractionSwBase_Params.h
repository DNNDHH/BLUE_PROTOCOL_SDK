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
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.IsInteractionDisable
	 */
	struct ABP_InteractionSwBase_C_IsInteractionDisable_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_NewDoorStatus
	 */
	struct ABP_InteractionSwBase_C_OnRep_NewDoorStatus_Params
	{	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_DoorStatus
	 */
	struct ABP_InteractionSwBase_C_OnRep_DoorStatus_Params
	{	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_status
	 */
	struct ABP_InteractionSwBase_C_OnRep_status_Params
	{	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.UserConstructionScript
	 */
	struct ABP_InteractionSwBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.RecycleSw
	 */
	struct ABP_InteractionSwBase_C_RecycleSw_Params
	{	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.CleanupBlocker
	 */
	struct ABP_InteractionSwBase_C_CleanupBlocker_Params
	{
	public:
		EFieldStatus                                               NewStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteraction
	 */
	struct ABP_InteractionSwBase_C_OnInteraction_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveTick
	 */
	struct ABP_InteractionSwBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteractionSw
	 */
	struct ABP_InteractionSwBase_C_OnInteractionSw_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotator;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveBeginPlay
	 */
	struct ABP_InteractionSwBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.ExecuteUbergraph_BP_InteractionSwBase
	 */
	struct ABP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionSwBase.BP_InteractionSwBase_C.Interaction__DelegateSignature
	 */
	struct ABP_InteractionSwBase_C_Interaction__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
