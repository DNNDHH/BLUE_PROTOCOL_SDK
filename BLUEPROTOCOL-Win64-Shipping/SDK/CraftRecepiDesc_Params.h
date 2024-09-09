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
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneyAndItemList
	 */
	struct UCraftRecepiDesc_C_UpdateMoneyAndItemList_Params
	{	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.IsCraftable
	 */
	struct UCraftRecepiDesc_C_IsCraftable_Params
	{
	public:
		bool                                                       bIsCraftable;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.CalclateMoney
	 */
	struct UCraftRecepiDesc_C_CalclateMoney_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsDiscount;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.LoadImage
	 */
	struct UCraftRecepiDesc_C_LoadImage_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature
	 */
	struct UCraftRecepiDesc_C_BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature_Params
	{	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UCraftRecepiDesc_C_BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneys
	 */
	struct UCraftRecepiDesc_C_UpdateMoneys_Params
	{	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.SetRecepiData
	 */
	struct UCraftRecepiDesc_C_SetRecepiData_Params
	{
	public:
		struct FCharacterCraftRecepi                               RecepiData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.Construct
	 */
	struct UCraftRecepiDesc_C_Construct_Params
	{	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.ExecuteUbergraph_CraftRecepiDesc
	 */
	struct UCraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDesc.CraftRecepiDesc_C.Request_ShowRate__DelegateSignature
	 */
	struct UCraftRecepiDesc_C_Request_ShowRate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
