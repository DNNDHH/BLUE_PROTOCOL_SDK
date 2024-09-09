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
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.GetIndex
	 */
	struct UWBP_PhotoModeStampControlListItem_C_GetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.SetData
	 */
	struct UWBP_PhotoModeStampControlListItem_C_SetData_Params
	{
	public:
		class UBP_PhotoModeStampControlData_C*                     Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.BndEvt__WBP_PhotoModeStampControlListItem_SBButton_Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_BndEvt__WBP_PhotoModeStampControlListItem_SBButton_Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.BndEvt__WBP_PhotoModeStampControlListItem_SBButton_Up_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_BndEvt__WBP_PhotoModeStampControlListItem_SBButton_Up_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.BndEvt__WBP_PhotoModeStampControlListItem_SBButton_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_BndEvt__WBP_PhotoModeStampControlListItem_SBButton_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.BndEvt__WBP_PhotoModeStampControlListItem_SBSelectableTextButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_BndEvt__WBP_PhotoModeStampControlListItem_SBSelectableTextButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.SetSelected
	 */
	struct UWBP_PhotoModeStampControlListItem_C_SetSelected_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.ExecuteUbergraph_WBP_PhotoModeStampControlListItem
	 */
	struct UWBP_PhotoModeStampControlListItem_C_ExecuteUbergraph_WBP_PhotoModeStampControlListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.OnClickedSelect__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_OnClickedSelect__DelegateSignature_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.OnClickedDownButton__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_OnClickedDownButton__DelegateSignature_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.OnClickedUpButton__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_OnClickedUpButton__DelegateSignature_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStampControlListItem.WBP_PhotoModeStampControlListItem_C.OnClickedDeleteButton__DelegateSignature
	 */
	struct UWBP_PhotoModeStampControlListItem_C_OnClickedDeleteButton__DelegateSignature_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
