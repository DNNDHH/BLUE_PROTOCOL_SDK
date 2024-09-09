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
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetNewIcon
	 */
	struct UCategoryList_Type1_Item_C_SetNewIcon_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetBtnSelected
	 */
	struct UCategoryList_Type1_Item_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TVNL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetName
	 */
	struct UCategoryList_Type1_Item_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.Construct
	 */
	struct UCategoryList_Type1_Item_C_Construct_Params
	{	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCategoryList_Type1_Item_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCategoryList_Type1_Item_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCategoryList_Type1_Item_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.ExecuteUbergraph_CategoryList_Type1_Item
	 */
	struct UCategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1I29[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.OnClick__DelegateSignature
	 */
	struct UCategoryList_Type1_Item_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
