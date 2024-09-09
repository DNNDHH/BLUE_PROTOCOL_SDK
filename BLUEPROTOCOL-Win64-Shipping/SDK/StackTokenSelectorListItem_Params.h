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
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetUIScreen 
	 */
	struct UStackTokenSelectorListItem_C_SetUIScreen_Params
	{	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.UpdateNeedNum
	 */
	struct UStackTokenSelectorListItem_C_UpdateNeedNum_Params
	{	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.Set Select
	 */
	struct UStackTokenSelectorListItem_C_SetSelect_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.GetTokenId
	 */
	struct UStackTokenSelectorListItem_C_GetTokenId_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetTokenData
	 */
	struct UStackTokenSelectorListItem_C_SetTokenData_Params
	{
	public:
		struct FSBStackBTicketData                                 TokenID;                                                 // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_E062[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UStackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.ExecuteUbergraph_StackTokenSelectorListItem
	 */
	struct UStackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.OnSelect__DelegateSignature
	 */
	struct UStackTokenSelectorListItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UStackTokenSelectorListItem_C*                       Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
