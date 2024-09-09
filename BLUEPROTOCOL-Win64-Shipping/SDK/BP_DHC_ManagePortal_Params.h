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
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyMemberMenu
	 */
	struct ABP_DHC_ManagePortal_C_CheckPartyMemberMenu_Params
	{
	public:
		class ASBPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanStart;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyId
	 */
	struct ABP_DHC_ManagePortal_C_CheckPartyId_Params
	{
	public:
		class ASBPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetPlayerNowDHC
	 */
	struct ABP_DHC_ManagePortal_C_GetPlayerNowDHC_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_DHCMeasurer_C*                                   NowDHC;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetFreeDHCMesasurer
	 */
	struct ABP_DHC_ManagePortal_C_GetFreeDHCMesasurer_Params
	{
	public:
		class ABP_DHCMeasurer_C*                                   VacantArea;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ReceiveBeginPlay
	 */
	struct ABP_DHC_ManagePortal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.Interacted
	 */
	struct ABP_DHC_ManagePortal_C_Interacted_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHCInteractionResult
	 */
	struct ABP_DHC_ManagePortal_C_DHCInteractionResult_Params
	{
	public:
		class ASBPlayerCharacter*                                  InteractedPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EN_DHC_InteractResult                                      Result;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ExecuteUbergraph_BP_DHC_ManagePortal
	 */
	struct ABP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8ML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHC_Interacted__DelegateSignature
	 */
	struct ABP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature_Params
	{
	public:
		class ASBPlayerCharacter*                                  InteractedPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EN_DHC_InteractResult                                      Result;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
