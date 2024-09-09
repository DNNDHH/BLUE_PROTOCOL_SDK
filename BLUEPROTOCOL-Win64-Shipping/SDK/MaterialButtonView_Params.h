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
	 * Function MaterialButtonView.MaterialButtonView_C.CalclateRewardBoostSupportItemNum
	 */
	struct UMaterialButtonView_C_CalclateRewardBoostSupportItemNum_Params
	{
	public:
		int32_t                                                    BaseAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SupportItemId;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CalculatedAmount;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.GetCalculatedItemNum
	 */
	struct UMaterialButtonView_C_GetCalculatedItemNum_Params
	{
	public:
		int32_t                                                    BaseAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SupportItemId;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CalculatedAmount;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.UpdateDiscountColor
	 */
	struct UMaterialButtonView_C_UpdateDiscountColor_Params
	{
	public:
		bool                                                       IsDiscount;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.GetUseMoney
	 */
	struct UMaterialButtonView_C_GetUseMoney_Params
	{
	public:
		int32_t                                                    Money;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.SetData
	 */
	struct UMaterialButtonView_C_SetData_Params
	{
	public:
		struct FOwnItemInfo                                        TargetItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FOwnItemInfo>                                GridView;                                                // 0x0150(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bUseTicket;                                              // 0x0160(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.UpdateLackColor
	 */
	struct UMaterialButtonView_C_UpdateLackColor_Params
	{
	public:
		class UTextBlock*                                          ColorText;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLack;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.InitializeTickets
	 */
	struct UMaterialButtonView_C_InitializeTickets_Params
	{	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.Initialize
	 */
	struct UMaterialButtonView_C_Initialize_Params
	{	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.Construct
	 */
	struct UMaterialButtonView_C_Construct_Params
	{	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UMaterialButtonView_C_BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.ExecuteUbergraph_MaterialButtonView
	 */
	struct UMaterialButtonView_C_ExecuteUbergraph_MaterialButtonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MaterialButtonView.MaterialButtonView_C.OnReselect__DelegateSignature
	 */
	struct UMaterialButtonView_C_OnReselect__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
