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
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.SetSelectedAccessoryCategoryIconBtn
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.UpdateSelectedAccessoryCategoryIconBtn
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.PreConstruct
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.Destruct
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.OnAccessoryCategoryBtnClickedEvent
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2V1D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.OnAccessoryCategoryIconBtnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
