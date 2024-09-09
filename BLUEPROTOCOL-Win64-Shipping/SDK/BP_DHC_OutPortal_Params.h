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
	 * Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ReceiveBeginPlay
	 */
	struct ABP_DHC_OutPortal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.Interacted
	 */
	struct ABP_DHC_OutPortal_C_Interacted_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.TeleportOut
	 */
	struct ABP_DHC_OutPortal_C_TeleportOut_Params
	{
	public:
		TArray<class APlayerController*>                           PlayerMembers;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.CustomEvent
	 */
	struct ABP_DHC_OutPortal_C_CustomEvent_Params
	{	};

	/**
	 * Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ExecuteUbergraph_BP_DHC_OutPortal
	 */
	struct ABP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
