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
	 * Function BP_NFTArea.BP_NFTArea_C.IsActive
	 */
	struct ABP_NFTArea_C_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.OnRep_NFTAreaStatus
	 */
	struct ABP_NFTArea_C_OnRep_NFTAreaStatus_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.NotifyHUDStart
	 */
	struct ABP_NFTArea_C_NotifyHUDStart_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.NotifyHUDEnd
	 */
	struct ABP_NFTArea_C_NotifyHUDEnd_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.NotifyHUDCancel
	 */
	struct ABP_NFTArea_C_NotifyHUDCancel_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.ReceiveActorBeginOverlap
	 */
	struct ABP_NFTArea_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.StopNFTArea
	 */
	struct ABP_NFTArea_C_StopNFTArea_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.AddPlayer
	 */
	struct ABP_NFTArea_C_AddPlayer_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.RemovePlayer
	 */
	struct ABP_NFTArea_C_RemovePlayer_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.ReceiveTick
	 */
	struct ABP_NFTArea_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.StartNFTArea
	 */
	struct ABP_NFTArea_C_StartNFTArea_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.ReceiveActorEndOverlap
	 */
	struct ABP_NFTArea_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.ReceiveBeginPlay
	 */
	struct ABP_NFTArea_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.StartHUD
	 */
	struct ABP_NFTArea_C_StartHUD_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.EndHUD
	 */
	struct ABP_NFTArea_C_EndHUD_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.CancelHUD
	 */
	struct ABP_NFTArea_C_CancelHUD_Params
	{	};

	/**
	 * Function BP_NFTArea.BP_NFTArea_C.ExecuteUbergraph_BP_NFTArea
	 */
	struct ABP_NFTArea_C_ExecuteUbergraph_BP_NFTArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHQX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
