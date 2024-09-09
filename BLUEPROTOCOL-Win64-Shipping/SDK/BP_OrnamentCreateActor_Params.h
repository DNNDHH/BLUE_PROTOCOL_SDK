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
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveBeginPlay
	 */
	struct ABP_OrnamentCreateActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveTick
	 */
	struct ABP_OrnamentCreateActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveEndPlay
	 */
	struct ABP_OrnamentCreateActor_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestCustomOrnament
	 */
	struct ABP_OrnamentCreateActor_C_RequestCustomOrnament_Params
	{
	public:
		class FName                                                OrnamentName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature
	 */
	struct ABP_OrnamentCreateActor_C_BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestPlayerEmote
	 */
	struct ABP_OrnamentCreateActor_C_RequestPlayerEmote_Params
	{
	public:
		class ASBPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.CompleteRoomInfo
	 */
	struct ABP_OrnamentCreateActor_C_CompleteRoomInfo_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.AttachedPlayerState
	 */
	struct ABP_OrnamentCreateActor_C_AttachedPlayerState_Params
	{
	public:
		class ASBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestRoomInfo
	 */
	struct ABP_OrnamentCreateActor_C_RequestRoomInfo_Params
	{	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestInteractEffect
	 */
	struct ABP_OrnamentCreateActor_C_RequestInteractEffect_Params
	{	};

	/**
	 * Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ExecuteUbergraph_BP_OrnamentCreateActor
	 */
	struct ABP_OrnamentCreateActor_C_ExecuteUbergraph_BP_OrnamentCreateActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
