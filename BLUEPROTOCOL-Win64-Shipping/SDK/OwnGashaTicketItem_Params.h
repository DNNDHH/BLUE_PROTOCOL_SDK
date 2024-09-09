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
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.GetAmount
	 */
	struct UOwnGashaTicketItem_C_GetAmount_Params
	{
	public:
		int32_t                                                    OutAmount;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetExecutionTicketSelect
	 */
	struct UOwnGashaTicketItem_C_SetExecutionTicketSelect_Params
	{
	public:
		struct FSBGashaTickets                                     InGashaTicketData;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Gender;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetOwnTicketList
	 */
	struct UOwnGashaTicketItem_C_SetOwnTicketList_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnLoaded_B24768C447D1D1C1B9F53D83D080C74E
	 */
	struct UOwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.PreConstruct
	 */
	struct UOwnGashaTicketItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UOwnGashaTicketItem_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature
	 */
	struct UOwnGashaTicketItem_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature_Params
	{	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetIconTexture
	 */
	struct UOwnGashaTicketItem_C_SetIconTexture_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.ExecuteUbergraph_OwnGashaTicketItem
	 */
	struct UOwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ABG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.EventOnClicked__DelegateSignature
	 */
	struct UOwnGashaTicketItem_C_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnSelectTicket__DelegateSignature
	 */
	struct UOwnGashaTicketItem_C_OnSelectTicket__DelegateSignature_Params
	{
	public:
		struct FSBGashaTickets                                     TicketData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
