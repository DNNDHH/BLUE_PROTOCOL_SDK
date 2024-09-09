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
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetSelected
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.GetAccessoryCategory
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            OutAccessoryCategory;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetAccessoryCategory
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.PreConstruct
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.OnButtonClicked__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
