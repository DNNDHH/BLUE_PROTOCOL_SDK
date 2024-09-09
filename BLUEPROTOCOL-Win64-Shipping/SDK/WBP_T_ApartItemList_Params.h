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
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.IsOverWarning
	 */
	struct UWBP_T_ApartItemList_C_IsOverWarning_Params
	{
	public:
		bool                                                       Over;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5IDI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.Reset
	 */
	struct UWBP_T_ApartItemList_C_Reset_Params
	{	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.GetItemCase
	 */
	struct UWBP_T_ApartItemList_C_GetItemCase_Params
	{
	public:
		class UWBP_T_ApartItem_C*                                  Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.Is Item Warning
	 */
	struct UWBP_T_ApartItemList_C_IsItemWarning_Params
	{
	public:
		bool                                                       Warning;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7LEA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              WarningString;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.UpdateWarning
	 */
	struct UWBP_T_ApartItemList_C_UpdateWarning_Params
	{	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.GetToolTipWidget_1
	 */
	struct UWBP_T_ApartItemList_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.BndEvt__WBP_T_ApartItemList_BtnMove_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_T_ApartItemList_C_BndEvt__WBP_T_ApartItemList_BtnMove_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetMaxData
	 */
	struct UWBP_T_ApartItemList_C_SetMaxData_Params
	{
	public:
		int32_t                                                    Max;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetSelectItem
	 */
	struct UWBP_T_ApartItemList_C_SetSelectItem_Params
	{
	public:
		TArray<struct FInventoryItemData>                          SelectItemList;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetActive
	 */
	struct UWBP_T_ApartItemList_C_SetActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.ExecuteUbergraph_WBP_T_ApartItemList
	 */
	struct UWBP_T_ApartItemList_C_ExecuteUbergraph_WBP_T_ApartItemList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.OnApart__DelegateSignature
	 */
	struct UWBP_T_ApartItemList_C_OnApart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
