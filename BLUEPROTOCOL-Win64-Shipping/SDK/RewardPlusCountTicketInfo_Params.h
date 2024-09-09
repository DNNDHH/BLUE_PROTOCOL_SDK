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
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.UpdateSeasonPassInfo
	 */
	struct URewardPlusCountTicketInfo_C_UpdateSeasonPassInfo_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.UpdateValue
	 */
	struct URewardPlusCountTicketInfo_C_UpdateValue_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.GetCountValueLimit
	 */
	struct URewardPlusCountTicketInfo_C_GetCountValueLimit_Params
	{
	public:
		int32_t                                                    CountValueLimit;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetEnableBtn16Ticket
	 */
	struct URewardPlusCountTicketInfo_C_SetEnableBtn16Ticket_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetupToolTip
	 */
	struct URewardPlusCountTicketInfo_C_SetupToolTip_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Get_ImageSeparation_ToolTipWidget_1
	 */
	struct URewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetHUDMode
	 */
	struct URewardPlusCountTicketInfo_C_SetHUDMode_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Get_ImageTicketIcon_ToolTipWidget_1
	 */
	struct URewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetColorRedIfZero
	 */
	struct URewardPlusCountTicketInfo_C_SetColorRedIfZero_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetTicketValue
	 */
	struct URewardPlusCountTicketInfo_C_SetTicketValue_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetCountValueLimit
	 */
	struct URewardPlusCountTicketInfo_C_SetCountValueLimit_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetCountValueCurrent
	 */
	struct URewardPlusCountTicketInfo_C_SetCountValueCurrent_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.OnRecoverRewardPlusCount
	 */
	struct URewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount_Params
	{
	public:
		ESBRecoverRewardPlusCountResult                            Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.BndEvt__RewardPlusCountTicketInfo_CmnBtn16Ticket_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct URewardPlusCountTicketInfo_C_BndEvt__RewardPlusCountTicketInfo_CmnBtn16Ticket_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Construct
	 */
	struct URewardPlusCountTicketInfo_C_Construct_Params
	{	};

	/**
	 * Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.ExecuteUbergraph_RewardPlusCountTicketInfo
	 */
	struct URewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
