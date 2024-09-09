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
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBoxResult
	 */
	struct UWBP_ItemBoxIcon_C_SetItemBoxResult_Params
	{
	public:
		struct FSBItemBoxResultItemData                            ItemBoxResultItemData;                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetIItemBoxToolTip
	 */
	struct UWBP_ItemBoxIcon_C_SetIItemBoxToolTip_Params
	{
	public:
		struct FST_ToolTipInfo                                     InToolTipInfo;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBox
	 */
	struct UWBP_ItemBoxIcon_C_SetItemBox_Params
	{
	public:
		struct FSBItemBoxContentParam                              SBItemBoxContentParam;                                   // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Reward Item
	 */
	struct UWBP_ItemBoxIcon_C_SetRewardItem_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Select Num
	 */
	struct UWBP_ItemBoxIcon_C_SetSelectNum_Params
	{
	public:
		int32_t                                                    Nu;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.IsSelected
	 */
	struct UWBP_ItemBoxIcon_C_IsSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Icon Selected
	 */
	struct UWBP_ItemBoxIcon_C_SetIconSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5NNS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItem
	 */
	struct UWBP_ItemBoxIcon_C_SetItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUnidentified;                                          // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxIcon_C_BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.ExecuteUbergraph_WBP_ItemBoxIcon
	 */
	struct UWBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnClick__DelegateSignature
	 */
	struct UWBP_ItemBoxIcon_C_OnClick__DelegateSignature_Params
	{
	public:
		class UWBP_ItemBoxIcon_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnAppraisalFinish__DelegateSignature
	 */
	struct UWBP_ItemBoxIcon_C_OnAppraisalFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
