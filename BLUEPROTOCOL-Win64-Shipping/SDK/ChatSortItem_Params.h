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
	 * Function ChatSortItem.ChatSortItem_C.IsLoadComplete
	 */
	struct UChatSortItem_C_IsLoadComplete_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.GetSortType
	 */
	struct UChatSortItem_C_GetSortType_Params
	{
	public:
		int32_t                                                    OutSortType;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.UpdateText
	 */
	struct UChatSortItem_C_UpdateText_Params
	{	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.SaveSortData
	 */
	struct UChatSortItem_C_SaveSortData_Params
	{	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.LoadSortData
	 */
	struct UChatSortItem_C_LoadSortData_Params
	{	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.BndEvt__ChatSortItem_SBButton_C_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatSortItem_C_BndEvt__ChatSortItem_SBButton_C_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.Construct
	 */
	struct UChatSortItem_C_Construct_Params
	{	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.ExecuteUbergraph_ChatSortItem
	 */
	struct UChatSortItem_C_ExecuteUbergraph_ChatSortItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSortItem.ChatSortItem_C.OnSortChage__DelegateSignature
	 */
	struct UChatSortItem_C_OnSortChage__DelegateSignature_Params
	{
	public:
		int32_t                                                    SortType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
