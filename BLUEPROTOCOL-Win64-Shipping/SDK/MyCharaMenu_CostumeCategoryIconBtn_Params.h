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
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetSelected
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_SetSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L7MH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.GetCostumeCategory
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              OutCostumeCategory;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetCostumeCategory
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.PreConstruct
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.OnButtonClicked__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
