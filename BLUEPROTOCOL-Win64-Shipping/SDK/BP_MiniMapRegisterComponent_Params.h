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
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteWholeMapIcon
	 */
	struct UBP_MiniMapRegisterComponent_C_DeleteWholeMapIcon_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateWholeMapIcon
	 */
	struct UBP_MiniMapRegisterComponent_C_CreateWholeMapIcon_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSLA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteMiniMapIcon
	 */
	struct UBP_MiniMapRegisterComponent_C_DeleteMiniMapIcon_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateMiniMapIcon
	 */
	struct UBP_MiniMapRegisterComponent_C_CreateMiniMapIcon_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BUBN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnTick
	 */
	struct UBP_MiniMapRegisterComponent_C_OnTick_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteIcon
	 */
	struct UBP_MiniMapRegisterComponent_C_DeleteIcon_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateIcon
	 */
	struct UBP_MiniMapRegisterComponent_C_CreateIcon_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveEndPlay
	 */
	struct UBP_MiniMapRegisterComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveTick
	 */
	struct UBP_MiniMapRegisterComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveBeginPlay
	 */
	struct UBP_MiniMapRegisterComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.BindBuddy
	 */
	struct UBP_MiniMapRegisterComponent_C_BindBuddy_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.UnbindBuddy
	 */
	struct UBP_MiniMapRegisterComponent_C_UnbindBuddy_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnBuddyDelegate
	 */
	struct UBP_MiniMapRegisterComponent_C_OnBuddyDelegate_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.StartRequest
	 */
	struct UBP_MiniMapRegisterComponent_C_StartRequest_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnRequest
	 */
	struct UBP_MiniMapRegisterComponent_C_OnRequest_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.StopRequest
	 */
	struct UBP_MiniMapRegisterComponent_C_StopRequest_Params
	{	};

	/**
	 * Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ExecuteUbergraph_BP_MiniMapRegisterComponent
	 */
	struct UBP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
