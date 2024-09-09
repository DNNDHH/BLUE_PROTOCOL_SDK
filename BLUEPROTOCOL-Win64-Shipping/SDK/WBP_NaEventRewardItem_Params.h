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
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.UpdateElements
	 */
	struct UWBP_NaEventRewardItem_C_UpdateElements_Params
	{	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.Construct
	 */
	struct UWBP_NaEventRewardItem_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.SetData
	 */
	struct UWBP_NaEventRewardItem_C_SetData_Params
	{
	public:
		class USBNaEventRewardData*                                Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.OnAnyUpdate
	 */
	struct UWBP_NaEventRewardItem_C_OnAnyUpdate_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.Destruct
	 */
	struct UWBP_NaEventRewardItem_C_Destruct_Params
	{	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.OnClickIcon
	 */
	struct UWBP_NaEventRewardItem_C_OnClickIcon_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.PreConstruct
	 */
	struct UWBP_NaEventRewardItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.ExecuteUbergraph_WBP_NaEventRewardItem
	 */
	struct UWBP_NaEventRewardItem_C_ExecuteUbergraph_WBP_NaEventRewardItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventRewardItem.WBP_NaEventRewardItem_C.OnClickItemIcon__DelegateSignature
	 */
	struct UWBP_NaEventRewardItem_C_OnClickItemIcon__DelegateSignature_Params
	{
	public:
		class FName                                                RewardId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
