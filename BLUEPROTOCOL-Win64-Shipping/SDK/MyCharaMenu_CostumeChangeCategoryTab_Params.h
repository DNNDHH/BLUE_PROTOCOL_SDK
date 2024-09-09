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
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.SetSelectedCostumeCategoryIconBtn
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InSelectedCostumeCategory;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.UpdateSelectedCostumeCategoryIconBtn
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InSelectedCostumeCategory;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8WR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.PreConstruct
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.OnCostumeCategoryIconBtnClickedEvent
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.Destruct
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.OnCostumeCategoryIconBtnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
