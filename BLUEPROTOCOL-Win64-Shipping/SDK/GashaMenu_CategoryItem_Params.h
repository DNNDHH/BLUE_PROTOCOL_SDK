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
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetRibbon
	 */
	struct UGashaMenu_CategoryItem_C_SetRibbon_Params
	{
	public:
		int32_t                                                    RibbonType;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.GetTabText
	 */
	struct UGashaMenu_CategoryItem_C_GetTabText_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetBtnSelected
	 */
	struct UGashaMenu_CategoryItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3C2V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.Set Tab Text
	 */
	struct UGashaMenu_CategoryItem_C_SetTabText_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0IQO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGashaMenu_CategoryItem_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.ExecuteUbergraph_GashaMenu_CategoryItem
	 */
	struct UGashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.OnBtnClicked__DelegateSignature
	 */
	struct UGashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
