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
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.UpdateRewardList
	 */
	struct UWBP_NaEventPersonRewardMenu_C_UpdateRewardList_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.RequestAllReceive
	 */
	struct UWBP_NaEventPersonRewardMenu_C_RequestAllReceive_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnAllReceiveCompleted
	 */
	struct UWBP_NaEventPersonRewardMenu_C_OnAllReceiveCompleted_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnClickItemIcon_Event
	 */
	struct UWBP_NaEventPersonRewardMenu_C_OnClickItemIcon_Event_Params
	{
	public:
		class FName                                                RewardId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnClose_DetailMenu
	 */
	struct UWBP_NaEventPersonRewardMenu_C_OnClose_DetailMenu_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnPressAllReceiveKey
	 */
	struct UWBP_NaEventPersonRewardMenu_C_OnPressAllReceiveKey_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.BndEvt__WBP_NaEventPersonRewardMenu_SBButton_AllReceive_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWBP_NaEventPersonRewardMenu_C_BndEvt__WBP_NaEventPersonRewardMenu_SBButton_AllReceive_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.Construct
	 */
	struct UWBP_NaEventPersonRewardMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.SetData
	 */
	struct UWBP_NaEventPersonRewardMenu_C_SetData_Params
	{
	public:
		class USBNaEventData*                                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.UpdateAllReveiveButton
	 */
	struct UWBP_NaEventPersonRewardMenu_C_UpdateAllReveiveButton_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnAnyUpdate
	 */
	struct UWBP_NaEventPersonRewardMenu_C_OnAnyUpdate_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.Destruct
	 */
	struct UWBP_NaEventPersonRewardMenu_C_Destruct_Params
	{	};

	/**
	 * Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.ExecuteUbergraph_WBP_NaEventPersonRewardMenu
	 */
	struct UWBP_NaEventPersonRewardMenu_C_ExecuteUbergraph_WBP_NaEventPersonRewardMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XM39[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
