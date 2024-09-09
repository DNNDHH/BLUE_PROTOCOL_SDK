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
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.GetSelectStorageNo
	 */
	struct UCraft_StorageSelector_C_GetSelectStorageNo_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.IsStorage
	 */
	struct UCraft_StorageSelector_C_IsStorage_Params
	{
	public:
		bool                                                       CurrentIsStorage;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.UpdateStorageView
	 */
	struct UCraft_StorageSelector_C_UpdateStorageView_Params
	{	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.Construct
	 */
	struct UCraft_StorageSelector_C_Construct_Params
	{	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCraft_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.Set RecepiData
	 */
	struct UCraft_StorageSelector_C_SetRecepiData_Params
	{
	public:
		struct FCharacterCraftRecepi                               RecepiData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.Set CraftCount
	 */
	struct UCraft_StorageSelector_C_SetCraftCount_Params
	{
	public:
		int32_t                                                    CraftCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCraft_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCraft_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Craft_StorageSelector.Craft_StorageSelector_C.ExecuteUbergraph_Craft_StorageSelector
	 */
	struct UCraft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T9PT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
