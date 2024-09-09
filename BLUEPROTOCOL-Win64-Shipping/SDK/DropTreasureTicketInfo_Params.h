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
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState
	 */
	struct UDropTreasureTicketInfo_C_SetTicketState_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState_Category
	 */
	struct UDropTreasureTicketInfo_C_SetTicketState_Category_Params
	{
	public:
		EMatchingMenuListCategory                                  Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState_GameMode
	 */
	struct UDropTreasureTicketInfo_C_SetTicketState_GameMode_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.UpdateValue
	 */
	struct UDropTreasureTicketInfo_C_UpdateValue_Params
	{	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.GetCountValueLimit
	 */
	struct UDropTreasureTicketInfo_C_GetCountValueLimit_Params
	{
	public:
		int32_t                                                    CountValueLimit;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetupToolTip
	 */
	struct UDropTreasureTicketInfo_C_SetupToolTip_Params
	{	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Get_ImageSeparation_ToolTipWidget_1
	 */
	struct UDropTreasureTicketInfo_C_Get_ImageSeparation_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Get_ImageTicketIcon_ToolTipWidget_1
	 */
	struct UDropTreasureTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetColorRedIfZero
	 */
	struct UDropTreasureTicketInfo_C_SetColorRedIfZero_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketValue
	 */
	struct UDropTreasureTicketInfo_C_SetTicketValue_Params
	{	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Construct
	 */
	struct UDropTreasureTicketInfo_C_Construct_Params
	{	};

	/**
	 * Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.ExecuteUbergraph_DropTreasureTicketInfo
	 */
	struct UDropTreasureTicketInfo_C_ExecuteUbergraph_DropTreasureTicketInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
