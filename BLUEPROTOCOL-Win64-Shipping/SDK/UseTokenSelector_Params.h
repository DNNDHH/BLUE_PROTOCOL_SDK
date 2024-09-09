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
	 * Function UseTokenSelector.UseTokenSelector_C.IfMeetDemand
	 */
	struct UUseTokenSelector_C_IfMeetDemand_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MeetDemand;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.IsMeetDemand
	 */
	struct UUseTokenSelector_C_IsMeetDemand_Params
	{
	public:
		bool                                                       MeetDemand;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.SetCraftCount
	 */
	struct UUseTokenSelector_C_SetCraftCount_Params
	{
	public:
		int32_t                                                    CraftCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.IsUseToken
	 */
	struct UUseTokenSelector_C_IsUseToken_Params
	{
	public:
		TArray<int32_t>                                            UseToken;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.SetRecepi
	 */
	struct UUseTokenSelector_C_SetRecepi_Params
	{
	public:
		struct FCraftMasterData                                    Recepi;                                                  // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUseTokenSelector_C_BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.OnSelectToken
	 */
	struct UUseTokenSelector_C_OnSelectToken_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.OnCloseTokenSelector
	 */
	struct UUseTokenSelector_C_OnCloseTokenSelector_Params
	{	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.Destruct
	 */
	struct UUseTokenSelector_C_Destruct_Params
	{	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUseTokenSelector_C_BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUseTokenSelector_C_BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.ResetToken
	 */
	struct UUseTokenSelector_C_ResetToken_Params
	{	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.ExecuteUbergraph_UseTokenSelector
	 */
	struct UUseTokenSelector_C_ExecuteUbergraph_UseTokenSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KMM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UseTokenSelector.UseTokenSelector_C.OnTokenSelectUpdate__DelegateSignature
	 */
	struct UUseTokenSelector_C_OnTokenSelectUpdate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
