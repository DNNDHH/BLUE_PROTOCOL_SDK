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
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.SetUIScreen 
	 */
	struct UTokenSelectorListItem_C_SetUIScreen_Params
	{	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.UpdateNeedNum
	 */
	struct UTokenSelectorListItem_C_UpdateNeedNum_Params
	{	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.SetCraftCount
	 */
	struct UTokenSelectorListItem_C_SetCraftCount_Params
	{
	public:
		int32_t                                                    CraftCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.Set Select
	 */
	struct UTokenSelectorListItem_C_SetSelect_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.GetTokenId
	 */
	struct UTokenSelectorListItem_C_GetTokenId_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.SetRecepiData
	 */
	struct UTokenSelectorListItem_C_SetRecepiData_Params
	{
	public:
		struct FCraftMasterData                                    RecepiData;                                              // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.SetTokenData
	 */
	struct UTokenSelectorListItem_C_SetTokenData_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.ExecuteUbergraph_TokenSelectorListItem
	 */
	struct UTokenSelectorListItem_C_ExecuteUbergraph_TokenSelectorListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListItem.TokenSelectorListItem_C.OnSelect__DelegateSignature
	 */
	struct UTokenSelectorListItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UTokenSelectorListItem_C*                            Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
